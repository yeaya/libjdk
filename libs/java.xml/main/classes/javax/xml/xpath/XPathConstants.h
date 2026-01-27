#ifndef _javax_xml_xpath_XPathConstants_h_
#define _javax_xml_xpath_XPathConstants_h_
//$ class javax.xml.xpath.XPathConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("DOM_OBJECT_MODEL")
#undef DOM_OBJECT_MODEL
#pragma push_macro("NODE")
#undef NODE
#pragma push_macro("NODESET")
#undef NODESET
#pragma push_macro("NUMBER")
#undef NUMBER
#pragma push_macro("STRING")
#undef STRING

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

class $export XPathConstants : public ::java::lang::Object {
	$class(XPathConstants, 0, ::java::lang::Object)
public:
	XPathConstants();
	void init$();
	static ::javax::xml::namespace$::QName* NUMBER;
	static ::javax::xml::namespace$::QName* STRING;
	static ::javax::xml::namespace$::QName* BOOLEAN;
	static ::javax::xml::namespace$::QName* NODESET;
	static ::javax::xml::namespace$::QName* NODE;
	static $String* DOM_OBJECT_MODEL;
};

		} // xpath
	} // xml
} // javax

#pragma pop_macro("BOOLEAN")
#pragma pop_macro("DOM_OBJECT_MODEL")
#pragma pop_macro("NODE")
#pragma pop_macro("NODESET")
#pragma pop_macro("NUMBER")
#pragma pop_macro("STRING")

#endif // _javax_xml_xpath_XPathConstants_h_