#include <sun/rmi/transport/GC.h>
#include <java/security/AccessController.h>
#include <sun/rmi/transport/GC$1.h>
#include <sun/rmi/transport/GC$Daemon.h>
#include <sun/rmi/transport/GC$LatencyLock.h>
#include <sun/rmi/transport/GC$LatencyRequest.h>
#include <jcpp.h>

#undef GC
#undef NO_TARGET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $GC$1 = ::sun::rmi::transport::GC$1;
using $GC$Daemon = ::sun::rmi::transport::GC$Daemon;
using $GC$LatencyLock = ::sun::rmi::transport::GC$LatencyLock;
using $GC$LatencyRequest = ::sun::rmi::transport::GC$LatencyRequest;

namespace sun {
	namespace rmi {
		namespace transport {

int64_t GC::latencyTarget = 0;
$Thread* GC::daemon = nullptr;
$Object* GC::lock = nullptr;

void GC::init$() {
}

int64_t GC::maxObjectInspectionAge() {
	$init(GC);
	$prepareNativeStatic(maxObjectInspectionAge, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void GC::setLatencyTarget(int64_t ms) {
	$init(GC);
	GC::latencyTarget = ms;
	if (GC::daemon == nullptr) {
		$GC$Daemon::create();
	} else {
		$nc(GC::lock)->notify();
	}
}

$GC$LatencyRequest* GC::requestLatency(int64_t latency) {
	$init(GC);
	return $new($GC$LatencyRequest, latency);
}

int64_t GC::currentLatencyTarget() {
	$init(GC);
	int64_t t = GC::latencyTarget;
	return (t == GC::NO_TARGET) ? 0 : t;
}

void GC::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	GC::latencyTarget = GC::NO_TARGET;
	$assignStatic(GC::daemon, nullptr);
	$assignStatic(GC::lock, $new($GC$LatencyLock));
	{
		$AccessController::doPrivileged($$new($GC$1));
	}
}

GC::GC() {
}

$Class* GC::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_TARGET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GC, NO_TARGET)},
		{"latencyTarget", "J", nullptr, $PRIVATE | $STATIC, $staticField(GC, latencyTarget)},
		{"daemon", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(GC, daemon)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(GC, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GC, init$, void)},
		{"currentLatencyTarget", "()J", nullptr, $PUBLIC | $STATIC, $staticMethod(GC, currentLatencyTarget, int64_t)},
		{"maxObjectInspectionAge", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(GC, maxObjectInspectionAge, int64_t)},
		{"requestLatency", "(J)Lsun/rmi/transport/GC$LatencyRequest;", nullptr, $PUBLIC | $STATIC, $staticMethod(GC, requestLatency, $GC$LatencyRequest*, int64_t)},
		{"setLatencyTarget", "(J)V", nullptr, $PRIVATE | $STATIC, $staticMethod(GC, setLatencyTarget, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.GC$LatencyRequest", "sun.rmi.transport.GC", "LatencyRequest", $PUBLIC | $STATIC},
		{"sun.rmi.transport.GC$Daemon", "sun.rmi.transport.GC", "Daemon", $PRIVATE | $STATIC},
		{"sun.rmi.transport.GC$LatencyLock", "sun.rmi.transport.GC", "LatencyLock", $PRIVATE | $STATIC},
		{"sun.rmi.transport.GC$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.GC",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.transport.GC$LatencyRequest,sun.rmi.transport.GC$Daemon,sun.rmi.transport.GC$Daemon$1,sun.rmi.transport.GC$LatencyLock,sun.rmi.transport.GC$1"
	};
	$loadClass(GC, name, initialize, &classInfo$$, GC::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GC);
	});
	return class$;
}

$Class* GC::class$ = nullptr;

		} // transport
	} // rmi
} // sun