#include <sun/awt/shell/Win32ShellFolder2$13.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$13::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$13::call() {
	int64_t var$0 = this->this$0->getParentIShellFolder();
	return $of($Win32ShellFolder2::getDisplayNameOf(var$0, this->this$0->getRelativePIDL(), 0));
}

Win32ShellFolder2$13::Win32ShellFolder2$13() {
}

$Class* Win32ShellFolder2$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$13, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(Win32ShellFolder2$13, init$, void, $Win32ShellFolder2*)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$13, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getDisplayName",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$13", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$13",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$13);
	});
	return class$;
}

$Class* Win32ShellFolder2$13::class$ = nullptr;

		} // shell
	} // awt
} // sun