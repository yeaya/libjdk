#ifndef _javax_xml_parsers_FactoryFinder$1_h_
#define _javax_xml_parsers_FactoryFinder$1_h_
//$ class javax.xml.parsers.FactoryFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace xml {
		namespace parsers {

class FactoryFinder$1 : public ::java::security::PrivilegedAction {
	$class(FactoryFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FactoryFinder$1();
	void init$($Class* val$type);
	virtual $Object* run() override;
	$Class* val$type = nullptr;
};

		} // parsers
	} // xml
} // javax

#endif // _javax_xml_parsers_FactoryFinder$1_h_