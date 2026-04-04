#include <bug5043626$1.h>
#include <bug5043626.h>
#include <jcpp.h>

using $bug5043626 = ::bug5043626;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug5043626$1::init$() {
}

void bug5043626$1::run() {
	$bug5043626::createAndShowGUI();
}

bug5043626$1::bug5043626$1() {
}

$Class* bug5043626$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug5043626$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5043626$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug5043626",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5043626$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5043626$1",
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
		"bug5043626"
	};
	$loadClass(bug5043626$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5043626$1);
	});
	return class$;
}

$Class* bug5043626$1::class$ = nullptr;