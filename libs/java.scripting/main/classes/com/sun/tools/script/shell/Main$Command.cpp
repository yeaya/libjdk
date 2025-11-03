#include <com/sun/tools/script/shell/Main$Command.h>

#include <com/sun/tools/script/shell/Main.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::script::shell::Main;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

$MethodInfo _Main$Command_MethodInfo_[] = {
	{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Main$Command_InnerClassesInfo_[] = {
	{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Main$Command_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.tools.script.shell.Main$Command",
	nullptr,
	nullptr,
	nullptr,
	_Main$Command_MethodInfo_,
	nullptr,
	nullptr,
	_Main$Command_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.script.shell.Main"
};

$Object* allocate$Main$Command($Class* clazz) {
	return $of($alloc(Main$Command));
}

$Class* Main$Command::load$($String* name, bool initialize) {
	$loadClass(Main$Command, name, initialize, &_Main$Command_ClassInfo_, allocate$Main$Command);
	return class$;
}

$Class* Main$Command::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com