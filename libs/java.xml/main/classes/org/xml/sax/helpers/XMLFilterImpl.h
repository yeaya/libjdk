#ifndef _org_xml_sax_helpers_XMLFilterImpl_h_
#define _org_xml_sax_helpers_XMLFilterImpl_h_
//$ class org.xml.sax.helpers.XMLFilterImpl
//$ extends org.xml.sax.XMLFilter
//$ implements org.xml.sax.EntityResolver,org.xml.sax.DTDHandler,org.xml.sax.ContentHandler,org.xml.sax.ErrorHandler

#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/XMLFilter.h>

namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
			class Locator;
			class SAXParseException;
			class XMLReader;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export XMLFilterImpl : public ::org::xml::sax::XMLFilter, public ::org::xml::sax::EntityResolver, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ErrorHandler {
	$class(XMLFilterImpl, $NO_CLASS_INIT, ::org::xml::sax::XMLFilter, ::org::xml::sax::EntityResolver, ::org::xml::sax::DTDHandler, ::org::xml::sax::ContentHandler, ::org::xml::sax::ErrorHandler)
public:
	XMLFilterImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::XMLReader* parent);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual ::org::xml::sax::XMLReader* getParent() override;
	virtual $Object* getProperty($String* name) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void parse(::org::xml::sax::InputSource* input) override;
	virtual void parse($String* systemId) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setParent(::org::xml::sax::XMLReader* parent) override;
	virtual void setProperty($String* name, Object$* value) override;
	void setupParse();
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	::org::xml::sax::XMLReader* parent = nullptr;
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

#endif // _org_xml_sax_helpers_XMLFilterImpl_h_