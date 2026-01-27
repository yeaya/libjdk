#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$XMLDeclDriver_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$XMLDeclDriver_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl$XMLDeclDriver
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Driver

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLDocumentScannerImpl$XMLDeclDriver : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver {
	$class(XMLDocumentScannerImpl$XMLDeclDriver, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver)
public:
	XMLDocumentScannerImpl$XMLDeclDriver();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* this$0);
	virtual int32_t next() override;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl$XMLDeclDriver_h_