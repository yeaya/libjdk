#ifndef _com_sun_org_apache_xerces_internal_impl_dv_DatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_DatatypeValidator_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class ValidationContext;
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
							namespace dv {

class DatatypeValidator : public ::java::lang::Object {
	$interface(DatatypeValidator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) {}
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_DatatypeValidator_h_