#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XML11NSDTDValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XML11NSDTDValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XML11NSDTDValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDValidator

#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
							class QName;
							class XMLAttributes;
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

class XML11NSDTDValidator : public ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDValidator {
	$class(XML11NSDTDValidator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDValidator)
public:
	XML11NSDTDValidator();
	void init$();
	virtual void endNamespaceScope(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool isEmpty) override;
	virtual void startNamespaceScope(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XML11NSDTDValidator_h_