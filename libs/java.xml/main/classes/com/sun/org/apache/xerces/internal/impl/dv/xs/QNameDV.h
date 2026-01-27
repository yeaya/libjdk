#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>

#pragma push_macro("EMPTY_STRING")
#undef EMPTY_STRING

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

class QNameDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(QNameDV, 0, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	QNameDV();
	void init$();
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual int16_t getAllowedFacets() override;
	virtual int32_t getDataLength(Object$* value) override;
	static $String* EMPTY_STRING;
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

#pragma pop_macro("EMPTY_STRING")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_QNameDV_h_