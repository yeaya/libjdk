#ifndef _javax_xml_xpath_XPathExpression_h_
#define _javax_xml_xpath_XPathExpression_h_
//$ interface javax.xml.xpath.XPathExpression
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
			class XPathEvaluationResult;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathExpression : public ::java::lang::Object {
	$interface(XPathExpression, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* evaluate(Object$* item, ::javax::xml::namespace$::QName* returnType) {return nullptr;}
	virtual $String* evaluate(Object$* item) {return nullptr;}
	virtual $Object* evaluate(::org::xml::sax::InputSource* source, ::javax::xml::namespace$::QName* returnType) {return nullptr;}
	virtual $String* evaluate(::org::xml::sax::InputSource* source) {return nullptr;}
	virtual $Object* evaluateExpression(Object$* item, $Class* type);
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression(Object$* item);
	virtual $Object* evaluateExpression(::org::xml::sax::InputSource* source, $Class* type);
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression(::org::xml::sax::InputSource* source);
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathExpression_h_