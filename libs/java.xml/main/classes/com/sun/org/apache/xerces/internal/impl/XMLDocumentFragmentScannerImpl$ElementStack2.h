#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$ElementStack2_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$ElementStack2_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack2
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class XMLDocumentFragmentScannerImpl$ElementStack2 : public ::java::lang::Object {
	$class(XMLDocumentFragmentScannerImpl$ElementStack2, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLDocumentFragmentScannerImpl$ElementStack2();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl* this$0);
	virtual void clear();
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getNext();
	virtual bool matchElement(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* nextElement();
	virtual int32_t popElement();
	virtual void resize();
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl* this$0 = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* fQName = nullptr;
	int32_t fDepth = 0;
	int32_t fCount = 0;
	int32_t fPosition = 0;
	int32_t fMark = 0;
	int32_t fLastDepth = 0;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl$ElementStack2_h_