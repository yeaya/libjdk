#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDDatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDDatatypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11IDDatatypeValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dv.dtd.IDDatatypeValidator

#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDDatatypeValidator.h>

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

class XML11IDDatatypeValidator : public ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDDatatypeValidator {
	$class(XML11IDDatatypeValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDDatatypeValidator)
public:
	XML11IDDatatypeValidator();
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_XML11IDDatatypeValidator_h_