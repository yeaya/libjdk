#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeGroupTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_NAME
#undef ATTIDX_REF
#undef ATTRIBUTEGROUP_TYPE
#undef ELT_ANNOTATION
#undef EMPTY_LIST
#undef EMPTY_STRING
#undef NO_NAME

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
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

$MethodInfo _XSDAttributeGroupTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDAttributeGroupTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, 0, $virtualMethod(XSDAttributeGroupTraverser, traverseGlobal, $XSAttributeGroupDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, 0, $virtualMethod(XSDAttributeGroupTraverser, traverseLocal, $XSAttributeGroupDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{}
};

$ClassInfo _XSDAttributeGroupTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAttributeGroupTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	nullptr,
	_XSDAttributeGroupTraverser_MethodInfo_
};

$Object* allocate$XSDAttributeGroupTraverser($Class* clazz) {
	return $of($alloc(XSDAttributeGroupTraverser));
}

void XSDAttributeGroupTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
}

$XSAttributeGroupDecl* XSDAttributeGroupTraverser::traverseLocal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, false, schemaDoc));
	$var($QName, refAttr, $cast($QName, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_REF)));
	$var($XSAttributeGroupDecl, attrGrp, nullptr);
	if (refAttr == nullptr) {
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of("attributeGroup (local)"_s),
			$of("ref"_s)
		}), elmNode);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return nullptr;
	}
	$assign(attrGrp, $cast($XSAttributeGroupDecl, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::ATTRIBUTEGROUP_TYPE, refAttr, elmNode)));
	$var($Element, child, $DOMUtil::getFirstChildElement(elmNode));
	if (child != nullptr) {
		$var($String, childName, $DOMUtil::getLocalName(child));
		$init($SchemaSymbols);
		if ($nc(childName)->equals($SchemaSymbols::ELT_ANNOTATION)) {
			traverseAnnotationDecl(child, attrValues, false, schemaDoc);
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(child));
			if (text != nullptr) {
				traverseSyntheticAnnotation(child, text, attrValues, false, schemaDoc);
			}
		}
		if (child != nullptr) {
			$var($ObjectArray, args, $new($ObjectArray, {
				$of($nc(refAttr)->rawname),
				$of("(annotation?)"_s),
				$($of($DOMUtil::getLocalName(child)))
			}));
			reportSchemaError("s4s-elt-must-match.1"_s, args, child);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return attrGrp;
}

$XSAttributeGroupDecl* XSDAttributeGroupTraverser::traverseGlobal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSAttributeGroupDecl, attrGrp, $new($XSAttributeGroupDecl));
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, true, schemaDoc));
	$var($String, nameAttr, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	if (nameAttr == nullptr) {
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of("attributeGroup (global)"_s),
			$of("name"_s)
		}), elmNode);
		$init($XSDAbstractTraverser);
		$assign(nameAttr, $XSDAbstractTraverser::NO_NAME);
	}
	$set(attrGrp, fName, nameAttr);
	$set(attrGrp, fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
	$var($Element, child, $DOMUtil::getFirstChildElement(elmNode));
	$var($XSAnnotationImpl, annotation, nullptr);
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
	$var($Element, nextNode, traverseAttrsAndAttrGrps(child, attrGrp, schemaDoc, grammar, nullptr));
	if (nextNode != nullptr) {
		$var($ObjectArray, args, $new($ObjectArray, {
			$of(nameAttr),
			$of("(annotation?, ((attribute | attributeGroup)*, anyAttribute?))"_s),
			$($of($DOMUtil::getLocalName(nextNode)))
		}));
		reportSchemaError("s4s-elt-must-match.1"_s, args, nextNode);
	}
	$init($XSDAbstractTraverser);
	if ($nc(nameAttr)->equals($XSDAbstractTraverser::NO_NAME)) {
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return nullptr;
	}
	attrGrp->removeProhibitedAttrs();
	$init($XMLSymbols);
	$var($XSAttributeGroupDecl, redefinedAttrGrp, $cast($XSAttributeGroupDecl, $nc(this->fSchemaHandler)->getGrpOrAttrGrpRedefinedByRestriction($XSDHandler::ATTRIBUTEGROUP_TYPE, $$new($QName, $XMLSymbols::EMPTY_STRING, nameAttr, nameAttr, schemaDoc->fTargetNamespace), schemaDoc, elmNode)));
	if (redefinedAttrGrp != nullptr) {
		$var($ObjectArray, errArgs, attrGrp->validRestrictionOf(nameAttr, redefinedAttrGrp));
		if (errArgs != nullptr) {
			reportSchemaError($cast($String, errArgs->get(errArgs->length - 1)), errArgs, child);
			reportSchemaError("src-redefine.7.2.2"_s, $$new($ObjectArray, {
				$of(nameAttr),
				errArgs->get(errArgs->length - 1)
			}), child);
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
	$set(attrGrp, fAnnotations, annotations);
	if ($nc(grammar)->getGlobalAttributeGroupDecl(attrGrp->fName) == nullptr) {
		grammar->addGlobalAttributeGroupDecl(attrGrp);
	}
	$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
	$var($XSAttributeGroupDecl, attrGrp2, $nc(grammar)->getGlobalAttributeGroupDecl(attrGrp->fName, loc));
	if (attrGrp2 == nullptr) {
		grammar->addGlobalAttributeGroupDecl(attrGrp, loc);
	}
	if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
		if (attrGrp2 != nullptr) {
			$assign(attrGrp, attrGrp2);
		}
		$nc(this->fSchemaHandler)->addGlobalAttributeGroupDecl(attrGrp);
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return attrGrp;
}

XSDAttributeGroupTraverser::XSDAttributeGroupTraverser() {
}

$Class* XSDAttributeGroupTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDAttributeGroupTraverser, name, initialize, &_XSDAttributeGroupTraverser_ClassInfo_, allocate$XSDAttributeGroupTraverser);
	return class$;
}

$Class* XSDAttributeGroupTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com