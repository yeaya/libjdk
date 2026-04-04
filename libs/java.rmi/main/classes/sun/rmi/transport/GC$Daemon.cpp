#include <sun/rmi/transport/GC$Daemon.h>
#include <java/lang/InterruptedException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/rmi/transport/GC$Daemon$1.h>
#include <sun/rmi/transport/GC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GC = ::sun::rmi::transport::GC;
using $GC$Daemon$1 = ::sun::rmi::transport::GC$Daemon$1;

namespace sun {
	namespace rmi {
		namespace transport {

void GC$Daemon::init$() {
}

void GC$Daemon::run() {
	for (;;) {
		int64_t l = 0;
		$init($GC);
		$synchronized($GC::lock) {
			l = $GC::latencyTarget;
			if (l == (int64_t)0x7fffffffffffffff) {
				$assignStatic($GC::daemon, nullptr);
				return;
			}
			int64_t d = $GC::maxObjectInspectionAge();
			if (d >= l) {
				$System::gc();
				d = 0;
			}
			try {
				$nc($GC::lock)->wait(l - d);
			} catch ($InterruptedException& x) {
				continue;
			}
		}
	}
}

void GC$Daemon::create() {
	$init(GC$Daemon);
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new($GC$Daemon$1));
	$AccessController::doPrivileged(pa);
}

GC$Daemon::GC$Daemon() {
}

$Class* GC$Daemon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GC$Daemon, init$, void)},
		{"create", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(GC$Daemon, create, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GC$Daemon, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.GC$Daemon", "sun.rmi.transport.GC", "Daemon", $PRIVATE | $STATIC},
		{"sun.rmi.transport.GC$Daemon$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.GC$Daemon",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.GC"
	};
	$loadClass(GC$Daemon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GC$Daemon);
	});
	return class$;
}

$Class* GC$Daemon::class$ = nullptr;

		} // transport
	} // rmi
} // sun