#include <bug6848475$3.h>
#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK

using $bug6848475 = ::bug6848475;
using $Point = ::java::awt::Point;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6848475$3::init$() {
}

void bug6848475$3::run() {
	$useLocalObjectStack();
	$init($bug6848475);
	$bug6848475::thumbRectX = $nc($($bug6848475::getThumbRectField()))->x;
	$var($Point, p, $nc($bug6848475::slider)->getLocationOnScreen());
	$nc($bug6848475::robot)->mouseMove($nc(p)->x, $nc(p)->y);
	$nc($bug6848475::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug6848475::robot)->mouseMove(p->x + 20, p->y);
	$nc($bug6848475::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
}

bug6848475$3::bug6848475$3() {
}

$Class* bug6848475$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6848475$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6848475$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6848475",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6848475$3",
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
	$loadClass(bug6848475$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6848475$3);
	});
	return class$;
}

$Class* bug6848475$3::class$ = nullptr;