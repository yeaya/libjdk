#include <bug6768387$1.h>
#include <bug6768387.h>
#include <jcpp.h>

using $bug6768387 = ::bug6768387;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6768387$1::init$() {
}

void bug6768387$1::run() {
	$bug6768387::createGui();
}

bug6768387$1::bug6768387$1() {
}

$Class* bug6768387$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6768387$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6768387$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6768387",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6768387$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6768387$1",
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
		"bug6768387"
	};
	$loadClass(bug6768387$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6768387$1);
	});
	return class$;
}

$Class* bug6768387$1::class$ = nullptr;