#include <bug8058120$1.h>
#include <bug8058120.h>
#include <jcpp.h>

using $bug8058120 = ::bug8058120;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8058120$1::init$() {
}

void bug8058120$1::run() {
	$bug8058120::createAndShowGUI();
}

bug8058120$1::bug8058120$1() {
}

$Class* bug8058120$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8058120$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8058120$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8058120",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8058120$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8058120$1",
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
		"bug8058120"
	};
	$loadClass(bug8058120$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8058120$1);
	});
	return class$;
}

$Class* bug8058120$1::class$ = nullptr;