#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV
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

class PrecisionDecimalDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(PrecisionDecimalDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	PrecisionDecimalDV();
	void init$();
	virtual int32_t compare(Object$* value1, Object$* value2) override;
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual int16_t getAllowedFacets() override;
	virtual int32_t getFractionDigits(Object$* value) override;
	virtual int32_t getTotalDigits(Object$* value) override;
	virtual bool isIdentical(Object$* value1, Object$* value2) override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_PrecisionDecimalDV_h_