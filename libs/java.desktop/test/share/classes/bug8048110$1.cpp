#include <bug8048110$1.h>
#include <bug8048110.h>
#include <jcpp.h>

using $bug8048110 = ::bug8048110;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8048110$1::init$() {
}

void bug8048110$1::run() {
	$bug8048110::createAndShowGUI();
}

bug8048110$1::bug8048110$1() {
}

$Class* bug8048110$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8048110$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8048110$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8048110",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8048110$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8048110$1",
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
		"bug8048110"
	};
	$loadClass(bug8048110$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8048110$1);
	});
	return class$;
}

$Class* bug8048110$1::class$ = nullptr;