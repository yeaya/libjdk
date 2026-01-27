#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <jcpp.h>

using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$MethodInfo _FieldActivator_MethodInfo_[] = {
	{"activateField", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;I)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldActivator, activateField, $XPathMatcher*, $Field*, int32_t)},
	{"endValueScopeFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldActivator, endValueScopeFor, void, $IdentityConstraint*, int32_t)},
	{"startValueScopeFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldActivator, startValueScopeFor, void, $IdentityConstraint*, int32_t)},
	{}
};

$ClassInfo _FieldActivator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.FieldActivator",
	nullptr,
	nullptr,
	nullptr,
	_FieldActivator_MethodInfo_
};

$Object* allocate$FieldActivator($Class* clazz) {
	return $of($alloc(FieldActivator));
}

$Class* FieldActivator::load$($String* name, bool initialize) {
	$loadClass(FieldActivator, name, initialize, &_FieldActivator_ClassInfo_, allocate$FieldActivator);
	return class$;
}

$Class* FieldActivator::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com