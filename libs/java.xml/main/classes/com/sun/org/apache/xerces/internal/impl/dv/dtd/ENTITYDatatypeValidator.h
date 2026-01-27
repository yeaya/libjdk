#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_ENTITYDatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_ENTITYDatatypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.ENTITYDatatypeValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>

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
								namespace dtd {

class ENTITYDatatypeValidator : public ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator {
	$class(ENTITYDatatypeValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator)
public:
	ENTITYDatatypeValidator();
	void init$();
	virtual void validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
};

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_ENTITYDatatypeValidator_h_