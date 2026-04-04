#include <bug6348946$1.h>
#include <bug6348946.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6348946$1::init$() {
}

void bug6348946$1::run() {
	$bug6348946::setupUI();
}

bug6348946$1::bug6348946$1() {
}

$Class* bug6348946$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6348946$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6348946$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6348946",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6348946$1",
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
		"bug6348946"
	};
	$loadClass(bug6348946$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6348946$1);
	});
	return class$;
}

$Class* bug6348946$1::class$ = nullptr;