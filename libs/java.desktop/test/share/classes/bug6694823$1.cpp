#include <bug6694823$1.h>
#include <bug6694823.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6694823$1::init$() {
}

void bug6694823$1::run() {
	$bug6694823::createGui();
}

bug6694823$1::bug6694823$1() {
}

$Class* bug6694823$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6694823$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6694823$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6694823",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6694823$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6694823$1",
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
		"bug6694823"
	};
	$loadClass(bug6694823$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6694823$1);
	});
	return class$;
}

$Class* bug6694823$1::class$ = nullptr;