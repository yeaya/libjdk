#include <sun/awt/PostEventQueue.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/EventQueueItem.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $EventQueueItem = ::sun::awt::EventQueueItem;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

void PostEventQueue::init$($EventQueue* eq) {
	$set(this, queueHead, nullptr);
	$set(this, queueTail, nullptr);
	$set(this, flushThread, nullptr);
	$set(this, eventQueue, eq);
}

void PostEventQueue::flush() {
	$useLocalObjectStack();
	$var($Thread, newThread, $Thread::currentThread());
	try {
		$var($EventQueueItem, tempQueue, nullptr);
		$synchronized(this) {
			if (newThread == this->flushThread) {
				return;
			}
			while (this->flushThread != nullptr) {
				$of(this)->wait();
			}
			if (this->queueHead == nullptr) {
				return;
			}
			$set(this, flushThread, newThread);
			$assign(tempQueue, this->queueHead);
			$set(this, queueHead, $set(this, queueTail, nullptr));
		}
		$var($Throwable, var$0, nullptr);
		try {
			while (tempQueue != nullptr) {
				$nc(this->eventQueue)->postEvent(tempQueue->event);
				$assign(tempQueue, tempQueue->next);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$synchronized(this) {
				$set(this, flushThread, nullptr);
				$of(this)->notifyAll();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($InterruptedException& e) {
		newThread->interrupt();
	}
}

void PostEventQueue::postEvent($AWTEvent* event) {
	$var($EventQueueItem, item, $new($EventQueueItem, event));
	$synchronized(this) {
		if (this->queueHead == nullptr) {
			$set(this, queueHead, $set(this, queueTail, item));
		} else {
			$set($nc(this->queueTail), next, item);
			$set(this, queueTail, item);
		}
	}
	$SunToolkit::wakeupEventQueue(this->eventQueue, $equals($nc(event)->getSource(), $AWTAutoShutdown::getInstance()));
}

PostEventQueue::PostEventQueue() {
}

$Class* PostEventQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"queueHead", "Lsun/awt/EventQueueItem;", nullptr, $PRIVATE, $field(PostEventQueue, queueHead)},
		{"queueTail", "Lsun/awt/EventQueueItem;", nullptr, $PRIVATE, $field(PostEventQueue, queueTail)},
		{"eventQueue", "Ljava/awt/EventQueue;", nullptr, $PRIVATE | $FINAL, $field(PostEventQueue, eventQueue)},
		{"flushThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(PostEventQueue, flushThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventQueue;)V", nullptr, 0, $method(PostEventQueue, init$, void, $EventQueue*)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(PostEventQueue, flush, void)},
		{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $virtualMethod(PostEventQueue, postEvent, void, $AWTEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.PostEventQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PostEventQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PostEventQueue);
	});
	return class$;
}

$Class* PostEventQueue::class$ = nullptr;

	} // awt
} // sun