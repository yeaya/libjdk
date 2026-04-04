#include <bug8041642$2.h>
#include <bug8041642.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

using $bug8041642 = ::bug8041642;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8041642$2::init$() {
}

void bug8041642$2::run() {
	$init($bug8041642);
	$assignStatic($bug8041642::point, $nc($bug8041642::bar)->getLocationOnScreen());
}

bug8041642$2::bug8041642$2() {
}

$Class* bug8041642$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8041642$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8041642$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8041642",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041642$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041642$2",
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
		"bug8041642"
	};
	$loadClass(bug8041642$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041642$2);
	});
	return class$;
}

$Class* bug8041642$2::class$ = nullptr;