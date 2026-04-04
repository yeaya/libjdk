#include <bug6432565$EventProcessor.h>
#include <bug6432565.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jcpp.h>

using $bug6432565 = ::bug6432565;
using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6432565$EventProcessor::init$() {
	$EventQueue::init$();
}

void bug6432565$EventProcessor::dispatchEvent($AWTEvent* event) {
	try {
		$EventQueue::dispatchEvent(event);
	} catch ($Throwable& e) {
		e->printStackTrace();
		$init($bug6432565);
		$nc($bug6432565::throwable)->set(e);
	}
}

bug6432565$EventProcessor::bug6432565$EventProcessor() {
}

$Class* bug6432565$EventProcessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug6432565$EventProcessor, init$, void)},
		{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED, $virtualMethod(bug6432565$EventProcessor, dispatchEvent, void, $AWTEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6432565$EventProcessor", "bug6432565", "EventProcessor", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"bug6432565$EventProcessor",
		"java.awt.EventQueue",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6432565"
	};
	$loadClass(bug6432565$EventProcessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6432565$EventProcessor);
	});
	return class$;
}

$Class* bug6432565$EventProcessor::class$ = nullptr;