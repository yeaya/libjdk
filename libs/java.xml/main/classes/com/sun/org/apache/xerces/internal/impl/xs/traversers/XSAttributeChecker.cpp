#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XIntPool.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_ABSTRACT
#undef ATTIDX_AFORMDEFAULT
#undef ATTIDX_BASE
#undef ATTIDX_BLOCK
#undef ATTIDX_BLOCKDEFAULT
#undef ATTIDX_COUNT
#undef ATTIDX_DEFAULT
#undef ATTIDX_EFORMDEFAULT
#undef ATTIDX_ENUMNSDECLS
#undef ATTIDX_FINAL
#undef ATTIDX_FINALDEFAULT
#undef ATTIDX_FIXED
#undef ATTIDX_FORM
#undef ATTIDX_FROMDEFAULT
#undef ATTIDX_ID
#undef ATTIDX_ISRETURNED
#undef ATTIDX_ITEMTYPE
#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MEMBERTYPES
#undef ATTIDX_MINOCCURS
#undef ATTIDX_MIXED
#undef ATTIDX_NAME
#undef ATTIDX_NAMESPACE
#undef ATTIDX_NAMESPACE_LIST
#undef ATTIDX_NILLABLE
#undef ATTIDX_NONSCHEMA
#undef ATTIDX_PROCESSCONTENTS
#undef ATTIDX_PUBLIC
#undef ATTIDX_REF
#undef ATTIDX_REFER
#undef ATTIDX_SCHEMALOCATION
#undef ATTIDX_SOURCE
#undef ATTIDX_SUBSGROUP
#undef ATTIDX_SYSTEM
#undef ATTIDX_TARGETNAMESPACE
#undef ATTIDX_TYPE
#undef ATTIDX_USE
#undef ATTIDX_VALUE
#undef ATTIDX_VERSION
#undef ATTIDX_XML_LANG
#undef ATTIDX_XPATH
#undef ATTRIBUTE_N
#undef ATTRIBUTE_R
#undef ATTVAL_ANYURI
#undef ATTVAL_COLLAPSE
#undef ATTVAL_EXTENSION
#undef ATTVAL_FALSE
#undef ATTVAL_FALSE_0
#undef ATTVAL_ID
#undef ATTVAL_LANGUAGE
#undef ATTVAL_LAX
#undef ATTVAL_LIST
#undef ATTVAL_NCNAME
#undef ATTVAL_OPTIONAL
#undef ATTVAL_POUNDALL
#undef ATTVAL_PRESERVE
#undef ATTVAL_PROHIBITED
#undef ATTVAL_QNAME
#undef ATTVAL_QUALIFIED
#undef ATTVAL_REPLACE
#undef ATTVAL_REQUIRED
#undef ATTVAL_RESTRICTION
#undef ATTVAL_SKIP
#undef ATTVAL_STRICT
#undef ATTVAL_STRING
#undef ATTVAL_SUBSTITUTION
#undef ATTVAL_TOKEN
#undef ATTVAL_TRUE
#undef ATTVAL_TRUE_1
#undef ATTVAL_TWOPOUNDANY
#undef ATTVAL_TWOPOUNDLOCAL
#undef ATTVAL_TWOPOUNDOTHER
#undef ATTVAL_TWOPOUNDTARGETNS
#undef ATTVAL_UNBOUNDED
#undef ATTVAL_UNION
#undef ATTVAL_UNQUALIFIED
#undef ATT_ABSTRACT
#undef ATT_ABSTRACT_D
#undef ATT_ATTRIBUTEFORMDEFAULT
#undef ATT_ATTRIBUTE_FD_D
#undef ATT_BASE
#undef ATT_BASE_N
#undef ATT_BASE_R
#undef ATT_BLOCK
#undef ATT_BLOCK1_N
#undef ATT_BLOCKDEFAULT
#undef ATT_BLOCK_D_D
#undef ATT_BLOCK_N
#undef ATT_DEFAULT
#undef ATT_DEFAULT_N
#undef ATT_ELEMENTFORMDEFAULT
#undef ATT_ELEMENT_FD_D
#undef ATT_FINAL
#undef ATT_FINAL1_N
#undef ATT_FINALDEFAULT
#undef ATT_FINAL_D_D
#undef ATT_FINAL_N
#undef ATT_FIXED
#undef ATT_FIXED_D
#undef ATT_FIXED_N
#undef ATT_FORM
#undef ATT_FORM_N
#undef ATT_ID
#undef ATT_ID_N
#undef ATT_ITEMTYPE
#undef ATT_ITEMTYPE_N
#undef ATT_MAXOCCURS
#undef ATT_MAXOCCURS1_D
#undef ATT_MAXOCCURS_D
#undef ATT_MEMBERTYPES
#undef ATT_MEMBER_T_N
#undef ATT_MINOCCURS
#undef ATT_MINOCCURS1_D
#undef ATT_MINOCCURS_D
#undef ATT_MIXED
#undef ATT_MIXED_D
#undef ATT_MIXED_N
#undef ATT_NAME
#undef ATT_NAMESPACE
#undef ATT_NAMESPACE_D
#undef ATT_NAMESPACE_N
#undef ATT_NAME_R
#undef ATT_NILLABLE
#undef ATT_NILLABLE_D
#undef ATT_PROCESSCONTENTS
#undef ATT_PROCESS_C_D
#undef ATT_PUBLIC
#undef ATT_PUBLIC_R
#undef ATT_REF
#undef ATT_REFER
#undef ATT_REFER_R
#undef ATT_REF_R
#undef ATT_SCHEMALOCATION
#undef ATT_SCHEMA_L_N
#undef ATT_SCHEMA_L_R
#undef ATT_SOURCE
#undef ATT_SOURCE_N
#undef ATT_SUBSTITUTIONGROUP
#undef ATT_SUBSTITUTION_G_N
#undef ATT_SYSTEM
#undef ATT_SYSTEM_N
#undef ATT_TARGETNAMESPACE
#undef ATT_TARGET_N_N
#undef ATT_TYPE
#undef ATT_TYPE_N
#undef ATT_USE
#undef ATT_USE_D
#undef ATT_VALUE
#undef ATT_VALUE_NNI_N
#undef ATT_VALUE_PI_N
#undef ATT_VALUE_STR_N
#undef ATT_VALUE_WS_N
#undef ATT_VERSION
#undef ATT_VERSION_N
#undef ATT_XML_LANG
#undef ATT_XPATH
#undef ATT_XPATH1_R
#undef ATT_XPATH_R
#undef DERIVATION_EXTENSION
#undef DERIVATION_LIST
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_SUBSTITUTION
#undef DERIVATION_UNION
#undef DT_ANYURI
#undef DT_BLOCK
#undef DT_BLOCK1
#undef DT_BOOLEAN
#undef DT_COUNT
#undef DT_FINAL
#undef DT_FINAL1
#undef DT_FINAL2
#undef DT_FORM
#undef DT_ID
#undef DT_LANGUAGE
#undef DT_MAXOCCURS
#undef DT_MAXOCCURS1
#undef DT_MEMBERTYPES
#undef DT_MINOCCURS1
#undef DT_NAMESPACE
#undef DT_NCNAME
#undef DT_NONNEGINT
#undef DT_POSINT
#undef DT_PROCESSCONTENTS
#undef DT_QNAME
#undef DT_STRING
#undef DT_TOKEN
#undef DT_USE
#undef DT_WHITESPACE
#undef DT_XPATH
#undef DT_XPATH1
#undef ELEMENT_N
#undef ELEMENT_R
#undef ELT_ALL
#undef ELT_ANNOTATION
#undef ELT_ANY
#undef ELT_ANYATTRIBUTE
#undef ELT_APPINFO
#undef ELT_ATTRIBUTE
#undef ELT_ATTRIBUTEGROUP
#undef ELT_CHOICE
#undef ELT_COMPLEXCONTENT
#undef ELT_COMPLEXTYPE
#undef ELT_DOCUMENTATION
#undef ELT_ELEMENT
#undef ELT_ENUMERATION
#undef ELT_EXTENSION
#undef ELT_FIELD
#undef ELT_FRACTIONDIGITS
#undef ELT_GROUP
#undef ELT_IMPORT
#undef ELT_INCLUDE
#undef ELT_KEY
#undef ELT_KEYREF
#undef ELT_LENGTH
#undef ELT_LIST
#undef ELT_MAXEXCLUSIVE
#undef ELT_MAXINCLUSIVE
#undef ELT_MAXLENGTH
#undef ELT_MINEXCLUSIVE
#undef ELT_MININCLUSIVE
#undef ELT_MINLENGTH
#undef ELT_NOTATION
#undef ELT_PATTERN
#undef ELT_REDEFINE
#undef ELT_RESTRICTION
#undef ELT_SCHEMA
#undef ELT_SELECTOR
#undef ELT_SEQUENCE
#undef ELT_SIMPLECONTENT
#undef ELT_SIMPLETYPE
#undef ELT_TOTALDIGITS
#undef ELT_UNION
#undef ELT_UNIQUE
#undef ELT_WHITESPACE
#undef EMPTY_STRING
#undef FALSE
#undef FORM_QUALIFIED
#undef FORM_UNQUALIFIED
#undef INC_POOL_SIZE
#undef INIT_POOL_SIZE
#undef INT_ANY_ANY
#undef INT_ANY_LAX
#undef INT_ANY_LIST
#undef INT_ANY_NOT
#undef INT_ANY_SKIP
#undef INT_ANY_STRICT
#undef INT_EMPTY_SET
#undef INT_QUALIFIED
#undef INT_UNBOUNDED
#undef INT_UNQUALIFIED
#undef INT_USE_OPTIONAL
#undef INT_USE_PROHIBITED
#undef INT_USE_REQUIRED
#undef INT_WS_COLLAPSE
#undef INT_WS_PRESERVE
#undef INT_WS_REPLACE
#undef MAX_OCCUR_NODE_LIMIT
#undef NSCONSTRAINT_ANY
#undef NSCONSTRAINT_LIST
#undef NSCONSTRAINT_NOT
#undef OCCURRENCE_UNBOUNDED
#undef PC_LAX
#undef PC_SKIP
#undef PC_STRICT
#undef PREFIX_XMLNS
#undef TRUE
#undef URI_SCHEMAFORSCHEMA
#undef USE_OPTIONAL
#undef USE_PROHIBITED
#undef USE_REQUIRED
#undef WS_COLLAPSE
#undef WS_PRESERVE
#undef WS_REPLACE

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $OneAttrArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr>;
using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaNamespaceSupport = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $Container = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container;
using $OneAttr = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XIntPool = ::com::sun::org::apache::xerces::internal::impl::xs::util::XIntPool;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Attr = ::org::w3c::dom::Attr;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSAttributeChecker_FieldInfo_[] = {
	{"ELEMENT_N", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, ELEMENT_N)},
	{"ELEMENT_R", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, ELEMENT_R)},
	{"ATTRIBUTE_N", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTRIBUTE_N)},
	{"ATTRIBUTE_R", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTRIBUTE_R)},
	{"ATTIDX_COUNT", "I", nullptr, $PRIVATE | $STATIC, $staticField(XSAttributeChecker, ATTIDX_COUNT)},
	{"ATTIDX_ABSTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_ABSTRACT)},
	{"ATTIDX_AFORMDEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_AFORMDEFAULT)},
	{"ATTIDX_BASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_BASE)},
	{"ATTIDX_BLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_BLOCK)},
	{"ATTIDX_BLOCKDEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_BLOCKDEFAULT)},
	{"ATTIDX_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_DEFAULT)},
	{"ATTIDX_EFORMDEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_EFORMDEFAULT)},
	{"ATTIDX_FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_FINAL)},
	{"ATTIDX_FINALDEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_FINALDEFAULT)},
	{"ATTIDX_FIXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_FIXED)},
	{"ATTIDX_FORM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_FORM)},
	{"ATTIDX_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_ID)},
	{"ATTIDX_ITEMTYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_ITEMTYPE)},
	{"ATTIDX_MAXOCCURS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_MAXOCCURS)},
	{"ATTIDX_MEMBERTYPES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_MEMBERTYPES)},
	{"ATTIDX_MINOCCURS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_MINOCCURS)},
	{"ATTIDX_MIXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_MIXED)},
	{"ATTIDX_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_NAME)},
	{"ATTIDX_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_NAMESPACE)},
	{"ATTIDX_NAMESPACE_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_NAMESPACE_LIST)},
	{"ATTIDX_NILLABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_NILLABLE)},
	{"ATTIDX_NONSCHEMA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_NONSCHEMA)},
	{"ATTIDX_PROCESSCONTENTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_PROCESSCONTENTS)},
	{"ATTIDX_PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_PUBLIC)},
	{"ATTIDX_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_REF)},
	{"ATTIDX_REFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_REFER)},
	{"ATTIDX_SCHEMALOCATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_SCHEMALOCATION)},
	{"ATTIDX_SOURCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_SOURCE)},
	{"ATTIDX_SUBSGROUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_SUBSGROUP)},
	{"ATTIDX_SYSTEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_SYSTEM)},
	{"ATTIDX_TARGETNAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_TARGETNAMESPACE)},
	{"ATTIDX_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_TYPE)},
	{"ATTIDX_USE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_USE)},
	{"ATTIDX_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_VALUE)},
	{"ATTIDX_ENUMNSDECLS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_ENUMNSDECLS)},
	{"ATTIDX_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_VERSION)},
	{"ATTIDX_XML_LANG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_XML_LANG)},
	{"ATTIDX_XPATH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_XPATH)},
	{"ATTIDX_FROMDEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_FROMDEFAULT)},
	{"ATTIDX_ISRETURNED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSAttributeChecker, ATTIDX_ISRETURNED)},
	{"fXIntPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XIntPool;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, fXIntPool)},
	{"INT_QUALIFIED", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_QUALIFIED)},
	{"INT_UNQUALIFIED", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_UNQUALIFIED)},
	{"INT_EMPTY_SET", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_EMPTY_SET)},
	{"INT_ANY_STRICT", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_STRICT)},
	{"INT_ANY_LAX", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_LAX)},
	{"INT_ANY_SKIP", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_SKIP)},
	{"INT_ANY_ANY", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_ANY)},
	{"INT_ANY_LIST", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_LIST)},
	{"INT_ANY_NOT", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_ANY_NOT)},
	{"INT_USE_OPTIONAL", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_USE_OPTIONAL)},
	{"INT_USE_REQUIRED", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_USE_REQUIRED)},
	{"INT_USE_PROHIBITED", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_USE_PROHIBITED)},
	{"INT_WS_PRESERVE", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_WS_PRESERVE)},
	{"INT_WS_REPLACE", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_WS_REPLACE)},
	{"INT_WS_COLLAPSE", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_WS_COLLAPSE)},
	{"INT_UNBOUNDED", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, INT_UNBOUNDED)},
	{"fEleAttrsMapG", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/Container;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, fEleAttrsMapG)},
	{"fEleAttrsMapL", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/Container;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, fEleAttrsMapL)},
	{"DT_ANYURI", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_ANYURI)},
	{"DT_ID", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_ID)},
	{"DT_QNAME", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_QNAME)},
	{"DT_STRING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_STRING)},
	{"DT_TOKEN", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_TOKEN)},
	{"DT_NCNAME", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_NCNAME)},
	{"DT_XPATH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_XPATH)},
	{"DT_XPATH1", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_XPATH1)},
	{"DT_LANGUAGE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_LANGUAGE)},
	{"DT_COUNT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_COUNT)},
	{"fExtraDVs", "[Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSAttributeChecker, fExtraDVs)},
	{"DT_BLOCK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_BLOCK)},
	{"DT_BLOCK1", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_BLOCK1)},
	{"DT_FINAL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_FINAL)},
	{"DT_FINAL1", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_FINAL1)},
	{"DT_FINAL2", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_FINAL2)},
	{"DT_FORM", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_FORM)},
	{"DT_MAXOCCURS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_MAXOCCURS)},
	{"DT_MAXOCCURS1", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_MAXOCCURS1)},
	{"DT_MEMBERTYPES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_MEMBERTYPES)},
	{"DT_MINOCCURS1", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_MINOCCURS1)},
	{"DT_NAMESPACE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_NAMESPACE)},
	{"DT_PROCESSCONTENTS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_PROCESSCONTENTS)},
	{"DT_USE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_USE)},
	{"DT_WHITESPACE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_WHITESPACE)},
	{"DT_BOOLEAN", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_BOOLEAN)},
	{"DT_NONNEGINT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_NONNEGINT)},
	{"DT_POSINT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSAttributeChecker, DT_POSINT)},
	{"fSchemaHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;", nullptr, $PROTECTED, $field(XSAttributeChecker, fSchemaHandler)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XSAttributeChecker, fSymbolTable)},
	{"fNonSchemaAttrs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PROTECTED, $field(XSAttributeChecker, fNonSchemaAttrs)},
	{"fNamespaceList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(XSAttributeChecker, fNamespaceList)},
	{"fSeen", "[Z", nullptr, $PROTECTED, $field(XSAttributeChecker, fSeen)},
	{"fSeenTemp", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(XSAttributeChecker, fSeenTemp)},
	{"INIT_POOL_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XSAttributeChecker, INIT_POOL_SIZE)},
	{"INC_POOL_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XSAttributeChecker, INC_POOL_SIZE)},
	{"fArrayPool", "[[Ljava/lang/Object;", nullptr, 0, $field(XSAttributeChecker, fArrayPool)},
	{"fTempArray", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(XSAttributeChecker, fTempArray)},
	{"fPoolPos", "I", nullptr, 0, $field(XSAttributeChecker, fPoolPos)},
	{}
};

$MethodInfo _XSAttributeChecker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;)V", nullptr, $PUBLIC, $method(XSAttributeChecker, init$, void, $XSDHandler*)},
	{"checkAttributes", "(Lorg/w3c/dom/Element;ZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, checkAttributes, $ObjectArray*, $Element*, bool, $XSDocumentInfo*)},
	{"checkAttributes", "(Lorg/w3c/dom/Element;ZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Z)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, checkAttributes, $ObjectArray*, $Element*, bool, $XSDocumentInfo*, bool)},
	{"checkNonSchemaAttributes", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, checkNonSchemaAttributes, void, $XSGrammarBucket*)},
	{"getAvailableArray", "()[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSAttributeChecker, getAvailableArray, $ObjectArray*)},
	{"normalize", "(Ljava/lang/String;S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSAttributeChecker, normalize, $String*, $String*, int16_t)},
	{"reportSchemaError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSAttributeChecker, reportSchemaError, void, $String*, $ObjectArray*, $Element*)},
	{"reportSchemaFatalError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSAttributeChecker, reportSchemaFatalError, void, $String*, $ObjectArray*, $Element*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, reset, void, $SymbolTable*)},
	{"resolveNamespace", "(Lorg/w3c/dom/Element;[Lorg/w3c/dom/Attr;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, resolveNamespace, void, $Element*, $AttrArray*, $SchemaNamespaceSupport*)},
	{"returnAttrArray", "([Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeChecker, returnAttrArray, void, $ObjectArray*, $XSDocumentInfo*)},
	{"validate", "([Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;ILcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(XSAttributeChecker, validate, $Object*, $ObjectArray*, $String*, $String*, int32_t, $XSDocumentInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XSAttributeChecker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSAttributeChecker",
	"java.lang.Object",
	nullptr,
	_XSAttributeChecker_FieldInfo_,
	_XSAttributeChecker_MethodInfo_
};

$Object* allocate$XSAttributeChecker($Class* clazz) {
	return $of($alloc(XSAttributeChecker));
}

$String* XSAttributeChecker::ELEMENT_N = nullptr;
$String* XSAttributeChecker::ELEMENT_R = nullptr;
$String* XSAttributeChecker::ATTRIBUTE_N = nullptr;
$String* XSAttributeChecker::ATTRIBUTE_R = nullptr;
int32_t XSAttributeChecker::ATTIDX_COUNT = 0;
int32_t XSAttributeChecker::ATTIDX_ABSTRACT = 0;
int32_t XSAttributeChecker::ATTIDX_AFORMDEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_BASE = 0;
int32_t XSAttributeChecker::ATTIDX_BLOCK = 0;
int32_t XSAttributeChecker::ATTIDX_BLOCKDEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_DEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_EFORMDEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_FINAL = 0;
int32_t XSAttributeChecker::ATTIDX_FINALDEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_FIXED = 0;
int32_t XSAttributeChecker::ATTIDX_FORM = 0;
int32_t XSAttributeChecker::ATTIDX_ID = 0;
int32_t XSAttributeChecker::ATTIDX_ITEMTYPE = 0;
int32_t XSAttributeChecker::ATTIDX_MAXOCCURS = 0;
int32_t XSAttributeChecker::ATTIDX_MEMBERTYPES = 0;
int32_t XSAttributeChecker::ATTIDX_MINOCCURS = 0;
int32_t XSAttributeChecker::ATTIDX_MIXED = 0;
int32_t XSAttributeChecker::ATTIDX_NAME = 0;
int32_t XSAttributeChecker::ATTIDX_NAMESPACE = 0;
int32_t XSAttributeChecker::ATTIDX_NAMESPACE_LIST = 0;
int32_t XSAttributeChecker::ATTIDX_NILLABLE = 0;
int32_t XSAttributeChecker::ATTIDX_NONSCHEMA = 0;
int32_t XSAttributeChecker::ATTIDX_PROCESSCONTENTS = 0;
int32_t XSAttributeChecker::ATTIDX_PUBLIC = 0;
int32_t XSAttributeChecker::ATTIDX_REF = 0;
int32_t XSAttributeChecker::ATTIDX_REFER = 0;
int32_t XSAttributeChecker::ATTIDX_SCHEMALOCATION = 0;
int32_t XSAttributeChecker::ATTIDX_SOURCE = 0;
int32_t XSAttributeChecker::ATTIDX_SUBSGROUP = 0;
int32_t XSAttributeChecker::ATTIDX_SYSTEM = 0;
int32_t XSAttributeChecker::ATTIDX_TARGETNAMESPACE = 0;
int32_t XSAttributeChecker::ATTIDX_TYPE = 0;
int32_t XSAttributeChecker::ATTIDX_USE = 0;
int32_t XSAttributeChecker::ATTIDX_VALUE = 0;
int32_t XSAttributeChecker::ATTIDX_ENUMNSDECLS = 0;
int32_t XSAttributeChecker::ATTIDX_VERSION = 0;
int32_t XSAttributeChecker::ATTIDX_XML_LANG = 0;
int32_t XSAttributeChecker::ATTIDX_XPATH = 0;
int32_t XSAttributeChecker::ATTIDX_FROMDEFAULT = 0;
int32_t XSAttributeChecker::ATTIDX_ISRETURNED = 0;
$XIntPool* XSAttributeChecker::fXIntPool = nullptr;
$XInt* XSAttributeChecker::INT_QUALIFIED = nullptr;
$XInt* XSAttributeChecker::INT_UNQUALIFIED = nullptr;
$XInt* XSAttributeChecker::INT_EMPTY_SET = nullptr;
$XInt* XSAttributeChecker::INT_ANY_STRICT = nullptr;
$XInt* XSAttributeChecker::INT_ANY_LAX = nullptr;
$XInt* XSAttributeChecker::INT_ANY_SKIP = nullptr;
$XInt* XSAttributeChecker::INT_ANY_ANY = nullptr;
$XInt* XSAttributeChecker::INT_ANY_LIST = nullptr;
$XInt* XSAttributeChecker::INT_ANY_NOT = nullptr;
$XInt* XSAttributeChecker::INT_USE_OPTIONAL = nullptr;
$XInt* XSAttributeChecker::INT_USE_REQUIRED = nullptr;
$XInt* XSAttributeChecker::INT_USE_PROHIBITED = nullptr;
$XInt* XSAttributeChecker::INT_WS_PRESERVE = nullptr;
$XInt* XSAttributeChecker::INT_WS_REPLACE = nullptr;
$XInt* XSAttributeChecker::INT_WS_COLLAPSE = nullptr;
$XInt* XSAttributeChecker::INT_UNBOUNDED = nullptr;
$Map* XSAttributeChecker::fEleAttrsMapG = nullptr;
$Map* XSAttributeChecker::fEleAttrsMapL = nullptr;
$XSSimpleTypeArray* XSAttributeChecker::fExtraDVs = nullptr;
$booleans* XSAttributeChecker::fSeenTemp = nullptr;
$ObjectArray* XSAttributeChecker::fTempArray = nullptr;

void XSAttributeChecker::init$($XSDHandler* schemaHandler) {
	$set(this, fSchemaHandler, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fNonSchemaAttrs, $new($HashMap));
	$set(this, fNamespaceList, $new($ArrayList));
	$set(this, fSeen, $new($booleans, XSAttributeChecker::ATTIDX_COUNT));
	$set(this, fArrayPool, $new($ObjectArray2, XSAttributeChecker::INIT_POOL_SIZE, XSAttributeChecker::ATTIDX_COUNT));
	this->fPoolPos = 0;
	$set(this, fSchemaHandler, schemaHandler);
}

void XSAttributeChecker::reset($SymbolTable* symbolTable) {
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fNonSchemaAttrs)->clear();
}

$ObjectArray* XSAttributeChecker::checkAttributes($Element* element, bool isGlobal, $XSDocumentInfo* schemaDoc) {
	return checkAttributes(element, isGlobal, schemaDoc, false);
}

$ObjectArray* XSAttributeChecker::checkAttributes($Element* element, bool isGlobal, $XSDocumentInfo* schemaDoc, bool enumAsQName) {
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return nullptr;
	}
	$var($AttrArray, attrs, $DOMUtil::getAttrs(element));
	resolveNamespace(element, attrs, $nc(schemaDoc)->fNamespaceSupport);
	$var($String, uri, $DOMUtil::getNamespaceURI(element));
	$var($String, elName, $DOMUtil::getLocalName(element));
	$init($SchemaSymbols);
	if (!$nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals(uri)) {
		reportSchemaError("s4s-elt-schema-ns"_s, $$new($ObjectArray, {$of(elName)}), element);
	}
	$var($Map, eleAttrsMap, XSAttributeChecker::fEleAttrsMapG);
	$var($String, lookupName, elName);
	if (!isGlobal) {
		$assign(eleAttrsMap, XSAttributeChecker::fEleAttrsMapL);
		if ($nc(elName)->equals($SchemaSymbols::ELT_ELEMENT)) {
			if ($DOMUtil::getAttr(element, $SchemaSymbols::ATT_REF) != nullptr) {
				$assign(lookupName, XSAttributeChecker::ELEMENT_R);
			} else {
				$assign(lookupName, XSAttributeChecker::ELEMENT_N);
			}
		} else {
			if (elName->equals($SchemaSymbols::ELT_ATTRIBUTE)) {
				if ($DOMUtil::getAttr(element, $SchemaSymbols::ATT_REF) != nullptr) {
					$assign(lookupName, XSAttributeChecker::ATTRIBUTE_R);
				} else {
					$assign(lookupName, XSAttributeChecker::ATTRIBUTE_N);
				}
			}
		}
	}
	$var($Container, attrList, $cast($Container, $nc(eleAttrsMap)->get(lookupName)));
	if (attrList == nullptr) {
		reportSchemaError("s4s-elt-invalid"_s, $$new($ObjectArray, {$of(elName)}), element);
		return nullptr;
	}
	$var($ObjectArray, attrValues, getAvailableArray());
	int64_t fromDefault = 0;
	$System::arraycopy(XSAttributeChecker::fSeenTemp, 0, this->fSeen, 0, XSAttributeChecker::ATTIDX_COUNT);
	int32_t length = $nc(attrs)->length;
	$var($Attr, sattr, nullptr);
	for (int32_t i = 0; i < length; ++i) {
		$assign(sattr, attrs->get(i));
		$var($String, attrName, $nc(sattr)->getName());
		$var($String, attrURI, $DOMUtil::getNamespaceURI(sattr));
		$var($String, attrVal, $DOMUtil::getValue(sattr));
		if ($nc(attrName)->startsWith("xml"_s)) {
			$var($String, attrPrefix, $DOMUtil::getPrefix(sattr));
			bool var$0 = "xmlns"_s->equals(attrPrefix);
			if (var$0 || "xmlns"_s->equals(attrName)) {
				continue;
			} else {
				bool var$3 = $nc($SchemaSymbols::ATT_XML_LANG)->equals(attrName);
				if (var$3) {
					bool var$4 = $nc($SchemaSymbols::ELT_SCHEMA)->equals(elName);
					var$3 = (var$4 || $nc($SchemaSymbols::ELT_DOCUMENTATION)->equals(elName));
				}
				if (var$3) {
					$assign(attrURI, nullptr);
				}
			}
		}
		if (attrURI != nullptr && attrURI->length() != 0) {
			if (attrURI->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA)) {
				reportSchemaError("s4s-att-not-allowed"_s, $$new($ObjectArray, {
					$of(elName),
					$of(attrName)
				}), element);
			} else {
				$var($List, temp, nullptr);
				if ($nc(attrValues)->get(XSAttributeChecker::ATTIDX_NONSCHEMA) == nullptr) {
					$assign(temp, $new($ArrayList, 4));
				} else {
					$assign(temp, $cast($List, attrValues->get(XSAttributeChecker::ATTIDX_NONSCHEMA)));
				}
				$nc(temp)->add(attrName);
				temp->add(attrVal);
				$nc(attrValues)->set(XSAttributeChecker::ATTIDX_NONSCHEMA, temp);
			}
			continue;
		}
		$var($OneAttr, oneAttr, $nc(attrList)->get(attrName));
		if (oneAttr == nullptr) {
			reportSchemaError("s4s-att-not-allowed"_s, $$new($ObjectArray, {
				$of(elName),
				$of(attrName)
			}), element);
			continue;
		}
		$nc(this->fSeen)->set($nc(oneAttr)->valueIndex, true);
		try {
			if (oneAttr->dvIndex >= 0) {
				if (oneAttr->dvIndex != XSAttributeChecker::DT_STRING && oneAttr->dvIndex != XSAttributeChecker::DT_XPATH && oneAttr->dvIndex != XSAttributeChecker::DT_XPATH1) {
					$var($XSSimpleType, dv, $nc(XSAttributeChecker::fExtraDVs)->get(oneAttr->dvIndex));
					$var($Object, avalue, $nc(dv)->validate(attrVal, static_cast<$ValidationContext*>($nc(schemaDoc)->fValidationContext), ($ValidatedInfo*)nullptr));
					if (oneAttr->dvIndex == XSAttributeChecker::DT_QNAME) {
						$var($QName, qname, $cast($QName, avalue));
						$init($XMLSymbols);
						if ($nc(qname)->prefix == $XMLSymbols::EMPTY_STRING && qname->uri == nullptr && $nc(schemaDoc)->fIsChameleonSchema) {
							$set(qname, uri, schemaDoc->fTargetNamespace);
						}
					}
					$nc(attrValues)->set(oneAttr->valueIndex, avalue);
				} else {
					$nc(attrValues)->set(oneAttr->valueIndex, attrVal);
				}
			} else {
				$nc(attrValues)->set(oneAttr->valueIndex, $(validate(attrValues, attrName, attrVal, oneAttr->dvIndex, schemaDoc)));
			}
		} catch ($InvalidDatatypeValueException& ide) {
			reportSchemaError("s4s-att-invalid-value"_s, $$new($ObjectArray, {
				$of(elName),
				$of(attrName),
				$($of(ide->getMessage()))
			}), element);
			if (oneAttr->dfltValue != nullptr) {
				$nc(attrValues)->set(oneAttr->valueIndex, oneAttr->dfltValue);
			}
		}
		if ($nc(elName)->equals($SchemaSymbols::ELT_ENUMERATION) && enumAsQName) {
			$nc(attrValues)->set(XSAttributeChecker::ATTIDX_ENUMNSDECLS, $$new($SchemaNamespaceSupport, $nc(schemaDoc)->fNamespaceSupport));
		}
	}
	$var($OneAttrArray, reqAttrs, $nc(attrList)->values);
	for (int32_t i = 0; i < $nc(reqAttrs)->length; ++i) {
		$var($OneAttr, oneAttr, reqAttrs->get(i));
		if ($nc(oneAttr)->dfltValue != nullptr && !$nc(this->fSeen)->get(oneAttr->valueIndex)) {
			$nc(attrValues)->set(oneAttr->valueIndex, oneAttr->dfltValue);
			fromDefault |= ($sl(1, oneAttr->valueIndex));
		}
	}
	$nc(attrValues)->set(XSAttributeChecker::ATTIDX_FROMDEFAULT, $($Long::valueOf(fromDefault)));
	if (attrValues->get(XSAttributeChecker::ATTIDX_MAXOCCURS) != nullptr) {
		int32_t min = $nc(($cast($XInt, attrValues->get(XSAttributeChecker::ATTIDX_MINOCCURS))))->intValue();
		int32_t max = $nc(($cast($XInt, attrValues->get(XSAttributeChecker::ATTIDX_MAXOCCURS))))->intValue();
		if (max != $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			if ($nc(this->fSchemaHandler)->fSecurityManager != nullptr) {
				$var($String, localName, $nc(element)->getLocalName());
				bool var$8 = $nc(localName)->equals("element"_s);
				bool var$7 = (var$8 || $nc(localName)->equals("any"_s));
				bool var$6 = var$7 && (element->getNextSibling() == nullptr);
				bool var$5 = var$6 && (element->getPreviousSibling() == nullptr);
				bool optimize = var$5 && ($nc($($nc($(element->getParentNode()))->getLocalName()))->equals("sequence"_s));
				if (!optimize) {
					$init($XMLSecurityManager$Limit);
					int32_t maxOccurNodeLimit = $nc($nc(this->fSchemaHandler)->fSecurityManager)->getLimit($XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT);
					if (max > maxOccurNodeLimit && !$nc($nc(this->fSchemaHandler)->fSecurityManager)->isNoLimit(maxOccurNodeLimit)) {
						reportSchemaFatalError("MaxOccurLimit"_s, $$new($ObjectArray, {$($of($Integer::valueOf(maxOccurNodeLimit)))}), element);
						attrValues->set(XSAttributeChecker::ATTIDX_MAXOCCURS, $($nc(XSAttributeChecker::fXIntPool)->getXInt(maxOccurNodeLimit)));
						max = maxOccurNodeLimit;
					}
				}
			}
			if (min > max) {
				reportSchemaError("p-props-correct.2.1"_s, $$new($ObjectArray, {
					$of(elName),
					attrValues->get(XSAttributeChecker::ATTIDX_MINOCCURS),
					attrValues->get(XSAttributeChecker::ATTIDX_MAXOCCURS)
				}), element);
				attrValues->set(XSAttributeChecker::ATTIDX_MINOCCURS, attrValues->get(XSAttributeChecker::ATTIDX_MAXOCCURS));
			}
		}
	}
	return attrValues;
}

$Object* XSAttributeChecker::validate($ObjectArray* attrValues, $String* attr, $String* ivalue, int32_t dvIndex, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	if (ivalue == nullptr) {
		return $of(nullptr);
	}
	$var($String, value, $XMLChar::trim(ivalue));
	$var($Object, retValue, nullptr);
	$var($List, memberType, nullptr);
	int32_t choice = 0;
	switch (dvIndex) {
	case XSAttributeChecker::DT_BOOLEAN:
		{
			$init($SchemaSymbols);
			bool var$0 = $nc(value)->equals($SchemaSymbols::ATTVAL_FALSE);
			if (var$0 || $nc(value)->equals($SchemaSymbols::ATTVAL_FALSE_0)) {
				$init($Boolean);
				$assign(retValue, $Boolean::FALSE);
			} else {
				bool var$2 = value->equals($SchemaSymbols::ATTVAL_TRUE);
				if (var$2 || value->equals($SchemaSymbols::ATTVAL_TRUE_1)) {
					$init($Boolean);
					$assign(retValue, $Boolean::TRUE);
				} else {
					$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
						$of(value),
						$of("boolean"_s)
					}));
				}
			}
			break;
		}
	case XSAttributeChecker::DT_NONNEGINT:
		{
			try {
				bool var$3 = $nc(value)->length() > 0;
				if (var$3 && value->charAt(0) == u'+') {
					$assign(value, value->substring(1));
				}
				$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt($Integer::parseInt(value)));
			} catch ($NumberFormatException& e) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
					$of(value),
					$of("nonNegativeInteger"_s)
				}));
			}
			if ($nc(($cast($XInt, retValue)))->intValue() < 0) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
					$of(value),
					$of("nonNegativeInteger"_s)
				}));
			}
			break;
		}
	case XSAttributeChecker::DT_POSINT:
		{
			try {
				bool var$4 = $nc(value)->length() > 0;
				if (var$4 && value->charAt(0) == u'+') {
					$assign(value, value->substring(1));
				}
				$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt($Integer::parseInt(value)));
			} catch ($NumberFormatException& e) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
					$of(value),
					$of("positiveInteger"_s)
				}));
			}
			if ($nc(($cast($XInt, retValue)))->intValue() <= 0) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
					$of(value),
					$of("positiveInteger"_s)
				}));
			}
			break;
		}
	case XSAttributeChecker::DT_BLOCK:
		{
			choice = 0;
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_POUNDALL)) {
				choice = ($XSConstants::DERIVATION_SUBSTITUTION | $XSConstants::DERIVATION_EXTENSION) | $XSConstants::DERIVATION_RESTRICTION;
			} else {
				$var($StringTokenizer, t, $new($StringTokenizer, value, " \n\t\r"_s));
				while (t->hasMoreTokens()) {
					$var($String, token, t->nextToken());
					if ($nc(token)->equals($SchemaSymbols::ATTVAL_EXTENSION)) {
						choice |= $XSConstants::DERIVATION_EXTENSION;
					} else {
						if (token->equals($SchemaSymbols::ATTVAL_RESTRICTION)) {
							choice |= $XSConstants::DERIVATION_RESTRICTION;
						} else {
							if (token->equals($SchemaSymbols::ATTVAL_SUBSTITUTION)) {
								choice |= $XSConstants::DERIVATION_SUBSTITUTION;
							} else {
								$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
									$of(value),
									$of("(#all | List of (extension | restriction | substitution))"_s)
								}));
							}
						}
					}
				}
			}
			$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(choice));
			break;
		}
	case XSAttributeChecker::DT_BLOCK1:
		{}
	case XSAttributeChecker::DT_FINAL:
		{
			choice = 0;
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_POUNDALL)) {
				choice = ((($XSConstants::DERIVATION_SUBSTITUTION | $XSConstants::DERIVATION_EXTENSION) | $XSConstants::DERIVATION_RESTRICTION) | $XSConstants::DERIVATION_LIST) | $XSConstants::DERIVATION_UNION;
			} else {
				$var($StringTokenizer, t, $new($StringTokenizer, value, " \n\t\r"_s));
				while (t->hasMoreTokens()) {
					$var($String, token, t->nextToken());
					if ($nc(token)->equals($SchemaSymbols::ATTVAL_EXTENSION)) {
						choice |= $XSConstants::DERIVATION_EXTENSION;
					} else {
						if (token->equals($SchemaSymbols::ATTVAL_RESTRICTION)) {
							choice |= $XSConstants::DERIVATION_RESTRICTION;
						} else {
							$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
								$of(value),
								$of("(#all | List of (extension | restriction))"_s)
							}));
						}
					}
				}
			}
			$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(choice));
			break;
		}
	case XSAttributeChecker::DT_FINAL1:
		{
			choice = 0;
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_POUNDALL)) {
				choice = ((($XSConstants::DERIVATION_SUBSTITUTION | $XSConstants::DERIVATION_EXTENSION) | $XSConstants::DERIVATION_RESTRICTION) | $XSConstants::DERIVATION_LIST) | $XSConstants::DERIVATION_UNION;
			} else {
				$var($StringTokenizer, t, $new($StringTokenizer, value, " \n\t\r"_s));
				while (t->hasMoreTokens()) {
					$var($String, token, t->nextToken());
					if ($nc(token)->equals($SchemaSymbols::ATTVAL_LIST)) {
						choice |= $XSConstants::DERIVATION_LIST;
					} else {
						if (token->equals($SchemaSymbols::ATTVAL_UNION)) {
							choice |= $XSConstants::DERIVATION_UNION;
						} else {
							if (token->equals($SchemaSymbols::ATTVAL_RESTRICTION)) {
								choice |= $XSConstants::DERIVATION_RESTRICTION;
							} else {
								$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
									$of(value),
									$of("(#all | List of (list | union | restriction))"_s)
								}));
							}
						}
					}
				}
			}
			$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(choice));
			break;
		}
	case XSAttributeChecker::DT_FINAL2:
		{
			choice = 0;
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_POUNDALL)) {
				choice = ((($XSConstants::DERIVATION_SUBSTITUTION | $XSConstants::DERIVATION_EXTENSION) | $XSConstants::DERIVATION_RESTRICTION) | $XSConstants::DERIVATION_LIST) | $XSConstants::DERIVATION_UNION;
			} else {
				$var($StringTokenizer, t, $new($StringTokenizer, value, " \n\t\r"_s));
				while (t->hasMoreTokens()) {
					$var($String, token, t->nextToken());
					if ($nc(token)->equals($SchemaSymbols::ATTVAL_EXTENSION)) {
						choice |= $XSConstants::DERIVATION_EXTENSION;
					} else {
						if (token->equals($SchemaSymbols::ATTVAL_RESTRICTION)) {
							choice |= $XSConstants::DERIVATION_RESTRICTION;
						} else {
							if (token->equals($SchemaSymbols::ATTVAL_LIST)) {
								choice |= $XSConstants::DERIVATION_LIST;
							} else {
								if (token->equals($SchemaSymbols::ATTVAL_UNION)) {
									choice |= $XSConstants::DERIVATION_UNION;
								} else {
									$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
										$of(value),
										$of("(#all | List of (extension | restriction | list | union))"_s)
									}));
								}
							}
						}
					}
				}
			}
			$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(choice));
			break;
		}
	case XSAttributeChecker::DT_FORM:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_QUALIFIED)) {
				$assign(retValue, XSAttributeChecker::INT_QUALIFIED);
			} else {
				if (value->equals($SchemaSymbols::ATTVAL_UNQUALIFIED)) {
					$assign(retValue, XSAttributeChecker::INT_UNQUALIFIED);
				} else {
					$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
						$of(value),
						$of("(qualified | unqualified)"_s)
					}));
				}
			}
			break;
		}
	case XSAttributeChecker::DT_MAXOCCURS:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_UNBOUNDED)) {
				$assign(retValue, XSAttributeChecker::INT_UNBOUNDED);
			} else {
				try {
					$assign(retValue, validate(attrValues, attr, value, XSAttributeChecker::DT_NONNEGINT, schemaDoc));
				} catch ($NumberFormatException& e) {
					$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
						$of(value),
						$of("(nonNegativeInteger | unbounded)"_s)
					}));
				}
			}
			break;
		}
	case XSAttributeChecker::DT_MAXOCCURS1:
		{
			if ($nc(value)->equals("1"_s)) {
				$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(1));
			} else {
				$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
					$of(value),
					$of("(1)"_s)
				}));
			}
			break;
		}
	case XSAttributeChecker::DT_MEMBERTYPES:
		{
			$assign(memberType, $new($ArrayList));
			try {
				$var($StringTokenizer, t, $new($StringTokenizer, value, " \n\t\r"_s));
				while (t->hasMoreTokens()) {
					$var($String, token, t->nextToken());
					$var($QName, qname, $cast($QName, $nc($nc(XSAttributeChecker::fExtraDVs)->get(XSAttributeChecker::DT_QNAME))->validate(token, static_cast<$ValidationContext*>($nc(schemaDoc)->fValidationContext), ($ValidatedInfo*)nullptr)));
					$init($XMLSymbols);
					if ($nc(qname)->prefix == $XMLSymbols::EMPTY_STRING && qname->uri == nullptr && $nc(schemaDoc)->fIsChameleonSchema) {
						$set(qname, uri, schemaDoc->fTargetNamespace);
					}
					$nc(memberType)->add(qname);
				}
				$assign(retValue, memberType);
			} catch ($InvalidDatatypeValueException& ide) {
				$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.2"_s, $$new($ObjectArray, {
					$of(value),
					$of("(List of QName)"_s)
				}));
			}
			break;
		}
	case XSAttributeChecker::DT_MINOCCURS1:
		{
			if ($nc(value)->equals("0"_s)) {
				$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(0));
			} else if (value->equals("1"_s)) {
				$assign(retValue, $nc(XSAttributeChecker::fXIntPool)->getXInt(1));
			} else {
				$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
					$of(value),
					$of("(0 | 1)"_s)
				}));
			}
			break;
		}
	case XSAttributeChecker::DT_NAMESPACE:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_TWOPOUNDANY)) {
				$assign(retValue, XSAttributeChecker::INT_ANY_ANY);
			} else {
				if (value->equals($SchemaSymbols::ATTVAL_TWOPOUNDOTHER)) {
					$assign(retValue, XSAttributeChecker::INT_ANY_NOT);
					$var($StringArray, list, $new($StringArray, 2));
					list->set(0, $nc(schemaDoc)->fTargetNamespace);
					list->set(1, nullptr);
					$nc(attrValues)->set(XSAttributeChecker::ATTIDX_NAMESPACE_LIST, list);
				} else {
					$assign(retValue, XSAttributeChecker::INT_ANY_LIST);
					$nc(this->fNamespaceList)->clear();
					$var($StringTokenizer, tokens, $new($StringTokenizer, value, " \n\t\r"_s));
					$var($String, token, nullptr);
					$var($String, tempNamespace, nullptr);
					try {
						while (tokens->hasMoreTokens()) {
							$assign(token, tokens->nextToken());
							if ($nc(token)->equals($SchemaSymbols::ATTVAL_TWOPOUNDLOCAL)) {
								$assign(tempNamespace, nullptr);
							} else {
								if (token->equals($SchemaSymbols::ATTVAL_TWOPOUNDTARGETNS)) {
									$assign(tempNamespace, $nc(schemaDoc)->fTargetNamespace);
								} else {
									$nc($nc(XSAttributeChecker::fExtraDVs)->get(XSAttributeChecker::DT_ANYURI))->validate(token, static_cast<$ValidationContext*>($nc(schemaDoc)->fValidationContext), ($ValidatedInfo*)nullptr);
									$assign(tempNamespace, $nc(this->fSymbolTable)->addSymbol(token));
								}
							}
							if (!$nc(this->fNamespaceList)->contains(tempNamespace)) {
								$nc(this->fNamespaceList)->add(tempNamespace);
							}
						}
					} catch ($InvalidDatatypeValueException& ide) {
						$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.3"_s, $$new($ObjectArray, {
							$of(value),
							$of("((##any | ##other) | List of (anyURI | (##targetNamespace | ##local)) )"_s)
						}));
					}
					int32_t num = $nc(this->fNamespaceList)->size();
					$var($StringArray, list, $new($StringArray, num));
					$assign(list, $fcast($StringArray, $nc(this->fNamespaceList)->toArray(list)));
					$nc(attrValues)->set(XSAttributeChecker::ATTIDX_NAMESPACE_LIST, list);
				}
			}
			break;
		}
	case XSAttributeChecker::DT_PROCESSCONTENTS:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_STRICT)) {
				$assign(retValue, XSAttributeChecker::INT_ANY_STRICT);
			} else {
				if (value->equals($SchemaSymbols::ATTVAL_LAX)) {
					$assign(retValue, XSAttributeChecker::INT_ANY_LAX);
				} else {
					if (value->equals($SchemaSymbols::ATTVAL_SKIP)) {
						$assign(retValue, XSAttributeChecker::INT_ANY_SKIP);
					} else {
						$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
							$of(value),
							$of("(lax | skip | strict)"_s)
						}));
					}
				}
			}
			break;
		}
	case XSAttributeChecker::DT_USE:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_OPTIONAL)) {
				$assign(retValue, XSAttributeChecker::INT_USE_OPTIONAL);
			} else {
				if (value->equals($SchemaSymbols::ATTVAL_REQUIRED)) {
					$assign(retValue, XSAttributeChecker::INT_USE_REQUIRED);
				} else {
					if (value->equals($SchemaSymbols::ATTVAL_PROHIBITED)) {
						$assign(retValue, XSAttributeChecker::INT_USE_PROHIBITED);
					} else {
						$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
							$of(value),
							$of("(optional | prohibited | required)"_s)
						}));
					}
				}
			}
			break;
		}
	case XSAttributeChecker::DT_WHITESPACE:
		{
			$init($SchemaSymbols);
			if ($nc(value)->equals($SchemaSymbols::ATTVAL_PRESERVE)) {
				$assign(retValue, XSAttributeChecker::INT_WS_PRESERVE);
			} else {
				if (value->equals($SchemaSymbols::ATTVAL_REPLACE)) {
					$assign(retValue, XSAttributeChecker::INT_WS_REPLACE);
				} else {
					if (value->equals($SchemaSymbols::ATTVAL_COLLAPSE)) {
						$assign(retValue, XSAttributeChecker::INT_WS_COLLAPSE);
					} else {
						$throwNew($InvalidDatatypeValueException, "cvc-enumeration-valid"_s, $$new($ObjectArray, {
							$of(value),
							$of("(preserve | replace | collapse)"_s)
						}));
					}
				}
			}
			break;
		}
	}
	return $of(retValue);
}

