#include <bug4492274$1.h>
#include <bug4492274.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4492274$1::init$() {
}

void bug4492274$1::run() {
	$bug4492274::createAndShowGUI();
}

bug4492274$1::bug4492274$1() {
}

$Class* bug4492274$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4492274$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4492274$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4492274",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4492274$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4492274$1",
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
		"bug4492274"
	};
	$loadClass(bug4492274$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4492274$1);
	});
	return class$;
}

$Class* bug4492274$1::class$ = nullptr;