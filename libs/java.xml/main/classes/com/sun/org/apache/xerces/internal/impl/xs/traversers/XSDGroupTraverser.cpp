#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDGroupTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_FROMDEFAULT
#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MINOCCURS
#undef ATTIDX_NAME
#undef ATTIDX_REF
#undef CHILD_OF_GROUP
#undef ELT_ALL
#undef ELT_ANNOTATION
#undef ELT_CHOICE
#undef ELT_GROUP
#undef ELT_SEQUENCE
#undef EMPTY_LIST
#undef EMPTY_STRING
#undef GROUP_REF_WITH_ALL
#undef GROUP_TYPE
#undef MODELGROUP_ALL
#undef PARTICLE_MODELGROUP

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractParticleTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
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

$MethodInfo _XSDGroupTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDGroupTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, 0, $virtualMethod(XSDGroupTraverser, traverseGlobal, $XSGroupDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDGroupTraverser, traverseLocal, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{}
};

$ClassInfo _XSDGroupTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDGroupTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser",
	nullptr,
	nullptr,
	_XSDGroupTraverser_MethodInfo_
};

$Object* allocate$XSDGroupTraverser($Class* clazz) {
	return $of($alloc(XSDGroupTraverser));
}

void XSDGroupTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractParticleTraverser::init$(handler, gAttrCheck);
}

$XSParticleDecl* XSDGroupTraverser::traverseLocal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, false, schemaDoc));
	$var($QName, refAttr, $cast($QName, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_REF)));
	$var($XInt, minAttr, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MINOCCURS)));
	$var($XInt, maxAttr, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MAXOCCURS)));
	$var($XSGroupDecl, group, nullptr);
	if (refAttr == nullptr) {
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of("group (local)"_s),
			$of("ref"_s)
		}), elmNode);
	} else {
		$assign(group, $cast($XSGroupDecl, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::GROUP_TYPE, refAttr, elmNode)));
	}
	$var($XSAnnotationImpl, annotation, nullptr);
	$var($Element, child, $DOMUtil::getFirstChildElement(elmNode));
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
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
			$of("group (local)"_s),
			$of("(annotation?)"_s),
			$($of($DOMUtil::getLocalName(elmNode)))
		}), elmNode);
	}
	int32_t minOccurs = $nc(minAttr)->intValue();
	int32_t maxOccurs = $nc(maxAttr)->intValue();
	$var($XSParticleDecl, particle, nullptr);
	if (group != nullptr && group->fModelGroup != nullptr && !(minOccurs == 0 && maxOccurs == 0)) {
		if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
			$assign(particle, $nc($nc(this->fSchemaHandler)->fDeclPool)->getParticleDecl());
		} else {
			$assign(particle, $new($XSParticleDecl));
		}
		$nc(particle)->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
		$set(particle, fValue, group->fModelGroup);
		particle->fMinOccurs = minOccurs;
		particle->fMaxOccurs = maxOccurs;
		if ($nc(group->fModelGroup)->fCompositor == $XSModelGroupImpl::MODELGROUP_ALL) {
			$var($Long, defaultVals, $cast($Long, attrValues->get($XSAttributeChecker::ATTIDX_FROMDEFAULT)));
			$var($XSParticleDecl, var$0, particle);
			$var($String, var$1, $SchemaSymbols::ELT_GROUP);
			$var($Element, var$2, $cast($Element, $nc(elmNode)->getParentNode()));
			int32_t var$3 = $XSDAbstractTraverser::GROUP_REF_WITH_ALL;
			$assign(particle, checkOccurrences(var$0, var$1, var$2, var$3, $nc(defaultVals)->longValue()));
		}
		if (refAttr != nullptr) {
			$var($XSObjectList, annotations, nullptr);
			if (annotation != nullptr) {
				$assign(annotations, $new($XSObjectListImpl));
				$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
			} else {
				$init($XSObjectListImpl);
				$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
			}
			$set(particle, fAnnotations, annotations);
		} else {
			$set(particle, fAnnotations, group->fAnnotations);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return particle;
}