void XSAttributeChecker::reportSchemaFatalError($String* key, $ObjectArray* args, $Element* ele) {
	$nc(this->fSchemaHandler)->reportSchemaFatalError(key, args, ele);
}

void XSAttributeChecker::reportSchemaError($String* key, $ObjectArray* args, $Element* ele) {
	$nc(this->fSchemaHandler)->reportSchemaError(key, args, ele);
}

void XSAttributeChecker::checkNonSchemaAttributes($XSGrammarBucket* grammarBucket) {
	$useLocalCurrentObjectStackCache();
	$var($XSAttributeDecl, attrDecl, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(this->fNonSchemaAttrs)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, attrRName, $cast($String, $nc(entry)->getKey()));
				$var($String, attrURI, $nc(attrRName)->substring(0, attrRName->indexOf((int32_t)u',')));
				$var($String, attrLocal, attrRName->substring(attrRName->indexOf((int32_t)u',') + 1));
				$var($SchemaGrammar, sGrammar, $nc(grammarBucket)->getGrammar(attrURI));
				if (sGrammar == nullptr) {
					continue;
				}
				$assign(attrDecl, $nc(sGrammar)->getGlobalAttributeDecl(attrLocal));
				if (attrDecl == nullptr) {
					continue;
				}
				$var($XSSimpleType, dv, $cast($XSSimpleType, $nc(attrDecl)->getTypeDefinition()));
				if (dv == nullptr) {
					continue;
				}
				$var($List, values, $cast($List, entry->getValue()));
				$var($String, elName, nullptr);
				$var($String, attrName, $cast($String, $nc(values)->get(0)));
				int32_t count = values->size();
				for (int32_t i = 1; i < count; i += 2) {
					$assign(elName, $cast($String, values->get(i)));
					try {
						$nc(dv)->validate($cast($String, $(values->get(i + 1))), ($ValidationContext*)nullptr, ($ValidatedInfo*)nullptr);
					} catch ($InvalidDatatypeValueException& ide) {
						reportSchemaError("s4s-att-invalid-value"_s, $$new($ObjectArray, {
							$of(elName),
							$of(attrName),
							$($of(ide->getMessage()))
						}), nullptr);
					}
				}
			}
		}
	}
}

