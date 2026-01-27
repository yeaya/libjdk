#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_KeyRef_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_KeyRef_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.KeyRef
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
									class UniqueOrKey;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSIDCDefinition;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

class KeyRef : public ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint {
	$class(KeyRef, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint)
public:
	KeyRef();
	using ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint::equals;
	void init$($String* namespace$, $String* identityConstraintName, $String* elemName, ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey* key);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey* getKey();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getRefKey() override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey* fKey = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_KeyRef_h_