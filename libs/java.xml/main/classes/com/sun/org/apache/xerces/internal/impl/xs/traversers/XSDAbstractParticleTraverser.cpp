#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser$ParticleArray.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDElementTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDGroupTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDWildcardTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_FROMDEFAULT
#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MINOCCURS
#undef ELT_ALL
#undef ELT_ANNOTATION
#undef ELT_ANY
#undef ELT_CHOICE
#undef ELT_ELEMENT
#undef ELT_GROUP
#undef ELT_SEQUENCE
#undef EMPTY_LIST
#undef MODELGROUP_ALL
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef NOT_ALL_CONTEXT
#undef PARTICLE_MODELGROUP
#undef PROCESSING_ALL_EL

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractParticleTraverser$ParticleArray = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser$ParticleArray;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDElementTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDElementTraverser;
using $XSDGroupTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDGroupTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDWildcardTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDWildcardTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$FieldInfo _XSDAbstractParticleTraverser_FieldInfo_[] = {
	{"fPArray", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser$ParticleArray;", nullptr, 0, $field(XSDAbstractParticleTraverser, fPArray)},
	{}
};

$MethodInfo _XSDAbstractParticleTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDAbstractParticleTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"hasAllContent", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Z", nullptr, $PROTECTED, $virtualMethod(XSDAbstractParticleTraverser, hasAllContent, bool, $XSParticleDecl*)},
	{"traverseAll", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDAbstractParticleTraverser, traverseAll, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, $XSObject*)},
	{"traverseChoice", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDAbstractParticleTraverser, traverseChoice, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, $XSObject*)},
	{"traverseSeqChoice", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;IZLcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(XSDAbstractParticleTraverser, traverseSeqChoice, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, bool, $XSObject*)},
	{"traverseSequence", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDAbstractParticleTraverser, traverseSequence, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, $XSObject*)},
	{}
};

$InnerClassInfo _XSDAbstractParticleTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser$ParticleArray", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser", "ParticleArray", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XSDAbstractParticleTraverser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	_XSDAbstractParticleTraverser_FieldInfo_,
	_XSDAbstractParticleTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_XSDAbstractParticleTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser$ParticleArray"
};

$Object* allocate$XSDAbstractParticleTraverser($Class* clazz) {
	return $of($alloc(XSDAbstractParticleTraverser));
}

void XSDAbstractParticleTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
	$set(this, fPArray, $new($XSDAbstractParticleTraverser$ParticleArray));
}

$XSParticleDecl* XSDAbstractParticleTraverser::traverseAll($Element* allDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, $XSObject* parent) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(allDecl, false, schemaDoc));
	$var($Element, child, $DOMUtil::getFirstChildElement(allDecl));
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
		$assign(child, $DOMUtil::getNextSiblingElement(child));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(allDecl));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(allDecl, text, attrValues, false, schemaDoc));
		}
	}
	$var($String, childName, nullptr);
	$var($XSParticleDecl, particle, nullptr);
	$nc(this->fPArray)->pushContext();
	for (; child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
		$assign(particle, nullptr);
		$assign(childName, $DOMUtil::getLocalName(child));
		if ($nc(childName)->equals($SchemaSymbols::ELT_ELEMENT)) {
			$assign(particle, $nc($nc(this->fSchemaHandler)->fElementTraverser)->traverseLocal(child, schemaDoc, grammar, $XSDAbstractTraverser::PROCESSING_ALL_EL, parent));
		} else {
			$var($ObjectArray, args, $new($ObjectArray, {
				$of("all"_s),
				$of("(annotation?, element*)"_s),
				$($of($DOMUtil::getLocalName(child)))
			}));
			reportSchemaError("s4s-elt-must-match.1"_s, args, child);
		}
		if (particle != nullptr) {
			$nc(this->fPArray)->addParticle(particle);
		}
	}
	$assign(particle, nullptr);
	$var($XInt, minAtt, $cast($XInt, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_MINOCCURS)));
	$var($XInt, maxAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MAXOCCURS)));
	$var($Long, defaultVals, $cast($Long, attrValues->get($XSAttributeChecker::ATTIDX_FROMDEFAULT)));
	$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
	group->fCompositor = $XSModelGroupImpl::MODELGROUP_ALL;
	group->fParticleCount = $nc(this->fPArray)->getParticleCount();
	$set(group, fParticles, $nc(this->fPArray)->popContext());
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$set(group, fAnnotations, annotations);
	$assign(particle, $new($XSParticleDecl));
	particle->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	particle->fMinOccurs = $nc(minAtt)->intValue();
	particle->fMaxOccurs = $nc(maxAtt)->intValue();
	$set(particle, fValue, group);
	$set(particle, fAnnotations, annotations);
	$var($XSParticleDecl, var$0, particle);
	$var($String, var$1, $SchemaSymbols::ELT_ALL);
	$var($Element, var$2, $cast($Element, $nc(allDecl)->getParentNode()));
	int32_t var$3 = allContextFlags;
	$assign(particle, checkOccurrences(var$0, var$1, var$2, var$3, $nc(defaultVals)->longValue()));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return particle;
}

$XSParticleDecl* XSDAbstractParticleTraverser::traverseSequence($Element* seqDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, $XSObject* parent) {
	return traverseSeqChoice(seqDecl, schemaDoc, grammar, allContextFlags, false, parent);
}