$XSGroupDecl* XSDGroupTraverser::traverseGlobal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, true, schemaDoc));
	$var($String, strNameAttr, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	if (strNameAttr == nullptr) {
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of("group (global)"_s),
			$of("name"_s)
		}), elmNode);
	}
	$var($XSGroupDecl, group, $new($XSGroupDecl));
	$var($XSParticleDecl, particle, nullptr);
	$var($Element, l_elmChild, $DOMUtil::getFirstChildElement(elmNode));
	$var($XSAnnotationImpl, annotation, nullptr);
	if (l_elmChild == nullptr) {
		reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
			$of("group (global)"_s),
			$of("(annotation?, (all | choice | sequence))"_s)
		}), elmNode);
	} else {
		$var($String, childName, $nc(l_elmChild)->getLocalName());
		$init($SchemaSymbols);
		if ($nc(childName)->equals($SchemaSymbols::ELT_ANNOTATION)) {
			$assign(annotation, traverseAnnotationDecl(l_elmChild, attrValues, true, schemaDoc));
			$assign(l_elmChild, $DOMUtil::getNextSiblingElement(l_elmChild));
			if (l_elmChild != nullptr) {
				$assign(childName, l_elmChild->getLocalName());
			}
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(elmNode));
			if (text != nullptr) {
				$assign(annotation, traverseSyntheticAnnotation(elmNode, text, attrValues, false, schemaDoc));
			}
		}
		if (l_elmChild == nullptr) {
			reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
				$of("group (global)"_s),
				$of("(annotation?, (all | choice | sequence))"_s)
			}), elmNode);
		} else {
			if ($nc(childName)->equals($SchemaSymbols::ELT_ALL)) {
				$assign(particle, traverseAll(l_elmChild, schemaDoc, grammar, $XSDAbstractTraverser::CHILD_OF_GROUP, group));
			} else {
				if (childName->equals($SchemaSymbols::ELT_CHOICE)) {
					$assign(particle, traverseChoice(l_elmChild, schemaDoc, grammar, $XSDAbstractTraverser::CHILD_OF_GROUP, group));
				} else {
					if (childName->equals($SchemaSymbols::ELT_SEQUENCE)) {
						$assign(particle, traverseSequence(l_elmChild, schemaDoc, grammar, $XSDAbstractTraverser::CHILD_OF_GROUP, group));
					} else {
						reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
							$of("group (global)"_s),
							$of("(annotation?, (all | choice | sequence))"_s),
							$($of($DOMUtil::getLocalName(l_elmChild)))
						}), l_elmChild);
					}
				}
			}
		}
		if (l_elmChild != nullptr && $DOMUtil::getNextSiblingElement(l_elmChild) != nullptr) {
			$var($String, var$0, "s4s-elt-must-match.1"_s);
			$var($ObjectArray, var$1, $new($ObjectArray, {
				$of("group (global)"_s),
				$of("(annotation?, (all | choice | sequence))"_s),
				$($of($DOMUtil::getLocalName($($DOMUtil::getNextSiblingElement(l_elmChild)))))
			}));
			reportSchemaError(var$0, var$1, $($DOMUtil::getNextSiblingElement(l_elmChild)));
		}
	}
	if (strNameAttr != nullptr) {
		$set(group, fName, strNameAttr);
		$set(group, fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
		if (particle == nullptr) {
			$assign(particle, $XSConstraints::getEmptySequence());
		}
		$set(group, fModelGroup, $cast($XSModelGroupImpl, $nc(particle)->fValue));
		$var($XSObjectList, annotations, nullptr);
		if (annotation != nullptr) {
			$assign(annotations, $new($XSObjectListImpl));
			$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
		} else {
			$init($XSObjectListImpl);
			$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
		}
		$set(group, fAnnotations, annotations);
		if ($nc(grammar)->getGlobalGroupDecl(group->fName) == nullptr) {
			grammar->addGlobalGroupDecl(group);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($XSGroupDecl, group2, $nc(grammar)->getGlobalGroupDecl(group->fName, loc));
		if (group2 == nullptr) {
			grammar->addGlobalGroupDecl(group, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (group2 != nullptr) {
				$assign(group, group2);
			}
			$nc(this->fSchemaHandler)->addGlobalGroupDecl(group);
		}
	} else {
		$assign(group, nullptr);
	}
	if (group != nullptr) {
		$init($XMLSymbols);
		$var($Object, redefinedGrp, $nc(this->fSchemaHandler)->getGrpOrAttrGrpRedefinedByRestriction($XSDHandler::GROUP_TYPE, $$new($QName, $XMLSymbols::EMPTY_STRING, strNameAttr, strNameAttr, $nc(schemaDoc)->fTargetNamespace), schemaDoc, elmNode));
		if (redefinedGrp != nullptr) {
			$nc(grammar)->addRedefinedGroupDecl(group, $cast($XSGroupDecl, redefinedGrp), $($nc(this->fSchemaHandler)->element2Locator(elmNode)));
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return group;
}

XSDGroupTraverser::XSDGroupTraverser() {
}

$Class* XSDGroupTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDGroupTraverser, name, initialize, &_XSDGroupTraverser_ClassInfo_, allocate$XSDGroupTraverser);
	return class$;
}

$Class* XSDGroupTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com