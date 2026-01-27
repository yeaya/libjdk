#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDWildcardTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MINOCCURS
#undef ATTIDX_NAMESPACE
#undef ATTIDX_NAMESPACE_LIST
#undef ATTIDX_PROCESSCONTENTS
#undef ELT_ANNOTATION
#undef EMPTY_LIST
#undef PARTICLE_WILDCARD

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _XSDWildcardTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDWildcardTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"traverseAny", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDWildcardTraverser, traverseAny, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseAnyAttribute", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, 0, $virtualMethod(XSDWildcardTraverser, traverseAnyAttribute, $XSWildcardDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseWildcardDecl", "(Lorg/w3c/dom/Element;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, 0, $virtualMethod(XSDWildcardTraverser, traverseWildcardDecl, $XSWildcardDecl*, $Element*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*)},
	{}
};

$ClassInfo _XSDWildcardTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDWildcardTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	nullptr,
	_XSDWildcardTraverser_MethodInfo_
};

$Object* allocate$XSDWildcardTraverser($Class* clazz) {
	return $of($alloc(XSDWildcardTraverser));
}

void XSDWildcardTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
}

$XSParticleDecl* XSDWildcardTraverser::traverseAny($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, false, schemaDoc));
	$var($XSWildcardDecl, wildcard, traverseWildcardDecl(elmNode, attrValues, schemaDoc, grammar));
	$var($XSParticleDecl, particle, nullptr);
	if (wildcard != nullptr) {
		int32_t min = $nc(($cast($XInt, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_MINOCCURS))))->intValue();
		int32_t max = $nc(($cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MAXOCCURS))))->intValue();
		if (max != 0) {
			if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
				$assign(particle, $nc($nc(this->fSchemaHandler)->fDeclPool)->getParticleDecl());
			} else {
				$assign(particle, $new($XSParticleDecl));
			}
			$nc(particle)->fType = $XSParticleDecl::PARTICLE_WILDCARD;
			$set(particle, fValue, wildcard);
			particle->fMinOccurs = min;
			particle->fMaxOccurs = max;
			$set(particle, fAnnotations, wildcard->fAnnotations);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return particle;
}

$XSWildcardDecl* XSDWildcardTraverser::traverseAnyAttribute($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, false, schemaDoc));
	$var($XSWildcardDecl, wildcard, traverseWildcardDecl(elmNode, attrValues, schemaDoc, grammar));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return wildcard;
}

$XSWildcardDecl* XSDWildcardTraverser::traverseWildcardDecl($Element* elmNode, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSWildcardDecl, wildcard, $new($XSWildcardDecl));
	$init($XSAttributeChecker);
	$var($XInt, namespaceTypeAttr, $cast($XInt, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAMESPACE)));
	wildcard->fType = $nc(namespaceTypeAttr)->shortValue();
	$set(wildcard, fNamespaceList, $cast($StringArray, attrValues->get($XSAttributeChecker::ATTIDX_NAMESPACE_LIST)));
	$var($XInt, processContentsAttr, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_PROCESSCONTENTS)));
	wildcard->fProcessContents = $nc(processContentsAttr)->shortValue();
	$var($Element, child, $DOMUtil::getFirstChildElement(elmNode));
	$var($XSAnnotationImpl, annotation, nullptr);
	if (child != nullptr) {
		$init($SchemaSymbols);
		if ($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(elmNode));
			if (text != nullptr) {
				$assign(annotation, traverseSyntheticAnnotation(elmNode, text, attrValues, false, schemaDoc));
			}
		}
		if (child != nullptr) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of("wildcard"_s),
				$of("(annotation?)"_s),
				$($of($DOMUtil::getLocalName(child)))
			}), elmNode);
		}
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(elmNode));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(elmNode, text, attrValues, false, schemaDoc));
		}
	}
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$set(wildcard, fAnnotations, annotations);
	return wildcard;
}

XSDWildcardTraverser::XSDWildcardTraverser() {
}

$Class* XSDWildcardTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDWildcardTraverser, name, initialize, &_XSDWildcardTraverser_ClassInfo_, allocate$XSDWildcardTraverser);
	return class$;
}

$Class* XSDWildcardTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com