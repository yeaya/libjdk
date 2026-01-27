#ifndef _javax_xml_datatype_FactoryFinder$1_h_
#define _javax_xml_datatype_FactoryFinder$1_h_
//$ class javax.xml.datatype.FactoryFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace xml {
		namespace datatype {

class FactoryFinder$1 : public ::java::security::PrivilegedAction {
	$class(FactoryFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FactoryFinder$1();
	void init$($Class* val$type);
	virtual $Object* run() override;
	$Class* val$type = nullptr;
};

		} // datatype
	} // xml
} // javax

#endif // _javax_xml_datatype_FactoryFinder$1_h_