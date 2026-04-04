#include <bug6670274$1.h>
#include <bug6670274.h>
#include <jcpp.h>

using $bug6670274 = ::bug6670274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6670274$1::init$() {
}

void bug6670274$1::run() {
	$bug6670274::createGui();
}

bug6670274$1::bug6670274$1() {
}

$Class* bug6670274$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6670274$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6670274$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6670274",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6670274$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6670274$1",
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
		"bug6670274"
	};
	$loadClass(bug6670274$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6670274$1);
	});
	return class$;
}

$Class* bug6670274$1::class$ = nullptr;