#include <NormalBoundsTest$3.h>
#include <NormalBoundsTest.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $NormalBoundsTest = ::NormalBoundsTest;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NormalBoundsTest$3::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void NormalBoundsTest$3::run() {
	$useLocalObjectStack();
	$init($NormalBoundsTest);
	$var($Point, loc, $nc($NormalBoundsTest::internalFrame)->getLocationOnScreen());
	$var($Robot, var$0, this->val$robot);
	$var($Point, var$1, $new($Point, $nc(loc)->x + 80, $nc(loc)->y + 12));
	$NormalBoundsTest::drag(var$0, var$1, $$new($Point, loc->x + 100, loc->y + 40), $InputEvent::BUTTON1_MASK);
}

NormalBoundsTest$3::NormalBoundsTest$3() {
}

$Class* NormalBoundsTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(NormalBoundsTest$3, val$robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(NormalBoundsTest$3, init$, void, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"executeTest",
		"(Ljava/awt/Robot;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NormalBoundsTest"
	};
	$loadClass(NormalBoundsTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$3);
	});
	return class$;
}

$Class* NormalBoundsTest$3::class$ = nullptr;