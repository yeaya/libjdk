#include <bug6889007.h>
#include <bug6889007$1.h>
#include <bug6889007$MyTableHeaderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6889007$1 = ::bug6889007$1;
using $bug6889007$MyTableHeaderUI = ::bug6889007$MyTableHeaderUI;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6889007::init$() {
}

void bug6889007::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(20);
	$var($JFrame, frame, $new($JFrame));
	frame->setUndecorated(true);
	$SwingUtilities::invokeAndWait($$new($bug6889007$1, frame));
	robot->waitForIdle();
	$var($Point, point, frame->getLocationOnScreen());
	int32_t shift = 10;
	int32_t x = $nc(point)->x;
	int32_t y = point->y + frame->getHeight() / 2;
	for (int32_t i = -shift; i < frame->getWidth() + 2 * shift; ++i) {
		robot->mouseMove(x++, y);
	}
	robot->waitForIdle();
	if ($bug6889007$MyTableHeaderUI::getTestValue() != 9) {
		$throwNew($RuntimeException, $$str({"Unexpected test number "_s, $$str($bug6889007$MyTableHeaderUI::getTestValue())}));
	}
	$nc($System::out)->println("ok"_s);
}

bug6889007::bug6889007() {
}

$Class* bug6889007::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6889007, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6889007, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6889007$MyTableHeaderUI", "bug6889007", "MyTableHeaderUI", $STATIC},
		{"bug6889007$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6889007",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6889007$MyTableHeaderUI,bug6889007$1"
	};
	$loadClass(bug6889007, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6889007);
	});
	return class$;
}

$Class* bug6889007::class$ = nullptr;