#ifndef _org_xml_sax_helpers_ParserAdapter_h_
#define _org_xml_sax_helpers_ParserAdapter_h_
//$ class org.xml.sax.helpers.ParserAdapter
//$ extends org.xml.sax.XMLReader
//$ implements org.xml.sax.DocumentHandler

#include <java/lang/Array.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/XMLReader.h>

#pragma push_macro("FEATURES")
#undef FEATURES
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NAMESPACE_PREFIXES")
#undef NAMESPACE_PREFIXES

namespace org {
	namespace xml {
		namespace sax {
			class AttributeList;
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
			class Locator;
			class Parser;
			class SAXParseException;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class AttributesImpl;
				class NamespaceSupport;
				class ParserAdapter$AttributeListAdapter;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export ParserAdapter : public ::org::xml::sax::XMLReader, public ::org::xml::sax::DocumentHandler {
	$class(ParserAdapter, 0, ::org::xml::sax::XMLReader, ::org::xml::sax::DocumentHandler)
public:
	ParserAdapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::Parser* parser);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	void checkNotParsing($String* type, $String* name);
	virtual void endDocument() override;
	virtual void endElement($String* qName) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual $Object* getProperty($String* name) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	::org::xml::sax::SAXParseException* makeException($String* message);
	virtual void parse($String* systemId) override;
	virtual void parse(::org::xml::sax::InputSource* input) override;
	$StringArray* processName($String* qName, bool isAttribute, bool useException);
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void reportError($String* message);
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* value) override;
	void setup(::org::xml::sax::Parser* parser);
	void setupParser();
	virtual void startDocument() override;
	virtual void startElement($String* qName, ::org::xml::sax::AttributeList* qAtts) override;
	virtual $String* toString() override;
	static $String* FEATURES;
	static $String* NAMESPACES;
	static $String* NAMESPACE_PREFIXES;
	static $String* XMLNS_URIs;
	::org::xml::sax::helpers::NamespaceSupport* nsSupport = nullptr;
	::org::xml::sax::helpers::ParserAdapter$AttributeListAdapter* attAdapter = nullptr;
	bool parsing = false;
	$StringArray* nameParts = nullptr;
	::org::xml::sax::Parser* parser = nullptr;
	::org::xml::sax::helpers::AttributesImpl* atts = nullptr;
	bool namespaces = false;
	bool prefixes = false;
	bool uris = false;
	::org::xml::sax::Locator* locator = nullptr;
	::org::xml::sax::EntityResolver* entityResolver = nullptr;
	::org::xml::sax::DTDHandler* dtdHandler = nullptr;
	::org::xml::sax::ContentHandler* contentHandler = nullptr;
	::org::xml::sax::ErrorHandler* errorHandler = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#pragma pop_macro("FEATURES")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NAMESPACE_PREFIXES")

#endif // _org_xml_sax_helpers_ParserAdapter_h_