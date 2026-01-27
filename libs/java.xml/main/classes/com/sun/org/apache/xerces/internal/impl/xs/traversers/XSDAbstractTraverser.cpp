#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/Base64.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser$FacetInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeGroupTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDWildcardTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_ENUMNSDECLS
#undef ATTIDX_FIXED
#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MINOCCURS
#undef ATTIDX_NONSCHEMA
#undef ATTIDX_VALUE
#undef ATTVAL_BASE64BINARY
#undef ATTVAL_HEXBINARY
#undef ATTVAL_QNAME
#undef ATTVAL_UNBOUNDED
#undef ATT_VALUE
#undef CHILD_OF_GROUP
#undef ELT_ANNOTATION
#undef ELT_ANYATTRIBUTE
#undef ELT_APPINFO
#undef ELT_ATTRIBUTE
#undef ELT_ATTRIBUTEGROUP
#undef ELT_DOCUMENTATION
#undef ELT_ENUMERATION
#undef ELT_FRACTIONDIGITS
#undef ELT_LENGTH
#undef ELT_MAXEXCLUSIVE
#undef ELT_MAXINCLUSIVE
#undef ELT_MAXLENGTH
#undef ELT_MINEXCLUSIVE
#undef ELT_MININCLUSIVE
#undef ELT_MINLENGTH
#undef ELT_PATTERN
#undef ELT_TOTALDIGITS
#undef ELT_WHITESPACE
#undef FACET_ENUMERATION
#undef FACET_FRACTIONDIGITS
#undef FACET_LENGTH
#undef FACET_MAXEXCLUSIVE
#undef FACET_MAXINCLUSIVE
#undef FACET_MAXLENGTH
#undef FACET_MINEXCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_TOTALDIGITS
#undef FACET_WHITESPACE
#undef GROUP_REF_WITH_ALL
#undef NOTATION_TYPE
#undef NOT_ALL_CONTEXT
#undef NO_NAME
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_EMPTY
#undef PRIMITIVE_NOTATION
#undef PRIMITIVE_QNAME
#undef PROCESSING_ALL_EL
#undef PROCESSING_ALL_GP
#undef SIMPLE_TYPE
#undef URI_SCHEMAFORSCHEMA
#undef USE_PROHIBITED
#undef VARIETY_ATOMIC
#undef VARIETY_LIST
#undef VARIETY_UNION

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $Base64 = ::com::sun::org::apache::xerces::internal::impl::dv::util::Base64;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaNamespaceSupport = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSAnnotationInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser$FacetInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser$FacetInfo;
using $XSDAttributeGroupTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeGroupTraverser;
using $XSDAttributeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDWildcardTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDWildcardTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSAttributeUse = ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
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

