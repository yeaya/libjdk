#include <bug8075609$1.h>
#include <bug8075609.h>
#include <jcpp.h>

using $bug8075609 = ::bug8075609;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8075609$1::init$() {
}

void bug8075609$1::run() {
	$bug8075609::createAndShowGUI();
}

bug8075609$1::bug8075609$1() {
}

$Class* bug8075609$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8075609$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8075609$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8075609",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8075609$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8075609$1",
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
		"bug8075609"
	};
	$loadClass(bug8075609$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8075609$1);
	});
	return class$;
}

$Class* bug8075609$1::class$ = nullptr;