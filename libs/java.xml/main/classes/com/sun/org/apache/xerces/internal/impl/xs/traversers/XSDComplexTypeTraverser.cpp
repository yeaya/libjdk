#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeFacetException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser$FacetInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser$ComplexTypeRecoverableError.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDGroupTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <java/lang/StringBuffer.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_ABSTRACT
#undef ATTIDX_BASE
#undef ATTIDX_BLOCK
#undef ATTIDX_FINAL
#undef ATTIDX_MIXED
#undef ATTIDX_NAME
#undef ATT_NAME
#undef COMPLEX_TYPE
#undef CONTENTTYPE_ELEMENT
#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_MIXED
#undef CONTENTTYPE_SIMPLE
#undef DEBUG
#undef DERIVATION_EXTENSION
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef ELT_ALL
#undef ELT_ANNOTATION
#undef ELT_ANYATTRIBUTE
#undef ELT_ATTRIBUTE
#undef ELT_ATTRIBUTEGROUP
#undef ELT_CHOICE
#undef ELT_COMPLEXCONTENT
#undef ELT_COMPLEXTYPE
#undef ELT_EXTENSION
#undef ELT_GROUP
#undef ELT_RESTRICTION
#undef ELT_SEQUENCE
#undef ELT_SIMPLECONTENT
#undef ELT_SIMPLETYPE
#undef EMPTY_LIST
#undef FALSE
#undef GLOBAL_NUM
#undef MODELGROUP_ALL
#undef MODELGROUP_SEQUENCE
#undef NOT_ALL_CONTEXT
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_MODELGROUP
#undef PARTICLE_WILDCARD
#undef PC_SKIP
#undef PROCESSING_ALL_GP
#undef TRUE
#undef TYPEDECL_TYPE

using $XSAnnotationImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>;
using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $InvalidDatatypeFacetException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeFacetException;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractParticleTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDAbstractTraverser$FacetInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser$FacetInfo;
using $XSDComplexTypeTraverser$ComplexTypeRecoverableError = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDComplexTypeTraverser$ComplexTypeRecoverableError;
using $XSDGroupTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDGroupTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDSimpleTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDSimpleTypeTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAttributeUse = ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
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

$FieldInfo _XSDComplexTypeTraverser_FieldInfo_[] = {
	{"GLOBAL_NUM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDComplexTypeTraverser, GLOBAL_NUM)},
	{"fErrorContent", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE | $STATIC, $staticField(XSDComplexTypeTraverser, fErrorContent)},
	{"fErrorWildcard", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, $PRIVATE | $STATIC, $staticField(XSDComplexTypeTraverser, fErrorWildcard)},
	{"fName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fTargetNamespace)},
	{"fDerivedBy", "S", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fDerivedBy)},
	{"fFinal", "S", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fFinal)},
	{"fBlock", "S", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fBlock)},
	{"fContentType", "S", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fContentType)},
	{"fBaseType", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fBaseType)},
	{"fAttrGrp", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fAttrGrp)},
	{"fXSSimpleType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fXSSimpleType)},
	{"fParticle", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fParticle)},
	{"fIsAbstract", "Z", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fIsAbstract)},
	{"fComplexTypeDecl", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fComplexTypeDecl)},
	{"fAnnotations", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fAnnotations)},
	{"fGlobalStore", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fGlobalStore)},
	{"fGlobalStorePos", "I", nullptr, $PRIVATE, $field(XSDComplexTypeTraverser, fGlobalStorePos)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDComplexTypeTraverser, DEBUG)},
	{}
};

$MethodInfo _XSDComplexTypeTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDComplexTypeTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"addAnnotation", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, addAnnotation, void, $XSAnnotationImpl*)},
	{"contentBackup", "()V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, contentBackup, void)},
	{"contentRestore", "()V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, contentRestore, void)},
	{"genAnonTypeName", "(Lorg/w3c/dom/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, genAnonTypeName, $String*, $Element*)},
	{"getErrorContent", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDComplexTypeTraverser, getErrorContent, $XSParticleDecl*)},
	{"getErrorWildcard", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDComplexTypeTraverser, getErrorWildcard, $XSWildcardDecl*)},
	{"handleComplexTypeError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, handleComplexTypeError, void, $String*, $ObjectArray*, $Element*)},
	{"isAttrOrAttrGroup", "(Lorg/w3c/dom/Element;)Z", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, isAttrOrAttrGroup, bool, $Element*)},
	{"mergeAttributes", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Ljava/lang/String;ZLorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, mergeAttributes, void, $XSAttributeGroupDecl*, $XSAttributeGroupDecl*, $String*, bool, $Element*), "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError"},
	{"processComplexContent", "(Lorg/w3c/dom/Element;ZZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, processComplexContent, void, $Element*, bool, bool, $XSDocumentInfo*, $SchemaGrammar*), "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError"},
	{"traverseComplexContent", "(Lorg/w3c/dom/Element;ZLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, traverseComplexContent, void, $Element*, bool, $XSDocumentInfo*, $SchemaGrammar*), "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError"},
	{"traverseComplexContentDecl", "(Lorg/w3c/dom/Element;Z)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, traverseComplexContentDecl, void, $Element*, bool)},
	{"traverseComplexTypeDecl", "(Lorg/w3c/dom/Element;Ljava/lang/String;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, traverseComplexTypeDecl, $XSComplexTypeDecl*, $Element*, $String*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, 0, $virtualMethod(XSDComplexTypeTraverser, traverseGlobal, $XSComplexTypeDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, 0, $virtualMethod(XSDComplexTypeTraverser, traverseLocal, $XSComplexTypeDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseSimpleContent", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, traverseSimpleContent, void, $Element*, $XSDocumentInfo*, $SchemaGrammar*), "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError"},
	{"traverseSimpleContentDecl", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(XSDComplexTypeTraverser, traverseSimpleContentDecl, void, $Element*)},
	{}
};

$InnerClassInfo _XSDComplexTypeTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser", "ComplexTypeRecoverableError", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDComplexTypeTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser",
	nullptr,
	_XSDComplexTypeTraverser_FieldInfo_,
	_XSDComplexTypeTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_XSDComplexTypeTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError"
};

