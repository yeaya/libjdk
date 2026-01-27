#ifndef _javax_xml_xpath_XPathFactoryFinder$1_h_
#define _javax_xml_xpath_XPathFactoryFinder$1_h_
//$ class javax.xml.xpath.XPathFactoryFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace xml {
		namespace xpath {
			class XPathFactory;
			class XPathFactoryFinder;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class XPathFactoryFinder$1 : public ::java::security::PrivilegedAction {
	$class(XPathFactoryFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XPathFactoryFinder$1();
	void init$(::javax::xml::xpath::XPathFactoryFinder* this$0, ::javax::xml::xpath::XPathFactory* val$factory, $String* val$objectModel);
	virtual $Object* run() override;
	::javax::xml::xpath::XPathFactoryFinder* this$0 = nullptr;
	$String* val$objectModel = nullptr;
	::javax::xml::xpath::XPathFactory* val$factory = nullptr;
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFactoryFinder$1_h_