#ifndef _com_sun_org_apache_xerces_internal_dom_DOMImplementationImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMImplementationImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl
//$ extends com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Document;
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

class DOMImplementationImpl : public ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl {
	$class(DOMImplementationImpl, 0, ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl)
public:
	DOMImplementationImpl();
	using ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl::createDocument;
	void init$();
	virtual ::org::w3c::dom::Document* createDocument($String* namespaceURI, $String* qualifiedName, ::org::w3c::dom::DocumentType* doctype) override;
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	virtual bool hasFeature($String* feature, $String* version) override;
	static ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl* singleton;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMImplementationImpl_h_