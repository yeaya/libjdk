#include <bug4816114$1.h>
#include <bug4816114.h>
#include <jcpp.h>

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4816114$1::init$() {
}

void bug4816114$1::run() {
	$init($bug4816114);
	$nc($bug4816114::test)->createAndShowGUI();
}

bug4816114$1::bug4816114$1() {
}

$Class* bug4816114$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4816114$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4816114$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4816114",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4816114$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4816114$1",
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
		"bug4816114"
	};
	$loadClass(bug4816114$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4816114$1);
	});
	return class$;
}

$Class* bug4816114$1::class$ = nullptr;