#include <bug6559589$1.h>
#include <bug6559589.h>
#include <jcpp.h>

using $bug6559589 = ::bug6559589;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6559589$1::init$() {
}

void bug6559589$1::run() {
	$bug6559589::createGui();
}

bug6559589$1::bug6559589$1() {
}

$Class* bug6559589$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6559589$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6559589$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6559589",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6559589$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6559589$1",
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
		"bug6559589"
	};
	$loadClass(bug6559589$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559589$1);
	});
	return class$;
}

$Class* bug6559589$1::class$ = nullptr;