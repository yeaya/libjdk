#ifndef _javax_xml_xpath_XPathExpressionException_h_
#define _javax_xml_xpath_XPathExpressionException_h_
//$ class javax.xml.xpath.XPathExpressionException
//$ extends javax.xml.xpath.XPathException

#include <javax/xml/xpath/XPathException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class $export XPathExpressionException : public ::javax::xml::xpath::XPathException {
	$class(XPathExpressionException, $NO_CLASS_INIT, ::javax::xml::xpath::XPathException)
public:
	XPathExpressionException();
	void init$($String* message);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xE681613C88777F1C;
	XPathExpressionException(const XPathExpressionException& e);
	virtual void throw$() override;
	inline XPathExpressionException* operator ->() {
		return (XPathExpressionException*)throwing$;
	}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathExpressionException_h_