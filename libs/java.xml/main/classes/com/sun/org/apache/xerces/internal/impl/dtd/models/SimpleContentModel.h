#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_SimpleContentModel_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_SimpleContentModel_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.SimpleContentModel
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("CHOICE")
#undef CHOICE
#pragma push_macro("SEQUENCE")
#undef SEQUENCE

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

class SimpleContentModel : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator {
	$class(SimpleContentModel, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator)
public:
	SimpleContentModel();
	void init$(int16_t operator$, ::com::sun::org::apache::xerces::internal::xni::QName* firstChild, ::com::sun::org::apache::xerces::internal::xni::QName* secondChild);
	virtual int32_t validate($Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, int32_t offset, int32_t length) override;
	static const int16_t CHOICE = (-1);
	static const int16_t SEQUENCE = (-1);
	::com::sun::org::apache::xerces::internal::xni::QName* fFirstChild = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fSecondChild = nullptr;
	int32_t fOperator = 0;
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

#pragma pop_macro("CHOICE")
#pragma pop_macro("SEQUENCE")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_SimpleContentModel_h_