#include <sun/awt/AWTAutoShutdown.h>
#include <java/awt/AWTEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAutoShutdown$1.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef SAFETY_TIMEOUT

using $AWTEvent = ::java::awt::AWTEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $AWTAutoShutdown$1 = ::sun::awt::AWTAutoShutdown$1;
using $AppContext = ::sun::awt::AppContext;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

class AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0 : public $PrivilegedAction {
	$class(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(AWTAutoShutdown* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$activateBlockerThread$0();
	}
	AWTAutoShutdown* inst$ = nullptr;
};
$Class* AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AWTAutoShutdown;)V", nullptr, $PUBLIC, $method(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, init$, void, AWTAutoShutdown*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0);
	});
	return class$;
}
$Class* AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::class$ = nullptr;

AWTAutoShutdown* AWTAutoShutdown::theInstance = nullptr;

void AWTAutoShutdown::init$() {
	$set(this, mainLock, $new($Object));
	$set(this, activationLock, $new($Object));
	$set(this, busyThreadSet, $new($HashSet, 7));
	this->toolkitThreadBusy = false;
	$set(this, peerMap, $new($IdentityHashMap));
	$set(this, blockerThread, nullptr);
	this->timeoutPassed = false;
}

AWTAutoShutdown* AWTAutoShutdown::getInstance() {
	$init(AWTAutoShutdown);
	return AWTAutoShutdown::theInstance;
}

void AWTAutoShutdown::notifyToolkitThreadBusy() {
	$init(AWTAutoShutdown);
	$$nc(getInstance())->setToolkitBusy(true);
}

void AWTAutoShutdown::notifyToolkitThreadFree() {
	$init(AWTAutoShutdown);
	$$nc(getInstance())->setToolkitBusy(false);
}

void AWTAutoShutdown::notifyThreadBusy($Thread* thread) {
	if (thread == nullptr) {
		return;
	}
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if (this->blockerThread == nullptr) {
				activateBlockerThread();
			} else if (isReadyToShutdown()) {
				this->mainLock->notifyAll();
				this->timeoutPassed = false;
			}
			this->busyThreadSet->add(thread);
		}
	}
}

void AWTAutoShutdown::notifyThreadFree($Thread* thread) {
	if (thread == nullptr) {
		return;
	}
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			this->busyThreadSet->remove(thread);
			if (isReadyToShutdown()) {
				this->mainLock->notifyAll();
				this->timeoutPassed = false;
			}
		}
	}
}

void AWTAutoShutdown::notifyPeerMapUpdated() {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if (!isReadyToShutdown() && this->blockerThread == nullptr) {
				activateBlockerThread();
			} else {
				this->mainLock->notifyAll();
				this->timeoutPassed = false;
			}
		}
	}
}

bool AWTAutoShutdown::isReadyToShutdown() {
	bool var$0 = !this->toolkitThreadBusy && this->peerMap->isEmpty();
	return (var$0 && this->busyThreadSet->isEmpty());
}

void AWTAutoShutdown::setToolkitBusy(bool busy) {
	if (busy != this->toolkitThreadBusy) {
		$synchronized(this->activationLock) {
			$synchronized(this->mainLock) {
				if (busy != this->toolkitThreadBusy) {
					if (busy) {
						if (this->blockerThread == nullptr) {
							activateBlockerThread();
						} else if (isReadyToShutdown()) {
							this->mainLock->notifyAll();
							this->timeoutPassed = false;
						}
						this->toolkitThreadBusy = busy;
					} else {
						this->toolkitThreadBusy = busy;
						if (isReadyToShutdown()) {
							this->mainLock->notifyAll();
							this->timeoutPassed = false;
						}
					}
				}
			}
		}
	}
}

void AWTAutoShutdown::run() {
	$useLocalObjectStack();
	$var($Thread, currentThread, $Thread::currentThread());
	bool interrupted = false;
	$synchronized(this->mainLock) {
		$var($Throwable, var$0, nullptr);
		try {
			try {
				this->mainLock->notifyAll();
				while (this->blockerThread == currentThread) {
					this->mainLock->wait();
					this->timeoutPassed = false;
					while (isReadyToShutdown()) {
						if (this->timeoutPassed) {
							this->timeoutPassed = false;
							$set(this, blockerThread, nullptr);
							break;
						}
						this->timeoutPassed = true;
						this->mainLock->wait(AWTAutoShutdown::SAFETY_TIMEOUT);
					}
				}
			} catch ($InterruptedException& e) {
				interrupted = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->blockerThread == currentThread) {
				$set(this, blockerThread, nullptr);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!interrupted) {
		$AppContext::stopEventDispatchThreads();
	}
}

$AWTEvent* AWTAutoShutdown::getShutdownEvent() {
	$init(AWTAutoShutdown);
	return $new($AWTAutoShutdown$1, $(getInstance()), 0);
}

void AWTAutoShutdown::activateBlockerThread() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$$sure($Thread, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0, this))))->start();
	try {
		this->mainLock->wait();
	} catch ($InterruptedException& e) {
		$nc($System::err)->println("AWT blocker activation interrupted:"_s);
		e->printStackTrace();
	}
}

void AWTAutoShutdown::registerPeer(Object$* target, Object$* peer) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			this->peerMap->put(target, peer);
			notifyPeerMapUpdated();
		}
	}
}