$Object* allocate$XSDComplexTypeTraverser($Class* clazz) {
	return $of($alloc(XSDComplexTypeTraverser));
}

$XSParticleDecl* XSDComplexTypeTraverser::fErrorContent = nullptr;
$XSWildcardDecl* XSDComplexTypeTraverser::fErrorWildcard = nullptr;

$XSParticleDecl* XSDComplexTypeTraverser::getErrorContent() {
	$init(XSDComplexTypeTraverser);
	$useLocalCurrentObjectStackCache();
	if (XSDComplexTypeTraverser::fErrorContent == nullptr) {
		$var($XSParticleDecl, particle, $new($XSParticleDecl));
		particle->fType = $XSParticleDecl::PARTICLE_WILDCARD;
		$set(particle, fValue, getErrorWildcard());
		particle->fMinOccurs = 0;
		particle->fMaxOccurs = $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
		group->fCompositor = $XSModelGroupImpl::MODELGROUP_SEQUENCE;
		group->fParticleCount = 1;
		$set(group, fParticles, $new($XSParticleDeclArray, 1));
		$nc(group->fParticles)->set(0, particle);
		$var($XSParticleDecl, errorContent, $new($XSParticleDecl));
		errorContent->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
		$set(errorContent, fValue, group);
		$assignStatic(XSDComplexTypeTraverser::fErrorContent, errorContent);
	}
	return XSDComplexTypeTraverser::fErrorContent;
}

$XSWildcardDecl* XSDComplexTypeTraverser::getErrorWildcard() {
	$init(XSDComplexTypeTraverser);
	if (XSDComplexTypeTraverser::fErrorWildcard == nullptr) {
		$var($XSWildcardDecl, wildcard, $new($XSWildcardDecl));
		wildcard->fProcessContents = $XSWildcardDecl::PC_SKIP;
		$assignStatic(XSDComplexTypeTraverser::fErrorWildcard, wildcard);
	}
	return XSDComplexTypeTraverser::fErrorWildcard;
}

void XSDComplexTypeTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractParticleTraverser::init$(handler, gAttrCheck);
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	this->fFinal = $XSConstants::DERIVATION_NONE;
	this->fBlock = $XSConstants::DERIVATION_NONE;
	this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_EMPTY;
	$set(this, fBaseType, nullptr);
	$set(this, fAttrGrp, nullptr);
	$set(this, fXSSimpleType, nullptr);
	$set(this, fParticle, nullptr);
	this->fIsAbstract = false;
	$set(this, fComplexTypeDecl, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fGlobalStore, nullptr);
	this->fGlobalStorePos = 0;
}

$XSComplexTypeDecl* XSDComplexTypeTraverser::traverseLocal($Element* complexTypeNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(complexTypeNode, false, schemaDoc));
	$var($String, complexTypeName, genAnonTypeName(complexTypeNode));
	contentBackup();
	$var($XSComplexTypeDecl, type, traverseComplexTypeDecl(complexTypeNode, complexTypeName, attrValues, schemaDoc, grammar));
	contentRestore();
	$nc(grammar)->addComplexTypeDecl(type, $($nc(this->fSchemaHandler)->element2Locator(complexTypeNode)));
	$nc(type)->setIsAnonymous();
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return type;
}

