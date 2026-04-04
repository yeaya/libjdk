#include <com/sun/tools/script/shell/Main$2.h>
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

void Main$2::init$($ScriptEngine* val$se, $String* val$fileName, $String* val$encoding) {
	$set(this, val$se, val$se);
	$set(this, val$fileName, val$fileName);
	$set(this, val$encoding, val$encoding);
}

void Main$2::run($StringArray* args) {
	$Main::setScriptArguments(this->val$se, args);
	$Main::processSource(this->val$se, this->val$fileName, this->val$encoding);
}

Main$2::Main$2() {
}

$Class* Main$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$encoding", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$encoding)},
		{"val$fileName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$fileName)},
		{"val$se", "Ljavax/script/ScriptEngine;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$se)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(Main$2, init$, void, $ScriptEngine*, $String*, $String*)},
		{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Main$2, run, void, $StringArray*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.script.shell.Main",
		"addFileSource",
		"(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.script.shell.Main$2", nullptr, nullptr, 0},
		{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.script.shell.Main$2",
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
	$loadClass(Main$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$2);
	});
	return class$;
}

$Class* Main$2::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com