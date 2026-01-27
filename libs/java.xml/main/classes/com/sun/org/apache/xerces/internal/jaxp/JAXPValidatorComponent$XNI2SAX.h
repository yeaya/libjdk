#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$XNI2SAX_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$XNI2SAX_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$XNI2SAX
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultXMLDocumentHandler

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							class JAXPValidatorComponent;
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
						namespace util {
							class AttributesProxy;
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
							class Augmentations;
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLLocator;
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

class JAXPValidatorComponent$XNI2SAX : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler {
	$class(JAXPValidatorComponent$XNI2SAX, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler)
public:
	JAXPValidatorComponent$XNI2SAX();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::org::xml::sax::ContentHandler* getContentHandler();
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void setContentHandler(::org::xml::sax::ContentHandler* handler);
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0 = nullptr;
	::org::xml::sax::ContentHandler* fContentHandler = nullptr;
	$String* fVersion = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::AttributesProxy* fAttributesProxy = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$XNI2SAX_h_