#ifndef _org_xml_sax_helpers_XMLReaderAdapter_h_
#define _org_xml_sax_helpers_XMLReaderAdapter_h_
//$ class org.xml.sax.helpers.XMLReaderAdapter
//$ extends org.xml.sax.Parser
//$ implements org.xml.sax.ContentHandler

#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Parser.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class DTDHandler;
			class DocumentHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
			class Locator;
			class XMLReader;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class XMLReaderAdapter$AttributesAdapter;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export XMLReaderAdapter : public ::org::xml::sax::Parser, public ::org::xml::sax::ContentHandler {
	$class(XMLReaderAdapter, $NO_CLASS_INIT, ::org::xml::sax::Parser, ::org::xml::sax::ContentHandler)
public:
	XMLReaderAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::XMLReader* xmlReader);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void parse($String* systemId) override;
	virtual void parse(::org::xml::sax::InputSource* input) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setDocumentHandler(::org::xml::sax::DocumentHandler* handler) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	void setup(::org::xml::sax::XMLReader* xmlReader);
	void setupXMLReader();
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	::org::xml::sax::XMLReader* xmlReader = nullptr;
	::org::xml::sax::DocumentHandler* documentHandler = nullptr;
	::org::xml::sax::helpers::XMLReaderAdapter$AttributesAdapter* qAtts = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_XMLReaderAdapter_h_