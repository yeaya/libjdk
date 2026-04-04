#include <bug8048506$1.h>
#include <bug8048506.h>
#include <jcpp.h>

using $bug8048506 = ::bug8048506;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8048506$1::init$() {
}

void bug8048506$1::run() {
	$bug8048506::createAndShowGUI();
}

bug8048506$1::bug8048506$1() {
}

$Class* bug8048506$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8048506$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8048506$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8048506",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8048506$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8048506$1",
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
		"bug8048506"
	};
	$loadClass(bug8048506$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8048506$1);
	});
	return class$;
}

$Class* bug8048506$1::class$ = nullptr;