$XSComplexTypeDecl* XSDComplexTypeTraverser::traverseGlobal($Element* complexTypeNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(complexTypeNode, true, schemaDoc));
	$var($String, complexTypeName, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	contentBackup();
	$var($XSComplexTypeDecl, type, traverseComplexTypeDecl(complexTypeNode, complexTypeName, attrValues, schemaDoc, grammar));
	contentRestore();
	$nc(grammar)->addComplexTypeDecl(type, $($nc(this->fSchemaHandler)->element2Locator(complexTypeNode)));
	if (complexTypeName == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_COMPLEXTYPE),
			$of($SchemaSymbols::ATT_NAME)
		}), complexTypeNode);
		$assign(type, nullptr);
	} else {
		if (grammar->getGlobalTypeDecl($($nc(type)->getName())) == nullptr) {
			grammar->addGlobalComplexTypeDecl(type);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($XSTypeDefinition, type2, grammar->getGlobalTypeDecl($($nc(type)->getName()), loc));
		if (type2 == nullptr) {
			grammar->addGlobalComplexTypeDecl(type, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (type2 != nullptr) {
				if ($instanceOf($XSComplexTypeDecl, type2)) {
					$assign(type, $cast($XSComplexTypeDecl, type2));
				}
			}
			$nc(this->fSchemaHandler)->addGlobalTypeDecl(type);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return type;
}

$XSComplexTypeDecl* XSDComplexTypeTraverser::traverseComplexTypeDecl($Element* complexTypeDecl, $String* complexTypeName, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$set(this, fComplexTypeDecl, $new($XSComplexTypeDecl));
	$set(this, fAttrGrp, $new($XSAttributeGroupDecl));
	$init($XSAttributeChecker);
	$var($Boolean, abstractAtt, $cast($Boolean, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_ABSTRACT)));
	$var($XInt, blockAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_BLOCK)));
	$var($Boolean, mixedAtt, $cast($Boolean, attrValues->get($XSAttributeChecker::ATTIDX_MIXED)));
	$var($XInt, finalAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_FINAL)));
	$set(this, fName, complexTypeName);
	$nc(this->fComplexTypeDecl)->setName(this->fName);
	$set(this, fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
	this->fBlock = blockAtt == nullptr ? schemaDoc->fBlockDefault : $nc(blockAtt)->shortValue();
	this->fFinal = finalAtt == nullptr ? schemaDoc->fFinalDefault : $nc(finalAtt)->shortValue();
	this->fBlock &= (uint16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION);
	this->fFinal &= (uint16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION);
	this->fIsAbstract = (abstractAtt != nullptr && abstractAtt->booleanValue());
	$set(this, fAnnotations, nullptr);
	$var($Element, child, nullptr);
	try {
		$assign(child, $DOMUtil::getFirstChildElement(complexTypeDecl));
		if (child != nullptr) {
			$init($SchemaSymbols);
			if ($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				addAnnotation($(traverseAnnotationDecl(child, attrValues, false, schemaDoc)));
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			} else {
				$var($String, text, $DOMUtil::getSyntheticAnnotation(complexTypeDecl));
				if (text != nullptr) {
					addAnnotation($(traverseSyntheticAnnotation(complexTypeDecl, text, attrValues, false, schemaDoc)));
				}
			}
			if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$of($SchemaSymbols::ELT_ANNOTATION)
				}), child);
			}
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(complexTypeDecl));
			if (text != nullptr) {
				addAnnotation($(traverseSyntheticAnnotation(complexTypeDecl, text, attrValues, false, schemaDoc)));
			}
		}
		if (child == nullptr) {
			$init($SchemaGrammar);
			$set(this, fBaseType, $SchemaGrammar::fAnyType);
			this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
			processComplexContent(child, $nc(mixedAtt)->booleanValue(), false, schemaDoc, grammar);
		} else {
			$init($SchemaSymbols);
			if ($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_SIMPLECONTENT)) {
				traverseSimpleContent(child, schemaDoc, grammar);
				$var($Element, elemTmp, $DOMUtil::getNextSiblingElement(child));
				if (elemTmp != nullptr) {
					$var($String, siblingName, $DOMUtil::getLocalName(elemTmp));
					$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
						$of(this->fName),
						$of(siblingName)
					}), elemTmp);
				}
			} else {
				if ($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_COMPLEXCONTENT)) {
					traverseComplexContent(child, $nc(mixedAtt)->booleanValue(), schemaDoc, grammar);
					$var($Element, elemTmp, $DOMUtil::getNextSiblingElement(child));
					if (elemTmp != nullptr) {
						$var($String, siblingName, $DOMUtil::getLocalName(elemTmp));
						$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
							$of(this->fName),
							$of(siblingName)
						}), elemTmp);
					}
				} else {
					$init($SchemaGrammar);
					$set(this, fBaseType, $SchemaGrammar::fAnyType);
					this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
					processComplexContent(child, $nc(mixedAtt)->booleanValue(), false, schemaDoc, grammar);
				}
			}
		}
	} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
		handleComplexTypeError($(e->getMessage()), e->errorSubstText, e->errorElem);
	}
	$nc(this->fComplexTypeDecl)->setValues(this->fName, this->fTargetNamespace, this->fBaseType, this->fDerivedBy, this->fFinal, this->fBlock, this->fContentType, this->fIsAbstract, this->fAttrGrp, this->fXSSimpleType, this->fParticle, $$new($XSObjectListImpl, $fcast($XSObjectArray, this->fAnnotations), this->fAnnotations == nullptr ? 0 : $nc(this->fAnnotations)->length));
	return this->fComplexTypeDecl;
}

