#include <sun/awt/shell/Win32ShellFolder2$7.h>
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

void Win32ShellFolder2$7::init$(int32_t val$csidl) {
	this->val$csidl = val$csidl;
}

$Object* Win32ShellFolder2$7::call() {
	return $of($Win32ShellFolder2::getFileSystemPath0(this->val$csidl));
}

Win32ShellFolder2$7::Win32ShellFolder2$7() {
}

$Class* Win32ShellFolder2$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$csidl", "I", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$7, val$csidl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(Win32ShellFolder2$7, init$, void, int32_t)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$7, call, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getFileSystemPath",
		"(I)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$7",
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
	$loadClass(Win32ShellFolder2$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$7);
	});
	return class$;
}

$Class* Win32ShellFolder2$7::class$ = nullptr;

		} // shell
	} // awt
} // sun