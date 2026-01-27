#ifndef _com_sun_org_apache_xerces_internal_impl_dv_dtd_ListDatatypeValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_dtd_ListDatatypeValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.dtd.ListDatatypeValidator
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

class ListDatatypeValidator : public ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator {
	$class(ListDatatypeValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator)
public:
	ListDatatypeValidator();
	void init$(::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* itemDV);
	virtual void validate($String* content, ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext* context) override;
	::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator* fItemValidator = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_dtd_ListDatatypeValidator_h_