void XSDComplexTypeTraverser::traverseSimpleContent($Element* simpleContentElement, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, simpleContentAttrValues, $nc(this->fAttrChecker)->checkAttributes(simpleContentElement, false, schemaDoc));
	this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_SIMPLE;
	$set(this, fParticle, nullptr);
	$var($Element, simpleContent, $DOMUtil::getFirstChildElement(simpleContentElement));
	$init($SchemaSymbols);
	if (simpleContent != nullptr && $nc($($DOMUtil::getLocalName(simpleContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		addAnnotation($(traverseAnnotationDecl(simpleContent, simpleContentAttrValues, false, schemaDoc)));
		$assign(simpleContent, $DOMUtil::getNextSiblingElement(simpleContent));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(simpleContentElement));
		if (text != nullptr) {
			addAnnotation($(traverseSyntheticAnnotation(simpleContentElement, text, simpleContentAttrValues, false, schemaDoc)));
		}
	}
	if (simpleContent == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.2"_s, $$new($ObjectArray, {
			$of(this->fName),
			$of($SchemaSymbols::ELT_SIMPLECONTENT)
		}), simpleContentElement);
	}
	$var($String, simpleContentName, $DOMUtil::getLocalName(simpleContent));
	if ($nc(simpleContentName)->equals($SchemaSymbols::ELT_RESTRICTION)) {
		this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	} else {
		if (simpleContentName->equals($SchemaSymbols::ELT_EXTENSION)) {
			this->fDerivedBy = $XSConstants::DERIVATION_EXTENSION;
		} else {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$of(simpleContentName)
			}), simpleContent);
		}
	}
	$var($Element, elemTmp, $DOMUtil::getNextSiblingElement(simpleContent));
	if (elemTmp != nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
		$var($String, siblingName, $DOMUtil::getLocalName(elemTmp));
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
			$of(this->fName),
			$of(siblingName)
		}), elemTmp);
	}
	$var($ObjectArray, derivationTypeAttrValues, $nc(this->fAttrChecker)->checkAttributes(simpleContent, false, schemaDoc));
	$var($QName, baseTypeName, $cast($QName, $nc(derivationTypeAttrValues)->get($XSAttributeChecker::ATTIDX_BASE)));
	if (baseTypeName == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of(simpleContentName),
			$of("base"_s)
		}), simpleContent);
	}
	$var($XSTypeDefinition, type, $cast($XSTypeDefinition, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::TYPEDECL_TYPE, baseTypeName, simpleContent)));
	if (type == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError);
	}
	$set(this, fBaseType, type);
	$var($XSSimpleType, baseValidator, nullptr);
	$var($XSComplexTypeDecl, baseComplexType, nullptr);
	int32_t baseFinalSet = 0;
	if ($nc(type)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$assign(baseComplexType, $cast($XSComplexTypeDecl, type));
		baseFinalSet = baseComplexType->getFinal();
		if (baseComplexType->getContentType() == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
			$assign(baseValidator, $cast($XSSimpleType, baseComplexType->getSimpleType()));
		} else {
			bool var$1 = this->fDerivedBy == $XSConstants::DERIVATION_RESTRICTION && baseComplexType->getContentType() == $XSComplexTypeDecl::CONTENTTYPE_MIXED;
			if (var$1 && $nc(($cast($XSParticleDecl, $(baseComplexType->getParticle()))))->emptiable()) {
			} else {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "src-ct.2.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of(baseComplexType->getName()))
				}), simpleContent);
			}
		}
	} else {
		$assign(baseValidator, $cast($XSSimpleType, type));
		if (this->fDerivedBy == $XSConstants::DERIVATION_RESTRICTION) {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "src-ct.2.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$($of(baseValidator->getName()))
			}), simpleContent);
		}
		baseFinalSet = baseValidator->getFinal();
	}
	if (((int32_t)(baseFinalSet & (uint32_t)(int32_t)this->fDerivedBy)) != 0) {
		$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$var($String, errorKey, (this->fDerivedBy == $XSConstants::DERIVATION_EXTENSION) ? "cos-ct-extends.1.1"_s : "derivation-ok-restriction.1"_s);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorKey, $$new($ObjectArray, {
			$of(this->fName),
			$($of($nc(this->fBaseType)->getName()))
		}), simpleContent);
	}
	$var($Element, scElement, simpleContent);
	$assign(simpleContent, $DOMUtil::getFirstChildElement(simpleContent));
	if (simpleContent != nullptr) {
		if ($nc($($DOMUtil::getLocalName(simpleContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			addAnnotation($(traverseAnnotationDecl(simpleContent, derivationTypeAttrValues, false, schemaDoc)));
			$assign(simpleContent, $DOMUtil::getNextSiblingElement(simpleContent));
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(scElement));
			if (text != nullptr) {
				addAnnotation($(traverseSyntheticAnnotation(scElement, text, derivationTypeAttrValues, false, schemaDoc)));
			}
		}
		if (simpleContent != nullptr && $nc($($DOMUtil::getLocalName(simpleContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$of($SchemaSymbols::ELT_ANNOTATION)
			}), simpleContent);
		}
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(scElement));
		if (text != nullptr) {
			addAnnotation($(traverseSyntheticAnnotation(scElement, text, derivationTypeAttrValues, false, schemaDoc)));
		}
	}
	if (this->fDerivedBy == $XSConstants::DERIVATION_RESTRICTION) {
		if (simpleContent != nullptr && $nc($($DOMUtil::getLocalName(simpleContent)))->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
			$var($XSSimpleType, dv, $nc($nc(this->fSchemaHandler)->fSimpleTypeTraverser)->traverseLocal(simpleContent, schemaDoc, grammar));
			if (dv == nullptr) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError);
			}
			if (baseValidator != nullptr && !$XSConstraints::checkSimpleDerivationOk(dv, baseValidator, baseValidator->getFinal())) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "derivation-ok-restriction.5.2.2.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of($nc(dv)->getName())),
					$($of(baseValidator->getName()))
				}), simpleContent);
			}
			$assign(baseValidator, dv);
			$assign(simpleContent, $DOMUtil::getNextSiblingElement(simpleContent));
		}
		if (baseValidator == nullptr) {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "src-ct.2.2"_s, $$new($ObjectArray, {$of(this->fName)}), simpleContent);
		}
		$var($Element, attrNode, nullptr);
		$var($XSFacets, facetData, nullptr);
		int16_t presentFacets = (int16_t)0;
		int16_t fixedFacets = (int16_t)0;
		if (simpleContent != nullptr) {
			$var($XSDAbstractTraverser$FacetInfo, fi, traverseFacets(simpleContent, this->fComplexTypeDecl, baseValidator, schemaDoc));
			$assign(attrNode, $nc(fi)->nodeAfterFacets);
			$assign(facetData, fi->facetdata);
			presentFacets = fi->fPresentFacets;
			fixedFacets = fi->fFixedFacets;
		}
		$var($String, name, genAnonTypeName(simpleContentElement));
		$set(this, fXSSimpleType, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeRestriction(name, $nc(schemaDoc)->fTargetNamespace, (int16_t)0, baseValidator, nullptr));
		try {
			$nc(this->fValidationState)->setNamespaceSupport($nc(schemaDoc)->fNamespaceSupport);
			$nc(this->fXSSimpleType)->applyFacets(facetData, presentFacets, fixedFacets, this->fValidationState);
		} catch ($InvalidDatatypeFacetException& ex) {
			$var($String, var$2, ex->getKey());
			reportSchemaError(var$2, $(ex->getArgs()), simpleContent);
			$set(this, fXSSimpleType, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeRestriction(name, $nc(schemaDoc)->fTargetNamespace, (int16_t)0, baseValidator, nullptr));
		}
		if ($instanceOf($XSSimpleTypeDecl, this->fXSSimpleType)) {
			$nc(($cast($XSSimpleTypeDecl, this->fXSSimpleType)))->setAnonymous(true);
		}
		if (attrNode != nullptr) {
			if (!isAttrOrAttrGroup(attrNode)) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of($DOMUtil::getLocalName(attrNode)))
				}), attrNode);
			}
			$var($Element, node, traverseAttrsAndAttrGrps(attrNode, this->fAttrGrp, schemaDoc, grammar, this->fComplexTypeDecl));
			if (node != nullptr) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of($DOMUtil::getLocalName(node)))
				}), node);
			}
		}
		try {
			mergeAttributes($($nc(baseComplexType)->getAttrGrp()), this->fAttrGrp, this->fName, false, simpleContentElement);
		} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throw(e);
		}
		$nc(this->fAttrGrp)->removeProhibitedAttrs();
		$var($ObjectArray, errArgs, $nc(this->fAttrGrp)->validRestrictionOf(this->fName, $($nc(baseComplexType)->getAttrGrp())));
		if (errArgs != nullptr) {
			$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, $cast($String, errArgs->get(errArgs->length - 1)), errArgs, attrNode);
		}
	} else {
		$set(this, fXSSimpleType, baseValidator);
		if (simpleContent != nullptr) {
			$var($Element, attrNode, simpleContent);
			if (!isAttrOrAttrGroup(attrNode)) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of($DOMUtil::getLocalName(attrNode)))
				}), attrNode);
			}
			$var($Element, node, traverseAttrsAndAttrGrps(attrNode, this->fAttrGrp, schemaDoc, grammar, this->fComplexTypeDecl));
			if (node != nullptr) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
					$of(this->fName),
					$($of($DOMUtil::getLocalName(node)))
				}), node);
			}
			$nc(this->fAttrGrp)->removeProhibitedAttrs();
		}
		if (baseComplexType != nullptr) {
			try {
				mergeAttributes($(baseComplexType->getAttrGrp()), this->fAttrGrp, this->fName, true, simpleContentElement);
			} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
				$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throw(e);
			}
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(simpleContentAttrValues, schemaDoc);
	$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
}