$String* XSAttributeChecker::normalize($String* content, int16_t ws) {
	$init(XSAttributeChecker);
	int32_t len = content == nullptr ? 0 : $nc(content)->length();
	if (len == 0 || ws == $XSSimpleType::WS_PRESERVE) {
		return content;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	if (ws == $XSSimpleType::WS_REPLACE) {
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = content->charAt(i);
			if (ch != 9 && ch != 10 && ch != 13) {
				sb->append(ch);
			} else {
				sb->append((char16_t)32);
			}
		}
	} else {
		char16_t ch = 0;
		int32_t i = 0;
		bool isLeading = true;
		for (i = 0; i < len; ++i) {
			ch = content->charAt(i);
			if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
				sb->append(ch);
				isLeading = false;
			} else {
				for (; i < len - 1; ++i) {
					ch = content->charAt(i + 1);
					if (ch != 9 && ch != 10 && ch != 13 && ch != 32) {
						break;
					}
				}
				if (i < len - 1 && !isLeading) {
					sb->append((char16_t)32);
				}
			}
		}
	}
	return sb->toString();
}

$ObjectArray* XSAttributeChecker::getAvailableArray() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fArrayPool)->length == this->fPoolPos) {
		$set(this, fArrayPool, $new($ObjectArray2, this->fPoolPos + XSAttributeChecker::INC_POOL_SIZE));
		for (int32_t i = this->fPoolPos; i < $nc(this->fArrayPool)->length; ++i) {
			$nc(this->fArrayPool)->set(i, $$new($ObjectArray, XSAttributeChecker::ATTIDX_COUNT));
		}
	}
	$var($ObjectArray, retArray, $nc(this->fArrayPool)->get(this->fPoolPos));
	$nc(this->fArrayPool)->set(this->fPoolPos++, nullptr);
	$System::arraycopy(XSAttributeChecker::fTempArray, 0, retArray, 0, XSAttributeChecker::ATTIDX_COUNT - 1);
	$init($Boolean);
	$nc(retArray)->set(XSAttributeChecker::ATTIDX_ISRETURNED, $Boolean::FALSE);
	return retArray;
}

