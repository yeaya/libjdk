#ifndef _org_xml_sax_XMLReader_h_
#define _org_xml_sax_XMLReader_h_
//$ interface org.xml.sax.XMLReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $export XMLReader : public ::java::lang::Object {
	$interface(XMLReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::xml::sax::ContentHandler* getContentHandler() {return nullptr;}
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() {return nullptr;}
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() {return nullptr;}
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* name) {return false;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual void parse(::org::xml::sax::InputSource* input) {}
	virtual void parse($String* systemId) {}
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) {}
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) {}
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) {}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) {}
	virtual void setFeature($String* name, bool value) {}
	virtual void setProperty($String* name, Object$* value) {}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_XMLReader_h_