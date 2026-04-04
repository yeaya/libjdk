#include <bug6883341$1.h>
#include <bug6883341.h>
#include <jcpp.h>

using $bug6883341 = ::bug6883341;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6883341$1::init$() {
}

void bug6883341$1::run() {
	$bug6883341::createGui();
}

bug6883341$1::bug6883341$1() {
}

$Class* bug6883341$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6883341$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6883341$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6883341",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6883341$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6883341$1",
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
		"bug6883341"
	};
	$loadClass(bug6883341$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6883341$1);
	});
	return class$;
}

$Class* bug6883341$1::class$ = nullptr;