$FieldInfo _XSDAbstractTraverser_FieldInfo_[] = {
	{"NO_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDAbstractTraverser, NO_NAME)},
	{"NOT_ALL_CONTEXT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDAbstractTraverser, NOT_ALL_CONTEXT)},
	{"PROCESSING_ALL_EL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDAbstractTraverser, PROCESSING_ALL_EL)},
	{"GROUP_REF_WITH_ALL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDAbstractTraverser, GROUP_REF_WITH_ALL)},
	{"CHILD_OF_GROUP", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDAbstractTraverser, CHILD_OF_GROUP)},
	{"PROCESSING_ALL_GP", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDAbstractTraverser, PROCESSING_ALL_GP)},
	{"fSchemaHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;", nullptr, $PROTECTED, $field(XSDAbstractTraverser, fSchemaHandler)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XSDAbstractTraverser, fSymbolTable)},
	{"fAttrChecker", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;", nullptr, $PROTECTED, $field(XSDAbstractTraverser, fAttrChecker)},
	{"fValidateAnnotations", "Z", nullptr, $PROTECTED, $field(XSDAbstractTraverser, fValidateAnnotations)},
	{"fValidationState", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;", nullptr, 0, $field(XSDAbstractTraverser, fValidationState)},
	{"fQNameDV", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDAbstractTraverser, fQNameDV)},
	{"fPattern", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(XSDAbstractTraverser, fPattern)},
	{"xsFacets", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;", nullptr, $PRIVATE | $FINAL, $field(XSDAbstractTraverser, xsFacets)},
	{}
};

$MethodInfo _XSDAbstractTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDAbstractTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"checkEnumerationAndLengthInconsistency", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List;Lorg/w3c/dom/Element;Ljava/lang/String;)V", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List<Ljava/lang/String;>;Lorg/w3c/dom/Element;Ljava/lang/String;)V", $PRIVATE, $method(XSDAbstractTraverser, checkEnumerationAndLengthInconsistency, void, $XSSimpleType*, $List*, $Element*, $String*)},
	{"checkEnumerationAndMaxLengthInconsistency", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List;Lorg/w3c/dom/Element;Ljava/lang/String;)V", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List<Ljava/lang/String;>;Lorg/w3c/dom/Element;Ljava/lang/String;)V", $PRIVATE, $method(XSDAbstractTraverser, checkEnumerationAndMaxLengthInconsistency, void, $XSSimpleType*, $List*, $Element*, $String*)},
	{"checkEnumerationAndMinLengthInconsistency", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List;Lorg/w3c/dom/Element;Ljava/lang/String;)V", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Ljava/util/List<Ljava/lang/String;>;Lorg/w3c/dom/Element;Ljava/lang/String;)V", $PRIVATE, $method(XSDAbstractTraverser, checkEnumerationAndMinLengthInconsistency, void, $XSSimpleType*, $List*, $Element*, $String*)},
	{"checkNotationType", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDAbstractTraverser, checkNotationType, void, $String*, $XSTypeDefinition*, $Element*)},
	{"checkOccurrences", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Ljava/lang/String;Lorg/w3c/dom/Element;IJ)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PROTECTED, $virtualMethod(XSDAbstractTraverser, checkOccurrences, $XSParticleDecl*, $XSParticleDecl*, $String*, $Element*, int32_t, int64_t)},
	{"containsQName", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;)Z", nullptr, $PRIVATE, $method(XSDAbstractTraverser, containsQName, bool, $XSSimpleType*)},
	{"escapeAttValue", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDAbstractTraverser, escapeAttValue, $String*, $String*, int32_t)},
	{"getSchemaTypeName", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSDAbstractTraverser, getSchemaTypeName, $String*, $XSTypeDefinition*)},
	{"processAttValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDAbstractTraverser, processAttValue, $String*, $String*)},
	{"reportSchemaError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDAbstractTraverser, reportSchemaError, void, $String*, $ObjectArray*, $Element*)},
	{"reportSchemaWarning", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDAbstractTraverser, reportSchemaWarning, void, $String*, $ObjectArray*, $Element*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;ZLjava/util/Locale;)V", nullptr, 0, $virtualMethod(XSDAbstractTraverser, reset, void, $SymbolTable*, bool, $Locale*)},
	{"traverseAnnotationDecl", "(Lorg/w3c/dom/Element;[Ljava/lang/Object;ZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;", nullptr, 0, $virtualMethod(XSDAbstractTraverser, traverseAnnotationDecl, $XSAnnotationImpl*, $Element*, $ObjectArray*, bool, $XSDocumentInfo*)},
	{"traverseAttrsAndAttrGrps", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)Lorg/w3c/dom/Element;", nullptr, 0, $virtualMethod(XSDAbstractTraverser, traverseAttrsAndAttrGrps, $Element*, $Element*, $XSAttributeGroupDecl*, $XSDocumentInfo*, $SchemaGrammar*, $XSComplexTypeDecl*)},
	{"traverseFacets", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser$FacetInfo;", nullptr, 0, $virtualMethod(XSDAbstractTraverser, traverseFacets, $XSDAbstractTraverser$FacetInfo*, $Element*, $XSTypeDefinition*, $XSSimpleType*, $XSDocumentInfo*)},
	{"traverseSyntheticAnnotation", "(Lorg/w3c/dom/Element;Ljava/lang/String;[Ljava/lang/Object;ZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;", nullptr, 0, $virtualMethod(XSDAbstractTraverser, traverseSyntheticAnnotation, $XSAnnotationImpl*, $Element*, $String*, $ObjectArray*, bool, $XSDocumentInfo*)},
	{}
};

$InnerClassInfo _XSDAbstractTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser$FacetInfo", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser", "FacetInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDAbstractTraverser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	"java.lang.Object",
	nullptr,
	_XSDAbstractTraverser_FieldInfo_,
	_XSDAbstractTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_XSDAbstractTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser$FacetInfo"
};

$Object* allocate$XSDAbstractTraverser($Class* clazz) {
	return $of($alloc(XSDAbstractTraverser));
}

$String* XSDAbstractTraverser::NO_NAME = nullptr;
$XSSimpleType* XSDAbstractTraverser::fQNameDV = nullptr;

void XSDAbstractTraverser::init$($XSDHandler* handler, $XSAttributeChecker* attrChecker) {
	$set(this, fSchemaHandler, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fAttrChecker, nullptr);
	this->fValidateAnnotations = false;
	$set(this, fValidationState, $new($ValidationState));
	$set(this, fPattern, $new($StringBuilder));
	$set(this, xsFacets, $new($XSFacets));
	$set(this, fSchemaHandler, handler);
	$set(this, fAttrChecker, attrChecker);
}

void XSDAbstractTraverser::reset($SymbolTable* symbolTable, bool validateAnnotations, $Locale* locale) {
	$set(this, fSymbolTable, symbolTable);
	this->fValidateAnnotations = validateAnnotations;
	$nc(this->fValidationState)->setExtraChecking(false);
	$nc(this->fValidationState)->setSymbolTable(symbolTable);
	$nc(this->fValidationState)->setLocale(locale);
}

$XSAnnotationImpl* XSDAbstractTraverser::traverseAnnotationDecl($Element* annotationDecl, $ObjectArray* parentAttrs, bool isGlobal, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(annotationDecl, isGlobal, schemaDoc));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	$var($String, contents, $DOMUtil::getAnnotation(annotationDecl));
	$var($Element, child, $DOMUtil::getFirstChildElement(annotationDecl));
	if (child != nullptr) {
		do {
			$var($String, name, $DOMUtil::getLocalName(child));
			$init($SchemaSymbols);
			bool var$0 = ($nc(name)->equals($SchemaSymbols::ELT_APPINFO));
			if (!(var$0 || ($nc(name)->equals($SchemaSymbols::ELT_DOCUMENTATION)))) {
				reportSchemaError("src-annotation"_s, $$new($ObjectArray, {$of(name)}), child);
			} else {
				$assign(attrValues, $nc(this->fAttrChecker)->checkAttributes(child, true, schemaDoc));
				$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
			}
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		} while (child != nullptr);
	}
	if (contents == nullptr) {
		return nullptr;
	}
	$var($SchemaGrammar, grammar, $nc(this->fSchemaHandler)->getGrammar($nc(schemaDoc)->fTargetNamespace));
	$var($List, annotationLocalAttrs, $cast($ArrayList, $nc(parentAttrs)->get($XSAttributeChecker::ATTIDX_NONSCHEMA)));
	if (annotationLocalAttrs != nullptr && !annotationLocalAttrs->isEmpty()) {
		$var($StringBuilder, localStrBuffer, $new($StringBuilder, 64));
		localStrBuffer->append(" "_s);
		int32_t i = 0;
		while (i < annotationLocalAttrs->size()) {
			$var($String, rawname, $cast($String, annotationLocalAttrs->get(i++)));
			int32_t colonIndex = $nc(rawname)->indexOf((int32_t)u':');
			$var($String, prefix, nullptr);
			$var($String, localpart, nullptr);
			if (colonIndex == -1) {
				$assign(prefix, ""_s);
				$assign(localpart, rawname);
			} else {
				$assign(prefix, rawname->substring(0, colonIndex));
				$assign(localpart, rawname->substring(colonIndex + 1));
			}
			$var($String, uri, $nc($nc(schemaDoc)->fNamespaceSupport)->getURI($($nc(this->fSymbolTable)->addSymbol(prefix))));
			if ($nc($($nc(annotationDecl)->getAttributeNS(uri, localpart)))->length() != 0) {
				++i;
				continue;
			}
			localStrBuffer->append(rawname)->append("=\""_s);
			$var($String, value, $cast($String, annotationLocalAttrs->get(i++)));
			$assign(value, processAttValue(value));
			localStrBuffer->append(value)->append("\" "_s);
		}
		int32_t var$1 = $nc(contents)->length();
		$var($StringBuilder, contentBuffer, $new($StringBuilder, var$1 + localStrBuffer->length()));
		$init($SchemaSymbols);
		int32_t annotationTokenEnd = $nc(contents)->indexOf($SchemaSymbols::ELT_ANNOTATION);
		if (annotationTokenEnd == -1) {
			return nullptr;
		}
		annotationTokenEnd += $nc($SchemaSymbols::ELT_ANNOTATION)->length();
		contentBuffer->append($(contents->substring(0, annotationTokenEnd)));
		contentBuffer->append($(localStrBuffer->toString()));
		contentBuffer->append($(contents->substring(annotationTokenEnd, contents->length())));
		$var($String, annotation, contentBuffer->toString());
		if (this->fValidateAnnotations) {
			$nc(schemaDoc)->addAnnotation($$new($XSAnnotationInfo, annotation, annotationDecl));
		}
		return $new($XSAnnotationImpl, annotation, grammar);
	} else {
		if (this->fValidateAnnotations) {
			$nc(schemaDoc)->addAnnotation($$new($XSAnnotationInfo, contents, annotationDecl));
		}
		return $new($XSAnnotationImpl, contents, grammar);
	}
}

