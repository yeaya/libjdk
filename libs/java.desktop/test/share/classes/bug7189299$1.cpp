#include <bug7189299$1.h>
#include <bug7189299.h>
#include <jcpp.h>

using $bug7189299 = ::bug7189299;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7189299$1::init$() {
}

void bug7189299$1::run() {
	$bug7189299::setup();
}

bug7189299$1::bug7189299$1() {
}

$Class* bug7189299$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7189299$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7189299$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7189299",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7189299$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7189299$1",
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
		"bug7189299"
	};
	$loadClass(bug7189299$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7189299$1);
	});
	return class$;
}

$Class* bug7189299$1::class$ = nullptr;