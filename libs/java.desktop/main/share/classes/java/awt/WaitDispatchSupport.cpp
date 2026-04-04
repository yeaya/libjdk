#include <java/awt/WaitDispatchSupport.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/SequencedEvent.h>
#include <java/awt/WaitDispatchSupport$1.h>
#include <java/awt/WaitDispatchSupport$2.h>
#include <java/awt/WaitDispatchSupport$3.h>
#include <java/awt/WaitDispatchSupport$4.h>
#include <java/awt/WaitDispatchSupport$5.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/util/Timer.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/PeerEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef FINEST
#undef LOCK
#undef PRIORITY_EVENT

using $Component = ::java::awt::Component;
using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $EventQueue = ::java::awt::EventQueue;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $WaitDispatchSupport$1 = ::java::awt::WaitDispatchSupport$1;
using $WaitDispatchSupport$2 = ::java::awt::WaitDispatchSupport$2;
using $WaitDispatchSupport$3 = ::java::awt::WaitDispatchSupport$3;
using $WaitDispatchSupport$4 = ::java::awt::WaitDispatchSupport$4;
using $WaitDispatchSupport$5 = ::java::awt::WaitDispatchSupport$5;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $Timer = ::java::util::Timer;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $PeerEvent = ::sun::awt::PeerEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$PlatformLogger* WaitDispatchSupport::log = nullptr;
$Timer* WaitDispatchSupport::timer = nullptr;

void WaitDispatchSupport::initializeTimer() {
	$init(WaitDispatchSupport);
	$synchronized(class$) {
		if (WaitDispatchSupport::timer == nullptr) {
			$assignStatic(WaitDispatchSupport::timer, $new($Timer, "AWT-WaitDispatchSupport-Timer"_s, true));
		}
	}
}

void WaitDispatchSupport::init$($EventDispatchThread* dispatchThread) {
	WaitDispatchSupport::init$(dispatchThread, nullptr);
}

void WaitDispatchSupport::init$($EventDispatchThread* dispatchThread, $Conditional* extCond) {
	$set(this, keepBlockingEDT, $new($AtomicBoolean, false));
	$set(this, keepBlockingCT, $new($AtomicBoolean, false));
	$set(this, afterExit, $new($AtomicBoolean, false));
	$set(this, wakingRunnable, $new($WaitDispatchSupport$5, this));
	if (dispatchThread == nullptr) {
		$throwNew($IllegalArgumentException, "The dispatchThread can not be null"_s);
	}
	$set(this, dispatchThread, dispatchThread);
	$set(this, extCondition, extCond);
	$set(this, condition, $new($WaitDispatchSupport$1, this));
}

void WaitDispatchSupport::init$($EventDispatchThread* dispatchThread, $Conditional* extCondition, $EventFilter* filter, int64_t interval) {
	WaitDispatchSupport::init$(dispatchThread, extCondition);
	$set(this, filter, filter);
	if (interval < 0) {
		$throwNew($IllegalArgumentException, "The interval value must be >= 0"_s);
	}
	this->interval = interval;
	if (interval != 0) {
		initializeTimer();
	}
}

