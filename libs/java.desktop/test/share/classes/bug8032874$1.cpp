#include <bug8032874$1.h>
#include <bug8032874.h>
#include <jcpp.h>

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8032874$1::init$() {
}

void bug8032874$1::run() {
	$bug8032874::createAndShowUI();
}

bug8032874$1::bug8032874$1() {
}

$Class* bug8032874$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8032874$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032874$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032874",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032874$1",
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
		"bug8032874"
	};
	$loadClass(bug8032874$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032874$1);
	});
	return class$;
}

$Class* bug8032874$1::class$ = nullptr;