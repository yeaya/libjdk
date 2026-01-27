#ifndef _com_sun_org_apache_xerces_internal_dom_ElementNSImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_ElementNSImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.ElementNSImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ElementImpl

#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>

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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSTypeDefinition;
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
			class Attr;
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

class ElementNSImpl : public ::com::sun::org::apache::xerces::internal::dom::ElementImpl {
	$class(ElementNSImpl, 0, ::com::sun::org::apache::xerces::internal::dom::ElementImpl)
public:
	ElementNSImpl();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* value);
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getPrefix() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual ::org::w3c::dom::Attr* getXMLBaseAttribute() override;
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	using ::com::sun::org::apache::xerces::internal::dom::ElementImpl::rename;
	virtual void rename($String* namespaceURI, $String* qualifiedName);
	void setName($String* namespaceURI, $String* qname);
	virtual void setPrefix($String* prefix) override;
	virtual void setType(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type);
	static const int64_t serialVersionUID = (int64_t)0x811FFCEC9520A0BE;
	static $String* xmlURI;
	$String* namespaceURI = nullptr;
	$String* localName = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* type = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ElementNSImpl_h_