void XSDComplexTypeTraverser::traverseComplexContent($Element* complexContentElement, bool mixedOnType, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, complexContentAttrValues, $nc(this->fAttrChecker)->checkAttributes(complexContentElement, false, schemaDoc));
	bool mixedContent = mixedOnType;
	$var($Boolean, mixedAtt, $cast($Boolean, $nc(complexContentAttrValues)->get($XSAttributeChecker::ATTIDX_MIXED)));
	if (mixedAtt != nullptr) {
		mixedContent = mixedAtt->booleanValue();
	}
	$set(this, fXSSimpleType, nullptr);
	$var($Element, complexContent, $DOMUtil::getFirstChildElement(complexContentElement));
	$init($SchemaSymbols);
	if (complexContent != nullptr && $nc($($DOMUtil::getLocalName(complexContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		addAnnotation($(traverseAnnotationDecl(complexContent, complexContentAttrValues, false, schemaDoc)));
		$assign(complexContent, $DOMUtil::getNextSiblingElement(complexContent));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(complexContentElement));
		if (text != nullptr) {
			addAnnotation($(traverseSyntheticAnnotation(complexContentElement, text, complexContentAttrValues, false, schemaDoc)));
		}
	}
	if (complexContent == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.2"_s, $$new($ObjectArray, {
			$of(this->fName),
			$of($SchemaSymbols::ELT_COMPLEXCONTENT)
		}), complexContentElement);
	}
	$var($String, complexContentName, $DOMUtil::getLocalName(complexContent));
	if ($nc(complexContentName)->equals($SchemaSymbols::ELT_RESTRICTION)) {
		this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	} else {
		if (complexContentName->equals($SchemaSymbols::ELT_EXTENSION)) {
			this->fDerivedBy = $XSConstants::DERIVATION_EXTENSION;
		} else {
			$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$of(complexContentName)
			}), complexContent);
		}
	}
	$var($Element, elemTmp, $DOMUtil::getNextSiblingElement(complexContent));
	if (elemTmp != nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$var($String, siblingName, $DOMUtil::getLocalName(elemTmp));
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
			$of(this->fName),
			$of(siblingName)
		}), elemTmp);
	}
	$var($ObjectArray, derivationTypeAttrValues, $nc(this->fAttrChecker)->checkAttributes(complexContent, false, schemaDoc));
	$var($QName, baseTypeName, $cast($QName, $nc(derivationTypeAttrValues)->get($XSAttributeChecker::ATTIDX_BASE)));
	if (baseTypeName == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of(complexContentName),
			$of("base"_s)
		}), complexContent);
	}
	$var($XSTypeDefinition, type, $cast($XSTypeDefinition, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::TYPEDECL_TYPE, baseTypeName, complexContent)));
	if (type == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError);
	}
	if (!($instanceOf($XSComplexTypeDecl, type))) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "src-ct.1"_s, $$new($ObjectArray, {
			$of(this->fName),
			$($of($nc(type)->getName()))
		}), complexContent);
	}
	$var($XSComplexTypeDecl, baseType, $cast($XSComplexTypeDecl, type));
	$set(this, fBaseType, baseType);
	if (((int32_t)($nc(baseType)->getFinal() & (uint32_t)(int32_t)this->fDerivedBy)) != 0) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$var($String, errorKey, (this->fDerivedBy == $XSConstants::DERIVATION_EXTENSION) ? "cos-ct-extends.1.1"_s : "derivation-ok-restriction.1"_s);
		$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorKey, $$new($ObjectArray, {
			$of(this->fName),
			$($of($nc(this->fBaseType)->getName()))
		}), complexContent);
	}
	$assign(complexContent, $DOMUtil::getFirstChildElement(complexContent));
	if (complexContent != nullptr) {
		if ($nc($($DOMUtil::getLocalName(complexContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			addAnnotation($(traverseAnnotationDecl(complexContent, derivationTypeAttrValues, false, schemaDoc)));
			$assign(complexContent, $DOMUtil::getNextSiblingElement(complexContent));
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(complexContent));
			if (text != nullptr) {
				addAnnotation($(traverseSyntheticAnnotation(complexContent, text, derivationTypeAttrValues, false, schemaDoc)));
			}
		}
		if (complexContent != nullptr && $nc($($DOMUtil::getLocalName(complexContent)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$of($SchemaSymbols::ELT_ANNOTATION)
			}), complexContent);
		}
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(complexContent));
		if (text != nullptr) {
			addAnnotation($(traverseSyntheticAnnotation(complexContent, text, derivationTypeAttrValues, false, schemaDoc)));
		}
	}
	try {
		processComplexContent(complexContent, mixedContent, true, schemaDoc, grammar);
	} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
		$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
		$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
		$throw(e);
	}
	$var($XSParticleDecl, baseContent, $cast($XSParticleDecl, $nc(baseType)->getParticle()));
	if (this->fDerivedBy == $XSConstants::DERIVATION_RESTRICTION) {
		if (this->fContentType == $XSComplexTypeDecl::CONTENTTYPE_MIXED && baseType->getContentType() != $XSComplexTypeDecl::CONTENTTYPE_MIXED) {
			$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "derivation-ok-restriction.5.4.1.2"_s, $$new($ObjectArray, {
				$of(this->fName),
				$($of(baseType->getName()))
			}), complexContent);
		}
		try {
			mergeAttributes($(baseType->getAttrGrp()), this->fAttrGrp, this->fName, false, complexContent);
		} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
			$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throw(e);
		}
		$nc(this->fAttrGrp)->removeProhibitedAttrs();
		$init($SchemaGrammar);
		if (baseType != $SchemaGrammar::fAnyType) {
			$var($ObjectArray, errArgs, $nc(this->fAttrGrp)->validRestrictionOf(this->fName, $(baseType->getAttrGrp())));
			if (errArgs != nullptr) {
				$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, $cast($String, errArgs->get(errArgs->length - 1)), errArgs, complexContent);
			}
		}
	} else {
		if (this->fParticle == nullptr) {
			this->fContentType = baseType->getContentType();
			$set(this, fXSSimpleType, $cast($XSSimpleType, baseType->getSimpleType()));
			$set(this, fParticle, baseContent);
		} else if (baseType->getContentType() == $XSComplexTypeDecl::CONTENTTYPE_EMPTY) {
		} else {
			if (this->fContentType == $XSComplexTypeDecl::CONTENTTYPE_ELEMENT && baseType->getContentType() != $XSComplexTypeDecl::CONTENTTYPE_ELEMENT) {
				$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "cos-ct-extends.1.4.3.2.2.1.a"_s, $$new($ObjectArray, {$of(this->fName)}), complexContent);
			} else if (this->fContentType == $XSComplexTypeDecl::CONTENTTYPE_MIXED && baseType->getContentType() != $XSComplexTypeDecl::CONTENTTYPE_MIXED) {
				$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "cos-ct-extends.1.4.3.2.2.1.b"_s, $$new($ObjectArray, {$of(this->fName)}), complexContent);
			}
			bool var$0 = $nc(this->fParticle)->fType == $XSParticleDecl::PARTICLE_MODELGROUP && $nc(($cast($XSModelGroupImpl, $nc(this->fParticle)->fValue)))->fCompositor == $XSModelGroupImpl::MODELGROUP_ALL;
			if (!var$0) {
				bool var$1 = $nc(($cast($XSParticleDecl, $(baseType->getParticle()))))->fType == $XSParticleDecl::PARTICLE_MODELGROUP;
				var$0 = var$1 && $nc(($cast($XSModelGroupImpl, $nc(($cast($XSParticleDecl, $(baseType->getParticle()))))->fValue)))->fCompositor == $XSModelGroupImpl::MODELGROUP_ALL;
			}
			if (var$0) {
				$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
				$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "cos-all-limited.1.2"_s, $$new($ObjectArray, 0), complexContent);
			}
			$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
			group->fCompositor = $XSModelGroupImpl::MODELGROUP_SEQUENCE;
			group->fParticleCount = 2;
			$set(group, fParticles, $new($XSParticleDeclArray, 2));
			$nc(group->fParticles)->set(0, $cast($XSParticleDecl, $(baseType->getParticle())));
			$nc(group->fParticles)->set(1, this->fParticle);
			$init($XSObjectListImpl);
			$set(group, fAnnotations, $XSObjectListImpl::EMPTY_LIST);
			$var($XSParticleDecl, particle, $new($XSParticleDecl));
			particle->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
			$set(particle, fValue, group);
			$set(particle, fAnnotations, $XSObjectListImpl::EMPTY_LIST);
			$set(this, fParticle, particle);
		}
		$nc(this->fAttrGrp)->removeProhibitedAttrs();
		try {
			mergeAttributes($(baseType->getAttrGrp()), this->fAttrGrp, this->fName, true, complexContent);
		} catch ($XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
			$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
			$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
			$throw(e);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(complexContentAttrValues, schemaDoc);
	$nc(this->fAttrChecker)->returnAttrArray(derivationTypeAttrValues, schemaDoc);
}

