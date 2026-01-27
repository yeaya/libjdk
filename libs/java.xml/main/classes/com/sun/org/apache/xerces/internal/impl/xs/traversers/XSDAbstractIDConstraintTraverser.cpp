#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractIDConstraintTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_XPATH
#undef ATT_XPATH
#undef ELT_ANNOTATION
#undef ELT_FIELD
#undef ELT_SELECTOR

using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $Field$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $Selector = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector;
using $Selector$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
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

$MethodInfo _XSDAbstractIDConstraintTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, $PUBLIC, $method(XSDAbstractIDConstraintTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"traverseIdentityConstraint", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;[Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(XSDAbstractIDConstraintTraverser, traverseIdentityConstraint, bool, $IdentityConstraint*, $Element*, $XSDocumentInfo*, $ObjectArray*)},
	{}
};

$ClassInfo _XSDAbstractIDConstraintTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractIDConstraintTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	nullptr,
	_XSDAbstractIDConstraintTraverser_MethodInfo_
};

$Object* allocate$XSDAbstractIDConstraintTraverser($Class* clazz) {
	return $of($alloc(XSDAbstractIDConstraintTraverser));
}

void XSDAbstractIDConstraintTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
}

bool XSDAbstractIDConstraintTraverser::traverseIdentityConstraint($IdentityConstraint* ic, $Element* icElem, $XSDocumentInfo* schemaDoc, $ObjectArray* icElemAttrs) {
	$useLocalCurrentObjectStackCache();
	$var($Element, sElem, $DOMUtil::getFirstChildElement(icElem));
	if (sElem == nullptr) {
		reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
			$of("identity constraint"_s),
			$of("(annotation?, selector, field+)"_s)
		}), icElem);
		return false;
	}
	$init($SchemaSymbols);
	if ($nc($($DOMUtil::getLocalName(sElem)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$nc(ic)->addAnnotation($(traverseAnnotationDecl(sElem, icElemAttrs, false, schemaDoc)));
		$assign(sElem, $DOMUtil::getNextSiblingElement(sElem));
		if (sElem == nullptr) {
			reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
				$of("identity constraint"_s),
				$of("(annotation?, selector, field+)"_s)
			}), icElem);
			return false;
		}
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(icElem));
		if (text != nullptr) {
			$nc(ic)->addAnnotation($(traverseSyntheticAnnotation(icElem, text, icElemAttrs, false, schemaDoc)));
		}
	}
	if (!$nc($($DOMUtil::getLocalName(sElem)))->equals($SchemaSymbols::ELT_SELECTOR)) {
		reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
			$of("identity constraint"_s),
			$of("(annotation?, selector, field+)"_s),
			$of($SchemaSymbols::ELT_SELECTOR)
		}), sElem);
		return false;
	}
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(sElem, false, schemaDoc));
	$var($Element, selChild, $DOMUtil::getFirstChildElement(sElem));
	if (selChild != nullptr) {
		if ($nc($($DOMUtil::getLocalName(selChild)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
			$nc(ic)->addAnnotation($(traverseAnnotationDecl(selChild, attrValues, false, schemaDoc)));
			$assign(selChild, $DOMUtil::getNextSiblingElement(selChild));
		} else {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_SELECTOR),
				$of("(annotation?)"_s),
				$($of($DOMUtil::getLocalName(selChild)))
			}), selChild);
		}
		if (selChild != nullptr) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_SELECTOR),
				$of("(annotation?)"_s),
				$($of($DOMUtil::getLocalName(selChild)))
			}), selChild);
		}
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(sElem));
		if (text != nullptr) {
			$nc(ic)->addAnnotation($(traverseSyntheticAnnotation(icElem, text, attrValues, false, schemaDoc)));
		}
	}
	$var($String, sText, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_XPATH)));
	if (sText == nullptr) {
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_SELECTOR),
			$of($SchemaSymbols::ATT_XPATH)
		}), sElem);
		return false;
	}
	$assign(sText, $XMLChar::trim(sText));
	$var($Selector$XPath, sXpath, nullptr);
	try {
		$assign(sXpath, $new($Selector$XPath, sText, this->fSymbolTable, $nc(schemaDoc)->fNamespaceSupport));
		$var($Selector, selector, $new($Selector, sXpath, ic));
		$nc(ic)->setSelector(selector);
	} catch ($XPathException& e) {
		reportSchemaError($(e->getKey()), $$new($ObjectArray, {$of(sText)}), sElem);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return false;
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	$var($Element, fElem, $DOMUtil::getNextSiblingElement(sElem));
	if (fElem == nullptr) {
		reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
			$of("identity constraint"_s),
			$of("(annotation?, selector, field+)"_s)
		}), sElem);
		return false;
	}
	while (fElem != nullptr) {
		if (!$nc($($DOMUtil::getLocalName(fElem)))->equals($SchemaSymbols::ELT_FIELD)) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of("identity constraint"_s),
				$of("(annotation?, selector, field+)"_s),
				$of($SchemaSymbols::ELT_FIELD)
			}), fElem);
			$assign(fElem, $DOMUtil::getNextSiblingElement(fElem));
			continue;
		}
		$assign(attrValues, $nc(this->fAttrChecker)->checkAttributes(fElem, false, schemaDoc));
		$var($Element, fieldChild, $DOMUtil::getFirstChildElement(fElem));
		if (fieldChild != nullptr) {
			if ($nc($($DOMUtil::getLocalName(fieldChild)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$nc(ic)->addAnnotation($(traverseAnnotationDecl(fieldChild, attrValues, false, schemaDoc)));
				$assign(fieldChild, $DOMUtil::getNextSiblingElement(fieldChild));
			}
		}
		if (fieldChild != nullptr) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_FIELD),
				$of("(annotation?)"_s),
				$($of($DOMUtil::getLocalName(fieldChild)))
			}), fieldChild);
		} else {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(fElem));
			if (text != nullptr) {
				$nc(ic)->addAnnotation($(traverseSyntheticAnnotation(icElem, text, attrValues, false, schemaDoc)));
			}
		}
		$var($String, fText, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_XPATH)));
		if (fText == nullptr) {
			reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_FIELD),
				$of($SchemaSymbols::ATT_XPATH)
			}), fElem);
			$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
			return false;
		}
		$assign(fText, $XMLChar::trim(fText));
		try {
			$var($Field$XPath, fXpath, $new($Field$XPath, fText, this->fSymbolTable, $nc(schemaDoc)->fNamespaceSupport));
			$var($Field, field, $new($Field, fXpath, ic));
			$nc(ic)->addField(field);
		} catch ($XPathException& e) {
			reportSchemaError($(e->getKey()), $$new($ObjectArray, {$of(fText)}), fElem);
			$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
			return false;
		}
		$assign(fElem, $DOMUtil::getNextSiblingElement(fElem));
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	}
	return $nc(ic)->getFieldCount() > 0;
}

XSDAbstractIDConstraintTraverser::XSDAbstractIDConstraintTraverser() {
}

$Class* XSDAbstractIDConstraintTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDAbstractIDConstraintTraverser, name, initialize, &_XSDAbstractIDConstraintTraverser_ClassInfo_, allocate$XSDAbstractIDConstraintTraverser);
	return class$;
}

$Class* XSDAbstractIDConstraintTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com