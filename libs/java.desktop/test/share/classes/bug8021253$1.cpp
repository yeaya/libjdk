#include <bug8021253$1.h>
#include <bug8021253.h>
#include <jcpp.h>

using $bug8021253 = ::bug8021253;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8021253$1::init$() {
}

void bug8021253$1::run() {
	$bug8021253::createAndShowGUI();
}

bug8021253$1::bug8021253$1() {
}

$Class* bug8021253$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8021253$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8021253$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8021253",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8021253$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8021253$1",
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
		"bug8021253"
	};
	$loadClass(bug8021253$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8021253$1);
	});
	return class$;
}

$Class* bug8021253$1::class$ = nullptr;