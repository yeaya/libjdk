#ifndef _javax_xml_xpath_XPathVariableResolver_h_
#define _javax_xml_xpath_XPathVariableResolver_h_
//$ interface javax.xml.xpath.XPathVariableResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $import XPathVariableResolver : public ::java::lang::Object {
	$interface(XPathVariableResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* resolveVariable(::javax::xml::namespace$::QName* variableName) {return nullptr;}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathVariableResolver_h_