void XSDComplexTypeTraverser::mergeAttributes($XSAttributeGroupDecl* fromAttrGrp, $XSAttributeGroupDecl* toAttrGrp, $String* typeName, bool extension, $Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($XSObjectList, attrUseS, $nc(fromAttrGrp)->getAttributeUses());
	$var($XSAttributeUseImpl, oneAttrUse, nullptr);
	int32_t attrCount = $nc(attrUseS)->getLength();
	for (int32_t i = 0; i < attrCount; ++i) {
		$assign(oneAttrUse, $cast($XSAttributeUseImpl, attrUseS->item(i)));
		$var($String, var$0, $nc($nc(oneAttrUse)->fAttrDecl)->getNamespace());
		$var($XSAttributeUse, existingAttrUse, $nc(toAttrGrp)->getAttributeUse(var$0, $($nc(oneAttrUse->fAttrDecl)->getName())));
		if (existingAttrUse == nullptr) {
			$var($String, idName, toAttrGrp->addAttributeUse(oneAttrUse));
			if (idName != nullptr) {
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "ct-props-correct.5"_s, $$new($ObjectArray, {
					$of(typeName),
					$of(idName),
					$($of($nc($nc(oneAttrUse)->fAttrDecl)->getName()))
				}), elem);
			}
		} else if (!$equals(existingAttrUse, oneAttrUse)) {
			if (extension) {
				reportSchemaError("ct-props-correct.4"_s, $$new($ObjectArray, {
					$of(typeName),
					$($of($nc($nc(oneAttrUse)->fAttrDecl)->getName()))
				}), elem);
				toAttrGrp->replaceAttributeUse(existingAttrUse, oneAttrUse);
			}
		}
	}
	if (extension) {
		if ($nc(toAttrGrp)->fAttributeWC == nullptr) {
			$set(toAttrGrp, fAttributeWC, fromAttrGrp->fAttributeWC);
		} else if (fromAttrGrp->fAttributeWC != nullptr) {
			$set(toAttrGrp, fAttributeWC, $nc(toAttrGrp->fAttributeWC)->performUnionWith(fromAttrGrp->fAttributeWC, $nc(toAttrGrp->fAttributeWC)->fProcessContents));
			if (toAttrGrp->fAttributeWC == nullptr) {
				$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "src-ct.5"_s, $$new($ObjectArray, {$of(typeName)}), elem);
			}
		}
	}
}

