#include <sun/awt/shell/ShellFolderManager$DirectInvoker.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolderManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

namespace sun {
	namespace awt {
		namespace shell {

void ShellFolderManager$DirectInvoker::init$() {
}

$Object* ShellFolderManager$DirectInvoker::invoke($Callable* task) {
	return $nc(task)->call();
}

ShellFolderManager$DirectInvoker::ShellFolderManager$DirectInvoker() {
}

$Class* ShellFolderManager$DirectInvoker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ShellFolderManager$DirectInvoker, init$, void)},
		{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC, $virtualMethod(ShellFolderManager$DirectInvoker, invoke, $Object*, $Callable*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolderManager$DirectInvoker", "sun.awt.shell.ShellFolderManager", "DirectInvoker", $PRIVATE | $STATIC},
		{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.ShellFolderManager$DirectInvoker",
		"java.lang.Object",
		"sun.awt.shell.ShellFolder$Invoker",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.ShellFolderManager"
	};
	$loadClass(ShellFolderManager$DirectInvoker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolderManager$DirectInvoker);
	});
	return class$;
}

$Class* ShellFolderManager$DirectInvoker::class$ = nullptr;

		} // shell
	} // awt
} // sun