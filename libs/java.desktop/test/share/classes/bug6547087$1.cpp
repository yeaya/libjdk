#include <bug6547087$1.h>
#include <bug6547087.h>
#include <jcpp.h>

using $bug6547087 = ::bug6547087;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6547087$1::init$() {
}

$Object* bug6547087$1::call() {
	$bug6547087::test();
	return nullptr;
}

bug6547087$1::bug6547087$1() {
}

$Class* bug6547087$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6547087$1, init$, void)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(bug6547087$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6547087",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6547087$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6547087$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6547087"
	};
	$loadClass(bug6547087$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6547087$1);
	});
	return class$;
}

$Class* bug6547087$1::class$ = nullptr;