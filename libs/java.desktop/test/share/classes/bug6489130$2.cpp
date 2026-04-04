#include <bug6489130$2.h>
#include <bug6489130.h>
#include <jcpp.h>

using $bug6489130 = ::bug6489130;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6489130$2::init$() {
}

void bug6489130$2::run() {
	$$new($bug6489130)->run();
}

bug6489130$2::bug6489130$2() {
}

$Class* bug6489130$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6489130$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6489130$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6489130",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6489130$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6489130$2",
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
		"bug6489130"
	};
	$loadClass(bug6489130$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6489130$2);
	});
	return class$;
}

$Class* bug6489130$2::class$ = nullptr;