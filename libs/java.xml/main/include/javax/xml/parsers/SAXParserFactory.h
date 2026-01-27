#ifndef _javax_xml_parsers_SAXParserFactory_h_
#define _javax_xml_parsers_SAXParserFactory_h_
//$ class javax.xml.parsers.SAXParserFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_IMPL")
#undef DEFAULT_IMPL

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class SAXParser;
		}
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Schema;
		}
	}
}

namespace javax {
	namespace xml {
		namespace parsers {

class $import SAXParserFactory : public ::java::lang::Object {
	$class(SAXParserFactory, 0, ::java::lang::Object)
public:
	SAXParserFactory();
	void init$();
	virtual bool getFeature($String* name) {return false;}
	virtual ::javax::xml::validation::Schema* getSchema();
	virtual bool isNamespaceAware();
	virtual bool isValidating();
	virtual bool isXIncludeAware();
	static ::javax::xml::parsers::SAXParserFactory* makeNSAware(::javax::xml::parsers::SAXParserFactory* spf);
	static ::javax::xml::parsers::SAXParserFactory* newDefaultInstance();
	static ::javax::xml::parsers::SAXParserFactory* newDefaultNSInstance();
	static ::javax::xml::parsers::SAXParserFactory* newInstance();
	static ::javax::xml::parsers::SAXParserFactory* newInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	static ::javax::xml::parsers::SAXParserFactory* newNSInstance();
	static ::javax::xml::parsers::SAXParserFactory* newNSInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual ::javax::xml::parsers::SAXParser* newSAXParser() {return nullptr;}
	virtual void setFeature($String* name, bool value) {}
	virtual void setNamespaceAware(bool awareness);
	virtual void setSchema(::javax::xml::validation::Schema* schema);
	virtual void setValidating(bool validating);
	virtual void setXIncludeAware(bool state);
	static $String* DEFAULT_IMPL;
	bool validating = false;
	bool namespaceAware = false;
};

		} // parsers
	} // xml
} // javax

#pragma pop_macro("DEFAULT_IMPL")

#endif // _javax_xml_parsers_SAXParserFactory_h_