bool WaitDispatchSupport::enter() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($PlatformLogger$Level);
	if ($nc(WaitDispatchSupport::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("enter(): blockingEDT="_s);
		var$0->append($nc(this->keepBlockingEDT)->get());
		var$0->append(", blockingCT="_s);
		var$0->append($nc(this->keepBlockingCT)->get());
		WaitDispatchSupport::log->fine($$str(var$0));
	}
	if (!$nc(this->keepBlockingEDT)->compareAndSet(false, true)) {
		WaitDispatchSupport::log->fine("The secondary loop is already running, aborting"_s);
		return false;
	}
	$var($Throwable, var$1, nullptr);
	bool var$3 = false;
	bool return$2 = false;
	try {
		if ($nc(this->afterExit)->get()) {
			WaitDispatchSupport::log->fine("Exit was called already, aborting"_s);
			var$3 = false;
			return$2 = true;
			goto $finally;
		}
		$var($Runnable, run, $new($WaitDispatchSupport$2, this));
		$var($Thread, currentThread, $Thread::currentThread());
		if ($equals(currentThread, this->dispatchThread)) {
			if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINEST)) {
				WaitDispatchSupport::log->finest($$str({"On dispatch thread: "_s, this->dispatchThread}));
			}
			if (this->interval != 0) {
				if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINEST)) {
					WaitDispatchSupport::log->finest($$str({"scheduling the timer for "_s, $$str(this->interval), " ms"_s}));
				}
				$nc(WaitDispatchSupport::timer)->schedule($set(this, timerTask, $new($WaitDispatchSupport$3, this)), this->interval);
			}
			$var($SequencedEvent, currentSE, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getCurrentSequencedEvent());
			if (currentSE != nullptr) {
				if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINE)) {
					WaitDispatchSupport::log->fine($$str({"Dispose current SequencedEvent: "_s, currentSE}));
				}
				currentSE->dispose();
			}
			$AccessController::doPrivileged($$new($WaitDispatchSupport$4, this, run));
		} else {
			if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINEST)) {
				WaitDispatchSupport::log->finest($$str({"On non-dispatch thread: "_s, currentThread}));
			}
			$nc(this->keepBlockingCT)->set(true);
			$synchronized(getTreeLock()) {
				if ($nc(this->afterExit)->get()) {
					var$3 = false;
					return$2 = true;
					goto $finally;
				}
				if (this->filter != nullptr) {
					$nc(this->dispatchThread)->addEventFilter(this->filter);
				}
				$var($Throwable, var$4, nullptr);
				try {
					try {
						$var($EventQueue, eq, $nc(this->dispatchThread)->getEventQueue());
						$nc(eq)->postEvent($$new($PeerEvent, this, run, $PeerEvent::PRIORITY_EVENT));
						if (this->interval > 0) {
							int64_t currTime = $System::currentTimeMillis();
							while (true) {
								bool var$6 = $nc(this->keepBlockingCT)->get();
								bool var$5 = var$6 && ((this->extCondition != nullptr) ? $nc(this->extCondition)->evaluate() : true);
								if (!(var$5 && (currTime + this->interval > $System::currentTimeMillis()))) {
									break;
								}
								{
									$$nc(getTreeLock())->wait(this->interval);
								}
							}
						} else {
							while (true) {
								bool var$7 = $nc(this->keepBlockingCT)->get();
								if (!(var$7 && ((this->extCondition != nullptr) ? $nc(this->extCondition)->evaluate() : true))) {
									break;
								}
								{
									$$nc(getTreeLock())->wait();
								}
							}
						}
						if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINE)) {
							$var($StringBuilder, var$8, $new($StringBuilder));
							var$8->append("waitDone "_s);
							var$8->append($nc(this->keepBlockingEDT)->get());
							var$8->append(" "_s);
							var$8->append($nc(this->keepBlockingCT)->get());
							WaitDispatchSupport::log->fine($$str(var$8));
						}
					} catch ($InterruptedException& e) {
						if (WaitDispatchSupport::log->isLoggable($PlatformLogger$Level::FINE)) {
							WaitDispatchSupport::log->fine($$str({"Exception caught while waiting: "_s, e}));
						}
					}
				} catch ($Throwable& var$9) {
					$assign(var$4, var$9);
				} /*finally*/ {
					if (this->filter != nullptr) {
						$nc(this->dispatchThread)->removeEventFilter(this->filter);
					}
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		}
		var$3 = true;
		return$2 = true;
		goto $finally;
	} catch ($Throwable& var$10) {
		$assign(var$1, var$10);
	} $finally: {
		$nc(this->keepBlockingEDT)->set(false);
		$nc(this->keepBlockingCT)->set(false);
		$nc(this->afterExit)->set(false);
	}
	if (var$1 != nullptr) {
		$throw(var$1);
	}
	if (return$2) {
		return var$3;
	}
	$shouldNotReachHere();
}

bool WaitDispatchSupport::exit() {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(WaitDispatchSupport::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("exit(): blockingEDT="_s);
		var$0->append($nc(this->keepBlockingEDT)->get());
		var$0->append(", blockingCT="_s);
		var$0->append($nc(this->keepBlockingCT)->get());
		WaitDispatchSupport::log->fine($$str(var$0));
	}
	$nc(this->afterExit)->set(true);
	if ($nc(this->keepBlockingEDT)->getAndSet(false)) {
		wakeupEDT();
		return true;
	}
	return false;
}

$Object* WaitDispatchSupport::getTreeLock() {
	$init(WaitDispatchSupport);
	$init($Component);
	return $Component::LOCK;
}

