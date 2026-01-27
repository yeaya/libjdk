#ifndef _javax_xml_xpath_XPathFactoryFinder$2_h_
#define _javax_xml_xpath_XPathFactoryFinder$2_h_
//$ class javax.xml.xpath.XPathFactoryFinder$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathFactoryFinder;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class XPathFactoryFinder$2 : public ::java::security::PrivilegedAction {
	$class(XPathFactoryFinder$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XPathFactoryFinder$2();
	void init$(::javax::xml::xpath::XPathFactoryFinder* this$0, $String* val$objectModel, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::javax::xml::xpath::XPathFactoryFinder* this$0 = nullptr;
	::java::security::AccessControlContext* val$acc = nullptr;
	$String* val$objectModel = nullptr;
};

		} // xpath
	} // xml
} // javax

#endif // _javax_xml_xpath_XPathFactoryFinder$2_h_