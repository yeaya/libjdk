#ifndef _com_sun_tools_script_shell_Main$3_h_
#define _com_sun_tools_script_shell_Main$3_h_
//$ class com.sun.tools.script.shell.Main$3
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

class Main$3 : public ::com::sun::tools::script::shell::Main$Command {
	$class(Main$3, $NO_CLASS_INIT, ::com::sun::tools::script::shell::Main$Command)
public:
	Main$3();
	void init$(::javax::script::ScriptEngine* val$se, $String* val$source);
	virtual void run($StringArray* args) override;
	$String* val$source = nullptr;
	::javax::script::ScriptEngine* val$se = nullptr;
};

				} // shell
			} // script
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_script_shell_Main$3_h_