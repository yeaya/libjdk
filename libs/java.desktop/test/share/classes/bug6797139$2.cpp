#include <bug6797139$2.h>
#include <bug6797139.h>
#include <jcpp.h>

using $bug6797139 = ::bug6797139;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6797139$2::init$() {
}

void bug6797139$2::run() {
	$bug6797139::createGui();
}

bug6797139$2::bug6797139$2() {
}

$Class* bug6797139$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6797139$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6797139$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6797139",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6797139$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6797139$2",
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
		"bug6797139"
	};
	$loadClass(bug6797139$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6797139$2);
	});
	return class$;
}

$Class* bug6797139$2::class$ = nullptr;