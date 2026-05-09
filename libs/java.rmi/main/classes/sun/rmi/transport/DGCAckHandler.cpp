#include <sun/rmi/transport/DGCAckHandler.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/rmi/server/UID.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/rmi/runtime/RuntimeUtil$GetInstanceAction.h>
#include <sun/rmi/runtime/RuntimeUtil.h>
#include <sun/rmi/transport/DGCAckHandler$1.h>
#include <jcpp.h>

#undef MILLISECONDS

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $UID = ::java::rmi::server::UID;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $RuntimeUtil = ::sun::rmi::runtime::RuntimeUtil;
using $RuntimeUtil$GetInstanceAction = ::sun::rmi::runtime::RuntimeUtil$GetInstanceAction;
using $DGCAckHandler$1 = ::sun::rmi::transport::DGCAckHandler$1;

namespace sun {
	namespace rmi {
		namespace transport {

class DGCAckHandler$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(DGCAckHandler$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(DGCAckHandler::lambda$static$0());
	}
};
$Class* DGCAckHandler$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DGCAckHandler$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DGCAckHandler$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.transport.DGCAckHandler$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DGCAckHandler$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCAckHandler$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* DGCAckHandler$$Lambda$lambda$static$0::class$ = nullptr;

bool DGCAckHandler::$assertionsDisabled = false;
int64_t DGCAckHandler::dgcAckTimeout = 0;
$ScheduledExecutorService* DGCAckHandler::scheduler = nullptr;
$Map* DGCAckHandler::idTable = nullptr;

void DGCAckHandler::init$($UID* id) {
	$set(this, objList, $new($ArrayList));
	$set(this, task, nullptr);
	$set(this, id, id);
	if (id != nullptr) {
		if (!DGCAckHandler::$assertionsDisabled && ! !$nc(DGCAckHandler::idTable)->containsKey(id)) {
			$throwNew($AssertionError);
		}
		$nc(DGCAckHandler::idTable)->put(id, this);
	}
}

void DGCAckHandler::add(Object$* obj) {
	$synchronized(this) {
		if (this->objList != nullptr) {
			this->objList->add(obj);
		}
	}
}

void DGCAckHandler::startTimer() {
	$synchronized(this) {
		if (this->objList != nullptr && this->task == nullptr) {
			$init($TimeUnit);
			$set(this, task, $nc(DGCAckHandler::scheduler)->schedule($$new($DGCAckHandler$1, this), DGCAckHandler::dgcAckTimeout, $TimeUnit::MILLISECONDS));
		}
	}
}

void DGCAckHandler::release() {
	$synchronized(this) {
		if (this->task != nullptr) {
			this->task->cancel(false);
			$set(this, task, nullptr);
		}
		$set(this, objList, nullptr);
	}
}

void DGCAckHandler::received($UID* id) {
	$init(DGCAckHandler);
	$var(DGCAckHandler, h, $cast(DGCAckHandler, $nc(DGCAckHandler::idTable)->remove(id)));
	if (h != nullptr) {
		h->release();
	}
}

$Long* DGCAckHandler::lambda$static$0() {
	$init(DGCAckHandler);
	return $Long::getLong("sun.rmi.dgc.ackTimeout"_s, 300000);
}

void DGCAckHandler::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	DGCAckHandler::$assertionsDisabled = !DGCAckHandler::class$->desiredAssertionStatus();
	DGCAckHandler::dgcAckTimeout = $$sure($Long, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(DGCAckHandler$$Lambda$lambda$static$0))))->longValue();
	$assignStatic(DGCAckHandler::scheduler, $$sure($RuntimeUtil, $AccessController::doPrivileged($$new($RuntimeUtil$GetInstanceAction)))->getScheduler());
	$assignStatic(DGCAckHandler::idTable, $Collections::synchronizedMap($$new($HashMap)));
}

DGCAckHandler::DGCAckHandler() {
}

$Class* DGCAckHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.transport.DGCAckHandler$$Lambda$lambda$static$0")) {
			return DGCAckHandler$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DGCAckHandler, $assertionsDisabled)},
		{"dgcAckTimeout", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DGCAckHandler, dgcAckTimeout)},
		{"scheduler", "Ljava/util/concurrent/ScheduledExecutorService;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DGCAckHandler, scheduler)},
		{"idTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/rmi/server/UID;Lsun/rmi/transport/DGCAckHandler;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DGCAckHandler, idTable)},
		{"id", "Ljava/rmi/server/UID;", nullptr, $PRIVATE | $FINAL, $field(DGCAckHandler, id)},
		{"objList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE, $field(DGCAckHandler, objList)},
		{"task", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<*>;", $PRIVATE, $field(DGCAckHandler, task)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/server/UID;)V", nullptr, 0, $method(DGCAckHandler, init$, void, $UID*)},
		{"add", "(Ljava/lang/Object;)V", nullptr, $SYNCHRONIZED, $virtualMethod(DGCAckHandler, add, void, Object$*)},
		{"lambda$static$0", "()Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DGCAckHandler, lambda$static$0, $Long*)},
		{"received", "(Ljava/rmi/server/UID;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DGCAckHandler, received, void, $UID*)},
		{"release", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(DGCAckHandler, release, void)},
		{"startTimer", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(DGCAckHandler, startTimer, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCAckHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.transport.DGCAckHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.transport.DGCAckHandler$1"
	};
	$loadClass(DGCAckHandler, name, initialize, &classInfo$$, DGCAckHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DGCAckHandler);
	});
	return class$;
}

$Class* DGCAckHandler::class$ = nullptr;

		} // transport
	} // rmi
} // sun