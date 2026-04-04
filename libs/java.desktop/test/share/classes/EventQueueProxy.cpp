#include <EventQueueProxy.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void EventQueueProxy::init$() {
	$EventQueue::init$();
}

void EventQueueProxy::dispatchEvent($AWTEvent* evt) {
	try {
		$EventQueue::dispatchEvent(evt);
	} catch ($Exception& e) {
		$nc($System::out)->println("Intentionally consumed Exception from ActionListener"_s);
		e->printStackTrace();
	}
}

EventQueueProxy::EventQueueProxy() {
}

$Class* EventQueueProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueueProxy, init$, void)},
		{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED, $virtualMethod(EventQueueProxy, dispatchEvent, void, $AWTEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"EventQueueProxy",
		"java.awt.EventQueue",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EventQueueProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueueProxy);
	});
	return class$;
}

$Class* EventQueueProxy::class$ = nullptr;