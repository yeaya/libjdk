#include <bug8059739$1.h>
#include <bug8059739.h>
#include <jcpp.h>

using $bug8059739 = ::bug8059739;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8059739$1::init$() {
}

void bug8059739$1::run() {
	try {
		$bug8059739::runTest();
	} catch ($Exception& e) {
		e->printStackTrace();
		$init($bug8059739);
		$bug8059739::passed = false;
	}
}

bug8059739$1::bug8059739$1() {
}

$Class* bug8059739$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8059739$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8059739$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8059739",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8059739$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8059739$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8059739"
	};
	$loadClass(bug8059739$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8059739$1);
	});
	return class$;
}

$Class* bug8059739$1::class$ = nullptr;