void XSDComplexTypeTraverser::processComplexContent($Element* complexContentChild, bool isMixed, bool isDerivation, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($Element, attrNode, nullptr);
	$var($XSParticleDecl, particle, nullptr);
	bool emptyParticle = false;
	if (complexContentChild != nullptr) {
		$var($String, childName, $DOMUtil::getLocalName(complexContentChild));
		$init($SchemaSymbols);
		if ($nc(childName)->equals($SchemaSymbols::ELT_GROUP)) {
			$assign(particle, $nc($nc(this->fSchemaHandler)->fGroupTraverser)->traverseLocal(complexContentChild, schemaDoc, grammar));
			$assign(attrNode, $DOMUtil::getNextSiblingElement(complexContentChild));
		} else {
			if (childName->equals($SchemaSymbols::ELT_SEQUENCE)) {
				$assign(particle, traverseSequence(complexContentChild, schemaDoc, grammar, $XSDAbstractTraverser::NOT_ALL_CONTEXT, this->fComplexTypeDecl));
				if (particle != nullptr) {
					$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
					if ($nc(group)->fParticleCount == 0) {
						emptyParticle = true;
					}
				}
				$assign(attrNode, $DOMUtil::getNextSiblingElement(complexContentChild));
			} else {
				if (childName->equals($SchemaSymbols::ELT_CHOICE)) {
					$assign(particle, traverseChoice(complexContentChild, schemaDoc, grammar, $XSDAbstractTraverser::NOT_ALL_CONTEXT, this->fComplexTypeDecl));
					if (particle != nullptr && particle->fMinOccurs == 0) {
						$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
						if ($nc(group)->fParticleCount == 0) {
							emptyParticle = true;
						}
					}
					$assign(attrNode, $DOMUtil::getNextSiblingElement(complexContentChild));
				} else {
					if (childName->equals($SchemaSymbols::ELT_ALL)) {
						$assign(particle, traverseAll(complexContentChild, schemaDoc, grammar, $XSDAbstractTraverser::PROCESSING_ALL_GP, this->fComplexTypeDecl));
						if (particle != nullptr) {
							$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
							if ($nc(group)->fParticleCount == 0) {
								emptyParticle = true;
							}
						}
						$assign(attrNode, $DOMUtil::getNextSiblingElement(complexContentChild));
					} else {
						$assign(attrNode, complexContentChild);
					}
				}
			}
		}
	}
	if (emptyParticle) {
		$var($Element, child, $DOMUtil::getFirstChildElement(complexContentChild));
		if (child != nullptr) {
			$init($SchemaSymbols);
			if ($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			}
		}
		if (child == nullptr) {
			$assign(particle, nullptr);
		}
	}
	if (particle == nullptr && isMixed) {
		$assign(particle, $XSConstraints::getEmptySequence());
	}
	$set(this, fParticle, particle);
	if (this->fParticle == nullptr) {
		this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_EMPTY;
	} else if (isMixed) {
		this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_MIXED;
	} else {
		this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_ELEMENT;
	}
	if (attrNode != nullptr) {
		if (!isAttrOrAttrGroup(attrNode)) {
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$($of($DOMUtil::getLocalName(attrNode)))
			}), attrNode);
		}
		$var($Element, node, traverseAttrsAndAttrGrps(attrNode, this->fAttrGrp, schemaDoc, grammar, this->fComplexTypeDecl));
		if (node != nullptr) {
			$throwNew($XSDComplexTypeTraverser$ComplexTypeRecoverableError, "s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
				$of(this->fName),
				$($of($DOMUtil::getLocalName(node)))
			}), node);
		}
		if (!isDerivation) {
			$nc(this->fAttrGrp)->removeProhibitedAttrs();
		}
	}
}

