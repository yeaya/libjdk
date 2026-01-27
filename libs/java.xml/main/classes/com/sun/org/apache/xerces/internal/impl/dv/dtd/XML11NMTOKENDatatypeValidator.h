#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11NMTOKENDatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11NMTOKENDatatypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11NMTOKENDatatypeValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dv.dtd.NMTOKENDatatypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NMTOKENDatatypeValidator.h>

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

class XML11NMTOKENDatatypeValidator : public ::com::sun::org::apache::xerces::internal::impl::dv::dtd::NMTOKENDatatypeValidator {
	$class(XML11NMTOKENDatatypeValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::dtd::NMTOKENDatatypeValidator)
public:
	XML11NMTOKENDatatypeValidator();
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11NMTOKENDatatypeValidator_h_