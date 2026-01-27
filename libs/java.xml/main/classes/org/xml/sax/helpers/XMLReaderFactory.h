#ifndef _org_xml_sax_helpers_XMLReaderFactory_h_
#define _org_xml_sax_helpers_XMLReaderFactory_h_
//$ class org.xml.sax.helpers.XMLReaderFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export XMLReaderFactory : public ::java::lang::Object {
	$class(XMLReaderFactory, 0, ::java::lang::Object)
public:
	XMLReaderFactory();
	void init$();
	static ::org::xml::sax::XMLReader* createXMLReader();
	static ::org::xml::sax::XMLReader* createXMLReader($String* className);
	static $Object* findServiceProvider($Class* type, ::java::lang::ClassLoader* loader);
	static $String* jarLookup(::java::lang::ClassLoader* loader);
	static $Object* lambda$findServiceProvider$0($Class* type, ::java::lang::ClassLoader* cl);
	static ::org::xml::sax::XMLReader* loadClass(::java::lang::ClassLoader* loader, $String* className);
	static $String* property;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_XMLReaderFactory_h_