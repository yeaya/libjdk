#include <bug6505523$1.h>
#include <bug6505523.h>
#include <jcpp.h>

using $bug6505523 = ::bug6505523;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6505523$1::init$() {
}

void bug6505523$1::run() {
	$bug6505523::createAndShowGUI();
}

bug6505523$1::bug6505523$1() {
}

$Class* bug6505523$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6505523$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6505523$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6505523",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6505523$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6505523$1",
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
		"bug6505523"
	};
	$loadClass(bug6505523$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6505523$1);
	});
	return class$;
}

$Class* bug6505523$1::class$ = nullptr;