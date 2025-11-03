#ifndef _com_sun_tools_script_shell_Main$Command_h_
#define _com_sun_tools_script_shell_Main$Command_h_
//$ interface com.sun.tools.script.shell.Main$Command
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

class Main$Command : public ::java::lang::Object {
	$interface(Main$Command, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void run($StringArray* arguments) {}
};

				} // shell
			} // script
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_script_shell_Main$Command_h_