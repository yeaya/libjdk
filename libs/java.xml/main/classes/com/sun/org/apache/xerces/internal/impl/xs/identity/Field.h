#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Field_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Field_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Field
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
									class Field$XPath;
									class IdentityConstraint;
									class ValueStore;
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

class Field : public ::java::lang::Object {
	$class(Field, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Field();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath* xpath, ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* identityConstraint);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher* createMatcher(::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore* store);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* getIdentityConstraint();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::XPath* getXPath();
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath* fXPath = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint* fIdentityConstraint = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Field_h_