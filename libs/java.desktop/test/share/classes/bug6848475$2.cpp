#include <bug6848475$2.h>
#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6848475$2::init$() {
}

void bug6848475$2::run() {
	$init($bug6848475);
	$var($Point, p, $nc($bug6848475::slider)->getLocationOnScreen());
	$nc($bug6848475::robot)->mouseMove($nc(p)->x, $nc(p)->y);
}

bug6848475$2::bug6848475$2() {
}

$Class* bug6848475$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6848475$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6848475$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6848475",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6848475$2",
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
		"bug6848475"
	};
	$loadClass(bug6848475$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6848475$2);
	});
	return class$;
}

$Class* bug6848475$2::class$ = nullptr;