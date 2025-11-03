#ifndef _sun_tools_jar_Main$ModuleInfoEntry_h_
#define _sun_tools_jar_Main$ModuleInfoEntry_h_
//$ interface sun.tools.jar.Main$ModuleInfoEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$ModuleInfoEntry : public ::java::lang::Object {
	$interface(Main$ModuleInfoEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::InputStream* bytes() {return nullptr;}
	virtual $String* name() {return nullptr;}
	virtual ::java::util::Optional* uriString() {return nullptr;}
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$ModuleInfoEntry_h_