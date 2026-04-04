#include <bug4251579$2.h>
#include <bug4251579.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug4251579 = ::bug4251579;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4251579$2::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4251579$2::run() {
	$useLocalObjectStack();
	bool passed = false;
	$init($bug4251579);
	$var($Point, p, $nc($bug4251579::htmlComponent)->getLocationOnScreen());
	$var($Dimension, d, $nc($bug4251579::htmlComponent)->getSize());
	int32_t x0 = $nc(p)->x;
	int32_t y = p->y + $nc(d)->height / 2;
	for (int32_t x = x0; x < x0 + d->width; ++x) {
		$init($Color);
		if ($$nc($nc(this->val$robot)->getPixelColor(x, y))->equals($Color::blue)) {
			passed = true;
			break;
		}
	}
	if (!passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

bug4251579$2::bug4251579$2() {
}

$Class* bug4251579$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4251579$2, val$robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(bug4251579$2, init$, void, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4251579$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4251579",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4251579$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4251579$2",
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
		"bug4251579"
	};
	$loadClass(bug4251579$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4251579$2);
	});
	return class$;
}

$Class* bug4251579$2::class$ = nullptr;