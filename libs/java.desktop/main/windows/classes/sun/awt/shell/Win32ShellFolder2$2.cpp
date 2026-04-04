#include <sun/awt/shell/Win32ShellFolder2$2.h>
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

void Win32ShellFolder2$2::init$($Win32ShellFolder2* val$parent, int64_t val$pIDL) {
	$set(this, val$parent, val$parent);
	this->val$pIDL = val$pIDL;
}

$Object* Win32ShellFolder2$2::call() {
	return $of($Win32ShellFolder2::getFileSystemPath($nc(this->val$parent)->getIShellFolder(), this->val$pIDL));
}

Win32ShellFolder2$2::Win32ShellFolder2$2() {
}

$Class* Win32ShellFolder2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$pIDL", "J", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$2, val$pIDL)},
		{"val$parent", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$2, val$parent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;J)V", "()V", 0, $method(Win32ShellFolder2$2, init$, void, $Win32ShellFolder2*, int64_t)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$2, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"createShellFolder",
		"(Lsun/awt/shell/Win32ShellFolder2;J)Lsun/awt/shell/Win32ShellFolder2;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$2",
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
	$loadClass(Win32ShellFolder2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$2);
	});
	return class$;
}

$Class* Win32ShellFolder2$2::class$ = nullptr;

		} // shell
	} // awt
} // sun