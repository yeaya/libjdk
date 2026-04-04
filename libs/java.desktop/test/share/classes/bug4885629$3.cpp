#include <bug4885629$3.h>
#include <bug4885629.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/lang/Error.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef BGCOLOR

using $bug4885629 = ::bug4885629;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

void bug4885629$3::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4885629$3::run() {
	$useLocalObjectStack();
	$init($bug4885629);
	$var($Rectangle, rect, $$nc($$sure($BasicSplitPaneUI, $cast($SplitPaneUI, $nc($bug4885629::sp)->getUI()))->getDivider())->getBounds());
	$var($Point, p, $nc(rect)->getLocation());
	$SwingUtilities::convertPointToScreen(p, $bug4885629::sp);
	for (int32_t i = 0; i < rect->width; ++i) {
		if (!$nc($bug4885629::BGCOLOR)->equals($($nc(this->val$robot)->getPixelColor($nc(p)->x + i, $nc(p)->y + rect->height - 1)))) {
			$throwNew($Error, "The divider\'s area has incorrect color."_s);
		}
	}
}

bug4885629$3::bug4885629$3() {
}

$Class* bug4885629$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4885629$3, val$robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(bug4885629$3, init$, void, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4885629$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4885629",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4885629$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4885629$3",
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
		"bug4885629"
	};
	$loadClass(bug4885629$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4885629$3);
	});
	return class$;
}

$Class* bug4885629$3::class$ = nullptr;