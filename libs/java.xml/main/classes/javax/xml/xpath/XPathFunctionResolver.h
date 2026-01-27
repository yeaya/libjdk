#ifndef _javax_xml_xpath_XPathFunctionResolver_h_
#define _javax_xml_xpath_XPathFunctionResolver_h_
//$ interface javax.xml.xpath.XPathFunctionResolver
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
			class XPathFunction;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathFunctionResolver : public ::java::lang::Object {
	$interface(XPathFunctionResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::xpath::XPathFunction* resolveFunction(::javax::xml::namespace$::QName* functionName, int32_t arity) {return nullptr;}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFunctionResolver_h_