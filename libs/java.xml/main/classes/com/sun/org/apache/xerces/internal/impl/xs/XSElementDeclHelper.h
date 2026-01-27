#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSElementDeclHelper_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSElementDeclHelper_h_
//$ interface com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper
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
								class XSElementDecl;
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
						namespace xni {
							class QName;
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

class XSElementDeclHelper : public ::java::lang::Object {
	$interface(XSElementDeclHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getGlobalElementDecl(::com::sun::org::apache::xerces::internal::xni::QName* element) {return nullptr;}
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSElementDeclHelper_h_