$XSAnnotationImpl* XSDAbstractTraverser::traverseSyntheticAnnotation($Element* annotationParent, $String* initialContent, $ObjectArray* parentAttrs, bool isGlobal, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	$var($String, contents, initialContent);
	$var($SchemaGrammar, grammar, $nc(this->fSchemaHandler)->getGrammar($nc(schemaDoc)->fTargetNamespace));
	$init($XSAttributeChecker);
	$var($List, annotationLocalAttrs, $cast($ArrayList, $nc(parentAttrs)->get($XSAttributeChecker::ATTIDX_NONSCHEMA)));
	if (annotationLocalAttrs != nullptr && !annotationLocalAttrs->isEmpty()) {
		$var($StringBuilder, localStrBuffer, $new($StringBuilder, 64));
		localStrBuffer->append(" "_s);
		int32_t i = 0;
		while (i < annotationLocalAttrs->size()) {
			$var($String, rawname, $cast($String, annotationLocalAttrs->get(i++)));
			int32_t colonIndex = $nc(rawname)->indexOf((int32_t)u':');
			$var($String, prefix, nullptr);
			$var($String, localpart, nullptr);
			if (colonIndex == -1) {
				$assign(prefix, ""_s);
				$assign(localpart, rawname);
			} else {
				$assign(prefix, rawname->substring(0, colonIndex));
				$assign(localpart, rawname->substring(colonIndex + 1));
			}
			$var($String, uri, $nc($nc(schemaDoc)->fNamespaceSupport)->getURI($($nc(this->fSymbolTable)->addSymbol(prefix))));
			localStrBuffer->append(rawname)->append("=\""_s);
			$var($String, value, $cast($String, annotationLocalAttrs->get(i++)));
			$assign(value, processAttValue(value));
			localStrBuffer->append(value)->append("\" "_s);
		}
		int32_t var$0 = $nc(contents)->length();
		$var($StringBuilder, contentBuffer, $new($StringBuilder, var$0 + localStrBuffer->length()));
		$init($SchemaSymbols);
		int32_t annotationTokenEnd = $nc(contents)->indexOf($SchemaSymbols::ELT_ANNOTATION);
		if (annotationTokenEnd == -1) {
			return nullptr;
		}
		annotationTokenEnd += $nc($SchemaSymbols::ELT_ANNOTATION)->length();
		contentBuffer->append($(contents->substring(0, annotationTokenEnd)));
		contentBuffer->append($(localStrBuffer->toString()));
		contentBuffer->append($(contents->substring(annotationTokenEnd, contents->length())));
		$var($String, annotation, contentBuffer->toString());
		if (this->fValidateAnnotations) {
			$nc(schemaDoc)->addAnnotation($$new($XSAnnotationInfo, annotation, annotationParent));
		}
		return $new($XSAnnotationImpl, annotation, grammar);
	} else {
		if (this->fValidateAnnotations) {
			$nc(schemaDoc)->addAnnotation($$new($XSAnnotationInfo, contents, annotationParent));
		}
		return $new($XSAnnotationImpl, contents, grammar);
	}
}

