#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDUniqueOrKeyTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractIDConstraintTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef ATTIDX_NAME
#undef ATT_NAME
#undef ELT_UNIQUE
#undef IC_KEY
#undef IC_UNIQUE

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractIDConstraintTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
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

void XSDUniqueOrKeyTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractIDConstraintTraverser::init$(handler, gAttrCheck);
}

void XSDUniqueOrKeyTraverser::traverse($Element* uElem, $XSElementDecl* element, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalObjectStack();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(uElem, false, schemaDoc));
	$var($String, uName, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	if (uName == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$($DOMUtil::getLocalName(uElem)),
			$SchemaSymbols::ATT_NAME
		}), uElem);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return;
	}
	$var($UniqueOrKey, uniqueOrKey, nullptr);
	$init($SchemaSymbols);
	if ($$nc($DOMUtil::getLocalName(uElem))->equals($SchemaSymbols::ELT_UNIQUE)) {
		$assign(uniqueOrKey, $new($UniqueOrKey, $nc(schemaDoc)->fTargetNamespace, uName, $nc(element)->fName, $IdentityConstraint::IC_UNIQUE));
	} else {
		$assign(uniqueOrKey, $new($UniqueOrKey, $nc(schemaDoc)->fTargetNamespace, uName, $nc(element)->fName, $IdentityConstraint::IC_KEY));
	}
	if (traverseIdentityConstraint(uniqueOrKey, uElem, schemaDoc, attrValues)) {
		if ($nc(grammar)->getIDConstraintDecl($($nc(uniqueOrKey)->getIdentityConstraintName())) == nullptr) {
			grammar->addIDConstraintDecl(element, uniqueOrKey);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($IdentityConstraint, idc, grammar->getIDConstraintDecl($(uniqueOrKey->getIdentityConstraintName()), loc));
		if (idc == nullptr) {
			grammar->addIDConstraintDecl(element, uniqueOrKey, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (idc != nullptr) {
				if ($instanceOf($UniqueOrKey, idc)) {
					$assign(uniqueOrKey, $cast($UniqueOrKey, idc));
				}
			}
			this->fSchemaHandler->addIDConstraintDecl(uniqueOrKey);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
}

XSDUniqueOrKeyTraverser::XSDUniqueOrKeyTraverser() {
}

$Class* XSDUniqueOrKeyTraverser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, $PUBLIC, $method(XSDUniqueOrKeyTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
		{"traverse", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, 0, $virtualMethod(XSDUniqueOrKeyTraverser, traverse, void, $Element*, $XSElementDecl*, $XSDocumentInfo*, $SchemaGrammar*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDUniqueOrKeyTraverser",
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractIDConstraintTraverser",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSDUniqueOrKeyTraverser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDUniqueOrKeyTraverser);
	});
	return class$;
}

$Class* XSDUniqueOrKeyTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com