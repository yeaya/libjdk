#include <bug4251579$1.h>
#include <bug4251579.h>
#include <jcpp.h>

using $bug4251579 = ::bug4251579;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4251579$1::init$() {
}

void bug4251579$1::run() {
	$bug4251579::createAndShowGUI();
}

bug4251579$1::bug4251579$1() {
}

$Class* bug4251579$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4251579$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4251579$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4251579",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4251579$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4251579$1",
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
		"bug4251579"
	};
	$loadClass(bug4251579$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4251579$1);
	});
	return class$;
}

$Class* bug4251579$1::class$ = nullptr;