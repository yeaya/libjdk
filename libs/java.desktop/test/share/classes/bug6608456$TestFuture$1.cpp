#include <bug6608456$TestFuture$1.h>
#include <bug6608456$TestFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6608456$TestFuture$1::init$() {
}

$Object* bug6608456$TestFuture$1::call() {
	return nullptr;
}

bug6608456$TestFuture$1::bug6608456$TestFuture$1() {
}

$Class* bug6608456$TestFuture$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6608456$TestFuture$1, init$, void)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(bug6608456$TestFuture$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6608456$TestFuture",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6608456$TestFuture", "bug6608456", "TestFuture", $STATIC},
		{"bug6608456$TestFuture$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6608456$TestFuture$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6608456"
	};
	$loadClass(bug6608456$TestFuture$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6608456$TestFuture$1);
	});
	return class$;
}

$Class* bug6608456$TestFuture$1::class$ = nullptr;