#include <sun/awt/shell/ShellFolder$Invoker.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

namespace sun {
	namespace awt {
		namespace shell {

$Class* ShellFolder$Invoker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(ShellFolder$Invoker, invoke, $Object*, $Callable*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.shell.ShellFolder$Invoker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.ShellFolder"
	};
	$loadClass(ShellFolder$Invoker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolder$Invoker);
	});
	return class$;
}

$Class* ShellFolder$Invoker::class$ = nullptr;

		} // shell
	} // awt
} // sun