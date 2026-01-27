#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$SAX2XNI_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$SAX2XNI_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$SAX2XNI
//$ extends org.xml.sax.helpers.DefaultHandler

#include <java/lang/Array.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

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
						namespace xni {
							class Augmentations;
							class QName;
							class XMLDocumentHandler;
							class XNIException;
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
			class Attributes;
			class SAXException;
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

class JAXPValidatorComponent$SAX2XNI : public ::org::xml::sax::helpers::DefaultHandler {
	$class(JAXPValidatorComponent$SAX2XNI, $NO_CLASS_INIT, ::org::xml::sax::helpers::DefaultHandler)
public:
	JAXPValidatorComponent$SAX2XNI();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0);
	::com::sun::org::apache::xerces::internal::xni::Augmentations* aug();
	virtual void characters($chars* ch, int32_t start, int32_t len) override;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* elementAug();
	virtual void endElement($String* uri, $String* localName, $String* qname) override;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t len) override;
	virtual void startElement($String* uri, $String* localName, $String* qname, ::org::xml::sax::Attributes* atts) override;
	::com::sun::org::apache::xerces::internal::xni::QName* toQName($String* uri, $String* localName, $String* qname);
	::org::xml::sax::SAXException* toSAXException(::com::sun::org::apache::xerces::internal::xni::XNIException* xe);
	::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fAugmentations = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$SAX2XNI_h_