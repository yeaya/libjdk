#include <com/sun/jndi/ldap/EventQueue.h>
#include <com/sun/jndi/ldap/EventQueue$QueueElement.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <java/lang/InterruptedException.h>
#include <java/util/EventObject.h>
#include <java/util/Vector.h>
#include <javax/naming/event/NamingEvent.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $EventQueue$QueueElement = ::com::sun::jndi::ldap::EventQueue$QueueElement;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;
using $NamingEvent = ::javax::naming::event::NamingEvent;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;
using $NamingListener = ::javax::naming::event::NamingListener;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void EventQueue::init$() {
	$set(this, head, nullptr);
	$set(this, tail, nullptr);
	$init($Obj);
	$set(this, qThread, $nc($Obj::helper)->createThread(this));
	$nc(this->qThread)->setDaemon(true);
	this->qThread->start();
}

void EventQueue::enqueue($EventObject* event, $Vector* vector) {
	$synchronized(this) {
		$var($EventQueue$QueueElement, newElt, $new($EventQueue$QueueElement, event, vector));
		if (this->head == nullptr) {
			$set(this, head, newElt);
			$set(this, tail, newElt);
		} else {
			$set(newElt, next, this->head);
			$set(this->head, prev, newElt);
			$set(this, head, newElt);
		}
		$of(this)->notify();
	}
}

$EventQueue$QueueElement* EventQueue::dequeue() {
	$synchronized(this) {
		while (this->tail == nullptr) {
			$of(this)->wait();
		}
		$var($EventQueue$QueueElement, elt, this->tail);
		$set(this, tail, $nc(elt)->prev);
		if (this->tail == nullptr) {
			$set(this, head, nullptr);
		} else {
			$set(this->tail, next, nullptr);
		}
		$set(elt, prev, $set(elt, next, nullptr));
		return elt;
	}
}

void EventQueue::run() {
	$useLocalObjectStack();
	$var($EventQueue$QueueElement, qe, nullptr);
	try {
		while (($assign(qe, dequeue())) != nullptr) {
			$var($EventObject, e, $nc(qe)->event);
			$var($Vector, v, qe->vector);
			for (int32_t i = 0; i < $nc(v)->size(); ++i) {
				if ($instanceOf($NamingEvent, e)) {
					$cast($NamingEvent, e)->dispatch($$cast($NamingListener, v->elementAt(i)));
				} else if ($instanceOf($NamingExceptionEvent, e)) {
					$cast($NamingExceptionEvent, e)->dispatch($$cast($NamingListener, v->elementAt(i)));
				} else if ($instanceOf($UnsolicitedNotificationEvent, e)) {
					$cast($UnsolicitedNotificationEvent, e)->dispatch($$cast($UnsolicitedNotificationListener, v->elementAt(i)));
				}
			}
			$assign(qe, nullptr);
			$assign(e, nullptr);
			$assign(v, nullptr);
		}
	} catch ($InterruptedException& e) {
	}
}

void EventQueue::stop() {
	;
	if (this->qThread != nullptr) {
		this->qThread->interrupt();
		$set(this, qThread, nullptr);
	}
}

EventQueue::EventQueue() {
}

$Class* EventQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, debug)},
		{"head", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE, $field(EventQueue, head)},
		{"tail", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE, $field(EventQueue, tail)},
		{"qThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(EventQueue, qThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueue, init$, void)},
		{"dequeue", "()Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(EventQueue, dequeue, $EventQueue$QueueElement*), "java.lang.InterruptedException"},
		{"enqueue", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;)V", $SYNCHRONIZED, $method(EventQueue, enqueue, void, $EventObject*, $Vector*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EventQueue, run, void)},
		{"stop", "()V", nullptr, 0, $method(EventQueue, stop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.EventQueue$QueueElement", "com.sun.jndi.ldap.EventQueue", "QueueElement", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.EventQueue",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.EventQueue$QueueElement"
	};
	$loadClass(EventQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue);
	});
	return class$;
}

$Class* EventQueue::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com