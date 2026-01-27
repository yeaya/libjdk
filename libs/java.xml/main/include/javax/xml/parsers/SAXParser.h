#ifndef _javax_xml_parsers_SAXParser_h_
#define _javax_xml_parsers_SAXParser_h_
//$ class javax.xml.parsers.SAXParser
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
	namespace xml {
		namespace sax {
			class HandlerBase;
			class InputSource;
			class Parser;
			class XMLReader;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class DefaultHandler;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace parsers {

class $import SAXParser : public ::java::lang::Object {
	$class(SAXParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SAXParser();
	void init$();
	virtual ::org::xml::sax::Parser* getParser() {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual ::javax::xml::validation::Schema* getSchema();
	virtual ::org::xml::sax::XMLReader* getXMLReader() {return nullptr;}
	virtual bool isNamespaceAware() {return false;}
	virtual bool isValidating() {return false;}
	virtual bool isXIncludeAware();
	virtual void parse(::java::io::InputStream* is, ::org::xml::sax::HandlerBase* hb);
	virtual void parse(::java::io::InputStream* is, ::org::xml::sax::HandlerBase* hb, $String* systemId);
	virtual void parse(::java::io::InputStream* is, ::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse(::java::io::InputStream* is, ::org::xml::sax::helpers::DefaultHandler* dh, $String* systemId);
	virtual void parse($String* uri, ::org::xml::sax::HandlerBase* hb);
	virtual void parse($String* uri, ::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse(::java::io::File* f, ::org::xml::sax::HandlerBase* hb);
	virtual void parse(::java::io::File* f, ::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void parse(::org::xml::sax::InputSource* is, ::org::xml::sax::HandlerBase* hb);
	virtual void parse(::org::xml::sax::InputSource* is, ::org::xml::sax::helpers::DefaultHandler* dh);
	virtual void reset();
	virtual void setProperty($String* name, Object$* value) {}
};

		} // parsers
	} // xml
} // javax

#endif // _javax_xml_parsers_SAXParser_h_