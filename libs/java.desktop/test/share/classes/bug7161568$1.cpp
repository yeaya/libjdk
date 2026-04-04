#include <bug7161568$1.h>
#include <bug7161568.h>
#include <jcpp.h>

using $bug7161568 = ::bug7161568;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7161568$1::init$() {
}

void bug7161568$1::run() {
	$bug7161568::createAndShowUI();
}

bug7161568$1::bug7161568$1() {
}

$Class* bug7161568$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7161568$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7161568$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7161568",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7161568$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7161568$1",
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
		"bug7161568"
	};
	$loadClass(bug7161568$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7161568$1);
	});
	return class$;
}

$Class* bug7161568$1::class$ = nullptr;