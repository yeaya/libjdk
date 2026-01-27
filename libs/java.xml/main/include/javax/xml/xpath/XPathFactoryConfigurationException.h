#ifndef _javax_xml_xpath_XPathFactoryConfigurationException_h_
#define _javax_xml_xpath_XPathFactoryConfigurationException_h_
//$ class javax.xml.xpath.XPathFactoryConfigurationException
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

class $import XPathFactoryConfigurationException : public ::javax::xml::xpath::XPathException {
	$class(XPathFactoryConfigurationException, $NO_CLASS_INIT, ::javax::xml::xpath::XPathException)
public:
	XPathFactoryConfigurationException();
	void init$($String* message);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xE681613C88777F1C;
	XPathFactoryConfigurationException(const XPathFactoryConfigurationException& e);
	virtual void throw$() override;
	inline XPathFactoryConfigurationException* operator ->() {
		return (XPathFactoryConfigurationException*)throwing$;
	}
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFactoryConfigurationException_h_