$XSDAbstractTraverser$FacetInfo* XSDAbstractTraverser::traverseFacets($Element* content$renamed, $XSTypeDefinition* typeDef, $XSSimpleType* baseValidator, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	$var($Element, content, content$renamed);
	int16_t facetsPresent = (int16_t)0;
	int16_t facetsFixed = (int16_t)0;
	$var($String, facet, nullptr);
	bool hasQName = containsQName(baseValidator);
	$var($List, enumData, nullptr);
	$var($XSObjectListImpl, enumAnnotations, nullptr);
	$var($XSObjectListImpl, patternAnnotations, nullptr);
	$var($List, enumNSDecls, hasQName ? static_cast<$List*>($new($ArrayList)) : ($List*)nullptr);
	int32_t currentFacet = 0;
	$nc(this->xsFacets)->reset();
	bool seenPattern = false;
	$var($Element, contextNode, $cast($Element, $nc(content)->getParentNode()));
	bool hasLengthFacet = false;
	bool hasMinLengthFacet = false;
	bool hasMaxLengthFacet = false;
	while (content != nullptr) {
		$var($ObjectArray, attrs, nullptr);
		$assign(facet, $DOMUtil::getLocalName(content));
		$init($SchemaSymbols);
		if ($nc(facet)->equals($SchemaSymbols::ELT_ENUMERATION)) {
			$assign(attrs, $nc(this->fAttrChecker)->checkAttributes(content, false, schemaDoc, hasQName));
			$var($String, enumVal, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
			if (enumVal == nullptr) {
				reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
					$of($SchemaSymbols::ELT_ENUMERATION),
					$of($SchemaSymbols::ATT_VALUE)
				}), content);
				$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
				$assign(content, $DOMUtil::getNextSiblingElement(content));
				continue;
			}
			$var($NamespaceSupport, nsDecls, $cast($NamespaceSupport, attrs->get($XSAttributeChecker::ATTIDX_ENUMNSDECLS)));
			bool var$0 = $nc(baseValidator)->getVariety() == $XSSimpleType::VARIETY_ATOMIC;
			if (var$0 && baseValidator->getPrimitiveKind() == $XSSimpleType::PRIMITIVE_NOTATION) {
				$nc($nc(schemaDoc)->fValidationContext)->setNamespaceSupport(nsDecls);
				$var($Object, notation, nullptr);
				try {
					$var($QName, temp, $cast($QName, $nc(XSDAbstractTraverser::fQNameDV)->validate(enumVal, static_cast<$ValidationContext*>(schemaDoc->fValidationContext), ($ValidatedInfo*)nullptr)));
					$assign(notation, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::NOTATION_TYPE, temp, content));
				} catch ($InvalidDatatypeValueException& ex) {
					$var($String, var$1, ex->getKey());
					reportSchemaError(var$1, $(ex->getArgs()), content);
				}
				if (notation == nullptr) {
					$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
					$assign(content, $DOMUtil::getNextSiblingElement(content));
					continue;
				}
				$nc(schemaDoc->fValidationContext)->setNamespaceSupport(schemaDoc->fNamespaceSupport);
			}
			if (enumData == nullptr) {
				$assign(enumData, $new($ArrayList));
				$assign(enumAnnotations, $new($XSObjectListImpl));
			}
			$nc(enumData)->add(enumVal);
			$nc(enumAnnotations)->addXSObject(nullptr);
			if (hasQName) {
				$nc(enumNSDecls)->add(nsDecls);
			}
			$var($Element, child, $DOMUtil::getFirstChildElement(content));
			if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				int32_t var$2 = enumAnnotations->getLength() - 1;
				enumAnnotations->addXSObject(var$2, $(traverseAnnotationDecl(child, attrs, false, schemaDoc)));
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			} else {
				$var($String, text, $DOMUtil::getSyntheticAnnotation(content));
				if (text != nullptr) {
					int32_t var$3 = enumAnnotations->getLength() - 1;
					enumAnnotations->addXSObject(var$3, $(traverseSyntheticAnnotation(content, text, attrs, false, schemaDoc)));
				}
			}
			if (child != nullptr) {
				reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
					$of("enumeration"_s),
					$of("(annotation?)"_s),
					$($of($DOMUtil::getLocalName(child)))
				}), child);
			}
		} else {
			if (facet->equals($SchemaSymbols::ELT_PATTERN)) {
				$assign(attrs, $nc(this->fAttrChecker)->checkAttributes(content, false, schemaDoc));
				$var($String, patternVal, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
				if (patternVal == nullptr) {
					reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
						$of($SchemaSymbols::ELT_PATTERN),
						$of($SchemaSymbols::ATT_VALUE)
					}), content);
					$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
					$assign(content, $DOMUtil::getNextSiblingElement(content));
					continue;
				}
				seenPattern = true;
				if ($nc(this->fPattern)->length() == 0) {
					$nc(this->fPattern)->append(patternVal);
				} else {
					$nc(this->fPattern)->append("|"_s);
					$nc(this->fPattern)->append(patternVal);
				}
				$var($Element, child, $DOMUtil::getFirstChildElement(content));
				if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
					if (patternAnnotations == nullptr) {
						$assign(patternAnnotations, $new($XSObjectListImpl));
					}
					$nc(patternAnnotations)->addXSObject($(traverseAnnotationDecl(child, attrs, false, schemaDoc)));
					$assign(child, $DOMUtil::getNextSiblingElement(child));
				} else {
					$var($String, text, $DOMUtil::getSyntheticAnnotation(content));
					if (text != nullptr) {
						if (patternAnnotations == nullptr) {
							$assign(patternAnnotations, $new($XSObjectListImpl));
						}
						$nc(patternAnnotations)->addXSObject($(traverseSyntheticAnnotation(content, text, attrs, false, schemaDoc)));
					}
				}
				if (child != nullptr) {
					reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
						$of("pattern"_s),
						$of("(annotation?)"_s),
						$($of($DOMUtil::getLocalName(child)))
					}), child);
				}
			} else {
				if (facet->equals($SchemaSymbols::ELT_MINLENGTH)) {
					currentFacet = $XSSimpleType::FACET_MINLENGTH;
				} else {
					if (facet->equals($SchemaSymbols::ELT_MAXLENGTH)) {
						currentFacet = $XSSimpleType::FACET_MAXLENGTH;
					} else {
						if (facet->equals($SchemaSymbols::ELT_MAXEXCLUSIVE)) {
							currentFacet = $XSSimpleType::FACET_MAXEXCLUSIVE;
						} else {
							if (facet->equals($SchemaSymbols::ELT_MAXINCLUSIVE)) {
								currentFacet = $XSSimpleType::FACET_MAXINCLUSIVE;
							} else {
								if (facet->equals($SchemaSymbols::ELT_MINEXCLUSIVE)) {
									currentFacet = $XSSimpleType::FACET_MINEXCLUSIVE;
								} else {
									if (facet->equals($SchemaSymbols::ELT_MININCLUSIVE)) {
										currentFacet = $XSSimpleType::FACET_MININCLUSIVE;
									} else {
										if (facet->equals($SchemaSymbols::ELT_TOTALDIGITS)) {
											currentFacet = $XSSimpleType::FACET_TOTALDIGITS;
										} else {
											if (facet->equals($SchemaSymbols::ELT_FRACTIONDIGITS)) {
												currentFacet = $XSSimpleType::FACET_FRACTIONDIGITS;
											} else {
												if (facet->equals($SchemaSymbols::ELT_WHITESPACE)) {
													currentFacet = $XSSimpleType::FACET_WHITESPACE;
												} else {
													if (facet->equals($SchemaSymbols::ELT_LENGTH)) {
														currentFacet = $XSSimpleType::FACET_LENGTH;
													} else {
														break;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				$assign(attrs, $nc(this->fAttrChecker)->checkAttributes(content, false, schemaDoc));
				if (((int32_t)(facetsPresent & (uint32_t)currentFacet)) != 0) {
					reportSchemaError("src-single-facet-value"_s, $$new($ObjectArray, {$of(facet)}), content);
					$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
					$assign(content, $DOMUtil::getNextSiblingElement(content));
					continue;
				}
				if ($nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE) == nullptr) {
					if (content->getAttributeNodeNS(nullptr, "value"_s) == nullptr) {
						reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
							$($of(content->getLocalName())),
							$of($SchemaSymbols::ATT_VALUE)
						}), content);
					}
					$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
					$assign(content, $DOMUtil::getNextSiblingElement(content));
					continue;
				}
				facetsPresent |= currentFacet;
				if ($nc(($cast($Boolean, $nc(attrs)->get($XSAttributeChecker::ATTIDX_FIXED))))->booleanValue()) {
					facetsFixed |= currentFacet;
				}
				switch (currentFacet) {
				case $XSSimpleType::FACET_MINLENGTH:
					{
						$nc(this->xsFacets)->minLength = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->intValue();
						hasMinLengthFacet = true;
						break;
					}
				case $XSSimpleType::FACET_MAXLENGTH:
					{
						$nc(this->xsFacets)->maxLength = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->intValue();
						hasMaxLengthFacet = true;
						break;
					}
				case $XSSimpleType::FACET_MAXEXCLUSIVE:
					{
						$set($nc(this->xsFacets), maxExclusive, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
						break;
					}
				case $XSSimpleType::FACET_MAXINCLUSIVE:
					{
						$set($nc(this->xsFacets), maxInclusive, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
						break;
					}
				case $XSSimpleType::FACET_MINEXCLUSIVE:
					{
						$set($nc(this->xsFacets), minExclusive, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
						break;
					}
				case $XSSimpleType::FACET_MININCLUSIVE:
					{
						$set($nc(this->xsFacets), minInclusive, $cast($String, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE)));
						break;
					}
				case $XSSimpleType::FACET_TOTALDIGITS:
					{
						$nc(this->xsFacets)->totalDigits = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->intValue();
						break;
					}
				case $XSSimpleType::FACET_FRACTIONDIGITS:
					{
						$nc(this->xsFacets)->fractionDigits = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->intValue();
						break;
					}
				case $XSSimpleType::FACET_WHITESPACE:
					{
						$nc(this->xsFacets)->whiteSpace = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->shortValue();
						break;
					}
				case $XSSimpleType::FACET_LENGTH:
					{
						$nc(this->xsFacets)->length = $nc(($cast($XInt, $nc(attrs)->get($XSAttributeChecker::ATTIDX_VALUE))))->intValue();
						hasLengthFacet = true;
						break;
					}
				}
				$var($Element, child, $DOMUtil::getFirstChildElement(content));
				$var($XSAnnotationImpl, annotation, nullptr);
				if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
					$assign(annotation, traverseAnnotationDecl(child, attrs, false, schemaDoc));
					$assign(child, $DOMUtil::getNextSiblingElement(child));
				} else {
					$var($String, text, $DOMUtil::getSyntheticAnnotation(content));
					if (text != nullptr) {
						$assign(annotation, traverseSyntheticAnnotation(content, text, attrs, false, schemaDoc));
					}
				}
				switch (currentFacet) {
				case $XSSimpleType::FACET_MINLENGTH:
					{
						$set($nc(this->xsFacets), minLengthAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_MAXLENGTH:
					{
						$set($nc(this->xsFacets), maxLengthAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_MAXEXCLUSIVE:
					{
						$set($nc(this->xsFacets), maxExclusiveAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_MAXINCLUSIVE:
					{
						$set($nc(this->xsFacets), maxInclusiveAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_MINEXCLUSIVE:
					{
						$set($nc(this->xsFacets), minExclusiveAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_MININCLUSIVE:
					{
						$set($nc(this->xsFacets), minInclusiveAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_TOTALDIGITS:
					{
						$set($nc(this->xsFacets), totalDigitsAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_FRACTIONDIGITS:
					{
						$set($nc(this->xsFacets), fractionDigitsAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_WHITESPACE:
					{
						$set($nc(this->xsFacets), whiteSpaceAnnotation, annotation);
						break;
					}
				case $XSSimpleType::FACET_LENGTH:
					{
						$set($nc(this->xsFacets), lengthAnnotation, annotation);
						break;
					}
				}
				if (child != nullptr) {
					reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
						$of(facet),
						$of("(annotation?)"_s),
						$($of($DOMUtil::getLocalName(child)))
					}), child);
				}
			}
		}
		$nc(this->fAttrChecker)->returnAttrArray(attrs, schemaDoc);
		$assign(content, $DOMUtil::getNextSiblingElement(content));
	}
	if (enumData != nullptr) {
		facetsPresent |= $XSSimpleType::FACET_ENUMERATION;
		$set($nc(this->xsFacets), enumeration, enumData);
		$set($nc(this->xsFacets), enumNSDecls, enumNSDecls);
		$set($nc(this->xsFacets), enumAnnotations, enumAnnotations);
	}
	if (seenPattern) {
		facetsPresent |= $XSSimpleType::FACET_PATTERN;
		$set($nc(this->xsFacets), pattern, $nc(this->fPattern)->toString());
		$set($nc(this->xsFacets), patternAnnotations, patternAnnotations);
	}
	$nc(this->fPattern)->setLength(0);
	if (enumData != nullptr) {
		if (hasLengthFacet) {
			checkEnumerationAndLengthInconsistency(baseValidator, enumData, contextNode, $(getSchemaTypeName(typeDef)));
		}
		if (hasMinLengthFacet) {
			checkEnumerationAndMinLengthInconsistency(baseValidator, enumData, contextNode, $(getSchemaTypeName(typeDef)));
		}
		if (hasMaxLengthFacet) {
			checkEnumerationAndMaxLengthInconsistency(baseValidator, enumData, contextNode, $(getSchemaTypeName(typeDef)));
		}
	}
	return $new($XSDAbstractTraverser$FacetInfo, this->xsFacets, content, facetsPresent, facetsFixed);
}

$String* XSDAbstractTraverser::getSchemaTypeName($XSTypeDefinition* typeDefn) {
	$init(XSDAbstractTraverser);
	$var($String, typeNameStr, ""_s);
	if ($instanceOf($XSSimpleTypeDefinition, typeDefn)) {
		$assign(typeNameStr, $nc(($cast($XSSimpleTypeDecl, typeDefn)))->getTypeName());
	} else {
		$assign(typeNameStr, $nc(($cast($XSComplexTypeDecl, typeDefn)))->getTypeName());
	}
	return typeNameStr;
}

void XSDAbstractTraverser::checkEnumerationAndMaxLengthInconsistency($XSSimpleType* baseValidator, $List* enumData, $Element* contextNode, $String* typeName) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	bool var$0 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
	if (var$0 && $nc($SchemaSymbols::ATTVAL_HEXBINARY)->equals($($nc(baseValidator)->getName()))) {
		for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
			$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
			if ($nc(enumVal)->length() / 2 > $nc(this->xsFacets)->maxLength) {
				reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
					$of(enumVal),
					$of($SchemaSymbols::ELT_MAXLENGTH),
					$of(typeName)
				}), contextNode);
			}
		}
	} else {
		bool var$2 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
		if (var$2 && $nc($SchemaSymbols::ATTVAL_BASE64BINARY)->equals($($nc(baseValidator)->getName()))) {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				$var($bytes, decodedVal, $Base64::decode(enumVal));
				if (decodedVal != nullptr && ($$new($String, decodedVal))->length() > $nc(this->xsFacets)->maxLength) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_MAXLENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		} else {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				if ($nc(enumVal)->length() > $nc(this->xsFacets)->maxLength) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_MAXLENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		}
	}
}

void XSDAbstractTraverser::checkEnumerationAndMinLengthInconsistency($XSSimpleType* baseValidator, $List* enumData, $Element* contextNode, $String* typeName) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	bool var$0 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
	if (var$0 && $nc($SchemaSymbols::ATTVAL_HEXBINARY)->equals($($nc(baseValidator)->getName()))) {
		for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
			$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
			if ($nc(enumVal)->length() / 2 < $nc(this->xsFacets)->minLength) {
				reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
					$of(enumVal),
					$of($SchemaSymbols::ELT_MINLENGTH),
					$of(typeName)
				}), contextNode);
			}
		}
	} else {
		bool var$2 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
		if (var$2 && $nc($SchemaSymbols::ATTVAL_BASE64BINARY)->equals($($nc(baseValidator)->getName()))) {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				$var($bytes, decodedVal, $Base64::decode(enumVal));
				if (decodedVal != nullptr && ($$new($String, decodedVal))->length() < $nc(this->xsFacets)->minLength) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_MINLENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		} else {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				if ($nc(enumVal)->length() < $nc(this->xsFacets)->minLength) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_MINLENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		}
	}
}

void XSDAbstractTraverser::checkEnumerationAndLengthInconsistency($XSSimpleType* baseValidator, $List* enumData, $Element* contextNode, $String* typeName) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	bool var$0 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
	if (var$0 && $nc($SchemaSymbols::ATTVAL_HEXBINARY)->equals($($nc(baseValidator)->getName()))) {
		for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
			$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
			if ($nc(enumVal)->length() / 2 != $nc(this->xsFacets)->length) {
				reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
					$of(enumVal),
					$of($SchemaSymbols::ELT_LENGTH),
					$of(typeName)
				}), contextNode);
			}
		}
	} else {
		bool var$2 = $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(baseValidator)->getNamespace()));
		if (var$2 && $nc($SchemaSymbols::ATTVAL_BASE64BINARY)->equals($($nc(baseValidator)->getName()))) {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				$var($bytes, decodedVal, $Base64::decode(enumVal));
				if (decodedVal != nullptr && ($$new($String, decodedVal))->length() != $nc(this->xsFacets)->length) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_LENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		} else {
			for (int32_t enumIdx = 0; enumIdx < $nc(enumData)->size(); ++enumIdx) {
				$var($String, enumVal, $cast($String, enumData->get(enumIdx)));
				if ($nc(enumVal)->length() != $nc(this->xsFacets)->length) {
					reportSchemaWarning("FacetsContradict"_s, $$new($ObjectArray, {
						$of(enumVal),
						$of($SchemaSymbols::ELT_LENGTH),
						$of(typeName)
					}), contextNode);
				}
			}
		}
	}
}

