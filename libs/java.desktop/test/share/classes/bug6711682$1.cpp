#include <bug6711682$1.h>
#include <bug6711682.h>
#include <jcpp.h>

using $bug6711682 = ::bug6711682;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6711682$1::init$() {
}

void bug6711682$1::run() {
	$bug6711682::createAndShowGUI();
}

bug6711682$1::bug6711682$1() {
}

$Class* bug6711682$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6711682$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6711682$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6711682",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6711682$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6711682$1",
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
		"bug6711682"
	};
	$loadClass(bug6711682$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6711682$1);
	});
	return class$;
}

$Class* bug6711682$1::class$ = nullptr;