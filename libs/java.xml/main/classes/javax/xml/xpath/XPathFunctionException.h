#ifndef _javax_xml_xpath_XPathFunctionException_h_
#define _javax_xml_xpath_XPathFunctionException_h_
//$ class javax.xml.xpath.XPathFunctionException
//$ extends javax.xml.xpath.XPathExpressionException

#include <javax/xml/xpath/XPathExpressionException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathFunctionException : public ::javax::xml::xpath::XPathExpressionException {
	$class(XPathFunctionException, $NO_CLASS_INIT, ::javax::xml::xpath::XPathExpressionException)
public:
	XPathFunctionException();
	void init$($String* message);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xE681613C88777F1C;
	XPathFunctionException(const XPathFunctionException& e);
	virtual void throw$() override;
	inline XPathFunctionException* operator ->() {
		return (XPathFunctionException*)throwing$;
	}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFunctionException_h_