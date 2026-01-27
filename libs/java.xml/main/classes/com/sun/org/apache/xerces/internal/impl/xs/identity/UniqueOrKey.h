#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_UniqueOrKey_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_UniqueOrKey_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.UniqueOrKey
//$ extends com.sun.org.apache.xerces.internal.impl.xs.identity.IdentityConstraint

#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

class UniqueOrKey : public ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint {
	$class(UniqueOrKey, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint)
public:
	UniqueOrKey();
	using ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint::equals;
	void init$($String* namespace$, $String* identityConstraintName, $String* elemName, int16_t type);
};

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_UniqueOrKey_h_