void AWTAutoShutdown::unregisterPeer(Object$* target, Object$* peer) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			if ($equals(this->peerMap->get(target), peer)) {
				this->peerMap->remove(target);
				notifyPeerMapUpdated();
			}
		}
	}
}

$Object* AWTAutoShutdown::getPeer(Object$* target) {
	$synchronized(this->activationLock) {
		$synchronized(this->mainLock) {
			return this->peerMap->get(target);
		}
	}
}

void AWTAutoShutdown::dumpPeers($PlatformLogger* aLog) {
	$useLocalObjectStack();
	$init($PlatformLogger$Level);
	if ($nc(aLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$synchronized(this->activationLock) {
			$synchronized(this->mainLock) {
				aLog->fine("Mapped peers:"_s);
				{
					$var($Iterator, i$, $$nc(this->peerMap->keySet())->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, key, i$->next());
						{
							$var($StringBuilder, var$0, $new($StringBuilder));
							var$0->append(key);
							var$0->append("->"_s);
							var$0->append($(this->peerMap->get(key)));
							aLog->fine($$str(var$0));
						}
					}
				}
			}
		}
	}
}

$Thread* AWTAutoShutdown::lambda$activateBlockerThread$0() {
	$useLocalObjectStack();
	$var($String, name, "AWT-Shutdown"_s);
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	thread->setContextClassLoader(nullptr);
	thread->setDaemon(false);
	$set(this, blockerThread, thread);
	return thread;
}

void AWTAutoShutdown::clinit$($Class* clazz) {
	$assignStatic(AWTAutoShutdown::theInstance, $new(AWTAutoShutdown));
}

AWTAutoShutdown::AWTAutoShutdown() {
}

$Class* AWTAutoShutdown::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0")) {
			return AWTAutoShutdown$$Lambda$lambda$activateBlockerThread$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/awt/AWTAutoShutdown;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AWTAutoShutdown, theInstance)},
		{"mainLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AWTAutoShutdown, mainLock)},
		{"activationLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AWTAutoShutdown, activationLock)},
		{"busyThreadSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Thread;>;", $PRIVATE | $FINAL, $field(AWTAutoShutdown, busyThreadSet)},
		{"toolkitThreadBusy", "Z", nullptr, $PRIVATE, $field(AWTAutoShutdown, toolkitThreadBusy)},
		{"peerMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AWTAutoShutdown, peerMap)},
		{"blockerThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(AWTAutoShutdown, blockerThread)},
		{"timeoutPassed", "Z", nullptr, $PRIVATE, $field(AWTAutoShutdown, timeoutPassed)},
		{"SAFETY_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTAutoShutdown, SAFETY_TIMEOUT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AWTAutoShutdown, init$, void)},
		{"activateBlockerThread", "()V", nullptr, $PRIVATE, $method(AWTAutoShutdown, activateBlockerThread, void)},
		{"dumpPeers", "(Lsun/util/logging/PlatformLogger;)V", nullptr, 0, $method(AWTAutoShutdown, dumpPeers, void, $PlatformLogger*)},
		{"getInstance", "()Lsun/awt/AWTAutoShutdown;", nullptr, $PUBLIC | $STATIC, $staticMethod(AWTAutoShutdown, getInstance, AWTAutoShutdown*)},
		{"getPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $method(AWTAutoShutdown, getPeer, $Object*, Object$*)},
		{"getShutdownEvent", "()Ljava/awt/AWTEvent;", nullptr, $STATIC, $staticMethod(AWTAutoShutdown, getShutdownEvent, $AWTEvent*)},
		{"isReadyToShutdown", "()Z", nullptr, $PRIVATE, $method(AWTAutoShutdown, isReadyToShutdown, bool)},
		{"lambda$activateBlockerThread$0", "()Ljava/lang/Thread;", nullptr, $PRIVATE | $SYNTHETIC, $method(AWTAutoShutdown, lambda$activateBlockerThread$0, $Thread*)},
		{"notifyPeerMapUpdated", "()V", nullptr, 0, $method(AWTAutoShutdown, notifyPeerMapUpdated, void)},
		{"notifyThreadBusy", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(AWTAutoShutdown, notifyThreadBusy, void, $Thread*)},
		{"notifyThreadFree", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(AWTAutoShutdown, notifyThreadFree, void, $Thread*)},
		{"notifyToolkitThreadBusy", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(AWTAutoShutdown, notifyToolkitThreadBusy, void)},
		{"notifyToolkitThreadFree", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(AWTAutoShutdown, notifyToolkitThreadFree, void)},
		{"registerPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(AWTAutoShutdown, registerPeer, void, Object$*, Object$*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AWTAutoShutdown, run, void)},
		{"setToolkitBusy", "(Z)V", nullptr, $PRIVATE, $method(AWTAutoShutdown, setToolkitBusy, void, bool)},
		{"unregisterPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(AWTAutoShutdown, unregisterPeer, void, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAutoShutdown$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.AWTAutoShutdown",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.AWTAutoShutdown$1"
	};
	$loadClass(AWTAutoShutdown, name, initialize, &classInfo$$, AWTAutoShutdown::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAutoShutdown);
	});
	return class$;
}

$Class* AWTAutoShutdown::class$ = nullptr;

	} // awt
} // sun