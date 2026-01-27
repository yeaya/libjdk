#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDKeyrefTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractIDConstraintTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef ATTIDX_NAME
#undef ATTIDX_REFER
#undef ATT_NAME
#undef ATT_REFER
#undef ELT_KEYREF
#undef IC_KEY
#undef IC_UNIQUE
#undef IDENTITYCONSTRAINT_TYPE

using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $KeyRef = ::com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractIDConstraintTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractIDConstraintTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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

$MethodInfo _XSDKeyrefTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, $PUBLIC, $method(XSDKeyrefTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"traverse", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, 0, $virtualMethod(XSDKeyrefTraverser, traverse, void, $Element*, $XSElementDecl*, $XSDocumentInfo*, $SchemaGrammar*)},
	{}
};

$ClassInfo _XSDKeyrefTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDKeyrefTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractIDConstraintTraverser",
	nullptr,
	nullptr,
	_XSDKeyrefTraverser_MethodInfo_
};

$Object* allocate$XSDKeyrefTraverser($Class* clazz) {
	return $of($alloc(XSDKeyrefTraverser));
}

void XSDKeyrefTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractIDConstraintTraverser::init$(handler, gAttrCheck);
}

void XSDKeyrefTraverser::traverse($Element* krElem, $XSElementDecl* element, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(krElem, false, schemaDoc));
	$var($String, krName, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	if (krName == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_KEYREF),
			$of($SchemaSymbols::ATT_NAME)
		}), krElem);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return;
	}
	$var($QName, kName, $cast($QName, attrValues->get($XSAttributeChecker::ATTIDX_REFER)));
	if (kName == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_KEYREF),
			$of($SchemaSymbols::ATT_REFER)
		}), krElem);
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return;
	}
	$var($UniqueOrKey, key, nullptr);
	$var($IdentityConstraint, ret, $cast($IdentityConstraint, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::IDENTITYCONSTRAINT_TYPE, kName, krElem)));
	if (ret != nullptr) {
		bool var$0 = ret->getCategory() == $IdentityConstraint::IC_KEY;
		if (var$0 || ret->getCategory() == $IdentityConstraint::IC_UNIQUE) {
			$assign(key, $cast($UniqueOrKey, ret));
		} else {
			reportSchemaError("src-resolve"_s, $$new($ObjectArray, {
				$of($nc(kName)->rawname),
				$of("identity constraint key/unique"_s)
			}), krElem);
		}
	}
	if (key == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
		return;
	}
	$var($KeyRef, keyRef, $new($KeyRef, $nc(schemaDoc)->fTargetNamespace, krName, $nc(element)->fName, key));
	if (traverseIdentityConstraint(keyRef, krElem, schemaDoc, attrValues)) {
		int32_t var$1 = $nc(key)->getFieldCount();
		if (var$1 != keyRef->getFieldCount()) {
			reportSchemaError("c-props-correct.2"_s, $$new($ObjectArray, {
				$of(krName),
				$($of(key->getIdentityConstraintName()))
			}), krElem);
		} else {
			if ($nc(grammar)->getIDConstraintDecl($(keyRef->getIdentityConstraintName())) == nullptr) {
				grammar->addIDConstraintDecl(element, keyRef);
			}
			$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
			$var($IdentityConstraint, idc, $nc(grammar)->getIDConstraintDecl($(keyRef->getIdentityConstraintName()), loc));
			if (idc == nullptr) {
				grammar->addIDConstraintDecl(element, keyRef, loc);
			}
			if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
				if (idc != nullptr) {
					if ($instanceOf($KeyRef, idc)) {
						$assign(keyRef, $cast($KeyRef, idc));
					}
				}
				$nc(this->fSchemaHandler)->addIDConstraintDecl(keyRef);
			}
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
}

XSDKeyrefTraverser::XSDKeyrefTraverser() {
}

$Class* XSDKeyrefTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDKeyrefTraverser, name, initialize, &_XSDKeyrefTraverser_ClassInfo_, allocate$XSDKeyrefTraverser);
	return class$;
}

$Class* XSDKeyrefTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com