#ifndef _org_xml_sax_helpers_ParserFactory_h_
#define _org_xml_sax_helpers_ParserFactory_h_
//$ class org.xml.sax.helpers.ParserFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			class Parser;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export ParserFactory : public ::java::lang::Object {
	$class(ParserFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParserFactory();
	void init$();
	static ::org::xml::sax::Parser* makeParser();
	static ::org::xml::sax::Parser* makeParser($String* className);
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_ParserFactory_h_