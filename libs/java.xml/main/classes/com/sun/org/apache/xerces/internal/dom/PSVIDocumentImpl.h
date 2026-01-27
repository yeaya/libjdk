#ifndef _com_sun_org_apache_xerces_internal_dom_PSVIDocumentImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_PSVIDocumentImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.PSVIDocumentImpl
//$ extends com.sun.org.apache.xerces.internal.dom.DocumentImpl

#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class DOMConfiguration;
			class DOMImplementation;
			class DocumentType;
			class Element;
			class Node;
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

class PSVIDocumentImpl : public ::com::sun::org::apache::xerces::internal::dom::DocumentImpl {
	$class(PSVIDocumentImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::DocumentImpl)
public:
	PSVIDocumentImpl();
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::addEventListener;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::dispatchEvent;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::cloneNode;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getUserData;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getUserDataRecord;
	void init$();
	void init$(::org::w3c::dom::DocumentType* doctype);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName, $String* localName) override;
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName, $String* localpart) override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::removeEventListener;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::setUserData;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x85912D6C942C69A6;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_PSVIDocumentImpl_h_