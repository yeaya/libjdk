#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyAtomicDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyAtomicDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.AnyAtomicDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>

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

class AnyAtomicDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(AnyAtomicDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	AnyAtomicDV();
	void init$();
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual int16_t getAllowedFacets() override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_AnyAtomicDV_h_