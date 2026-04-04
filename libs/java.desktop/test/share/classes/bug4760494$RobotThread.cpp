#include <bug4760494$RobotThread.h>
#include <bug4760494.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef VK_T

using $bug4760494 = ::bug4760494;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4760494$RobotThread::init$() {
}

void bug4760494$RobotThread::run() {
	$init($bug4760494);
	$nc($bug4760494::robot)->setAutoDelay(500);
	$nc($bug4760494::robot)->waitForIdle();
	$nc($bug4760494::robot)->mouseMove(250, 250);
	$nc($bug4760494::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug4760494::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug4760494::robot)->waitForIdle();
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& e) {
	}
	while (!$nc($bug4760494::popup)->isVisible()) {
		try {
			$Thread::sleep(2000);
		} catch ($InterruptedException& e) {
		}
	}
	$nc($bug4760494::robot)->keyPress($KeyEvent::VK_T);
	$nc($bug4760494::robot)->keyRelease($KeyEvent::VK_T);
	$nc($bug4760494::robot)->waitForIdle();
	$bug4760494::pressed = true;
}

bug4760494$RobotThread::bug4760494$RobotThread() {
}

$Class* bug4760494$RobotThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4760494$RobotThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4760494$RobotThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4760494$RobotThread", "bug4760494", "RobotThread", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4760494$RobotThread",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4760494"
	};
	$loadClass(bug4760494$RobotThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4760494$RobotThread);
	});
	return class$;
}

$Class* bug4760494$RobotThread::class$ = nullptr;