#include <bug4760494$TestStateListener.h>
#include <bug4760494$RobotThread.h>
#include <bug4760494.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $bug4760494$RobotThread = ::bug4760494$RobotThread;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4760494$TestStateListener::init$() {
	$WindowAdapter::init$();
}

void bug4760494$TestStateListener::windowOpened($WindowEvent* ev) {
	$useLocalObjectStack();
	try {
		$$new($Thread, $$new($bug4760494$RobotThread))->start();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Thread Exception"_s);
	}
}

bug4760494$TestStateListener::bug4760494$TestStateListener() {
}

$Class* bug4760494$TestStateListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4760494$TestStateListener, init$, void)},
		{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4760494$TestStateListener, windowOpened, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4760494$TestStateListener", "bug4760494", "TestStateListener", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4760494$TestStateListener",
		"java.awt.event.WindowAdapter",
		nullptr,
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
	$loadClass(bug4760494$TestStateListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4760494$TestStateListener));
	});
	return class$;
}

$Class* bug4760494$TestStateListener::class$ = nullptr;