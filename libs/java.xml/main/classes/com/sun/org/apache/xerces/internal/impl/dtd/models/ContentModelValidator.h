#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_ContentModelValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_ContentModelValidator_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator
//$ extends java.lang.Object

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

class ContentModelValidator : public ::java::lang::Object {
	$interface(ContentModelValidator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t validate($Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, int32_t offset, int32_t length) {return 0;}
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

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_ContentModelValidator_h_