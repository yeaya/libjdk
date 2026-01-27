#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDREFDatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDREFDatatypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11IDREFDatatypeValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dv.dtd.IDREFDatatypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDREFDatatypeValidator.h>

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

class XML11IDREFDatatypeValidator : public ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDREFDatatypeValidator {
	$class(XML11IDREFDatatypeValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDREFDatatypeValidator)
public:
	XML11IDREFDatatypeValidator();
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDREFDatatypeValidator_h_