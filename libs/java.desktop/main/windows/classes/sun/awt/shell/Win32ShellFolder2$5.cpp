#include <sun/awt/shell/Win32ShellFolder2$5.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$5::init$(int64_t val$pIShellFolder, int64_t val$pidl1, int64_t val$pidl2) {
	this->val$pIShellFolder = val$pIShellFolder;
	this->val$pidl1 = val$pidl1;
	this->val$pidl2 = val$pidl2;
}

$Object* Win32ShellFolder2$5::call() {
	return $of($Boolean::valueOf($Win32ShellFolder2::compareIDs(this->val$pIShellFolder, this->val$pidl1, this->val$pidl2) == 0));
}

Win32ShellFolder2$5::Win32ShellFolder2$5() {
}

$Class* Win32ShellFolder2$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$pidl2", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pidl2)},
		{"val$pidl1", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pidl1)},
		{"val$pIShellFolder", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$5, val$pIShellFolder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJJ)V", "()V", 0, $method(Win32ShellFolder2$5, init$, void, int64_t, int64_t, int64_t)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$5, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"pidlsEqual",
		"(JJJ)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$5",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$5);
	});
	return class$;
}

$Class* Win32ShellFolder2$5::class$ = nullptr;

		} // shell
	} // awt
} // sun