#ifndef _com_sun_tools_script_shell_Main$1_h_
#define _com_sun_tools_script_shell_Main$1_h_
//$ class com.sun.tools.script.shell.Main$1
//$ extends com.sun.tools.script.shell.Main$Command

#include <com/sun/tools/script/shell/Main$Command.h>
#include <java/lang/Array.h>

namespace javax {
	namespace script {
		class ScriptEngine;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

class Main$1 : public ::com::sun::tools::script::shell::Main$Command {
	$class(Main$1, $NO_CLASS_INIT, ::com::sun::tools::script::shell::Main$Command)
public:
	Main$1();
	void init$(::javax::script::ScriptEngine* val$se);
	virtual void run($StringArray* args) override;
	::javax::script::ScriptEngine* val$se = nullptr;
};

				} // shell
			} // script
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_script_shell_Main$1_h_