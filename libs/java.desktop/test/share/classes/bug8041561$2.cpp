#include <bug8041561$2.h>
#include <bug8041561.h>
#include <java/awt/AWTException.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <jcpp.h>

#undef BLUE

using $bug8041561 = ::bug8041561;
using $AWTException = ::java::awt::AWTException;
using $Color = ::java::awt::Color;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug8041561$2::init$() {
}

void bug8041561$2::run() {
	$useLocalObjectStack();
	try {
		$init($bug8041561);
		$var($Point, point, $nc($bug8041561::radioButton)->getLocationOnScreen());
		int32_t var$0 = $cast(int32_t, $nc(point)->getX());
		int32_t x = var$0 + $nc($bug8041561::radioButton)->getWidth() / 2;
		int32_t var$1 = $cast(int32_t, point->getY());
		int32_t y = var$1 + $nc($bug8041561::radioButton)->getHeight() / 2;
		$var($Robot, robot, $new($Robot));
		$var($Color, color, robot->getPixelColor(x, y));
		$init($Color);
		if (!$nc($Color::BLUE)->equals(color)) {
			$throwNew($RuntimeException, "JRadioButton is opaque"_s);
		}
	} catch ($AWTException& e) {
		$throwNew($RuntimeException, e);
	}
}

bug8041561$2::bug8041561$2() {
}

$Class* bug8041561$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8041561$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8041561$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8041561",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041561$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041561$2",
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
		"bug8041561"
	};
	$loadClass(bug8041561$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041561$2);
	});
	return class$;
}

$Class* bug8041561$2::class$ = nullptr;