bool XSDAbstractTraverser::containsQName($XSSimpleType* type) {
	$useLocalCurrentObjectStackCache();
	if ($nc(type)->getVariety() == $XSSimpleType::VARIETY_ATOMIC) {
		int16_t primitive = type->getPrimitiveKind();
		return (primitive == $XSSimpleType::PRIMITIVE_QNAME || primitive == $XSSimpleType::PRIMITIVE_NOTATION);
	} else if (type->getVariety() == $XSSimpleType::VARIETY_LIST) {
		return containsQName($cast($XSSimpleType, $(type->getItemType())));
	} else if (type->getVariety() == $XSSimpleType::VARIETY_UNION) {
		$var($XSObjectList, members, type->getMemberTypes());
		for (int32_t i = 0; i < $nc(members)->getLength(); ++i) {
			if (containsQName($cast($XSSimpleType, $(members->item(i))))) {
				return true;
			}
		}
	}
	return false;
}

$Element* XSDAbstractTraverser::traverseAttrsAndAttrGrps($Element* firstAttr, $XSAttributeGroupDecl* attrGrp, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, $XSComplexTypeDecl* enclosingCT) {
	$useLocalCurrentObjectStackCache();
	$var($Element, child, nullptr);
	$var($XSAttributeGroupDecl, tempAttrGrp, nullptr);
	$var($XSAttributeUseImpl, tempAttrUse, nullptr);
	$var($XSAttributeUse, otherUse, nullptr);
	$var($String, childName, nullptr);
	for ($assign(child, firstAttr); child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
		$assign(childName, $DOMUtil::getLocalName(child));
		$init($SchemaSymbols);
		if ($nc(childName)->equals($SchemaSymbols::ELT_ATTRIBUTE)) {
			$assign(tempAttrUse, $nc($nc(this->fSchemaHandler)->fAttributeTraverser)->traverseLocal(child, schemaDoc, grammar, enclosingCT));
			if (tempAttrUse == nullptr) {
				continue;
			}
			if ($nc(tempAttrUse)->fUse == $SchemaSymbols::USE_PROHIBITED) {
				$nc(attrGrp)->addAttributeUse(tempAttrUse);
				continue;
			}
			$var($String, var$0, $nc($nc(tempAttrUse)->fAttrDecl)->getNamespace());
			$assign(otherUse, $nc(attrGrp)->getAttributeUseNoProhibited(var$0, $($nc(tempAttrUse->fAttrDecl)->getName())));
			if (otherUse == nullptr) {
				$var($String, idName, attrGrp->addAttributeUse(tempAttrUse));
				if (idName != nullptr) {
					$var($String, code, (enclosingCT == nullptr) ? "ag-props-correct.3"_s : "ct-props-correct.5"_s);
					$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
					reportSchemaError(code, $$new($ObjectArray, {
						$of(name),
						$($of($nc($nc(tempAttrUse)->fAttrDecl)->getName())),
						$of(idName)
					}), child);
				}
			} else if (!$equals(otherUse, tempAttrUse)) {
				$var($String, code, (enclosingCT == nullptr) ? "ag-props-correct.2"_s : "ct-props-correct.4"_s);
				$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
				reportSchemaError(code, $$new($ObjectArray, {
					$of(name),
					$($of($nc($nc(tempAttrUse)->fAttrDecl)->getName()))
				}), child);
			}
		} else {
			if (childName->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
				$assign(tempAttrGrp, $nc($nc(this->fSchemaHandler)->fAttributeGroupTraverser)->traverseLocal(child, schemaDoc, grammar));
				if (tempAttrGrp == nullptr) {
					continue;
				}
				$var($XSObjectList, attrUseS, $nc(tempAttrGrp)->getAttributeUses());
				$var($XSAttributeUseImpl, oneAttrUse, nullptr);
				int32_t attrCount = $nc(attrUseS)->getLength();
				for (int32_t i = 0; i < attrCount; ++i) {
					$assign(oneAttrUse, $cast($XSAttributeUseImpl, attrUseS->item(i)));
					if ($nc(oneAttrUse)->fUse == $SchemaSymbols::USE_PROHIBITED) {
						$nc(attrGrp)->addAttributeUse(oneAttrUse);
						continue;
					}
					$var($String, var$1, $nc($nc(oneAttrUse)->fAttrDecl)->getNamespace());
					$assign(otherUse, $nc(attrGrp)->getAttributeUseNoProhibited(var$1, $($nc(oneAttrUse->fAttrDecl)->getName())));
					if (otherUse == nullptr) {
						$var($String, idName, attrGrp->addAttributeUse(oneAttrUse));
						if (idName != nullptr) {
							$var($String, code, (enclosingCT == nullptr) ? "ag-props-correct.3"_s : "ct-props-correct.5"_s);
							$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
							reportSchemaError(code, $$new($ObjectArray, {
								$of(name),
								$($of($nc($nc(oneAttrUse)->fAttrDecl)->getName())),
								$of(idName)
							}), child);
						}
					} else if (!$equals(oneAttrUse, otherUse)) {
						$var($String, code, (enclosingCT == nullptr) ? "ag-props-correct.2"_s : "ct-props-correct.4"_s);
						$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
						reportSchemaError(code, $$new($ObjectArray, {
							$of(name),
							$($of($nc($nc(oneAttrUse)->fAttrDecl)->getName()))
						}), child);
					}
				}
				if (tempAttrGrp->fAttributeWC != nullptr) {
					if ($nc(attrGrp)->fAttributeWC == nullptr) {
						$set(attrGrp, fAttributeWC, tempAttrGrp->fAttributeWC);
					} else {
						$set(attrGrp, fAttributeWC, $nc(attrGrp->fAttributeWC)->performIntersectionWith(tempAttrGrp->fAttributeWC, $nc(attrGrp->fAttributeWC)->fProcessContents));
						if (attrGrp->fAttributeWC == nullptr) {
							$var($String, code, (enclosingCT == nullptr) ? "src-attribute_group.2"_s : "src-ct.4"_s);
							$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
							reportSchemaError(code, $$new($ObjectArray, {$of(name)}), child);
						}
					}
				}
			} else {
				break;
			}
		}
	}
	if (child != nullptr) {
		$assign(childName, $DOMUtil::getLocalName(child));
		$init($SchemaSymbols);
		if ($nc(childName)->equals($SchemaSymbols::ELT_ANYATTRIBUTE)) {
			$var($XSWildcardDecl, tempAttrWC, $nc($nc(this->fSchemaHandler)->fWildCardTraverser)->traverseAnyAttribute(child, schemaDoc, grammar));
			if ($nc(attrGrp)->fAttributeWC == nullptr) {
				$set(attrGrp, fAttributeWC, tempAttrWC);
			} else {
				$set(attrGrp, fAttributeWC, $nc(tempAttrWC)->performIntersectionWith(attrGrp->fAttributeWC, tempAttrWC->fProcessContents));
				if (attrGrp->fAttributeWC == nullptr) {
					$var($String, code, (enclosingCT == nullptr) ? "src-attribute_group.2"_s : "src-ct.4"_s);
					$var($String, name, (enclosingCT == nullptr) ? attrGrp->fName : $nc(enclosingCT)->getName());
					reportSchemaError(code, $$new($ObjectArray, {$of(name)}), child);
				}
			}
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		}
	}
	return child;
}

