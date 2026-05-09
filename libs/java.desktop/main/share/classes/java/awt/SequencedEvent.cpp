#include <java/awt/SequencedEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/awt/SequencedEvent$1.h>
#include <java/awt/SequencedEvent$2.h>
#include <java/awt/SequencedEvent$3.h>
#include <java/awt/SequencedEvent$SequencedEventsFilter.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ID

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $SequencedEvent$1 = ::java::awt::SequencedEvent$1;
using $SequencedEvent$2 = ::java::awt::SequencedEvent$2;
using $SequencedEvent$3 = ::java::awt::SequencedEvent$3;
using $SequencedEvent$SequencedEventsFilter = ::java::awt::SequencedEvent$SequencedEventsFilter;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

class SequencedEvent$$Lambda$lambda$dispatch$0 : public $Conditional {
	$class(SequencedEvent$$Lambda$lambda$dispatch$0, $NO_CLASS_INIT, $Conditional)
public:
	void init$(SequencedEvent* inst) {
		$set(this, inst$, inst);
	}
	virtual bool evaluate() override {
		return $nc(inst$)->lambda$dispatch$0();
	}
	SequencedEvent* inst$ = nullptr;
};
$Class* SequencedEvent$$Lambda$lambda$dispatch$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SequencedEvent$$Lambda$lambda$dispatch$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/SequencedEvent;)V", nullptr, $PUBLIC, $method(SequencedEvent$$Lambda$lambda$dispatch$0, init$, void, SequencedEvent*)},
		{"evaluate", "()Z", nullptr, $PUBLIC, $virtualMethod(SequencedEvent$$Lambda$lambda$dispatch$0, evaluate, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.awt.SequencedEvent$$Lambda$lambda$dispatch$0",
		"java.lang.Object",
		"java.awt.Conditional",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SequencedEvent$$Lambda$lambda$dispatch$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequencedEvent$$Lambda$lambda$dispatch$0);
	});
	return class$;
}
$Class* SequencedEvent$$Lambda$lambda$dispatch$0::class$ = nullptr;

$String* SequencedEvent::toString() {
	return this->$AWTEvent::toString();
}

int32_t SequencedEvent::hashCode() {
	return this->$AWTEvent::hashCode();
}

bool SequencedEvent::equals(Object$* arg0) {
	return this->$AWTEvent::equals(arg0);
}

$Object* SequencedEvent::clone() {
	return this->$AWTEvent::clone();
}

void SequencedEvent::finalize() {
	this->$AWTEvent::finalize();
}

$LinkedList* SequencedEvent::list = nullptr;
bool SequencedEvent::fxAppThreadIsDispatchThread = false;

void SequencedEvent::init$($AWTEvent* nested) {
	$AWTEvent::init$($($nc(nested)->getSource()), SequencedEvent::ID);
	$set(this, pendingEvents, $new($LinkedList));
	$set(this, nested, nested);
	$SunToolkit::setSystemGenerated(nested);
	if (SequencedEvent::fxAppThreadIsDispatchThread) {
		$set(this, fxCheckSequenceThread, $new($SequencedEvent$3, this));
	}
	$synchronized(SequencedEvent::class$) {
		SequencedEvent::list->add(this);
	}
}

void SequencedEvent::dispatch() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$set(this, appContext, $AppContext::getAppContext());
		if (getFirst() != this) {
			if ($EventQueue::isDispatchThread()) {
				if ($instanceOf($EventDispatchThread, $($Thread::currentThread()))) {
					$var($EventDispatchThread, edt, $cast($EventDispatchThread, $Thread::currentThread()));
					$var($Conditional, var$1, $new(SequencedEvent$$Lambda$lambda$dispatch$0, this));
					edt->pumpEventsForFilter(var$1, $$new($SequencedEvent$SequencedEventsFilter, this));
				} else if (SequencedEvent::fxAppThreadIsDispatchThread) {
					$nc(this->fxCheckSequenceThread)->start();
					try {
						this->fxCheckSequenceThread->join(500);
					} catch ($InterruptedException& e) {
					}
				}
			} else {
				while (!isFirstOrDisposed()) {
					$synchronized(SequencedEvent::class$) {
						try {
							$of(SequencedEvent::class$)->wait(1000);
						} catch ($InterruptedException& e) {
							break;
						}
					}
				}
			}
		}
		if (!this->disposed) {
			$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->setCurrentSequencedEvent(this);
			$$nc($Toolkit::getEventQueue())->dispatchEvent(this->nested);
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool SequencedEvent::isOwnerAppContextDisposed(SequencedEvent* se) {
	$init(SequencedEvent);
	if (se != nullptr) {
		$var($Object, target, $nc(se->nested)->getSource());
		if ($instanceOf($Component, target)) {
			return $nc($cast($Component, target)->appContext)->isDisposed();
		}
	}
	return false;
}

bool SequencedEvent::isFirstOrDisposed() {
	if (this->disposed) {
		return true;
	}
	return this == getFirstWithContext() || this->disposed;
}

SequencedEvent* SequencedEvent::getFirst() {
	$init(SequencedEvent);
	$synchronized(class$) {
		return $cast(SequencedEvent, SequencedEvent::list->getFirst());
	}
}

SequencedEvent* SequencedEvent::getFirstWithContext() {
	$init(SequencedEvent);
	$var(SequencedEvent, first, getFirst());
	while (isOwnerAppContextDisposed(first)) {
		$nc(first)->dispose();
		$assign(first, getFirst());
	}
	return first;
}

void SequencedEvent::dispose() {
	$useLocalObjectStack();
	$synchronized(SequencedEvent::class$) {
		if (this->disposed) {
			return;
		}
		if ($$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getCurrentSequencedEvent() == this) {
			$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->setCurrentSequencedEvent(nullptr);
		}
		this->disposed = true;
	}
	$var(SequencedEvent, next, nullptr);
	$synchronized(SequencedEvent::class$) {
		$of(SequencedEvent::class$)->notifyAll();
		if ($equals(SequencedEvent::list->getFirst(), this)) {
			SequencedEvent::list->removeFirst();
			if (!SequencedEvent::list->isEmpty()) {
				$assign(next, $cast(SequencedEvent, SequencedEvent::list->getFirst()));
			}
		} else {
			SequencedEvent::list->remove(this);
		}
	}
	if (next != nullptr && next->appContext != nullptr) {
		$SunToolkit::postEvent(next->appContext, $$new($SentEvent));
	}
	{
		$var($Iterator, i$, this->pendingEvents->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AWTEvent, e, $cast($AWTEvent, i$->next()));
			{
				$SunToolkit::postEvent(this->appContext, e);
			}
		}
	}
}

