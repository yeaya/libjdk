#include <bug4514858$1.h>
#include <bug4514858.h>
#include <jcpp.h>

using $bug4514858 = ::bug4514858;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4514858$1::init$() {
}

void bug4514858$1::run() {
	$$new($bug4514858)->createAndShowGUI();
}

bug4514858$1::bug4514858$1() {
}

$Class* bug4514858$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4514858$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4514858$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4514858",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4514858$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4514858$1",
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
		"bug4514858"
	};
	$loadClass(bug4514858$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4514858$1);
	});
	return class$;
}

$Class* bug4514858$1::class$ = nullptr;