void XSDAbstractTraverser::reportSchemaError($String* key, $ObjectArray* args, $Element* ele) {
	$nc(this->fSchemaHandler)->reportSchemaError(key, args, ele);
}

void XSDAbstractTraverser::reportSchemaWarning($String* key, $ObjectArray* args, $Element* ele) {
	$nc(this->fSchemaHandler)->reportSchemaWarning(key, args, ele);
}

void XSDAbstractTraverser::checkNotationType($String* refName, $XSTypeDefinition* typeDecl, $Element* elem) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(typeDecl)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE;
	bool var$0 = var$1 && $nc(($cast($XSSimpleType, typeDecl)))->getVariety() == $XSSimpleType::VARIETY_ATOMIC;
	if (var$0 && ($cast($XSSimpleType, typeDecl))->getPrimitiveKind() == $XSSimpleType::PRIMITIVE_NOTATION) {
		if (((int32_t)(($cast($XSSimpleType, typeDecl))->getDefinedFacets() & (uint32_t)(int32_t)$XSSimpleType::FACET_ENUMERATION)) == 0) {
			reportSchemaError("enumeration-required-notation"_s, $$new($ObjectArray, {
				$($of(typeDecl->getName())),
				$of(refName),
				$($of($DOMUtil::getLocalName(elem)))
			}), elem);
		}
	}
}

