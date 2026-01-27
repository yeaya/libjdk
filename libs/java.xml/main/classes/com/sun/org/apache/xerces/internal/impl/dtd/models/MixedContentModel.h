#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_MixedContentModel_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_MixedContentModel_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.MixedContentModel
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class QName;
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
							namespace dtd {
								namespace models {

class MixedContentModel : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator {
	$class(MixedContentModel, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator)
public:
	MixedContentModel();
	void init$($Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, $ints* type, int32_t offset, int32_t length, bool ordered);
	virtual int32_t validate($Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, int32_t offset, int32_t length) override;
	int32_t fCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* fChildren = nullptr;
	$ints* fChildrenType = nullptr;
	bool fOrdered = false;
};

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_MixedContentModel_h_