#include <bug6875153$1.h>
#include <bug6875153.h>
#include <jcpp.h>

using $bug6875153 = ::bug6875153;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6875153$1::init$() {
}

void bug6875153$1::run() {
	$bug6875153::createGui();
}

bug6875153$1::bug6875153$1() {
}

$Class* bug6875153$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6875153$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6875153$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6875153",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6875153$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6875153$1",
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
		"bug6875153"
	};
	$loadClass(bug6875153$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6875153$1);
	});
	return class$;
}

$Class* bug6875153$1::class$ = nullptr;