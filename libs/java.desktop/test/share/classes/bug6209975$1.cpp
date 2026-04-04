#include <bug6209975$1.h>
#include <bug6209975.h>
#include <jcpp.h>

using $bug6209975 = ::bug6209975;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6209975$1::init$() {
}

void bug6209975$1::run() {
	$bug6209975::createAndShowGUI();
}

bug6209975$1::bug6209975$1() {
}

$Class* bug6209975$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6209975$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6209975$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6209975",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6209975$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6209975$1",
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
		"bug6209975"
	};
	$loadClass(bug6209975$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6209975$1);
	});
	return class$;
}

$Class* bug6209975$1::class$ = nullptr;