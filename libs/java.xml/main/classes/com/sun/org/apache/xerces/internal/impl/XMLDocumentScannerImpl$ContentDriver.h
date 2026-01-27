#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$ContentDriver_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$ContentDriver_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$ContentDriver
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$FragmentContentDriver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDocumentScannerImpl;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class EOFException;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLDocumentScannerImpl$ContentDriver : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver {
	$class(XMLDocumentScannerImpl$ContentDriver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$FragmentContentDriver)
public:
	XMLDocumentScannerImpl$ContentDriver();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* this$0);
	virtual bool elementDepthIsZeroHook() override;
	virtual void endOfFileHook(::java::io::EOFException* e) override;
	virtual void resolveExternalSubsetAndRead();
	virtual bool scanForDoctypeHook() override;
	virtual bool scanRootElementHook() override;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$ContentDriver_h_