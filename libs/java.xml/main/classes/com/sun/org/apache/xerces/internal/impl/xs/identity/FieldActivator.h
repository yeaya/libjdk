#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_FieldActivator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_FieldActivator_h_
//$ interface com.sun.org.apache.xerces.internal.impl.xs.identity.FieldActivator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {
									class Field;
									class IdentityConstraint;
									class XPathMatcher;
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
						namespace impl {
							namespace xs {
								namespace identity {

class FieldActivator : public ::java::lang::Object {
	$interface(FieldActivator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* activateField(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field* field, int32_t initialDepth) {return nullptr;}
	virtual void endValueScopeFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint, int32_t initialDepth) {}
	virtual void startValueScopeFor(::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint, int32_t initialDepth) {}
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_FieldActivator_h_