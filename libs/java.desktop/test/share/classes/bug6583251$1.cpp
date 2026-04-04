#include <bug6583251$1.h>
#include <bug6583251.h>
#include <jcpp.h>

using $bug6583251 = ::bug6583251;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6583251$1::init$() {
}

void bug6583251$1::run() {
	$bug6583251::createGui();
}

bug6583251$1::bug6583251$1() {
}

$Class* bug6583251$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6583251$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6583251$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6583251",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6583251$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6583251$1",
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
		"bug6583251"
	};
	$loadClass(bug6583251$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6583251$1);
	});
	return class$;
}

$Class* bug6583251$1::class$ = nullptr;