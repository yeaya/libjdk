#include <bug7193219$1.h>
#include <bug7193219.h>
#include <jcpp.h>

using $bug7193219 = ::bug7193219;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7193219$1::init$() {
}

void bug7193219$1::run() {
	$bug7193219::deserializeGUI($($bug7193219::serializeGUI()));
}

bug7193219$1::bug7193219$1() {
}

$Class* bug7193219$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7193219$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7193219$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7193219",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7193219$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7193219$1",
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
		"bug7193219"
	};
	$loadClass(bug7193219$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7193219$1);
	});
	return class$;
}

$Class* bug7193219$1::class$ = nullptr;