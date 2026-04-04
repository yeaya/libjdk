#include <java/awt/EventQueue$2.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/lang/Runnable.h>
#include <sun/awt/FwDispatcher.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $FwDispatcher = ::sun::awt::FwDispatcher;

namespace java {
	namespace awt {

void EventQueue$2::init$() {
}

$Thread* EventQueue$2::getDispatchThread($EventQueue* eventQueue) {
	return $nc(eventQueue)->getDispatchThread();
}

bool EventQueue$2::isDispatchThreadImpl($EventQueue* eventQueue) {
	return $nc(eventQueue)->isDispatchThreadImpl();
}

void EventQueue$2::removeSourceEvents($EventQueue* eventQueue, Object$* source, bool removeAllEvents) {
	$nc(eventQueue)->removeSourceEvents(source, removeAllEvents);
}

bool EventQueue$2::noEvents($EventQueue* eventQueue) {
	return $nc(eventQueue)->noEvents();
}

void EventQueue$2::wakeup($EventQueue* eventQueue, bool isShutdown) {
	$nc(eventQueue)->wakeup(isShutdown);
}

void EventQueue$2::invokeAndWait(Object$* source, $Runnable* r) {
	$EventQueue::invokeAndWait(source, r);
}

void EventQueue$2::setFwDispatcher($EventQueue* eventQueue, $FwDispatcher* dispatcher) {
	$nc(eventQueue)->setFwDispatcher(dispatcher);
}

int64_t EventQueue$2::getMostRecentEventTime($EventQueue* eventQueue) {
	return $nc(eventQueue)->getMostRecentEventTimeImpl();
}

EventQueue$2::EventQueue$2() {
}

$Class* EventQueue$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueue$2, init$, void)},
		{"getDispatchThread", "(Ljava/awt/EventQueue;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, getDispatchThread, $Thread*, $EventQueue*)},
		{"getMostRecentEventTime", "(Ljava/awt/EventQueue;)J", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, getMostRecentEventTime, int64_t, $EventQueue*)},
		{"invokeAndWait", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, invokeAndWait, void, Object$*, $Runnable*), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
		{"isDispatchThreadImpl", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, isDispatchThreadImpl, bool, $EventQueue*)},
		{"noEvents", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, noEvents, bool, $EventQueue*)},
		{"removeSourceEvents", "(Ljava/awt/EventQueue;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, removeSourceEvents, void, $EventQueue*, Object$*, bool)},
		{"setFwDispatcher", "(Ljava/awt/EventQueue;Lsun/awt/FwDispatcher;)V", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, setFwDispatcher, void, $EventQueue*, $FwDispatcher*)},
		{"wakeup", "(Ljava/awt/EventQueue;Z)V", nullptr, $PUBLIC, $virtualMethod(EventQueue$2, wakeup, void, $EventQueue*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$2", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$EventQueueAccessor", "sun.awt.AWTAccessor", "EventQueueAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$2",
		"java.lang.Object",
		"sun.awt.AWTAccessor$EventQueueAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$2);
	});
	return class$;
}

$Class* EventQueue$2::class$ = nullptr;

	} // awt
} // java