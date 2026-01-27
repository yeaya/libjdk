#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$XSAnyType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/ObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMap4Types.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <java/lang/Math.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARATION
#undef ATTRIBUTE_GROUP
#undef ATTVAL_ANYSIMPLETYPE
#undef BASICSET_COUNT
#undef COMPLEX_TYPE
#undef DEFER_NODE_EXPANSION_FEATURE
#undef ELEMENT_DECLARATION
#undef EMPTY_LIST
#undef EMPTY_MAP
#undef FULLSET_COUNT
#undef GLOBAL_COMP
#undef GRAMMAR_XS
#undef GRAMMAR_XSI
#undef IDENTITY_CONSTRAINT
#undef INC_SIZE
#undef INITIAL_SIZE
#undef MAX_COMP_IDX
#undef MODEL_GROUP_DEFINITION
#undef NAMESPACES_FEATURE
#undef NOTATION_DECLARATION
#undef REDEFINED_GROUP_INIT_SIZE
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_VERSION_1_0
#undef SCHEMA_VERSION_1_0_EXTENDED
#undef SG_XSI
#undef SIMPLE_TYPE
#undef TYPE_DEFINITION
#undef URI_SCHEMAFORSCHEMA
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSAnnotationImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>;
using $XSComplexTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $XSGroupDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>;
using $SimpleLocatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>;
using $XSGrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar>;
using $XSNamedMapArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $ObjectListArray = $Array<::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaGrammar$XSAnyType = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$XSAnyType;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSModelImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::ObjectListImpl;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $XSNamedMap4Types = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMap4Types;
using $XSNamedMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XSGrammar = ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSAttributeGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ObjectList = ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _SchemaGrammar_FieldInfo_[] = {
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, 0, $field(SchemaGrammar, fTargetNamespace)},
	{"fGlobalAttrDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalAttrDecls)},
	{"fGlobalAttrGrpDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalAttrGrpDecls)},
	{"fGlobalElemDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalElemDecls)},
	{"fGlobalGroupDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalGroupDecls)},
	{"fGlobalNotationDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalNotationDecls)},
	{"fGlobalIDConstraintDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalIDConstraintDecls)},
	{"fGlobalTypeDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalTypeDecls)},
	{"fGlobalAttrDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalAttrDeclsExt)},
	{"fGlobalAttrGrpDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalAttrGrpDeclsExt)},
	{"fGlobalElemDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalElemDeclsExt)},
	{"fGlobalGroupDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalGroupDeclsExt)},
	{"fGlobalNotationDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalNotationDeclsExt)},
	{"fGlobalIDConstraintDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalIDConstraintDeclsExt)},
	{"fGlobalTypeDeclsExt", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fGlobalTypeDeclsExt)},
	{"fAllGlobalElemDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(SchemaGrammar, fAllGlobalElemDecls)},
	{"fGrammarDescription", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;", nullptr, 0, $field(SchemaGrammar, fGrammarDescription)},
	{"fAnnotations", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;", nullptr, 0, $field(SchemaGrammar, fAnnotations)},
	{"fNumAnnotations", "I", nullptr, 0, $field(SchemaGrammar, fNumAnnotations)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(SchemaGrammar, fSymbolTable)},
	{"fSAXParser", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;>;", $PRIVATE, $field(SchemaGrammar, fSAXParser)},
	{"fDOMParser", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;>;", $PRIVATE, $field(SchemaGrammar, fDOMParser)},
	{"fIsImmutable", "Z", nullptr, $PRIVATE, $field(SchemaGrammar, fIsImmutable)},
	{"BASICSET_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, BASICSET_COUNT)},
	{"FULLSET_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, FULLSET_COUNT)},
	{"GRAMMAR_XS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, GRAMMAR_XS)},
	{"GRAMMAR_XSI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, GRAMMAR_XSI)},
	{"fImported", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;", 0, $field(SchemaGrammar, fImported)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, INITIAL_SIZE)},
	{"INC_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, INC_SIZE)},
	{"fCTCount", "I", nullptr, $PRIVATE, $field(SchemaGrammar, fCTCount)},
	{"fComplexTypeDecls", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PRIVATE, $field(SchemaGrammar, fComplexTypeDecls)},
	{"fCTLocators", "[Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $PRIVATE, $field(SchemaGrammar, fCTLocators)},
	{"REDEFINED_GROUP_INIT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, REDEFINED_GROUP_INIT_SIZE)},
	{"fRGCount", "I", nullptr, $PRIVATE, $field(SchemaGrammar, fRGCount)},
	{"fRedefinedGroupDecls", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $PRIVATE, $field(SchemaGrammar, fRedefinedGroupDecls)},
	{"fRGLocators", "[Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $PRIVATE, $field(SchemaGrammar, fRGLocators)},
	{"fFullChecked", "Z", nullptr, 0, $field(SchemaGrammar, fFullChecked)},
	{"fSubGroupCount", "I", nullptr, $PRIVATE, $field(SchemaGrammar, fSubGroupCount)},
	{"fSubGroups", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(SchemaGrammar, fSubGroups)},
	{"fAnyType", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaGrammar, fAnyType)},
	{"SG_SchemaNS", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaGrammar, SG_SchemaNS)},
	{"SG_SchemaNSExtended", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaGrammar, SG_SchemaNSExtended)},
	{"fAnySimpleType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaGrammar, fAnySimpleType)},
	{"SG_XSI", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaGrammar, SG_XSI)},
	{"MAX_COMP_IDX", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaGrammar, MAX_COMP_IDX)},
	{"GLOBAL_COMP", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaGrammar, GLOBAL_COMP)},
	{"fComponents", "[Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PRIVATE, $field(SchemaGrammar, fComponents)},
	{"fComponentsExt", "[Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PRIVATE, $field(SchemaGrammar, fComponentsExt)},
	{"fDocuments", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE, $field(SchemaGrammar, fDocuments)},
	{"fLocations", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SchemaGrammar, fLocations)},
	{}
};

$MethodInfo _SchemaGrammar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(SchemaGrammar, init$, void)},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(SchemaGrammar, init$, void, $String*, $XSDDescription*, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(SchemaGrammar, init$, void, SchemaGrammar*)},
	{"addAnnotation", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addAnnotation, void, $XSAnnotationImpl*)},
	{"addComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addComplexTypeDecl, void, $XSComplexTypeDecl*, $SimpleLocator*)},
	{"addDocument", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SchemaGrammar, addDocument, void, Object$*, $String*)},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalAttributeDecl, void, $XSAttributeDecl*)},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalAttributeDecl, void, $XSAttributeDecl*, $String*)},
	{"addGlobalAttributeGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalAttributeGroupDecl, void, $XSAttributeGroupDecl*)},
	{"addGlobalAttributeGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalAttributeGroupDecl, void, $XSAttributeGroupDecl*, $String*)},
	{"addGlobalComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalComplexTypeDecl, void, $XSComplexTypeDecl*)},
	{"addGlobalComplexTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalComplexTypeDecl, void, $XSComplexTypeDecl*, $String*)},
	{"addGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalElementDecl, void, $XSElementDecl*)},
	{"addGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalElementDecl, void, $XSElementDecl*, $String*)},
	{"addGlobalElementDeclAll", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalElementDeclAll, void, $XSElementDecl*)},
	{"addGlobalGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalGroupDecl, void, $XSGroupDecl*)},
	{"addGlobalGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalGroupDecl, void, $XSGroupDecl*, $String*)},
	{"addGlobalNotationDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalNotationDecl, void, $XSNotationDecl*)},
	{"addGlobalNotationDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalNotationDecl, void, $XSNotationDecl*, $String*)},
	{"addGlobalSimpleTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalSimpleTypeDecl, void, $XSSimpleType*)},
	{"addGlobalSimpleTypeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalSimpleTypeDecl, void, $XSSimpleType*, $String*)},
	{"addGlobalTypeDecl", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalTypeDecl, void, $XSTypeDefinition*)},
	{"addGlobalTypeDecl", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addGlobalTypeDecl, void, $XSTypeDefinition*, $String*)},
	{"addIDConstraintDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, addIDConstraintDecl, void, $XSElementDecl*, $IdentityConstraint*)},
	{"addIDConstraintDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, addIDConstraintDecl, void, $XSElementDecl*, $IdentityConstraint*, $String*)},
	{"addRedefinedGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, addRedefinedGroupDecl, void, $XSGroupDecl*, $XSGroupDecl*, $SimpleLocator*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getAnnotations, $XSObjectList*)},
	{"getAttributeDeclaration", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getAttributeDeclaration, $XSAttributeDeclaration*, $String*)},
	{"getAttributeGroup", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getAttributeGroup, $XSAttributeGroupDefinition*, $String*)},
	{"getComponents", "(S)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SchemaGrammar, getComponents, $XSNamedMap*, int16_t)},
	{"getComponentsExt", "(S)Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SchemaGrammar, getComponentsExt, $ObjectList*, int16_t)},
	{"getDOMParser", "()Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, $SYNCHRONIZED, $virtualMethod(SchemaGrammar, getDOMParser, $DOMParser*)},
	{"getDocumentLocations", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getDocumentLocations, $StringList*)},
	{"getElementDeclaration", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getElementDeclaration, $XSElementDeclaration*, $String*)},
	{"getGlobalAttributeDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalAttributeDecl, $XSAttributeDecl*, $String*)},
	{"getGlobalAttributeDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalAttributeDecl, $XSAttributeDecl*, $String*, $String*)},
	{"getGlobalAttributeGroupDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalAttributeGroupDecl, $XSAttributeGroupDecl*, $String*)},
	{"getGlobalAttributeGroupDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalAttributeGroupDecl, $XSAttributeGroupDecl*, $String*, $String*)},
	{"getGlobalElementDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalElementDecl, $XSElementDecl*, $String*)},
	{"getGlobalElementDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalElementDecl, $XSElementDecl*, $String*, $String*)},
	{"getGlobalGroupDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalGroupDecl, $XSGroupDecl*, $String*)},
	{"getGlobalGroupDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalGroupDecl, $XSGroupDecl*, $String*, $String*)},
	{"getGlobalNotationDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalNotationDecl, $XSNotationDecl*, $String*)},
	{"getGlobalNotationDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalNotationDecl, $XSNotationDecl*, $String*, $String*)},
	{"getGlobalTypeDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalTypeDecl, $XSTypeDefinition*, $String*)},
	{"getGlobalTypeDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getGlobalTypeDecl, $XSTypeDefinition*, $String*, $String*)},
	{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getGrammarDescription, $XMLGrammarDescription*)},
	{"getIDCDefinition", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getIDCDefinition, $XSIDCDefinition*, $String*)},
	{"getIDConstraintDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getIDConstraintDecl, $IdentityConstraint*, $String*)},
	{"getIDConstraintDecl", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getIDConstraintDecl, $IdentityConstraint*, $String*, $String*)},
	{"getImportedGrammars", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;", $PUBLIC, $virtualMethod(SchemaGrammar, getImportedGrammars, $List*)},
	{"getModelGroupDefinition", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getModelGroupDefinition, $XSModelGroupDefinition*, $String*)},
	{"getNotationDeclaration", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getNotationDeclaration, $XSNotationDeclaration*, $String*)},
	{"getRGLocators", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $FINAL, $method(SchemaGrammar, getRGLocators, $SimpleLocatorArray*)},
	{"getRedefinedGroupDecls", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $FINAL, $method(SchemaGrammar, getRedefinedGroupDecls, $XSGroupDeclArray*)},
	{"getS4SGrammar", "(S)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PUBLIC | $STATIC, $staticMethod(SchemaGrammar, getS4SGrammar, SchemaGrammar*, int16_t)},
	{"getSAXParser", "()Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;", nullptr, $SYNCHRONIZED, $virtualMethod(SchemaGrammar, getSAXParser, $SAXParser*)},
	{"getSchemaNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getSchemaNamespace, $String*)},
	{"getSubstitutionGroups", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $FINAL, $method(SchemaGrammar, getSubstitutionGroups, $XSElementDeclArray*)},
	{"getTargetNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, getTargetNamespace, $String*)},
	{"getTypeDefinition", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, getTypeDefinition, $XSTypeDefinition*, $String*)},
	{"getUncheckedCTLocators", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $FINAL, $method(SchemaGrammar, getUncheckedCTLocators, $SimpleLocatorArray*)},
	{"getUncheckedComplexTypeDecls", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $FINAL, $method(SchemaGrammar, getUncheckedComplexTypeDecls, $XSComplexTypeDeclArray*)},
	{"hasIDConstraints", "()Z", nullptr, $PUBLIC | $FINAL, $method(SchemaGrammar, hasIDConstraints, bool)},
	{"isImmutable", "()Z", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, isImmutable, bool)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, isNamespaceAware, bool)},
	{"removeDocument", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SchemaGrammar, removeDocument, void, int32_t)},
	{"resetComponents", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SchemaGrammar, resetComponents, void)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $STATIC | $FINAL, $staticMethod(SchemaGrammar, resize, $XSComplexTypeDeclArray*, $XSComplexTypeDeclArray*, int32_t)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $STATIC | $FINAL, $staticMethod(SchemaGrammar, resize, $XSGroupDeclArray*, $XSGroupDeclArray*, int32_t)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $STATIC | $FINAL, $staticMethod(SchemaGrammar, resize, $XSElementDeclArray*, $XSElementDeclArray*, int32_t)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $STATIC | $FINAL, $staticMethod(SchemaGrammar, resize, $SimpleLocatorArray*, $SimpleLocatorArray*, int32_t)},
	{"setImmutable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, setImmutable, void, bool)},
	{"setImportedGrammars", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)V", $PUBLIC, $virtualMethod(SchemaGrammar, setImportedGrammars, void, $List*)},
	{"setUncheckedTypeNum", "(I)V", nullptr, $FINAL, $method(SchemaGrammar, setUncheckedTypeNum, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toXSModel", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, toXSModel, $XSModel*)},
	{"toXSModel", "([Lcom/sun/org/apache/xerces/internal/xni/grammars/XSGrammar;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar, toXSModel, $XSModel*, $XSGrammarArray*)},
	{}
};

$InnerClassInfo _SchemaGrammar_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinAttrDecl", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "BuiltinAttrDecl", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$XSAnyType", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "XSAnyType", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$Schema4Annotations", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "Schema4Annotations", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinSchemaGrammar", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "BuiltinSchemaGrammar", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SchemaGrammar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XSGrammar,com.sun.org.apache.xerces.internal.xs.XSNamespaceItem",
	_SchemaGrammar_FieldInfo_,
	_SchemaGrammar_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaGrammar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinAttrDecl,com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$XSAnyType,com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$Schema4Annotations,com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinSchemaGrammar"
};

$Object* allocate$SchemaGrammar($Class* clazz) {
	return $of($alloc(SchemaGrammar));
}

int32_t SchemaGrammar::hashCode() {
	 return this->$XSGrammar::hashCode();
}

bool SchemaGrammar::equals(Object$* arg0) {
	 return this->$XSGrammar::equals(arg0);
}

$Object* SchemaGrammar::clone() {
	 return this->$XSGrammar::clone();
}

$String* SchemaGrammar::toString() {
	 return this->$XSGrammar::toString();
}

void SchemaGrammar::finalize() {
	this->$XSGrammar::finalize();
}

$XSComplexTypeDecl* SchemaGrammar::fAnyType = nullptr;
$SchemaGrammar$BuiltinSchemaGrammar* SchemaGrammar::SG_SchemaNS = nullptr;
$SchemaGrammar$BuiltinSchemaGrammar* SchemaGrammar::SG_SchemaNSExtended = nullptr;
$XSSimpleType* SchemaGrammar::fAnySimpleType = nullptr;
$SchemaGrammar$BuiltinSchemaGrammar* SchemaGrammar::SG_XSI = nullptr;
$booleans* SchemaGrammar::GLOBAL_COMP = nullptr;

void SchemaGrammar::init$() {
	$set(this, fGrammarDescription, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fSAXParser, nullptr);
	$set(this, fDOMParser, nullptr);
	this->fIsImmutable = false;
	$set(this, fImported, nullptr);
	this->fCTCount = 0;
	$set(this, fComplexTypeDecls, $new($XSComplexTypeDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fCTLocators, $new($SimpleLocatorArray, SchemaGrammar::INITIAL_SIZE));
	this->fRGCount = 0;
	$set(this, fRedefinedGroupDecls, $new($XSGroupDeclArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE));
	$set(this, fRGLocators, $new($SimpleLocatorArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE / 2));
	this->fFullChecked = false;
	this->fSubGroupCount = 0;
	$set(this, fSubGroups, $new($XSElementDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fComponents, nullptr);
	$set(this, fComponentsExt, nullptr);
	$set(this, fDocuments, nullptr);
	$set(this, fLocations, nullptr);
}

void SchemaGrammar::init$($String* targetNamespace, $XSDDescription* grammarDesc, $SymbolTable* symbolTable) {
	$set(this, fGrammarDescription, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fSAXParser, nullptr);
	$set(this, fDOMParser, nullptr);
	this->fIsImmutable = false;
	$set(this, fImported, nullptr);
	this->fCTCount = 0;
	$set(this, fComplexTypeDecls, $new($XSComplexTypeDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fCTLocators, $new($SimpleLocatorArray, SchemaGrammar::INITIAL_SIZE));
	this->fRGCount = 0;
	$set(this, fRedefinedGroupDecls, $new($XSGroupDeclArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE));
	$set(this, fRGLocators, $new($SimpleLocatorArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE / 2));
	this->fFullChecked = false;
	this->fSubGroupCount = 0;
	$set(this, fSubGroups, $new($XSElementDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fComponents, nullptr);
	$set(this, fComponentsExt, nullptr);
	$set(this, fDocuments, nullptr);
	$set(this, fLocations, nullptr);
	$set(this, fTargetNamespace, targetNamespace);
	$set(this, fGrammarDescription, grammarDesc);
	$set(this, fSymbolTable, symbolTable);
	$set(this, fGlobalAttrDecls, $new($SymbolHash, 12));
	$set(this, fGlobalAttrGrpDecls, $new($SymbolHash, 5));
	$set(this, fGlobalElemDecls, $new($SymbolHash, 25));
	$set(this, fGlobalGroupDecls, $new($SymbolHash, 5));
	$set(this, fGlobalNotationDecls, $new($SymbolHash, 1));
	$set(this, fGlobalIDConstraintDecls, $new($SymbolHash, 3));
	$set(this, fGlobalAttrDeclsExt, $new($SymbolHash, 12));
	$set(this, fGlobalAttrGrpDeclsExt, $new($SymbolHash, 5));
	$set(this, fGlobalElemDeclsExt, $new($SymbolHash, 25));
	$set(this, fGlobalGroupDeclsExt, $new($SymbolHash, 5));
	$set(this, fGlobalNotationDeclsExt, $new($SymbolHash, 1));
	$set(this, fGlobalIDConstraintDeclsExt, $new($SymbolHash, 3));
	$set(this, fGlobalTypeDeclsExt, $new($SymbolHash, 25));
	$set(this, fAllGlobalElemDecls, $new($SymbolHash, 25));
	$init($SchemaSymbols);
	if (this->fTargetNamespace == $SchemaSymbols::URI_SCHEMAFORSCHEMA) {
		$set(this, fGlobalTypeDecls, $nc($nc(SchemaGrammar::SG_SchemaNS)->fGlobalTypeDecls)->makeClone());
	} else {
		$set(this, fGlobalTypeDecls, $new($SymbolHash, 25));
	}
}

void SchemaGrammar::init$(SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$set(this, fGrammarDescription, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fSAXParser, nullptr);
	$set(this, fDOMParser, nullptr);
	this->fIsImmutable = false;
	$set(this, fImported, nullptr);
	this->fCTCount = 0;
	$set(this, fComplexTypeDecls, $new($XSComplexTypeDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fCTLocators, $new($SimpleLocatorArray, SchemaGrammar::INITIAL_SIZE));
	this->fRGCount = 0;
	$set(this, fRedefinedGroupDecls, $new($XSGroupDeclArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE));
	$set(this, fRGLocators, $new($SimpleLocatorArray, SchemaGrammar::REDEFINED_GROUP_INIT_SIZE / 2));
	this->fFullChecked = false;
	this->fSubGroupCount = 0;
	$set(this, fSubGroups, $new($XSElementDeclArray, SchemaGrammar::INITIAL_SIZE));
	$set(this, fComponents, nullptr);
	$set(this, fComponentsExt, nullptr);
	$set(this, fDocuments, nullptr);
	$set(this, fLocations, nullptr);
	$set(this, fTargetNamespace, $nc(grammar)->fTargetNamespace);
	$set(this, fGrammarDescription, $nc(grammar->fGrammarDescription)->makeClone());
	$set(this, fSymbolTable, grammar->fSymbolTable);
	$set(this, fGlobalAttrDecls, $nc(grammar->fGlobalAttrDecls)->makeClone());
	$set(this, fGlobalAttrGrpDecls, $nc(grammar->fGlobalAttrGrpDecls)->makeClone());
	$set(this, fGlobalElemDecls, $nc(grammar->fGlobalElemDecls)->makeClone());
	$set(this, fGlobalGroupDecls, $nc(grammar->fGlobalGroupDecls)->makeClone());
	$set(this, fGlobalNotationDecls, $nc(grammar->fGlobalNotationDecls)->makeClone());
	$set(this, fGlobalIDConstraintDecls, $nc(grammar->fGlobalIDConstraintDecls)->makeClone());
	$set(this, fGlobalTypeDecls, $nc(grammar->fGlobalTypeDecls)->makeClone());
	$set(this, fGlobalAttrDeclsExt, $nc(grammar->fGlobalAttrDeclsExt)->makeClone());
	$set(this, fGlobalAttrGrpDeclsExt, $nc(grammar->fGlobalAttrGrpDeclsExt)->makeClone());
	$set(this, fGlobalElemDeclsExt, $nc(grammar->fGlobalElemDeclsExt)->makeClone());
	$set(this, fGlobalGroupDeclsExt, $nc(grammar->fGlobalGroupDeclsExt)->makeClone());
	$set(this, fGlobalNotationDeclsExt, $nc(grammar->fGlobalNotationDeclsExt)->makeClone());
	$set(this, fGlobalIDConstraintDeclsExt, $nc(grammar->fGlobalIDConstraintDeclsExt)->makeClone());
	$set(this, fGlobalTypeDeclsExt, $nc(grammar->fGlobalTypeDeclsExt)->makeClone());
	$set(this, fAllGlobalElemDecls, $nc(grammar->fAllGlobalElemDecls)->makeClone());
	this->fNumAnnotations = grammar->fNumAnnotations;
	if (this->fNumAnnotations > 0) {
		$set(this, fAnnotations, $new($XSAnnotationImplArray, $nc(grammar->fAnnotations)->length));
		$System::arraycopy(grammar->fAnnotations, 0, this->fAnnotations, 0, this->fNumAnnotations);
	}
	this->fSubGroupCount = grammar->fSubGroupCount;
	if (this->fSubGroupCount > 0) {
		$set(this, fSubGroups, $new($XSElementDeclArray, $nc(grammar->fSubGroups)->length));
		$System::arraycopy(grammar->fSubGroups, 0, this->fSubGroups, 0, this->fSubGroupCount);
	}
	this->fCTCount = grammar->fCTCount;
	if (this->fCTCount > 0) {
		$set(this, fComplexTypeDecls, $new($XSComplexTypeDeclArray, $nc(grammar->fComplexTypeDecls)->length));
		$set(this, fCTLocators, $new($SimpleLocatorArray, $nc(grammar->fCTLocators)->length));
		$System::arraycopy(grammar->fComplexTypeDecls, 0, this->fComplexTypeDecls, 0, this->fCTCount);
		$System::arraycopy(grammar->fCTLocators, 0, this->fCTLocators, 0, this->fCTCount);
	}
	this->fRGCount = grammar->fRGCount;
	if (this->fRGCount > 0) {
		$set(this, fRedefinedGroupDecls, $new($XSGroupDeclArray, $nc(grammar->fRedefinedGroupDecls)->length));
		$set(this, fRGLocators, $new($SimpleLocatorArray, $nc(grammar->fRGLocators)->length));
		$System::arraycopy(grammar->fRedefinedGroupDecls, 0, this->fRedefinedGroupDecls, 0, this->fRGCount);
		$System::arraycopy(grammar->fRGLocators, 0, this->fRGLocators, 0, this->fRGCount / 2);
	}
	if (grammar->fImported != nullptr) {
		$set(this, fImported, $new($ArrayList));
		for (int32_t i = 0; i < $nc(grammar->fImported)->size(); ++i) {
			$nc(this->fImported)->add($cast(SchemaGrammar, $($nc(grammar->fImported)->get(i))));
		}
	}
	if (grammar->fLocations != nullptr) {
		for (int32_t k = 0; k < $nc(grammar->fLocations)->size(); ++k) {
			addDocument(nullptr, $cast($String, $($nc(grammar->fLocations)->get(k))));
		}
	}
}

$XMLGrammarDescription* SchemaGrammar::getGrammarDescription() {
	return this->fGrammarDescription;
}

bool SchemaGrammar::isNamespaceAware() {
	return true;
}

void SchemaGrammar::setImportedGrammars($List* importedGrammars) {
	$set(this, fImported, importedGrammars);
}

$List* SchemaGrammar::getImportedGrammars() {
	return this->fImported;
}

$String* SchemaGrammar::getTargetNamespace() {
	return this->fTargetNamespace;
}

void SchemaGrammar::addGlobalAttributeDecl($XSAttributeDecl* decl) {
	$nc(this->fGlobalAttrDecls)->put($nc(decl)->fName, decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalAttributeDecl($XSAttributeDecl* decl, $String* location) {
	$nc(this->fGlobalAttrDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $nc(decl)->fName}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl) {
	$nc(this->fGlobalAttrGrpDecls)->put($nc(decl)->fName, decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl, $String* location) {
	$nc(this->fGlobalAttrGrpDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $nc(decl)->fName}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalElementDeclAll($XSElementDecl* decl) {
	if ($nc(this->fAllGlobalElemDecls)->get(decl) == nullptr) {
		$nc(this->fAllGlobalElemDecls)->put(decl, decl);
		if ($nc(decl)->fSubGroup != nullptr) {
			if (this->fSubGroupCount == $nc(this->fSubGroups)->length) {
				$set(this, fSubGroups, resize(this->fSubGroups, this->fSubGroupCount + SchemaGrammar::INC_SIZE));
			}
			$nc(this->fSubGroups)->set(this->fSubGroupCount++, decl);
		}
	}
}

void SchemaGrammar::addGlobalElementDecl($XSElementDecl* decl) {
	$nc(this->fGlobalElemDecls)->put($nc(decl)->fName, decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalElementDecl($XSElementDecl* decl, $String* location) {
	$nc(this->fGlobalElemDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $nc(decl)->fName}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalGroupDecl($XSGroupDecl* decl) {
	$nc(this->fGlobalGroupDecls)->put($nc(decl)->fName, decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalGroupDecl($XSGroupDecl* decl, $String* location) {
	$nc(this->fGlobalGroupDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $nc(decl)->fName}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalNotationDecl($XSNotationDecl* decl) {
	$nc(this->fGlobalNotationDecls)->put($nc(decl)->fName, decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalNotationDecl($XSNotationDecl* decl, $String* location) {
	$nc(this->fGlobalNotationDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $nc(decl)->fName}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalTypeDecl($XSTypeDefinition* decl) {
	$nc(this->fGlobalTypeDecls)->put($($nc(decl)->getName()), decl);
	if ($instanceOf($XSComplexTypeDecl, decl)) {
		$nc(($cast($XSComplexTypeDecl, decl)))->setNamespaceItem(this);
	} else if ($instanceOf($XSSimpleTypeDecl, decl)) {
		$nc(($cast($XSSimpleTypeDecl, decl)))->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalTypeDecl($XSTypeDefinition* decl, $String* location) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fGlobalTypeDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $($nc(decl)->getName())}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		if ($instanceOf($XSComplexTypeDecl, decl)) {
			$nc(($cast($XSComplexTypeDecl, decl)))->setNamespaceItem(this);
		} else if ($instanceOf($XSSimpleTypeDecl, decl)) {
			$nc(($cast($XSSimpleTypeDecl, decl)))->setNamespaceItem(this);
		}
	}
}

void SchemaGrammar::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl) {
	$nc(this->fGlobalTypeDecls)->put($($nc(decl)->getName()), decl);
	$nc(decl)->setNamespaceItem(this);
}

void SchemaGrammar::addGlobalComplexTypeDecl($XSComplexTypeDecl* decl, $String* location) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fGlobalTypeDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $($nc(decl)->getName())}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr) {
		decl->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalSimpleTypeDecl($XSSimpleType* decl) {
	$nc(this->fGlobalTypeDecls)->put($($nc(decl)->getName()), decl);
	if ($instanceOf($XSSimpleTypeDecl, decl)) {
		$nc(($cast($XSSimpleTypeDecl, decl)))->setNamespaceItem(this);
	}
}

void SchemaGrammar::addGlobalSimpleTypeDecl($XSSimpleType* decl, $String* location) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fGlobalTypeDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $($nc(decl)->getName())}), decl);
	if ($nc(decl)->getNamespaceItem() == nullptr && $instanceOf($XSSimpleTypeDecl, decl)) {
		$nc(($cast($XSSimpleTypeDecl, decl)))->setNamespaceItem(this);
	}
}

void SchemaGrammar::addIDConstraintDecl($XSElementDecl* elmDecl, $IdentityConstraint* decl) {
	$nc(elmDecl)->addIDConstraint(decl);
	$nc(this->fGlobalIDConstraintDecls)->put($($nc(decl)->getIdentityConstraintName()), decl);
}

void SchemaGrammar::addIDConstraintDecl($XSElementDecl* elmDecl, $IdentityConstraint* decl, $String* location) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fGlobalIDConstraintDeclsExt)->put($$str({((location != nullptr) ? location : ""_s), ","_s, $($nc(decl)->getIdentityConstraintName())}), decl);
}

$XSAttributeDecl* SchemaGrammar::getGlobalAttributeDecl($String* declName) {
	return $cast($XSAttributeDecl, $nc(this->fGlobalAttrDecls)->get(declName));
}

$XSAttributeDecl* SchemaGrammar::getGlobalAttributeDecl($String* declName, $String* location) {
	return $cast($XSAttributeDecl, $nc(this->fGlobalAttrDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$XSAttributeGroupDecl* SchemaGrammar::getGlobalAttributeGroupDecl($String* declName) {
	return $cast($XSAttributeGroupDecl, $nc(this->fGlobalAttrGrpDecls)->get(declName));
}

$XSAttributeGroupDecl* SchemaGrammar::getGlobalAttributeGroupDecl($String* declName, $String* location) {
	return $cast($XSAttributeGroupDecl, $nc(this->fGlobalAttrGrpDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$XSElementDecl* SchemaGrammar::getGlobalElementDecl($String* declName) {
	return $cast($XSElementDecl, $nc(this->fGlobalElemDecls)->get(declName));
}

$XSElementDecl* SchemaGrammar::getGlobalElementDecl($String* declName, $String* location) {
	return $cast($XSElementDecl, $nc(this->fGlobalElemDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$XSGroupDecl* SchemaGrammar::getGlobalGroupDecl($String* declName) {
	return $cast($XSGroupDecl, $nc(this->fGlobalGroupDecls)->get(declName));
}

$XSGroupDecl* SchemaGrammar::getGlobalGroupDecl($String* declName, $String* location) {
	return $cast($XSGroupDecl, $nc(this->fGlobalGroupDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$XSNotationDecl* SchemaGrammar::getGlobalNotationDecl($String* declName) {
	return $cast($XSNotationDecl, $nc(this->fGlobalNotationDecls)->get(declName));
}

$XSNotationDecl* SchemaGrammar::getGlobalNotationDecl($String* declName, $String* location) {
	return $cast($XSNotationDecl, $nc(this->fGlobalNotationDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$XSTypeDefinition* SchemaGrammar::getGlobalTypeDecl($String* declName) {
	return $cast($XSTypeDefinition, $nc(this->fGlobalTypeDecls)->get(declName));
}

$XSTypeDefinition* SchemaGrammar::getGlobalTypeDecl($String* declName, $String* location) {
	return $cast($XSTypeDefinition, $nc(this->fGlobalTypeDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

$IdentityConstraint* SchemaGrammar::getIDConstraintDecl($String* declName) {
	return $cast($IdentityConstraint, $nc(this->fGlobalIDConstraintDecls)->get(declName));
}

$IdentityConstraint* SchemaGrammar::getIDConstraintDecl($String* declName, $String* location) {
	return $cast($IdentityConstraint, $nc(this->fGlobalIDConstraintDeclsExt)->get($$str({((location != nullptr) ? location : ""_s), ","_s, declName})));
}

bool SchemaGrammar::hasIDConstraints() {
	return $nc(this->fGlobalIDConstraintDecls)->getLength() > 0;
}

void SchemaGrammar::addComplexTypeDecl($XSComplexTypeDecl* decl, $SimpleLocator* locator) {
	if (this->fCTCount == $nc(this->fComplexTypeDecls)->length) {
		$set(this, fComplexTypeDecls, resize(this->fComplexTypeDecls, this->fCTCount + SchemaGrammar::INC_SIZE));
		$set(this, fCTLocators, resize(this->fCTLocators, this->fCTCount + SchemaGrammar::INC_SIZE));
	}
	$nc(this->fCTLocators)->set(this->fCTCount, locator);
	$nc(this->fComplexTypeDecls)->set(this->fCTCount++, decl);
}

void SchemaGrammar::addRedefinedGroupDecl($XSGroupDecl* derived, $XSGroupDecl* base, $SimpleLocator* locator) {
	if (this->fRGCount == $nc(this->fRedefinedGroupDecls)->length) {
		$set(this, fRedefinedGroupDecls, resize(this->fRedefinedGroupDecls, this->fRGCount << 1));
		$set(this, fRGLocators, resize(this->fRGLocators, this->fRGCount));
	}
	$nc(this->fRGLocators)->set(this->fRGCount / 2, locator);
	$nc(this->fRedefinedGroupDecls)->set(this->fRGCount++, derived);
	$nc(this->fRedefinedGroupDecls)->set(this->fRGCount++, base);
}

$XSComplexTypeDeclArray* SchemaGrammar::getUncheckedComplexTypeDecls() {
	if (this->fCTCount < $nc(this->fComplexTypeDecls)->length) {
		$set(this, fComplexTypeDecls, resize(this->fComplexTypeDecls, this->fCTCount));
		$set(this, fCTLocators, resize(this->fCTLocators, this->fCTCount));
	}
	return this->fComplexTypeDecls;
}

$SimpleLocatorArray* SchemaGrammar::getUncheckedCTLocators() {
	if (this->fCTCount < $nc(this->fCTLocators)->length) {
		$set(this, fComplexTypeDecls, resize(this->fComplexTypeDecls, this->fCTCount));
		$set(this, fCTLocators, resize(this->fCTLocators, this->fCTCount));
	}
	return this->fCTLocators;
}

$XSGroupDeclArray* SchemaGrammar::getRedefinedGroupDecls() {
	if (this->fRGCount < $nc(this->fRedefinedGroupDecls)->length) {
		$set(this, fRedefinedGroupDecls, resize(this->fRedefinedGroupDecls, this->fRGCount));
		$set(this, fRGLocators, resize(this->fRGLocators, this->fRGCount / 2));
	}
	return this->fRedefinedGroupDecls;
}

$SimpleLocatorArray* SchemaGrammar::getRGLocators() {
	if (this->fRGCount < $nc(this->fRedefinedGroupDecls)->length) {
		$set(this, fRedefinedGroupDecls, resize(this->fRedefinedGroupDecls, this->fRGCount));
		$set(this, fRGLocators, resize(this->fRGLocators, this->fRGCount / 2));
	}
	return this->fRGLocators;
}

void SchemaGrammar::setUncheckedTypeNum(int32_t newSize) {
	this->fCTCount = newSize;
	$set(this, fComplexTypeDecls, resize(this->fComplexTypeDecls, this->fCTCount));
	$set(this, fCTLocators, resize(this->fCTLocators, this->fCTCount));
}

$XSElementDeclArray* SchemaGrammar::getSubstitutionGroups() {
	if (this->fSubGroupCount < $nc(this->fSubGroups)->length) {
		$set(this, fSubGroups, resize(this->fSubGroups, this->fSubGroupCount));
	}
	return this->fSubGroups;
}

SchemaGrammar* SchemaGrammar::getS4SGrammar(int16_t schemaVersion) {
	$init(SchemaGrammar);
	if (schemaVersion == $Constants::SCHEMA_VERSION_1_0) {
		return SchemaGrammar::SG_SchemaNS;
	} else {
		return SchemaGrammar::SG_SchemaNSExtended;
	}
}

$XSComplexTypeDeclArray* SchemaGrammar::resize($XSComplexTypeDeclArray* oldArray, int32_t newSize) {
	$init(SchemaGrammar);
	$var($XSComplexTypeDeclArray, newArray, $new($XSComplexTypeDeclArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

$XSGroupDeclArray* SchemaGrammar::resize($XSGroupDeclArray* oldArray, int32_t newSize) {
	$init(SchemaGrammar);
	$var($XSGroupDeclArray, newArray, $new($XSGroupDeclArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

$XSElementDeclArray* SchemaGrammar::resize($XSElementDeclArray* oldArray, int32_t newSize) {
	$init(SchemaGrammar);
	$var($XSElementDeclArray, newArray, $new($XSElementDeclArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

$SimpleLocatorArray* SchemaGrammar::resize($SimpleLocatorArray* oldArray, int32_t newSize) {
	$init(SchemaGrammar);
	$var($SimpleLocatorArray, newArray, $new($SimpleLocatorArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

void SchemaGrammar::addDocument(Object$* document, $String* location) {
	$synchronized(this) {
		if (this->fDocuments == nullptr) {
			$set(this, fDocuments, $new($CopyOnWriteArrayList));
			$set(this, fLocations, $new($CopyOnWriteArrayList));
		}
		$nc(this->fDocuments)->add(document);
		$nc(this->fLocations)->add(location);
	}
}

void SchemaGrammar::removeDocument(int32_t index) {
	$synchronized(this) {
		if (this->fDocuments != nullptr && index >= 0 && index < $nc(this->fDocuments)->size()) {
			$nc(this->fDocuments)->remove(index);
			$nc(this->fLocations)->remove(index);
		}
	}
}

$String* SchemaGrammar::getSchemaNamespace() {
	return this->fTargetNamespace;
}

$DOMParser* SchemaGrammar::getDOMParser() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fDOMParser != nullptr) {
			$var($DOMParser, parser, $cast($DOMParser, $nc(this->fDOMParser)->get()));
			if (parser != nullptr) {
				return parser;
			}
		}
		$var($XML11Configuration, config, $new($XML11Configuration, this->fSymbolTable));
		$init($Constants);
		config->setFeature($$str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}), true);
		config->setFeature($$str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}), false);
		$var($DOMParser, parser, $new($DOMParser, static_cast<$XMLParserConfiguration*>(config)));
		try {
			parser->setFeature($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DEFER_NODE_EXPANSION_FEATURE}), false);
		} catch ($SAXException& exc) {
		}
		$set(this, fDOMParser, $new($SoftReference, parser));
		return parser;
	}
}

$SAXParser* SchemaGrammar::getSAXParser() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fSAXParser != nullptr) {
			$var($SAXParser, parser, $cast($SAXParser, $nc(this->fSAXParser)->get()));
			if (parser != nullptr) {
				return parser;
			}
		}
		$var($XML11Configuration, config, $new($XML11Configuration, this->fSymbolTable));
		$init($Constants);
		config->setFeature($$str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}), true);
		config->setFeature($$str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}), false);
		$var($SAXParser, parser, $new($SAXParser, static_cast<$XMLParserConfiguration*>(config)));
		$set(this, fSAXParser, $new($SoftReference, parser));
		return parser;
	}
}

$XSNamedMap* SchemaGrammar::getComponents(int16_t objectType) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectType <= 0 || objectType > SchemaGrammar::MAX_COMP_IDX || !$nc(SchemaGrammar::GLOBAL_COMP)->get(objectType)) {
			$init($XSNamedMapImpl);
			return $XSNamedMapImpl::EMPTY_MAP;
		}
		if (this->fComponents == nullptr) {
			$set(this, fComponents, $new($XSNamedMapArray, SchemaGrammar::MAX_COMP_IDX + 1));
		}
		if ($nc(this->fComponents)->get(objectType) == nullptr) {
			$var($SymbolHash, table, nullptr);
			switch (objectType) {
			case $XSConstants::TYPE_DEFINITION:
				{}
			case $XSTypeDefinition::COMPLEX_TYPE:
				{}
			case $XSTypeDefinition::SIMPLE_TYPE:
				{
					$assign(table, this->fGlobalTypeDecls);
					break;
				}
			case $XSConstants::ATTRIBUTE_DECLARATION:
				{
					$assign(table, this->fGlobalAttrDecls);
					break;
				}
			case $XSConstants::ELEMENT_DECLARATION:
				{
					$assign(table, this->fGlobalElemDecls);
					break;
				}
			case $XSConstants::ATTRIBUTE_GROUP:
				{
					$assign(table, this->fGlobalAttrGrpDecls);
					break;
				}
			case $XSConstants::MODEL_GROUP_DEFINITION:
				{
					$assign(table, this->fGlobalGroupDecls);
					break;
				}
			case $XSConstants::NOTATION_DECLARATION:
				{
					$assign(table, this->fGlobalNotationDecls);
					break;
				}
			case $XSConstants::IDENTITY_CONSTRAINT:
				{
					$assign(table, this->fGlobalIDConstraintDecls);
					break;
				}
			}
			if (objectType == $XSTypeDefinition::COMPLEX_TYPE || objectType == $XSTypeDefinition::SIMPLE_TYPE) {
				$nc(this->fComponents)->set(objectType, $$new($XSNamedMap4Types, this->fTargetNamespace, table, objectType));
			} else {
				$nc(this->fComponents)->set(objectType, $$new($XSNamedMapImpl, this->fTargetNamespace, table));
			}
		}
		return $nc(this->fComponents)->get(objectType);
	}
}

$ObjectList* SchemaGrammar::getComponentsExt(int16_t objectType) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectType <= 0 || objectType > SchemaGrammar::MAX_COMP_IDX || !$nc(SchemaGrammar::GLOBAL_COMP)->get(objectType)) {
			$init($ObjectListImpl);
			return $ObjectListImpl::EMPTY_LIST;
		}
		if (this->fComponentsExt == nullptr) {
			$set(this, fComponentsExt, $new($ObjectListArray, SchemaGrammar::MAX_COMP_IDX + 1));
		}
		if ($nc(this->fComponentsExt)->get(objectType) == nullptr) {
			$var($SymbolHash, table, nullptr);
			switch (objectType) {
			case $XSConstants::TYPE_DEFINITION:
				{}
			case $XSTypeDefinition::COMPLEX_TYPE:
				{}
			case $XSTypeDefinition::SIMPLE_TYPE:
				{
					$assign(table, this->fGlobalTypeDeclsExt);
					break;
				}
			case $XSConstants::ATTRIBUTE_DECLARATION:
				{
					$assign(table, this->fGlobalAttrDeclsExt);
					break;
				}
			case $XSConstants::ELEMENT_DECLARATION:
				{
					$assign(table, this->fGlobalElemDeclsExt);
					break;
				}
			case $XSConstants::ATTRIBUTE_GROUP:
				{
					$assign(table, this->fGlobalAttrGrpDeclsExt);
					break;
				}
			case $XSConstants::MODEL_GROUP_DEFINITION:
				{
					$assign(table, this->fGlobalGroupDeclsExt);
					break;
				}
			case $XSConstants::NOTATION_DECLARATION:
				{
					$assign(table, this->fGlobalNotationDeclsExt);
					break;
				}
			case $XSConstants::IDENTITY_CONSTRAINT:
				{
					$assign(table, this->fGlobalIDConstraintDeclsExt);
					break;
				}
			}
			$var($ObjectArray, entries, $nc(table)->getEntries());
			$nc(this->fComponentsExt)->set(objectType, $$new($ObjectListImpl, entries, $nc(entries)->length));
		}
		return $nc(this->fComponentsExt)->get(objectType);
	}
}

void SchemaGrammar::resetComponents() {
	$synchronized(this) {
		$set(this, fComponents, nullptr);
		$set(this, fComponentsExt, nullptr);
	}
}

$XSTypeDefinition* SchemaGrammar::getTypeDefinition($String* name) {
	return getGlobalTypeDecl(name);
}

$XSAttributeDeclaration* SchemaGrammar::getAttributeDeclaration($String* name) {
	return getGlobalAttributeDecl(name);
}

$XSElementDeclaration* SchemaGrammar::getElementDeclaration($String* name) {
	return getGlobalElementDecl(name);
}

$XSAttributeGroupDefinition* SchemaGrammar::getAttributeGroup($String* name) {
	return getGlobalAttributeGroupDecl(name);
}

$XSModelGroupDefinition* SchemaGrammar::getModelGroupDefinition($String* name) {
	return getGlobalGroupDecl(name);
}

$XSNotationDeclaration* SchemaGrammar::getNotationDeclaration($String* name) {
	return getGlobalNotationDecl(name);
}

$XSIDCDefinition* SchemaGrammar::getIDCDefinition($String* name) {
	return getIDConstraintDecl(name);
}

$StringList* SchemaGrammar::getDocumentLocations() {
	return $new($StringListImpl, this->fLocations);
}

$XSModel* SchemaGrammar::toXSModel() {
	return $new($XSModelImpl, $$new($SchemaGrammarArray, {this}));
}

$XSModel* SchemaGrammar::toXSModel($XSGrammarArray* grammars) {
	if (grammars == nullptr || $nc(grammars)->length == 0) {
		return toXSModel();
	}
	int32_t len = $nc(grammars)->length;
	bool hasSelf = false;
	for (int32_t i = 0; i < len; ++i) {
		if ($equals(grammars->get(i), this)) {
			hasSelf = true;
			break;
		}
	}
	$var($SchemaGrammarArray, gs, $new($SchemaGrammarArray, hasSelf ? len : len + 1));
	for (int32_t i = 0; i < len; ++i) {
		gs->set(i, $cast(SchemaGrammar, grammars->get(i)));
	}
	if (!hasSelf) {
		gs->set(len, this);
	}
	return $new($XSModelImpl, gs);
}

$XSObjectList* SchemaGrammar::getAnnotations() {
	if (this->fNumAnnotations == 0) {
		$init($XSObjectListImpl);
		return $XSObjectListImpl::EMPTY_LIST;
	}
	return $new($XSObjectListImpl, $fcast($XSObjectArray, this->fAnnotations), this->fNumAnnotations);
}

void SchemaGrammar::addAnnotation($XSAnnotationImpl* annotation) {
	if (annotation == nullptr) {
		return;
	}
	if (this->fAnnotations == nullptr) {
		$set(this, fAnnotations, $new($XSAnnotationImplArray, 2));
	} else if (this->fNumAnnotations == $nc(this->fAnnotations)->length) {
		$var($XSAnnotationImplArray, newArray, $new($XSAnnotationImplArray, this->fNumAnnotations << 1));
		$System::arraycopy(this->fAnnotations, 0, newArray, 0, this->fNumAnnotations);
		$set(this, fAnnotations, newArray);
	}
	$nc(this->fAnnotations)->set(this->fNumAnnotations++, annotation);
}

void SchemaGrammar::setImmutable(bool isImmutable) {
	this->fIsImmutable = isImmutable;
}

bool SchemaGrammar::isImmutable() {
	return this->fIsImmutable;
}

void clinit$SchemaGrammar($Class* class$) {
	$assignStatic(SchemaGrammar::fAnyType, $new($SchemaGrammar$XSAnyType));
	$assignStatic(SchemaGrammar::SG_SchemaNS, $new($SchemaGrammar$BuiltinSchemaGrammar, SchemaGrammar::GRAMMAR_XS, $Constants::SCHEMA_VERSION_1_0));
	$assignStatic(SchemaGrammar::SG_SchemaNSExtended, $new($SchemaGrammar$BuiltinSchemaGrammar, SchemaGrammar::GRAMMAR_XS, $Constants::SCHEMA_VERSION_1_0_EXTENDED));
	$init($SchemaSymbols);
	$assignStatic(SchemaGrammar::fAnySimpleType, $cast($XSSimpleType, $nc(SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl($SchemaSymbols::ATTVAL_ANYSIMPLETYPE)));
	$assignStatic(SchemaGrammar::SG_XSI, $new($SchemaGrammar$BuiltinSchemaGrammar, SchemaGrammar::GRAMMAR_XSI, $Constants::SCHEMA_VERSION_1_0));
	$assignStatic(SchemaGrammar::GLOBAL_COMP, $new($booleans, {
		false,
		true,
		true,
		true,
		false,
		true,
		true,
		false,
		false,
		false,
		true,
		true,
		false,
		false,
		false,
		true,
		true
	}));
}

SchemaGrammar::SchemaGrammar() {
}

$Class* SchemaGrammar::load$($String* name, bool initialize) {
	$loadClass(SchemaGrammar, name, initialize, &_SchemaGrammar_ClassInfo_, clinit$SchemaGrammar, allocate$SchemaGrammar);
	return class$;
}

$Class* SchemaGrammar::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com