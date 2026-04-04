#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDNotationTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef ATTIDX_NAME
#undef ATTIDX_PUBLIC
#undef ATTIDX_SYSTEM
#undef ATT_NAME
#undef ELT_ANNOTATION
#undef ELT_NOTATION
#undef EMPTY_LIST

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

void XSDNotationTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
}

$XSNotationDecl* XSDNotationTraverser::traverse($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalObjectStack();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, true, schemaDoc));
	$var($String, nameAttr, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	$var($String, publicAttr, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_PUBLIC)));
	$var($String, systemAttr, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_SYSTEM)));
	if (nameAttr == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$SchemaSymbols::ELT_NOTATION,
			$SchemaSymbols::ATT_NAME
		}), elmNode);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return nullptr;
	}
	if (systemAttr == nullptr && publicAttr == nullptr) {
		reportSchemaError("PublicSystemOnNotation"_s, nullptr, elmNode);
		$assign(publicAttr, "missing"_s);
	}
	$var($XSNotationDecl, notation, $new($XSNotationDecl));
	$set(notation, fName, nameAttr);
	$set(notation, fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
	$set(notation, fPublicId, publicAttr);
	$set(notation, fSystemId, systemAttr);
	$var($Element, content, $DOMUtil::getFirstChildElement(elmNode));
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if (content != nullptr && $$nc($DOMUtil::getLocalName(content))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$assign(annotation, traverseAnnotationDecl(content, attrValues, false, schemaDoc));
		$assign(content, $DOMUtil::getNextSiblingElement(content));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(elmNode));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(elmNode, text, attrValues, false, schemaDoc));
		}
	}
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$cast($XSObjectListImpl, annotations)->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$set(notation, fAnnotations, annotations);
	if (content != nullptr) {
		$var($ObjectArray, args, $new($ObjectArray, {
			$SchemaSymbols::ELT_NOTATION,
			"(annotation?)"_s,
			$($DOMUtil::getLocalName(content))
		}));
		reportSchemaError("s4s-elt-must-match.1"_s, args, content);
	}
	if ($nc(grammar)->getGlobalNotationDecl(notation->fName) == nullptr) {
		grammar->addGlobalNotationDecl(notation);
	}
	$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
	$var($XSNotationDecl, notation2, grammar->getGlobalNotationDecl(notation->fName, loc));
	if (notation2 == nullptr) {
		grammar->addGlobalNotationDecl(notation, loc);
	}
	if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
		if (notation2 != nullptr) {
			$assign(notation, notation2);
		}
		this->fSchemaHandler->addGlobalNotationDecl(notation);
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return notation;
}

XSDNotationTraverser::XSDNotationTraverser() {
}

$Class* XSDNotationTraverser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDNotationTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
		{"traverse", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, 0, $virtualMethod(XSDNotationTraverser, traverse, $XSNotationDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDNotationTraverser",
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSDNotationTraverser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDNotationTraverser);
	});
	return class$;
}

$Class* XSDNotationTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com