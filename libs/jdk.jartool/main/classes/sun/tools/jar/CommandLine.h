#ifndef _sun_tools_jar_CommandLine_h_
#define _sun_tools_jar_CommandLine_h_
//$ class sun.tools.jar.CommandLine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class CommandLine : public ::java::lang::Object {
	$class(CommandLine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CommandLine();
	void init$();
	static void loadCmdFile($String* name, ::java::util::List* args);
	static $StringArray* parse($StringArray* args);
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_CommandLine_h_