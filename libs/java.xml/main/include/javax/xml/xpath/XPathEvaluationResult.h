#ifndef _javax_xml_xpath_XPathEvaluationResult_h_
#define _javax_xml_xpath_XPathEvaluationResult_h_
//$ interface javax.xml.xpath.XPathEvaluationResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace xpath {
			class XPathEvaluationResult$XPathResultType;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $import XPathEvaluationResult : public ::java::lang::Object {
	$interface(XPathEvaluationResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* type() {return nullptr;}
	virtual $Object* value() {return nullptr;}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathEvaluationResult_h_