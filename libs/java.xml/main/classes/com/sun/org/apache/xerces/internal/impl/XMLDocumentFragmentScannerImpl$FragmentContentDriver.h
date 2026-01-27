#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$FragmentContentDriver_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$FragmentContentDriver_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$FragmentContentDriver
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDocumentFragmentScannerImpl;
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

class XMLDocumentFragmentScannerImpl$FragmentContentDriver : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver {
	$class(XMLDocumentFragmentScannerImpl$FragmentContentDriver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver)
public:
	XMLDocumentFragmentScannerImpl$FragmentContentDriver();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl* this$0);
	virtual void decideSubState();
	virtual bool elementDepthIsZeroHook();
	virtual void endOfFileHook(::java::io::EOFException* e);
	virtual int32_t next() override;
	virtual bool scanForDoctypeHook();
	virtual bool scanRootElementHook();
	void startOfContent();
	void startOfMarkup();
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$FragmentContentDriver_h_