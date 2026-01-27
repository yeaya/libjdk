#ifndef _org_xml_sax_HandlerBase_h_
#define _org_xml_sax_HandlerBase_h_
//$ class org.xml.sax.HandlerBase
//$ extends org.xml.sax.EntityResolver
//$ implements org.xml.sax.DTDHandler,org.xml.sax.DocumentHandler,org.xml.sax.ErrorHandler

#include <java/lang/Array.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>

namespace org {
	namespace xml {
		namespace sax {
			class AttributeList;
			class InputSource;
			class Locator;
			class SAXParseException;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $import HandlerBase : public ::org::xml::sax::EntityResolver, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::DocumentHandler, public ::org::xml::sax::ErrorHandler {
	$class(HandlerBase, $NO_CLASS_INIT, ::org::xml::sax::EntityResolver, ::org::xml::sax::DTDHandler, ::org::xml::sax::DocumentHandler, ::org::xml::sax::ErrorHandler)
public:
	HandlerBase();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endDocument() override;
	virtual void endElement($String* name) override;
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void startDocument() override;
	virtual void startElement($String* name, ::org::xml::sax::AttributeList* attributes) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_HandlerBase_h_