$XSParticleDecl* XSDAbstractTraverser::checkOccurrences($XSParticleDecl* particle, $String* particleName, $Element* parent, int32_t allContextFlags, int64_t defaultVals) {
	$useLocalCurrentObjectStackCache();
	int32_t min = $nc(particle)->fMinOccurs;
	int32_t max = particle->fMaxOccurs;
	$init($XSAttributeChecker);
	bool defaultMin = ((int64_t)(defaultVals & (uint64_t)(int64_t)($sl(1, $XSAttributeChecker::ATTIDX_MINOCCURS)))) != 0;
	bool defaultMax = ((int64_t)(defaultVals & (uint64_t)(int64_t)($sl(1, $XSAttributeChecker::ATTIDX_MAXOCCURS)))) != 0;
	bool processingAllEl = (((int32_t)(allContextFlags & (uint32_t)XSDAbstractTraverser::PROCESSING_ALL_EL)) != 0);
	bool processingAllGP = (((int32_t)(allContextFlags & (uint32_t)XSDAbstractTraverser::PROCESSING_ALL_GP)) != 0);
	bool groupRefWithAll = (((int32_t)(allContextFlags & (uint32_t)XSDAbstractTraverser::GROUP_REF_WITH_ALL)) != 0);
	bool isGroupChild = (((int32_t)(allContextFlags & (uint32_t)XSDAbstractTraverser::CHILD_OF_GROUP)) != 0);
	if (isGroupChild) {
		if (!defaultMin) {
			$var($ObjectArray, args, $new($ObjectArray, {
				$of(particleName),
				$of("minOccurs"_s)
			}));
			reportSchemaError("s4s-att-not-allowed"_s, args, parent);
			min = 1;
		}
		if (!defaultMax) {
			$var($ObjectArray, args, $new($ObjectArray, {
				$of(particleName),
				$of("maxOccurs"_s)
			}));
			reportSchemaError("s4s-att-not-allowed"_s, args, parent);
			max = 1;
		}
	}
	if (min == 0 && max == 0) {
		particle->fType = $XSParticleDecl::PARTICLE_EMPTY;
		return nullptr;
	}
	if (processingAllEl) {
		if (max != 1) {
			$init($SchemaSymbols);
			reportSchemaError("cos-all-limited.2"_s, $$new($ObjectArray, {
				(max == $SchemaSymbols::OCCURRENCE_UNBOUNDED) ? $of($SchemaSymbols::ATTVAL_UNBOUNDED) : $($of($Integer::toString(max))),
				$($of($nc(($cast($XSElementDecl, particle->fValue)))->getName()))
			}), parent);
			max = 1;
			if (min > 1) {
				min = 1;
			}
		}
	} else if (processingAllGP || groupRefWithAll) {
		if (max != 1) {
			reportSchemaError("cos-all-limited.1.2"_s, nullptr, parent);
			if (min > 1) {
				min = 1;
			}
			max = 1;
		}
	}
	particle->fMinOccurs = min;
	particle->fMaxOccurs = max;
	return particle;
}

