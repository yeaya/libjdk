#ifndef _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl$NSContentDriver_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl$NSContentDriver_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLNSDocumentScannerImpl$NSContentDriver
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl$ContentDriver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLNSDocumentScannerImpl;
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

class XMLNSDocumentScannerImpl$NSContentDriver : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver {
	$class(XMLNSDocumentScannerImpl$NSContentDriver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl$ContentDriver)
public:
	XMLNSDocumentScannerImpl$NSContentDriver();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* this$0);
	void reconfigurePipeline();
	virtual bool scanRootElementHook() override;
	::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLNSDocumentScannerImpl$NSContentDriver_h_