#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_IntegerDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_IntegerDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.IntegerDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV.h>

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
								namespace xs {

class IntegerDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV {
	$class(IntegerDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV)
public:
	IntegerDV();
	void init$();
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_IntegerDV_h_