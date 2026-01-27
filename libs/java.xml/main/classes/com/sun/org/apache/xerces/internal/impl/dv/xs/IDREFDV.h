#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_IDREFDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_IDREFDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.IDREFDV
//$ extends com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>

#pragma push_macro("IDREFDV")
#undef IDREFDV

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

class IDREFDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(IDREFDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	IDREFDV();
	void init$();
	virtual void checkExtraRules(Object$* value, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
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

#pragma pop_macro("IDREFDV")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_IDREFDV_h_