#ifndef _javax_xml_xpath_XPathFactory_h_
#define _javax_xml_xpath_XPathFactory_h_
//$ class javax.xml.xpath.XPathFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_OBJECT_MODEL_URI")
#undef DEFAULT_OBJECT_MODEL_URI
#pragma push_macro("DEFAULT_PROPERTY_NAME")
#undef DEFAULT_PROPERTY_NAME

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPath;
			class XPathFunctionResolver;
			class XPathVariableResolver;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $import XPathFactory : public ::java::lang::Object {
	$class(XPathFactory, 0, ::java::lang::Object)
public:
	XPathFactory();
	void init$();
	virtual bool getFeature($String* name) {return false;}
	virtual bool isObjectModelSupported($String* objectModel) {return false;}
	static ::javax::xml::xpath::XPathFactory* newDefaultInstance();
	static ::javax::xml::xpath::XPathFactory* newInstance();
	static ::javax::xml::xpath::XPathFactory* newInstance($String* uri);
	static ::javax::xml::xpath::XPathFactory* newInstance($String* uri, $String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual ::javax::xml::xpath::XPath* newXPath() {return nullptr;}
	virtual void setFeature($String* name, bool value) {}
	virtual void setXPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver* resolver) {}
	virtual void setXPathVariableResolver(::javax::xml::xpath::XPathVariableResolver* resolver) {}
	static $String* DEFAULT_PROPERTY_NAME;
	static $String* DEFAULT_OBJECT_MODEL_URI;
};

		} // xpath
	} // xml
} // javax

#pragma pop_macro("DEFAULT_OBJECT_MODEL_URI")
#pragma pop_macro("DEFAULT_PROPERTY_NAME")

#endif // _javax_xml_xpath_XPathFactory_h_