#include <sun/awt/shell/Win32ShellFolder2$8.h>
#include <sun/awt/shell/Win32ShellFolder2$FolderDisposer.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolder2$8::init$($Win32ShellFolder2* this$0, bool val$includeHiddenFiles) {
	$set(this, this$0, this$0);
	this->val$includeHiddenFiles = val$includeHiddenFiles;
}

$Object* Win32ShellFolder2$8::call() {
	bool isDesktop = $nc(this->this$0->disposer)->pIShellFolder == this->this$0->getDesktopIShellFolder();
	return $of($Long::valueOf(this->this$0->getEnumObjects($nc(this->this$0->disposer)->pIShellFolder, isDesktop, this->val$includeHiddenFiles)));
}

Win32ShellFolder2$8::Win32ShellFolder2$8() {
}

$Class* Win32ShellFolder2$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$8, this$0)},
		{"val$includeHiddenFiles", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$8, val$includeHiddenFiles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;Z)V", "()V", 0, $method(Win32ShellFolder2$8, init$, void, $Win32ShellFolder2*, bool)},
		{"call", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolder2$8, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolder2",
		"getEnumObjects",
		"(Z)J"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolder2$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolder2$8",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolder2"
	};
	$loadClass(Win32ShellFolder2$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolder2$8);
	});
	return class$;
}

$Class* Win32ShellFolder2$8::class$ = nullptr;

		} // shell
	} // awt
} // sun