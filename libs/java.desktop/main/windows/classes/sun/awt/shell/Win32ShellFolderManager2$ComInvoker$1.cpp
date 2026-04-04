#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$1.h>
#include <java/lang/Runnable.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Win32ShellFolderManager2 = ::sun::awt::shell::Win32ShellFolderManager2;
using $Win32ShellFolderManager2$ComInvoker = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolderManager2$ComInvoker$1::init$($Win32ShellFolderManager2$ComInvoker* this$0, $Runnable* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$task, val$task);
}

void Win32ShellFolderManager2$ComInvoker$1::run() {
	$var($Throwable, var$0, nullptr);
	try {
		$Win32ShellFolderManager2::initializeCom();
		$nc(this->val$task)->run();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Win32ShellFolderManager2::uninitializeCom();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Win32ShellFolderManager2$ComInvoker$1::Win32ShellFolderManager2$ComInvoker$1() {
}

$Class* Win32ShellFolderManager2$ComInvoker$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$1, this$0)},
		{"val$task", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$1, val$task)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;Ljava/lang/Runnable;)V", "()V", 0, $method(Win32ShellFolderManager2$ComInvoker$1, init$, void, $Win32ShellFolderManager2$ComInvoker*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
		"newThread",
		"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolderManager2"
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$1);
	});
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker$1::class$ = nullptr;

		} // shell
	} // awt
} // sun