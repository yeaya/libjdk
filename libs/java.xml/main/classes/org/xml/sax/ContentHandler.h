#ifndef _org_xml_sax_ContentHandler_h_
#define _org_xml_sax_ContentHandler_h_
//$ interface org.xml.sax.ContentHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class Locator;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $export ContentHandler : public ::java::lang::Object {
	$interface(ContentHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void characters($chars* ch, int32_t start, int32_t length) {}
	virtual void declaration($String* version, $String* encoding, $String* standalone);
	virtual void endDocument() {}
	virtual void endElement($String* uri, $String* localName, $String* qName) {}
	virtual void endPrefixMapping($String* prefix) {}
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) {}
	virtual void processingInstruction($String* target, $String* data) {}
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) {}
	virtual void skippedEntity($String* name) {}
	virtual void startDocument() {}
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) {}
	virtual void startPrefixMapping($String* prefix, $String* uri) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ContentHandler_h_