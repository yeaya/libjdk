#include <bug8015853$1.h>
#include <bug8015853.h>
#include <jcpp.h>

using $bug8015853 = ::bug8015853;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8015853$1::init$() {
}

void bug8015853$1::run() {
	$bug8015853::createAndShowGUI();
}

bug8015853$1::bug8015853$1() {
}

$Class* bug8015853$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8015853$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8015853$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8015853",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8015853$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8015853$1",
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
		"bug8015853"
	};
	$loadClass(bug8015853$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8015853$1);
	});
	return class$;
}

$Class* bug8015853$1::class$ = nullptr;