void XSAttributeChecker::returnAttrArray($ObjectArray* attrArray, $XSDocumentInfo* schemaDoc) {
	if (schemaDoc != nullptr) {
		$nc(schemaDoc->fNamespaceSupport)->popContext();
	}
	if (this->fPoolPos == 0 || attrArray == nullptr || $nc(attrArray)->length != XSAttributeChecker::ATTIDX_COUNT || $nc(($cast($Boolean, $nc(attrArray)->get(XSAttributeChecker::ATTIDX_ISRETURNED))))->booleanValue()) {
		return;
	}
	$nc(attrArray)->set(XSAttributeChecker::ATTIDX_ISRETURNED, $Boolean::TRUE);
	if (attrArray->get(XSAttributeChecker::ATTIDX_NONSCHEMA) != nullptr) {
		$nc(($cast($List, attrArray->get(XSAttributeChecker::ATTIDX_NONSCHEMA))))->clear();
	}
	$nc(this->fArrayPool)->set(--this->fPoolPos, attrArray);
}

void XSAttributeChecker::resolveNamespace($Element* element, $AttrArray* attrs, $SchemaNamespaceSupport* nsSupport) {
	$useLocalCurrentObjectStackCache();
	$nc(nsSupport)->pushContext();
	int32_t length = $nc(attrs)->length;
	$var($Attr, sattr, nullptr);
	$var($String, rawname, nullptr);
	$var($String, prefix, nullptr);
	$var($String, uri, nullptr);
	for (int32_t i = 0; i < length; ++i) {
		$assign(sattr, attrs->get(i));
		$assign(rawname, $DOMUtil::getName(sattr));
		$assign(prefix, nullptr);
		$init($XMLSymbols);
		if ($nc(rawname)->equals($XMLSymbols::PREFIX_XMLNS)) {
			$assign(prefix, $XMLSymbols::EMPTY_STRING);
		} else if (rawname->startsWith("xmlns:"_s)) {
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol($($DOMUtil::getLocalName(sattr))));
		}
		if (prefix != nullptr) {
			$assign(uri, $nc(this->fSymbolTable)->addSymbol($($DOMUtil::getValue(sattr))));
			nsSupport->declarePrefix(prefix, $nc(uri)->length() != 0 ? uri : ($String*)nullptr);
		}
	}
}

