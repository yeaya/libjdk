#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$Element_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$Element_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$Element
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

class XMLDocumentFragmentScannerImpl$Element : public ::java::lang::Object {
	$class(XMLDocumentFragmentScannerImpl$Element, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLDocumentFragmentScannerImpl$Element();
	void init$(::com::sun::org::apache::xerces::internal::xni::QName* qname, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Element* next);
	::com::sun::org::apache::xerces::internal::xni::QName* qname = nullptr;
	$chars* fRawname = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Element* next = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$Element_h_