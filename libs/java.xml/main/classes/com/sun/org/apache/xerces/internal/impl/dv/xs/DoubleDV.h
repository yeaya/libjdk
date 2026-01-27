#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV
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

class DoubleDV : public ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator {
	$class(DoubleDV, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator)
public:
	DoubleDV();
	void init$();
	virtual int32_t compare(Object$* value1, Object$* value2) override;
	virtual $Object* getActualValue($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	virtual int16_t getAllowedFacets() override;
	virtual bool isIdentical(Object$* value1, Object$* value2) override;
	static bool isPossibleFP($String* val);
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_DoubleDV_h_