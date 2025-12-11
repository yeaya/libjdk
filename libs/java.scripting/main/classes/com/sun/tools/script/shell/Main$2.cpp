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

$FieldInfo _Main$2_FieldInfo_[] = {
	{"val$encoding", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$encoding)},
	{"val$fileName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$fileName)},
	{"val$se", "Ljavax/script/ScriptEngine;", nullptr, $FINAL | $SYNTHETIC, $field(Main$2, val$se)},
	{}
};

$MethodInfo _Main$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Main$2::*)($ScriptEngine*,$String*,$String*)>(&Main$2::init$))},
	{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Main$2_EnclosingMethodInfo_ = {
	"com.sun.tools.script.shell.Main",
	"addFileSource",
	"(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V"
};

$InnerClassInfo _Main$2_InnerClassesInfo_[] = {
	{"com.sun.tools.script.shell.Main$2", nullptr, nullptr, 0},
	{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.script.shell.Main$2",
	"java.lang.Object",
	"com.sun.tools.script.shell.Main$Command",
	_Main$2_FieldInfo_,
	_Main$2_MethodInfo_,
	nullptr,
	&_Main$2_EnclosingMethodInfo_,
	_Main$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.script.shell.Main"
};

$Object* allocate$Main$2($Class* clazz) {
	return $of($alloc(Main$2));
}

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
	$loadClass(Main$2, name, initialize, &_Main$2_ClassInfo_, allocate$Main$2);
	return class$;
}

$Class* Main$2::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com