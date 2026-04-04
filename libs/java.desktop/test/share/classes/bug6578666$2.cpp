#include <bug6578666$2.h>
#include <bug6578666.h>
#include <jcpp.h>

using $bug6578666 = ::bug6578666;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6578666$2::init$() {
}

void bug6578666$2::run() {
	$bug6578666::createGui();
}

bug6578666$2::bug6578666$2() {
}

$Class* bug6578666$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6578666$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6578666$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6578666",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6578666$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6578666$2",
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
		"bug6578666"
	};
	$loadClass(bug6578666$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6578666$2);
	});
	return class$;
}

$Class* bug6578666$2::class$ = nullptr;