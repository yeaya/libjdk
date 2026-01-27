#ifndef _javax_xml_stream_FactoryFinder$1_h_
#define _javax_xml_stream_FactoryFinder$1_h_
//$ class javax.xml.stream.FactoryFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class FactoryFinder$1 : public ::java::security::PrivilegedAction {
	$class(FactoryFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FactoryFinder$1();
	void init$(::java::lang::ClassLoader* val$cl, $Class* val$type);
	virtual $Object* run() override;
	$Class* val$type = nullptr;
	::java::lang::ClassLoader* val$cl = nullptr;
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_FactoryFinder$1_h_