void WaitDispatchSupport::wakeupEDT() {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(WaitDispatchSupport::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		WaitDispatchSupport::log->finest($$str({"wakeupEDT(): EDT == "_s, this->dispatchThread}));
	}
	$var($EventQueue, eq, $nc(this->dispatchThread)->getEventQueue());
	$nc(eq)->postEvent($$new($PeerEvent, this, this->wakingRunnable, $PeerEvent::PRIORITY_EVENT));
}

void WaitDispatchSupport::clinit$($Class* clazz) {
	$assignStatic(WaitDispatchSupport::log, $PlatformLogger::getLogger("java.awt.event.WaitDispatchSupport"_s));
}

WaitDispatchSupport::WaitDispatchSupport() {
}

$Class* WaitDispatchSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WaitDispatchSupport, log)},
		{"dispatchThread", "Ljava/awt/EventDispatchThread;", nullptr, $PRIVATE, $field(WaitDispatchSupport, dispatchThread)},
		{"filter", "Ljava/awt/EventFilter;", nullptr, $PRIVATE, $field(WaitDispatchSupport, filter)},
		{"extCondition", "Ljava/awt/Conditional;", nullptr, $PRIVATE | $VOLATILE, $field(WaitDispatchSupport, extCondition)},
		{"condition", "Ljava/awt/Conditional;", nullptr, $PRIVATE | $VOLATILE, $field(WaitDispatchSupport, condition)},
		{"interval", "J", nullptr, $PRIVATE, $field(WaitDispatchSupport, interval)},
		{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE | $STATIC, $staticField(WaitDispatchSupport, timer)},
		{"timerTask", "Ljava/util/TimerTask;", nullptr, $PRIVATE, $field(WaitDispatchSupport, timerTask)},
		{"keepBlockingEDT", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE, $field(WaitDispatchSupport, keepBlockingEDT)},
		{"keepBlockingCT", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE, $field(WaitDispatchSupport, keepBlockingCT)},
		{"afterExit", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE, $field(WaitDispatchSupport, afterExit)},
		{"wakingRunnable", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(WaitDispatchSupport, wakingRunnable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/EventDispatchThread;)V", nullptr, $PUBLIC, $method(WaitDispatchSupport, init$, void, $EventDispatchThread*)},
		{"<init>", "(Ljava/awt/EventDispatchThread;Ljava/awt/Conditional;)V", nullptr, $PUBLIC, $method(WaitDispatchSupport, init$, void, $EventDispatchThread*, $Conditional*)},
		{"<init>", "(Ljava/awt/EventDispatchThread;Ljava/awt/Conditional;Ljava/awt/EventFilter;J)V", nullptr, $PUBLIC, $method(WaitDispatchSupport, init$, void, $EventDispatchThread*, $Conditional*, $EventFilter*, int64_t)},
		{"enter", "()Z", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport, enter, bool)},
		{"exit", "()Z", nullptr, $PUBLIC, $virtualMethod(WaitDispatchSupport, exit, bool)},
		{"getTreeLock", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(WaitDispatchSupport, getTreeLock, $Object*)},
		{"initializeTimer", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(WaitDispatchSupport, initializeTimer, void)},
		{"wakeupEDT", "()V", nullptr, $PRIVATE, $method(WaitDispatchSupport, wakeupEDT, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.WaitDispatchSupport$5", nullptr, nullptr, 0},
		{"java.awt.WaitDispatchSupport$4", nullptr, nullptr, 0},
		{"java.awt.WaitDispatchSupport$3", nullptr, nullptr, 0},
		{"java.awt.WaitDispatchSupport$2", nullptr, nullptr, 0},
		{"java.awt.WaitDispatchSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.WaitDispatchSupport",
		"java.lang.Object",
		"java.awt.SecondaryLoop",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.WaitDispatchSupport$5,java.awt.WaitDispatchSupport$4,java.awt.WaitDispatchSupport$3,java.awt.WaitDispatchSupport$2,java.awt.WaitDispatchSupport$1"
	};
	$loadClass(WaitDispatchSupport, name, initialize, &classInfo$$, WaitDispatchSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WaitDispatchSupport);
	});
	return class$;
}

$Class* WaitDispatchSupport::class$ = nullptr;

	} // awt
} // java