$XSParticleDecl* XSDAbstractParticleTraverser::traverseChoice($Element* choiceDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, $XSObject* parent) {
	return traverseSeqChoice(choiceDecl, schemaDoc, grammar, allContextFlags, true, parent);
}

$XSParticleDecl* XSDAbstractParticleTraverser::traverseSeqChoice($Element* decl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, bool choice, $XSObject* parent) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(decl, false, schemaDoc));
	$var($Element, child, $DOMUtil::getFirstChildElement(decl));
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
		$assign(child, $DOMUtil::getNextSiblingElement(child));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(decl));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(decl, text, attrValues, false, schemaDoc));
		}
	}
	$var($String, childName, nullptr);
	$var($XSParticleDecl, particle, nullptr);
	$nc(this->fPArray)->pushContext();
	for (; child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
		$assign(particle, nullptr);
		$assign(childName, $DOMUtil::getLocalName(child));
		if ($nc(childName)->equals($SchemaSymbols::ELT_ELEMENT)) {
			$assign(particle, $nc($nc(this->fSchemaHandler)->fElementTraverser)->traverseLocal(child, schemaDoc, grammar, $XSDAbstractTraverser::NOT_ALL_CONTEXT, parent));
		} else {
			if (childName->equals($SchemaSymbols::ELT_GROUP)) {
				$assign(particle, $nc($nc(this->fSchemaHandler)->fGroupTraverser)->traverseLocal(child, schemaDoc, grammar));
				if (hasAllContent(particle)) {
					$assign(particle, nullptr);
					reportSchemaError("cos-all-limited.1.2"_s, nullptr, child);
				}
			} else {
				if (childName->equals($SchemaSymbols::ELT_CHOICE)) {
					$assign(particle, traverseChoice(child, schemaDoc, grammar, $XSDAbstractTraverser::NOT_ALL_CONTEXT, parent));
				} else {
					if (childName->equals($SchemaSymbols::ELT_SEQUENCE)) {
						$assign(particle, traverseSequence(child, schemaDoc, grammar, $XSDAbstractTraverser::NOT_ALL_CONTEXT, parent));
					} else {
						if (childName->equals($SchemaSymbols::ELT_ANY)) {
							$assign(particle, $nc($nc(this->fSchemaHandler)->fWildCardTraverser)->traverseAny(child, schemaDoc, grammar));
						} else {
							$var($ObjectArray, args, nullptr);
							if (choice) {
								$assign(args, $new($ObjectArray, {
									$of("choice"_s),
									$of("(annotation?, (element | group | choice | sequence | any)*)"_s),
									$($of($DOMUtil::getLocalName(child)))
								}));
							} else {
								$assign(args, $new($ObjectArray, {
									$of("sequence"_s),
									$of("(annotation?, (element | group | choice | sequence | any)*)"_s),
									$($of($DOMUtil::getLocalName(child)))
								}));
							}
							reportSchemaError("s4s-elt-must-match.1"_s, args, child);
						}
					}
				}
			}
		}
		if (particle != nullptr) {
			$nc(this->fPArray)->addParticle(particle);
		}
	}
	$assign(particle, nullptr);
	$var($XInt, minAtt, $cast($XInt, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_MINOCCURS)));
	$var($XInt, maxAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MAXOCCURS)));
	$var($Long, defaultVals, $cast($Long, attrValues->get($XSAttributeChecker::ATTIDX_FROMDEFAULT)));
	$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
	group->fCompositor = choice ? $XSModelGroupImpl::MODELGROUP_CHOICE : $XSModelGroupImpl::MODELGROUP_SEQUENCE;
	group->fParticleCount = $nc(this->fPArray)->getParticleCount();
	$set(group, fParticles, $nc(this->fPArray)->popContext());
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$set(group, fAnnotations, annotations);
	$assign(particle, $new($XSParticleDecl));
	particle->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	particle->fMinOccurs = $nc(minAtt)->intValue();
	particle->fMaxOccurs = $nc(maxAtt)->intValue();
	$set(particle, fValue, group);
	$set(particle, fAnnotations, annotations);
	$var($XSParticleDecl, var$0, particle);
	$var($String, var$1, choice ? $SchemaSymbols::ELT_CHOICE : $SchemaSymbols::ELT_SEQUENCE);
	$var($Element, var$2, $cast($Element, $nc(decl)->getParentNode()));
	int32_t var$3 = allContextFlags;
	$assign(particle, checkOccurrences(var$0, var$1, var$2, var$3, $nc(defaultVals)->longValue()));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return particle;
}

bool XSDAbstractParticleTraverser::hasAllContent($XSParticleDecl* particle) {
	if (particle != nullptr && particle->fType == $XSParticleDecl::PARTICLE_MODELGROUP) {
		return $nc(($cast($XSModelGroupImpl, particle->fValue)))->fCompositor == $XSModelGroupImpl::MODELGROUP_ALL;
	}
	return false;
}

XSDAbstractParticleTraverser::XSDAbstractParticleTraverser() {
}

$Class* XSDAbstractParticleTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDAbstractParticleTraverser, name, initialize, &_XSDAbstractParticleTraverser_ClassInfo_, allocate$XSDAbstractParticleTraverser);
	return class$;
}

$Class* XSDAbstractParticleTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com