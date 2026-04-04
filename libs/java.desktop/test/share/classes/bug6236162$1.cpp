#include <bug6236162$1.h>
#include <bug6236162.h>
#include <jcpp.h>

using $bug6236162 = ::bug6236162;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6236162$1::init$() {
}

void bug6236162$1::run() {
	$bug6236162::createAndShowGUI();
}

bug6236162$1::bug6236162$1() {
}

$Class* bug6236162$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6236162$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6236162$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6236162",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6236162$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6236162$1",
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
		"bug6236162"
	};
	$loadClass(bug6236162$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6236162$1);
	});
	return class$;
}

$Class* bug6236162$1::class$ = nullptr;