#include <com/sun/tools/script/shell/Main$3.h>
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

void Main$3::init$($ScriptEngine* val$se, $String* val$source) {
	$set(this, val$se, val$se);
	$set(this, val$source, val$source);
}

void Main$3::run($StringArray* args) {
	$useLocalObjectStack();
	$Main::setScriptArguments(this->val$se, args);
	$var($String, oldFile, $Main::setScriptFilename(this->val$se, "<string>"_s));
	$var($Throwable, var$0, nullptr);
	try {
		$Main::evaluateString(this->val$se, this->val$source);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Main::setScriptFilename(this->val$se, oldFile);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Main$3::Main$3() {
}

$Class* Main$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$source", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$3, val$source)},
		{"val$se", "Ljavax/script/ScriptEngine;", nullptr, $FINAL | $SYNTHETIC, $field(Main$3, val$se)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/script/ScriptEngine;Ljava/lang/String;)V", "()V", 0, $method(Main$3, init$, void, $ScriptEngine*, $String*)},
		{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Main$3, run, void, $StringArray*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.script.shell.Main",
		"addStringSource",
		"(Ljavax/script/ScriptEngine;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.script.shell.Main$3", nullptr, nullptr, 0},
		{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.script.shell.Main$3",
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
	$loadClass(Main$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$3);
	});
	return class$;
}

$Class* Main$3::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com