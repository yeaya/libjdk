#include <bug8023474$1.h>
#include <bug8023474.h>
#include <jcpp.h>

using $bug8023474 = ::bug8023474;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8023474$1::init$() {
}

void bug8023474$1::run() {
	$bug8023474::createAndShowGUI();
}

bug8023474$1::bug8023474$1() {
}

$Class* bug8023474$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8023474$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8023474$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8023474",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8023474$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8023474$1",
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
		"bug8023474"
	};
	$loadClass(bug8023474$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8023474$1);
	});
	return class$;
}

$Class* bug8023474$1::class$ = nullptr;