bool XSDComplexTypeTraverser::isAttrOrAttrGroup($Element* e) {
	$var($String, elementName, $DOMUtil::getLocalName(e));
	$init($SchemaSymbols);
	bool var$1 = $nc(elementName)->equals($SchemaSymbols::ELT_ATTRIBUTE);
	bool var$0 = var$1 || $nc(elementName)->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP);
	if (var$0 || $nc(elementName)->equals($SchemaSymbols::ELT_ANYATTRIBUTE)) {
		return true;
	} else {
		return false;
	}
}

void XSDComplexTypeTraverser::traverseSimpleContentDecl($Element* simpleContentDecl) {
}

void XSDComplexTypeTraverser::traverseComplexContentDecl($Element* complexContentDecl, bool mixedOnComplexTypeDecl) {
}

$String* XSDComplexTypeTraverser::genAnonTypeName($Element* complexTypeDecl) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, typeName, $new($StringBuffer, "#AnonType_"_s));
	$var($Element, node, $DOMUtil::getParent(complexTypeDecl));
	while (node != nullptr && (node != $DOMUtil::getRoot($($DOMUtil::getDocument(node))))) {
		$init($SchemaSymbols);
		typeName->append($(node->getAttribute($SchemaSymbols::ATT_NAME)));
		$assign(node, $DOMUtil::getParent(node));
	}
	return typeName->toString();
}

void XSDComplexTypeTraverser::handleComplexTypeError($String* messageId, $ObjectArray* args, $Element* e) {
	if (messageId != nullptr) {
		reportSchemaError(messageId, args, e);
	}
	$init($SchemaGrammar);
	$set(this, fBaseType, $SchemaGrammar::fAnyType);
	this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_MIXED;
	$set(this, fXSSimpleType, nullptr);
	$set(this, fParticle, getErrorContent());
	$set($nc(this->fAttrGrp), fAttributeWC, getErrorWildcard());
}

void XSDComplexTypeTraverser::contentBackup() {
	$useLocalCurrentObjectStackCache();
	if (this->fGlobalStore == nullptr) {
		$set(this, fGlobalStore, $new($ObjectArray, XSDComplexTypeTraverser::GLOBAL_NUM));
		this->fGlobalStorePos = 0;
	}
	if (this->fGlobalStorePos == $nc(this->fGlobalStore)->length) {
		$var($ObjectArray, newArray, $new($ObjectArray, this->fGlobalStorePos + XSDComplexTypeTraverser::GLOBAL_NUM));
		$System::arraycopy(this->fGlobalStore, 0, newArray, 0, this->fGlobalStorePos);
		$set(this, fGlobalStore, newArray);
	}
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fComplexTypeDecl);
	$init($Boolean);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fIsAbstract ? $Boolean::TRUE : $Boolean::FALSE);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fName);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fTargetNamespace);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, $($Integer::valueOf((this->fDerivedBy << 16) + this->fFinal)));
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, $($Integer::valueOf((this->fBlock << 16) + this->fContentType)));
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fBaseType);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fAttrGrp);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fParticle);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fXSSimpleType);
	$nc(this->fGlobalStore)->set(this->fGlobalStorePos++, this->fAnnotations);
}

void XSDComplexTypeTraverser::contentRestore() {
	$set(this, fAnnotations, $cast($XSAnnotationImplArray, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	$set(this, fXSSimpleType, $cast($XSSimpleType, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	$set(this, fParticle, $cast($XSParticleDecl, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	$set(this, fAttrGrp, $cast($XSAttributeGroupDecl, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	$set(this, fBaseType, $cast($XSTypeDefinition, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	int32_t i = $nc((($cast($Integer, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)))))->intValue();
	this->fBlock = (int16_t)(i >> 16);
	this->fContentType = (int16_t)i;
	i = $nc((($cast($Integer, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)))))->intValue();
	this->fDerivedBy = (int16_t)(i >> 16);
	this->fFinal = (int16_t)i;
	$set(this, fTargetNamespace, $cast($String, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	$set(this, fName, $cast($String, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
	this->fIsAbstract = $nc(($cast($Boolean, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos))))->booleanValue();
	$set(this, fComplexTypeDecl, $cast($XSComplexTypeDecl, $nc(this->fGlobalStore)->get(--this->fGlobalStorePos)));
}

void XSDComplexTypeTraverser::addAnnotation($XSAnnotationImpl* annotation) {
	if (annotation == nullptr) {
		return;
	}
	if (this->fAnnotations == nullptr) {
		$set(this, fAnnotations, $new($XSAnnotationImplArray, 1));
	} else {
		$var($XSAnnotationImplArray, tempArray, $new($XSAnnotationImplArray, $nc(this->fAnnotations)->length + 1));
		$System::arraycopy(this->fAnnotations, 0, tempArray, 0, $nc(this->fAnnotations)->length);
		$set(this, fAnnotations, tempArray);
	}
	$nc(this->fAnnotations)->set($nc(this->fAnnotations)->length - 1, annotation);
}

void clinit$XSDComplexTypeTraverser($Class* class$) {
	$assignStatic(XSDComplexTypeTraverser::fErrorContent, nullptr);
	$assignStatic(XSDComplexTypeTraverser::fErrorWildcard, nullptr);
}

XSDComplexTypeTraverser::XSDComplexTypeTraverser() {
}

$Class* XSDComplexTypeTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDComplexTypeTraverser, name, initialize, &_XSDComplexTypeTraverser_ClassInfo_, clinit$XSDComplexTypeTraverser, allocate$XSDComplexTypeTraverser);
	return class$;
}

$Class* XSDComplexTypeTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com