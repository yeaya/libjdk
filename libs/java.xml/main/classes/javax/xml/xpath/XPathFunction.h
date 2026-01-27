#ifndef _javax_xml_xpath_XPathFunction_h_
#define _javax_xml_xpath_XPathFunction_h_
//$ interface javax.xml.xpath.XPathFunction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathFunction : public ::java::lang::Object {
	$interface(XPathFunction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* evaluate(::java::util::List* args) {return nullptr;}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFunction_h_