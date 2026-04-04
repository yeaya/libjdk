#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$2.h>
#include <java/util/concurrent/Future.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Future = ::java::util::concurrent::Future;
using $Win32ShellFolderManager2$ComInvoker = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker;

namespace sun {
	namespace awt {
		namespace shell {

void Win32ShellFolderManager2$ComInvoker$2::init$($Win32ShellFolderManager2$ComInvoker* this$0, $Future* val$future) {
	$set(this, this$0, this$0);
	$set(this, val$future, val$future);
}

$Object* Win32ShellFolderManager2$ComInvoker$2::run() {
	$nc(this->val$future)->cancel(true);
	return nullptr;
}

Win32ShellFolderManager2$ComInvoker$2::Win32ShellFolderManager2$ComInvoker$2() {
}

$Class* Win32ShellFolderManager2$ComInvoker$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$2, this$0)},
		{"val$future", "Ljava/util/concurrent/Future;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolderManager2$ComInvoker$2, val$future)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;Ljava/util/concurrent/Future;)V", "()V", 0, $method(Win32ShellFolderManager2$ComInvoker$2, init$, void, $Win32ShellFolderManager2$ComInvoker*, $Future*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
		"invoke",
		"(Ljava/util/concurrent/Callable;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolderManager2"
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$2);
	});
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker$2::class$ = nullptr;

		} // shell
	} // awt
} // sun