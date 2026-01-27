#ifndef _com_sun_org_apache_xerces_internal_dom_PSVIDOMImplementationImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_PSVIDOMImplementationImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.PSVIDOMImplementationImpl
//$ extends com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl

#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class DocumentType;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class PSVIDOMImplementationImpl : public ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl {
	$class(PSVIDOMImplementationImpl, 0, ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl)
public:
	PSVIDOMImplementationImpl();
	using ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl::createDocument;
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* createDocument(::org::w3c::dom::DocumentType* doctype) override;
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	virtual bool hasFeature($String* feature, $String* version) override;
	static ::com::sun::org::apache::xerces::internal::dom::PSVIDOMImplementationImpl* singleton;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_PSVIDOMImplementationImpl_h_