#ifndef _javax_xml_parsers_DocumentBuilder_h_
#define _javax_xml_parsers_DocumentBuilder_h_
//$ class javax.xml.parsers.DocumentBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Schema;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Document;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}

namespace javax {
	namespace xml {
		namespace parsers {

class $export DocumentBuilder : public ::java::lang::Object {
	$class(DocumentBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DocumentBuilder();
	void init$();
	virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation() {return nullptr;}
	virtual ::javax::xml::validation::Schema* getSchema();
	virtual bool isNamespaceAware() {return false;}
	virtual bool isValidating() {return false;}
	virtual bool isXIncludeAware();
	virtual ::org::w3c::dom::Document* newDocument() {return nullptr;}
	virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* is);
	virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* is, $String* systemId);
	virtual ::org::w3c::dom::Document* parse($String* uri);
	virtual ::org::w3c::dom::Document* parse(::java::io::File* f);
	virtual ::org::w3c::dom::Document* parse(::org::xml::sax::InputSource* is) {return nullptr;}
	virtual void reset();
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* er) {}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* eh) {}
};

		} // parsers
	} // xml
} // javax

#endif // _javax_xml_parsers_DocumentBuilder_h_