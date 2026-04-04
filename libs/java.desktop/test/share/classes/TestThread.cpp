#include <TestThread.h>
#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

#undef VK_ESCAPE

using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void TestThread::init$() {
	$Thread::init$();
	$set(this, testRobot, $new($Robot));
}

void TestThread::run() {
	try {
		$Thread::sleep(5000);
		$nc(this->testRobot)->keyPress($KeyEvent::VK_ESCAPE);
		$nc(this->testRobot)->delay(20);
		$nc(this->testRobot)->keyRelease($KeyEvent::VK_ESCAPE);
	} catch ($InterruptedException& ex) {
		$throwNew($RuntimeException, "Exception in TestThread"_s);
	}
}

TestThread::TestThread() {
}

$Class* TestThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testRobot", "Ljava/awt/Robot;", nullptr, 0, $field(TestThread, testRobot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestThread, init$, void), "java.awt.AWTException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestThread, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestThread);
	});
	return class$;
}

$Class* TestThread::class$ = nullptr;