#ifndef _com_sun_org_apache_xml_internal_serializer_ExtendedContentHandler_h_
#define _com_sun_org_apache_xml_internal_serializer_ExtendedContentHandler_h_
//$ interface com.sun.org.apache.xml.internal.serializer.ExtendedContentHandler
//$ extends org.xml.sax.ContentHandler

#include <org/xml/sax/ContentHandler.h>

#pragma push_macro("HTML_ATTREMPTY")
#undef HTML_ATTREMPTY
#pragma push_macro("HTML_ATTRURL")
#undef HTML_ATTRURL
#pragma push_macro("NO_BAD_CHARS")
#undef NO_BAD_CHARS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class NamespaceMappings;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ExtendedContentHandler : public ::org::xml::sax::ContentHandler {
	$interface(ExtendedContentHandler, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler)
public:
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {}
	virtual void addAttribute($String* qName, $String* value) {}
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) {}
	virtual void addAttributes(::org::xml::sax::Attributes* atts) {}
	virtual void addUniqueAttribute($String* qName, $String* value, int32_t flags) {}
	virtual void addXSLAttribute($String* qName, $String* value, $String* uri) {}
	using ::org::xml::sax::ContentHandler::characters;
	virtual void characters($String* chars) {}
	virtual void characters(::org::w3c::dom::Node* node) {}
	using ::org::xml::sax::ContentHandler::endElement;
	virtual void endElement($String* elemName) {}
	virtual void entityReference($String* entityName) {}
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* getNamespaceMappings() {return nullptr;}
	virtual $String* getNamespaceURI($String* name, bool isElement) {return nullptr;}
	virtual $String* getNamespaceURIFromPrefix($String* prefix) {return nullptr;}
	virtual $String* getPrefix($String* uri) {return nullptr;}
	virtual void namespaceAfterStartElement($String* uri, $String* prefix) {}
	virtual void setSourceLocator(::javax::xml::transform::SourceLocator* locator) {}
	using ::org::xml::sax::ContentHandler::startElement;
	virtual void startElement($String* uri, $String* localName, $String* qName) {}
	virtual void startElement($String* qName) {}
	using ::org::xml::sax::ContentHandler::startPrefixMapping;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {return false;}
	static const int32_t NO_BAD_CHARS = 1;
	static const int32_t HTML_ATTREMPTY = 2;
	static const int32_t HTML_ATTRURL = 4;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("HTML_ATTREMPTY")
#pragma pop_macro("HTML_ATTRURL")
#pragma pop_macro("NO_BAD_CHARS")

#endif // _com_sun_org_apache_xml_internal_serializer_ExtendedContentHandler_h_