#include <com/sun/tools/script/shell/Main$1.h>

#include <com/sun/tools/script/shell/Main.h>
#include <javax/script/ScriptEngine.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::script::shell::Main;
using $Main$Command = ::com::sun::tools::script::shell::Main$Command;
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

$FieldInfo _Main$1_FieldInfo_[] = {
	{"val$se", "Ljavax/script/ScriptEngine;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, val$se)},
	{}
};

$MethodInfo _Main$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/script/ScriptEngine;)V", "()V", 0, $method(static_cast<void(Main$1::*)($ScriptEngine*)>(&Main$1::init$))},
	{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$1_EnclosingMethodInfo_ = {
	"com.sun.tools.script.shell.Main",
	"addInteractiveMode",
	"(Ljavax/script/ScriptEngine;)V"
};

$InnerClassInfo _Main$1_InnerClassesInfo_[] = {
	{"com.sun.tools.script.shell.Main$1", nullptr, nullptr, 0},
	{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.script.shell.Main$1",
	"java.lang.Object",
	"com.sun.tools.script.shell.Main$Command",
	_Main$1_FieldInfo_,
	_Main$1_MethodInfo_,
	nullptr,
	&_Main$1_EnclosingMethodInfo_,
	_Main$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.script.shell.Main"
};

$Object* allocate$Main$1($Class* clazz) {
	return $of($alloc(Main$1));
}

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
	$loadClass(Main$1, name, initialize, &_Main$1_ClassInfo_, allocate$Main$1);
	return class$;
}

$Class* Main$1::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com