$String* XSDAbstractTraverser::processAttValue($String* original) {
	$init(XSDAbstractTraverser);
	int32_t length = $nc(original)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t currChar = original->charAt(i);
		if (currChar == u'\"' || currChar == u'<' || currChar == u'&' || currChar == 9 || currChar == 10 || currChar == 13) {
			return escapeAttValue(original, i);
		}
	}
	return original;
}

$String* XSDAbstractTraverser::escapeAttValue($String* original, int32_t from) {
	$init(XSDAbstractTraverser);
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t length = $nc(original)->length();
	$var($StringBuilder, newVal, $new($StringBuilder, length));
	newVal->append($(original->substring(0, from)));
	for (i = from; i < length; ++i) {
		char16_t currChar = original->charAt(i);
		if (currChar == u'\"') {
			newVal->append("&quot;"_s);
		} else if (currChar == u'<') {
			newVal->append("&lt;"_s);
		} else if (currChar == u'&') {
			newVal->append("&amp;"_s);
		} else if (currChar == 9) {
			newVal->append("&#x9;"_s);
		} else if (currChar == 10) {
			newVal->append("&#xA;"_s);
		} else if (currChar == 13) {
			newVal->append("&#xD;"_s);
		} else {
			newVal->append(currChar);
		}
	}
	return newVal->toString();
}

void clinit$XSDAbstractTraverser($Class* class$) {
	$assignStatic(XSDAbstractTraverser::NO_NAME, "(no name)"_s);
	$init($SchemaGrammar);
	$init($SchemaSymbols);
	$assignStatic(XSDAbstractTraverser::fQNameDV, $cast($XSSimpleType, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl($SchemaSymbols::ATTVAL_QNAME)));
}

XSDAbstractTraverser::XSDAbstractTraverser() {
}

$Class* XSDAbstractTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDAbstractTraverser, name, initialize, &_XSDAbstractTraverser_ClassInfo_, clinit$XSDAbstractTraverser, allocate$XSDAbstractTraverser);
	return class$;
}

$Class* XSDAbstractTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com