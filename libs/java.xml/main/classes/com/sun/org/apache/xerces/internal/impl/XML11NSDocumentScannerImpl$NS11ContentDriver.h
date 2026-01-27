#ifndef _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl$NS11ContentDriver_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl$NS11ContentDriver_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11NSDocumentScannerImpl$NS11ContentDriver
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XML11NSDocumentScannerImpl;
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

class XML11NSDocumentScannerImpl$NS11ContentDriver : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver {
	$class(XML11NSDocumentScannerImpl$NS11ContentDriver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver)
public:
	XML11NSDocumentScannerImpl$NS11ContentDriver();
	void init$(::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl* this$0);
	void reconfigurePipeline();
	virtual bool scanRootElementHook() override;
	::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11NSDocumentScannerImpl$NS11ContentDriver_h_