void clinit$XSAttributeChecker($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XSAttributeChecker::ELEMENT_N, "element_n"_s);
	$assignStatic(XSAttributeChecker::ELEMENT_R, "element_r"_s);
	$assignStatic(XSAttributeChecker::ATTRIBUTE_N, "attribute_n"_s);
	$assignStatic(XSAttributeChecker::ATTRIBUTE_R, "attribute_r"_s);
	XSAttributeChecker::ATTIDX_COUNT = 0;
	XSAttributeChecker::ATTIDX_ABSTRACT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_AFORMDEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_BASE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_BLOCK = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_BLOCKDEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_DEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_EFORMDEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_FINAL = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_FINALDEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_FIXED = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_FORM = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_ID = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_ITEMTYPE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_MAXOCCURS = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_MEMBERTYPES = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_MINOCCURS = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_MIXED = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_NAME = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_NAMESPACE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_NAMESPACE_LIST = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_NILLABLE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_NONSCHEMA = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_PROCESSCONTENTS = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_PUBLIC = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_REF = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_REFER = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_SCHEMALOCATION = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_SOURCE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_SUBSGROUP = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_SYSTEM = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_TARGETNAMESPACE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_TYPE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_USE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_VALUE = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_ENUMNSDECLS = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_VERSION = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_XML_LANG = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_XPATH = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_FROMDEFAULT = XSAttributeChecker::ATTIDX_COUNT++;
	XSAttributeChecker::ATTIDX_ISRETURNED = XSAttributeChecker::ATTIDX_COUNT++;
	$assignStatic(XSAttributeChecker::fXIntPool, $new($XIntPool));
	$assignStatic(XSAttributeChecker::INT_QUALIFIED, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::FORM_QUALIFIED));
	$assignStatic(XSAttributeChecker::INT_UNQUALIFIED, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::FORM_UNQUALIFIED));
	$assignStatic(XSAttributeChecker::INT_EMPTY_SET, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSConstants::DERIVATION_NONE));
	$assignStatic(XSAttributeChecker::INT_ANY_STRICT, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::PC_STRICT));
	$assignStatic(XSAttributeChecker::INT_ANY_LAX, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::PC_LAX));
	$assignStatic(XSAttributeChecker::INT_ANY_SKIP, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::PC_SKIP));
	$assignStatic(XSAttributeChecker::INT_ANY_ANY, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::NSCONSTRAINT_ANY));
	$assignStatic(XSAttributeChecker::INT_ANY_LIST, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::NSCONSTRAINT_LIST));
	$assignStatic(XSAttributeChecker::INT_ANY_NOT, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSWildcardDecl::NSCONSTRAINT_NOT));
	$assignStatic(XSAttributeChecker::INT_USE_OPTIONAL, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::USE_OPTIONAL));
	$assignStatic(XSAttributeChecker::INT_USE_REQUIRED, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::USE_REQUIRED));
	$assignStatic(XSAttributeChecker::INT_USE_PROHIBITED, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::USE_PROHIBITED));
	$assignStatic(XSAttributeChecker::INT_WS_PRESERVE, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSSimpleType::WS_PRESERVE));
	$assignStatic(XSAttributeChecker::INT_WS_REPLACE, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSSimpleType::WS_REPLACE));
	$assignStatic(XSAttributeChecker::INT_WS_COLLAPSE, $nc(XSAttributeChecker::fXIntPool)->getXInt($XSSimpleType::WS_COLLAPSE));
	$assignStatic(XSAttributeChecker::INT_UNBOUNDED, $nc(XSAttributeChecker::fXIntPool)->getXInt($SchemaSymbols::OCCURRENCE_UNBOUNDED));
	$assignStatic(XSAttributeChecker::fEleAttrsMapG, $new($HashMap, 29));
	$assignStatic(XSAttributeChecker::fEleAttrsMapL, $new($HashMap, 79));
	$assignStatic(XSAttributeChecker::fExtraDVs, $new($XSSimpleTypeArray, XSAttributeChecker::DT_COUNT));
	{
		$init($SchemaGrammar);
		$var($SchemaGrammar, grammar, $SchemaGrammar::SG_SchemaNS);
		$init($SchemaSymbols);
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_ANYURI, $cast($XSSimpleType, $($nc(grammar)->getGlobalTypeDecl($SchemaSymbols::ATTVAL_ANYURI))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_ID, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_ID))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_QNAME, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_QNAME))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_STRING, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_STRING))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_TOKEN, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_TOKEN))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_NCNAME, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_NCNAME))));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_XPATH, $nc(XSAttributeChecker::fExtraDVs)->get(XSAttributeChecker::DT_STRING));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_XPATH, $nc(XSAttributeChecker::fExtraDVs)->get(XSAttributeChecker::DT_STRING));
		$nc(XSAttributeChecker::fExtraDVs)->set(XSAttributeChecker::DT_LANGUAGE, $cast($XSSimpleType, $(grammar->getGlobalTypeDecl($SchemaSymbols::ATTVAL_LANGUAGE))));
	}
	{
		int32_t attCount = 0;
		int32_t ATT_ABSTRACT_D = attCount++;
		int32_t ATT_ATTRIBUTE_FD_D = attCount++;
		int32_t ATT_BASE_R = attCount++;
		int32_t ATT_BASE_N = attCount++;
		int32_t ATT_BLOCK_N = attCount++;
		int32_t ATT_BLOCK1_N = attCount++;
		int32_t ATT_BLOCK_D_D = attCount++;
		int32_t ATT_DEFAULT_N = attCount++;
		int32_t ATT_ELEMENT_FD_D = attCount++;
		int32_t ATT_FINAL_N = attCount++;
		int32_t ATT_FINAL1_N = attCount++;
		int32_t ATT_FINAL_D_D = attCount++;
		int32_t ATT_FIXED_N = attCount++;
		int32_t ATT_FIXED_D = attCount++;
		int32_t ATT_FORM_N = attCount++;
		int32_t ATT_ID_N = attCount++;
		int32_t ATT_ITEMTYPE_N = attCount++;
		int32_t ATT_MAXOCCURS_D = attCount++;
		int32_t ATT_MAXOCCURS1_D = attCount++;
		int32_t ATT_MEMBER_T_N = attCount++;
		int32_t ATT_MINOCCURS_D = attCount++;
		int32_t ATT_MINOCCURS1_D = attCount++;
		int32_t ATT_MIXED_D = attCount++;
		int32_t ATT_MIXED_N = attCount++;
		int32_t ATT_NAME_R = attCount++;
		int32_t ATT_NAMESPACE_D = attCount++;
		int32_t ATT_NAMESPACE_N = attCount++;
		int32_t ATT_NILLABLE_D = attCount++;
		int32_t ATT_PROCESS_C_D = attCount++;
		int32_t ATT_PUBLIC_R = attCount++;
		int32_t ATT_REF_R = attCount++;
		int32_t ATT_REFER_R = attCount++;
		int32_t ATT_SCHEMA_L_R = attCount++;
		int32_t ATT_SCHEMA_L_N = attCount++;
		int32_t ATT_SOURCE_N = attCount++;
		int32_t ATT_SUBSTITUTION_G_N = attCount++;
		int32_t ATT_SYSTEM_N = attCount++;
		int32_t ATT_TARGET_N_N = attCount++;
		int32_t ATT_TYPE_N = attCount++;
		int32_t ATT_USE_D = attCount++;
		int32_t ATT_VALUE_NNI_N = attCount++;
		int32_t ATT_VALUE_PI_N = attCount++;
		int32_t ATT_VALUE_STR_N = attCount++;
		int32_t ATT_VALUE_WS_N = attCount++;
		int32_t ATT_VERSION_N = attCount++;
		int32_t ATT_XML_LANG = attCount++;
		int32_t ATT_XPATH_R = attCount++;
		int32_t ATT_XPATH1_R = attCount++;
		$var($OneAttrArray, allAttrs, $new($OneAttrArray, attCount));
		$init($SchemaSymbols);
		$init($Boolean);
		allAttrs->set(ATT_ABSTRACT_D, $$new($OneAttr, $SchemaSymbols::ATT_ABSTRACT, XSAttributeChecker::DT_BOOLEAN, XSAttributeChecker::ATTIDX_ABSTRACT, $Boolean::FALSE));
		allAttrs->set(ATT_ATTRIBUTE_FD_D, $$new($OneAttr, $SchemaSymbols::ATT_ATTRIBUTEFORMDEFAULT, XSAttributeChecker::DT_FORM, XSAttributeChecker::ATTIDX_AFORMDEFAULT, XSAttributeChecker::INT_UNQUALIFIED));
		allAttrs->set(ATT_BASE_R, $$new($OneAttr, $SchemaSymbols::ATT_BASE, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_BASE, nullptr));
		allAttrs->set(ATT_BASE_N, $$new($OneAttr, $SchemaSymbols::ATT_BASE, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_BASE, nullptr));
		allAttrs->set(ATT_BLOCK_N, $$new($OneAttr, $SchemaSymbols::ATT_BLOCK, XSAttributeChecker::DT_BLOCK, XSAttributeChecker::ATTIDX_BLOCK, nullptr));
		allAttrs->set(ATT_BLOCK1_N, $$new($OneAttr, $SchemaSymbols::ATT_BLOCK, XSAttributeChecker::DT_BLOCK1, XSAttributeChecker::ATTIDX_BLOCK, nullptr));
		allAttrs->set(ATT_BLOCK_D_D, $$new($OneAttr, $SchemaSymbols::ATT_BLOCKDEFAULT, XSAttributeChecker::DT_BLOCK, XSAttributeChecker::ATTIDX_BLOCKDEFAULT, XSAttributeChecker::INT_EMPTY_SET));
		allAttrs->set(ATT_DEFAULT_N, $$new($OneAttr, $SchemaSymbols::ATT_DEFAULT, XSAttributeChecker::DT_STRING, XSAttributeChecker::ATTIDX_DEFAULT, nullptr));
		allAttrs->set(ATT_ELEMENT_FD_D, $$new($OneAttr, $SchemaSymbols::ATT_ELEMENTFORMDEFAULT, XSAttributeChecker::DT_FORM, XSAttributeChecker::ATTIDX_EFORMDEFAULT, XSAttributeChecker::INT_UNQUALIFIED));
		allAttrs->set(ATT_FINAL_N, $$new($OneAttr, $SchemaSymbols::ATT_FINAL, XSAttributeChecker::DT_FINAL, XSAttributeChecker::ATTIDX_FINAL, nullptr));
		allAttrs->set(ATT_FINAL1_N, $$new($OneAttr, $SchemaSymbols::ATT_FINAL, XSAttributeChecker::DT_FINAL1, XSAttributeChecker::ATTIDX_FINAL, nullptr));
		allAttrs->set(ATT_FINAL_D_D, $$new($OneAttr, $SchemaSymbols::ATT_FINALDEFAULT, XSAttributeChecker::DT_FINAL2, XSAttributeChecker::ATTIDX_FINALDEFAULT, XSAttributeChecker::INT_EMPTY_SET));
		allAttrs->set(ATT_FIXED_N, $$new($OneAttr, $SchemaSymbols::ATT_FIXED, XSAttributeChecker::DT_STRING, XSAttributeChecker::ATTIDX_FIXED, nullptr));
		allAttrs->set(ATT_FIXED_D, $$new($OneAttr, $SchemaSymbols::ATT_FIXED, XSAttributeChecker::DT_BOOLEAN, XSAttributeChecker::ATTIDX_FIXED, $Boolean::FALSE));
		allAttrs->set(ATT_FORM_N, $$new($OneAttr, $SchemaSymbols::ATT_FORM, XSAttributeChecker::DT_FORM, XSAttributeChecker::ATTIDX_FORM, nullptr));
		allAttrs->set(ATT_ID_N, $$new($OneAttr, $SchemaSymbols::ATT_ID, XSAttributeChecker::DT_ID, XSAttributeChecker::ATTIDX_ID, nullptr));
		allAttrs->set(ATT_ITEMTYPE_N, $$new($OneAttr, $SchemaSymbols::ATT_ITEMTYPE, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_ITEMTYPE, nullptr));
		allAttrs->set(ATT_MAXOCCURS_D, $$new($OneAttr, $SchemaSymbols::ATT_MAXOCCURS, XSAttributeChecker::DT_MAXOCCURS, XSAttributeChecker::ATTIDX_MAXOCCURS, $($nc(XSAttributeChecker::fXIntPool)->getXInt(1))));
		allAttrs->set(ATT_MAXOCCURS1_D, $$new($OneAttr, $SchemaSymbols::ATT_MAXOCCURS, XSAttributeChecker::DT_MAXOCCURS1, XSAttributeChecker::ATTIDX_MAXOCCURS, $($nc(XSAttributeChecker::fXIntPool)->getXInt(1))));
		allAttrs->set(ATT_MEMBER_T_N, $$new($OneAttr, $SchemaSymbols::ATT_MEMBERTYPES, XSAttributeChecker::DT_MEMBERTYPES, XSAttributeChecker::ATTIDX_MEMBERTYPES, nullptr));
		allAttrs->set(ATT_MINOCCURS_D, $$new($OneAttr, $SchemaSymbols::ATT_MINOCCURS, XSAttributeChecker::DT_NONNEGINT, XSAttributeChecker::ATTIDX_MINOCCURS, $($nc(XSAttributeChecker::fXIntPool)->getXInt(1))));
		allAttrs->set(ATT_MINOCCURS1_D, $$new($OneAttr, $SchemaSymbols::ATT_MINOCCURS, XSAttributeChecker::DT_MINOCCURS1, XSAttributeChecker::ATTIDX_MINOCCURS, $($nc(XSAttributeChecker::fXIntPool)->getXInt(1))));
		allAttrs->set(ATT_MIXED_D, $$new($OneAttr, $SchemaSymbols::ATT_MIXED, XSAttributeChecker::DT_BOOLEAN, XSAttributeChecker::ATTIDX_MIXED, $Boolean::FALSE));
		allAttrs->set(ATT_MIXED_N, $$new($OneAttr, $SchemaSymbols::ATT_MIXED, XSAttributeChecker::DT_BOOLEAN, XSAttributeChecker::ATTIDX_MIXED, nullptr));
		allAttrs->set(ATT_NAME_R, $$new($OneAttr, $SchemaSymbols::ATT_NAME, XSAttributeChecker::DT_NCNAME, XSAttributeChecker::ATTIDX_NAME, nullptr));
		allAttrs->set(ATT_NAMESPACE_D, $$new($OneAttr, $SchemaSymbols::ATT_NAMESPACE, XSAttributeChecker::DT_NAMESPACE, XSAttributeChecker::ATTIDX_NAMESPACE, XSAttributeChecker::INT_ANY_ANY));
		allAttrs->set(ATT_NAMESPACE_N, $$new($OneAttr, $SchemaSymbols::ATT_NAMESPACE, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_NAMESPACE, nullptr));
		allAttrs->set(ATT_NILLABLE_D, $$new($OneAttr, $SchemaSymbols::ATT_NILLABLE, XSAttributeChecker::DT_BOOLEAN, XSAttributeChecker::ATTIDX_NILLABLE, $Boolean::FALSE));
		allAttrs->set(ATT_PROCESS_C_D, $$new($OneAttr, $SchemaSymbols::ATT_PROCESSCONTENTS, XSAttributeChecker::DT_PROCESSCONTENTS, XSAttributeChecker::ATTIDX_PROCESSCONTENTS, XSAttributeChecker::INT_ANY_STRICT));
		allAttrs->set(ATT_PUBLIC_R, $$new($OneAttr, $SchemaSymbols::ATT_PUBLIC, XSAttributeChecker::DT_TOKEN, XSAttributeChecker::ATTIDX_PUBLIC, nullptr));
		allAttrs->set(ATT_REF_R, $$new($OneAttr, $SchemaSymbols::ATT_REF, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_REF, nullptr));
		allAttrs->set(ATT_REFER_R, $$new($OneAttr, $SchemaSymbols::ATT_REFER, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_REFER, nullptr));
		allAttrs->set(ATT_SCHEMA_L_R, $$new($OneAttr, $SchemaSymbols::ATT_SCHEMALOCATION, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_SCHEMALOCATION, nullptr));
		allAttrs->set(ATT_SCHEMA_L_N, $$new($OneAttr, $SchemaSymbols::ATT_SCHEMALOCATION, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_SCHEMALOCATION, nullptr));
		allAttrs->set(ATT_SOURCE_N, $$new($OneAttr, $SchemaSymbols::ATT_SOURCE, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_SOURCE, nullptr));
		allAttrs->set(ATT_SUBSTITUTION_G_N, $$new($OneAttr, $SchemaSymbols::ATT_SUBSTITUTIONGROUP, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_SUBSGROUP, nullptr));
		allAttrs->set(ATT_SYSTEM_N, $$new($OneAttr, $SchemaSymbols::ATT_SYSTEM, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_SYSTEM, nullptr));
		allAttrs->set(ATT_TARGET_N_N, $$new($OneAttr, $SchemaSymbols::ATT_TARGETNAMESPACE, XSAttributeChecker::DT_ANYURI, XSAttributeChecker::ATTIDX_TARGETNAMESPACE, nullptr));
		allAttrs->set(ATT_TYPE_N, $$new($OneAttr, $SchemaSymbols::ATT_TYPE, XSAttributeChecker::DT_QNAME, XSAttributeChecker::ATTIDX_TYPE, nullptr));
		allAttrs->set(ATT_USE_D, $$new($OneAttr, $SchemaSymbols::ATT_USE, XSAttributeChecker::DT_USE, XSAttributeChecker::ATTIDX_USE, XSAttributeChecker::INT_USE_OPTIONAL));
		allAttrs->set(ATT_VALUE_NNI_N, $$new($OneAttr, $SchemaSymbols::ATT_VALUE, XSAttributeChecker::DT_NONNEGINT, XSAttributeChecker::ATTIDX_VALUE, nullptr));
		allAttrs->set(ATT_VALUE_PI_N, $$new($OneAttr, $SchemaSymbols::ATT_VALUE, XSAttributeChecker::DT_POSINT, XSAttributeChecker::ATTIDX_VALUE, nullptr));
		allAttrs->set(ATT_VALUE_STR_N, $$new($OneAttr, $SchemaSymbols::ATT_VALUE, XSAttributeChecker::DT_STRING, XSAttributeChecker::ATTIDX_VALUE, nullptr));
		allAttrs->set(ATT_VALUE_WS_N, $$new($OneAttr, $SchemaSymbols::ATT_VALUE, XSAttributeChecker::DT_WHITESPACE, XSAttributeChecker::ATTIDX_VALUE, nullptr));
		allAttrs->set(ATT_VERSION_N, $$new($OneAttr, $SchemaSymbols::ATT_VERSION, XSAttributeChecker::DT_TOKEN, XSAttributeChecker::ATTIDX_VERSION, nullptr));
		allAttrs->set(ATT_XML_LANG, $$new($OneAttr, $SchemaSymbols::ATT_XML_LANG, XSAttributeChecker::DT_LANGUAGE, XSAttributeChecker::ATTIDX_XML_LANG, nullptr));
		allAttrs->set(ATT_XPATH_R, $$new($OneAttr, $SchemaSymbols::ATT_XPATH, XSAttributeChecker::DT_XPATH, XSAttributeChecker::ATTIDX_XPATH, nullptr));
		allAttrs->set(ATT_XPATH1_R, $$new($OneAttr, $SchemaSymbols::ATT_XPATH, XSAttributeChecker::DT_XPATH1, XSAttributeChecker::ATTIDX_XPATH, nullptr));
		$var($Container, attrList, nullptr);
		$assign(attrList, $Container::getContainer(5));
		$nc(attrList)->put($SchemaSymbols::ATT_DEFAULT, allAttrs->get(ATT_DEFAULT_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_TYPE, allAttrs->get(ATT_TYPE_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_ATTRIBUTE, attrList);
		$assign(attrList, $Container::getContainer(7));
		attrList->put($SchemaSymbols::ATT_DEFAULT, allAttrs->get(ATT_DEFAULT_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_N));
		attrList->put($SchemaSymbols::ATT_FORM, allAttrs->get(ATT_FORM_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_TYPE, allAttrs->get(ATT_TYPE_N));
		attrList->put($SchemaSymbols::ATT_USE, allAttrs->get(ATT_USE_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put(XSAttributeChecker::ATTRIBUTE_N, attrList);
		$assign(attrList, $Container::getContainer(5));
		attrList->put($SchemaSymbols::ATT_DEFAULT, allAttrs->get(ATT_DEFAULT_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_REF, allAttrs->get(ATT_REF_R));
		attrList->put($SchemaSymbols::ATT_USE, allAttrs->get(ATT_USE_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put(XSAttributeChecker::ATTRIBUTE_R, attrList);
		$assign(attrList, $Container::getContainer(10));
		attrList->put($SchemaSymbols::ATT_ABSTRACT, allAttrs->get(ATT_ABSTRACT_D));
		attrList->put($SchemaSymbols::ATT_BLOCK, allAttrs->get(ATT_BLOCK_N));
		attrList->put($SchemaSymbols::ATT_DEFAULT, allAttrs->get(ATT_DEFAULT_N));
		attrList->put($SchemaSymbols::ATT_FINAL, allAttrs->get(ATT_FINAL_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_NILLABLE, allAttrs->get(ATT_NILLABLE_D));
		attrList->put($SchemaSymbols::ATT_SUBSTITUTIONGROUP, allAttrs->get(ATT_SUBSTITUTION_G_N));
		attrList->put($SchemaSymbols::ATT_TYPE, allAttrs->get(ATT_TYPE_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_ELEMENT, attrList);
		$assign(attrList, $Container::getContainer(10));
		attrList->put($SchemaSymbols::ATT_BLOCK, allAttrs->get(ATT_BLOCK_N));
		attrList->put($SchemaSymbols::ATT_DEFAULT, allAttrs->get(ATT_DEFAULT_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_N));
		attrList->put($SchemaSymbols::ATT_FORM, allAttrs->get(ATT_FORM_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS_D));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_NILLABLE, allAttrs->get(ATT_NILLABLE_D));
		attrList->put($SchemaSymbols::ATT_TYPE, allAttrs->get(ATT_TYPE_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put(XSAttributeChecker::ELEMENT_N, attrList);
		$assign(attrList, $Container::getContainer(4));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS_D));
		attrList->put($SchemaSymbols::ATT_REF, allAttrs->get(ATT_REF_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put(XSAttributeChecker::ELEMENT_R, attrList);
		$assign(attrList, $Container::getContainer(6));
		attrList->put($SchemaSymbols::ATT_ABSTRACT, allAttrs->get(ATT_ABSTRACT_D));
		attrList->put($SchemaSymbols::ATT_BLOCK, allAttrs->get(ATT_BLOCK1_N));
		attrList->put($SchemaSymbols::ATT_FINAL, allAttrs->get(ATT_FINAL_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MIXED, allAttrs->get(ATT_MIXED_D));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_COMPLEXTYPE, attrList);
		$assign(attrList, $Container::getContainer(4));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_PUBLIC, allAttrs->get(ATT_PUBLIC_R));
		attrList->put($SchemaSymbols::ATT_SYSTEM, allAttrs->get(ATT_SYSTEM_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_NOTATION, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MIXED, allAttrs->get(ATT_MIXED_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_COMPLEXTYPE, attrList);
		$assign(attrList, $Container::getContainer(1));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_SIMPLECONTENT, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_BASE, allAttrs->get(ATT_BASE_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_RESTRICTION, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_BASE, allAttrs->get(ATT_BASE_R));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_EXTENSION, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_REF, allAttrs->get(ATT_REF_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ATTRIBUTEGROUP, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAMESPACE, allAttrs->get(ATT_NAMESPACE_D));
		attrList->put($SchemaSymbols::ATT_PROCESSCONTENTS, allAttrs->get(ATT_PROCESS_C_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ANYATTRIBUTE, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MIXED, allAttrs->get(ATT_MIXED_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_COMPLEXCONTENT, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_ATTRIBUTEGROUP, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_GROUP, attrList);
		$assign(attrList, $Container::getContainer(4));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS_D));
		attrList->put($SchemaSymbols::ATT_REF, allAttrs->get(ATT_REF_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_GROUP, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS1_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS1_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ALL, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_CHOICE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_SEQUENCE, attrList);
		$assign(attrList, $Container::getContainer(5));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MAXOCCURS, allAttrs->get(ATT_MAXOCCURS_D));
		attrList->put($SchemaSymbols::ATT_MINOCCURS, allAttrs->get(ATT_MINOCCURS_D));
		attrList->put($SchemaSymbols::ATT_NAMESPACE, allAttrs->get(ATT_NAMESPACE_D));
		attrList->put($SchemaSymbols::ATT_PROCESSCONTENTS, allAttrs->get(ATT_PROCESS_C_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ANY, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_UNIQUE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_KEY, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		attrList->put($SchemaSymbols::ATT_REFER, allAttrs->get(ATT_REFER_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_KEYREF, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_XPATH, allAttrs->get(ATT_XPATH_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_SELECTOR, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_XPATH, allAttrs->get(ATT_XPATH1_R));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_FIELD, attrList);
		$assign(attrList, $Container::getContainer(1));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_ANNOTATION, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ANNOTATION, attrList);
		$assign(attrList, $Container::getContainer(1));
		attrList->put($SchemaSymbols::ATT_SOURCE, allAttrs->get(ATT_SOURCE_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_APPINFO, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_APPINFO, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_SOURCE, allAttrs->get(ATT_SOURCE_N));
		attrList->put($SchemaSymbols::ATT_XML_LANG, allAttrs->get(ATT_XML_LANG));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_DOCUMENTATION, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_DOCUMENTATION, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_FINAL, allAttrs->get(ATT_FINAL1_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAME, allAttrs->get(ATT_NAME_R));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_SIMPLETYPE, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_FINAL, allAttrs->get(ATT_FINAL1_N));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_SIMPLETYPE, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_ITEMTYPE, allAttrs->get(ATT_ITEMTYPE_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_LIST, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_MEMBERTYPES, allAttrs->get(ATT_MEMBER_T_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_UNION, attrList);
		$assign(attrList, $Container::getContainer(8));
		attrList->put($SchemaSymbols::ATT_ATTRIBUTEFORMDEFAULT, allAttrs->get(ATT_ATTRIBUTE_FD_D));
		attrList->put($SchemaSymbols::ATT_BLOCKDEFAULT, allAttrs->get(ATT_BLOCK_D_D));
		attrList->put($SchemaSymbols::ATT_ELEMENTFORMDEFAULT, allAttrs->get(ATT_ELEMENT_FD_D));
		attrList->put($SchemaSymbols::ATT_FINALDEFAULT, allAttrs->get(ATT_FINAL_D_D));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_TARGETNAMESPACE, allAttrs->get(ATT_TARGET_N_N));
		attrList->put($SchemaSymbols::ATT_VERSION, allAttrs->get(ATT_VERSION_N));
		attrList->put($SchemaSymbols::ATT_XML_LANG, allAttrs->get(ATT_XML_LANG));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_SCHEMA, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_SCHEMALOCATION, allAttrs->get(ATT_SCHEMA_L_R));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_INCLUDE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_REDEFINE, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_NAMESPACE, allAttrs->get(ATT_NAMESPACE_N));
		attrList->put($SchemaSymbols::ATT_SCHEMALOCATION, allAttrs->get(ATT_SCHEMA_L_N));
		$nc(XSAttributeChecker::fEleAttrsMapG)->put($SchemaSymbols::ELT_IMPORT, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_NNI_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_LENGTH, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MINLENGTH, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MAXLENGTH, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_FRACTIONDIGITS, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_PI_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_TOTALDIGITS, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_STR_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_PATTERN, attrList);
		$assign(attrList, $Container::getContainer(2));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_STR_N));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_ENUMERATION, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_WS_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_WHITESPACE, attrList);
		$assign(attrList, $Container::getContainer(3));
		attrList->put($SchemaSymbols::ATT_ID, allAttrs->get(ATT_ID_N));
		attrList->put($SchemaSymbols::ATT_VALUE, allAttrs->get(ATT_VALUE_STR_N));
		attrList->put($SchemaSymbols::ATT_FIXED, allAttrs->get(ATT_FIXED_D));
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MAXINCLUSIVE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MAXEXCLUSIVE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MININCLUSIVE, attrList);
		$nc(XSAttributeChecker::fEleAttrsMapL)->put($SchemaSymbols::ELT_MINEXCLUSIVE, attrList);
	}
	$assignStatic(XSAttributeChecker::fSeenTemp, $new($booleans, XSAttributeChecker::ATTIDX_COUNT));
	$assignStatic(XSAttributeChecker::fTempArray, $new($ObjectArray, XSAttributeChecker::ATTIDX_COUNT));
}

XSAttributeChecker::XSAttributeChecker() {
}

$Class* XSAttributeChecker::load$($String* name, bool initialize) {
	$loadClass(XSAttributeChecker, name, initialize, &_XSAttributeChecker_ClassInfo_, clinit$XSAttributeChecker, allocate$XSAttributeChecker);
	return class$;
}

$Class* XSAttributeChecker::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com