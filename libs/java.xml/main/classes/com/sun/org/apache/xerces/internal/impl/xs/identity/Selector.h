#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Selector
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath;
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
									class FieldActivator;
									class IdentityConstraint;
									class Selector$XPath;
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

class Selector : public ::java::lang::Object {
	$class(Selector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Selector();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath* xpath, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* createMatcher(::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator* activator, int32_t initialDepth);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIDConstraint();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::XPath* getXPath();
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath* fXPath = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* fIdentityConstraint = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* fIDConstraint = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector_h_