bool SequencedEvent::lambda$dispatch$0() {
	return !this->isFirstOrDisposed();
}

void SequencedEvent::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(SequencedEvent::list, $new($LinkedList));
	{
		$AWTAccessor::setSequencedEventAccessor($$new($SequencedEvent$1));
		$AccessController::doPrivileged($$new($SequencedEvent$2));
	}
}

SequencedEvent::SequencedEvent() {
}

$Class* SequencedEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.awt.SequencedEvent$$Lambda$lambda$dispatch$0")) {
			return SequencedEvent$$Lambda$lambda$dispatch$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SequencedEvent, serialVersionUID)},
		{"ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SequencedEvent, ID)},
		{"list", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/SequencedEvent;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SequencedEvent, list)},
		{"nested", "Ljava/awt/AWTEvent;", nullptr, $PRIVATE | $FINAL, $field(SequencedEvent, nested)},
		{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(SequencedEvent, appContext)},
		{"disposed", "Z", nullptr, $PRIVATE, $field(SequencedEvent, disposed)},
		{"pendingEvents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/AWTEvent;>;", $PRIVATE | $FINAL, $field(SequencedEvent, pendingEvents)},
		{"fxAppThreadIsDispatchThread", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SequencedEvent, fxAppThreadIsDispatchThread)},
		{"fxCheckSequenceThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(SequencedEvent, fxCheckSequenceThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $method(SequencedEvent, init$, void, $AWTEvent*)},
		{"dispatch", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SequencedEvent, dispatch, void)},
		{"dispose", "()V", nullptr, $FINAL, $method(SequencedEvent, dispose, void)},
		{"getFirst", "()Ljava/awt/SequencedEvent;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNCHRONIZED, $staticMethod(SequencedEvent, getFirst, SequencedEvent*)},
		{"getFirstWithContext", "()Ljava/awt/SequencedEvent;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(SequencedEvent, getFirstWithContext, SequencedEvent*)},
		{"isFirstOrDisposed", "()Z", nullptr, $PUBLIC | $FINAL, $method(SequencedEvent, isFirstOrDisposed, bool)},
		{"isOwnerAppContextDisposed", "(Ljava/awt/SequencedEvent;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(SequencedEvent, isOwnerAppContextDisposed, bool, SequencedEvent*)},
		{"lambda$dispatch$0", "()Z", nullptr, $PRIVATE | $SYNTHETIC, $method(SequencedEvent, lambda$dispatch$0, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SequencedEvent$SequencedEventsFilter", "java.awt.SequencedEvent", "SequencedEventsFilter", $PRIVATE | $STATIC | $FINAL},
		{"java.awt.SequencedEvent$3", nullptr, nullptr, 0},
		{"java.awt.SequencedEvent$2", nullptr, nullptr, 0},
		{"java.awt.SequencedEvent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.SequencedEvent",
		"java.awt.AWTEvent",
		"java.awt.ActiveEvent",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.SequencedEvent$SequencedEventsFilter,java.awt.SequencedEvent$3,java.awt.SequencedEvent$2,java.awt.SequencedEvent$1"
	};
	$loadClass(SequencedEvent, name, initialize, &classInfo$$, SequencedEvent::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SequencedEvent));
	});
	return class$;
}

$Class* SequencedEvent::class$ = nullptr;

	} // awt
} // java