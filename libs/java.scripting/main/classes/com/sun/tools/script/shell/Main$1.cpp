#include <com/sun/tools/script/shell/Main$1.h>
#include <com/sun/tools/script/shell/Main.h>
#include <javax/script/ScriptEngine.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::script::shell::Main;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScriptEngine = ::javax::script::ScriptEngine;

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

void Main$1::init$($ScriptEngine* val$se) {
	$set(this, val$se, val$se);
}

void Main$1::run($StringArray* args) {
	$Main::setScriptArguments(this->val$se, args);
	$Main::processSource(this->val$se, "-"_s, nullptr);
}

Main$1::Main$1() {
}

$Class* Main$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$se", "Ljavax/script/ScriptEngine;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, val$se)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/script/ScriptEngine;)V", "()V", 0, $method(Main$1, init$, void, $ScriptEngine*)},
		{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Main$1, run, void, $StringArray*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.script.shell.Main",
		"addInteractiveMode",
		"(Ljavax/script/ScriptEngine;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.script.shell.Main$1", nullptr, nullptr, 0},
		{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.script.shell.Main$1",
		"java.lang.Object",
		"com.sun.tools.script.shell.Main$Command",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.script.shell.Main"
	};
	$loadClass(Main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$1);
	});
	return class$;
}

$Class* Main$1::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com