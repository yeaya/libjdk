#include <sun/rmi/transport/GC$Daemon$1.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/rmi/transport/GC$Daemon.h>
#include <sun/rmi/transport/GC.h>
#include <jcpp.h>

#undef MIN_PRIORITY

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $GC = ::sun::rmi::transport::GC;
using $GC$Daemon = ::sun::rmi::transport::GC$Daemon;

namespace sun {
	namespace rmi {
		namespace transport {

bool GC$Daemon$1::$assertionsDisabled = false;

void GC$Daemon$1::init$() {
}

$Object* GC$Daemon$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Thread, t, $InnocuousThread::newSystemThread("RMI GC Daemon"_s, $$new($GC$Daemon)));
	if (!GC$Daemon$1::$assertionsDisabled && !($nc(t)->getContextClassLoader() == nullptr)) {
		$throwNew($AssertionError);
	}
	$nc(t)->setDaemon(true);
	t->setPriority($Thread::MIN_PRIORITY + 1);
	t->start();
	$init($GC);
	$assignStatic($GC::daemon, t);
	return nullptr;
}

void GC$Daemon$1::clinit$($Class* clazz) {
	$load($GC);
	GC$Daemon$1::$assertionsDisabled = !$GC::class$->desiredAssertionStatus();
}

GC$Daemon$1::GC$Daemon$1() {
}

$Class* GC$Daemon$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GC$Daemon$1, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GC$Daemon$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(GC$Daemon$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.GC$Daemon",
		"create",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.GC$Daemon", "sun.rmi.transport.GC", "Daemon", $PRIVATE | $STATIC},
		{"sun.rmi.transport.GC$Daemon$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.GC$Daemon$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.GC"
	};
	$loadClass(GC$Daemon$1, name, initialize, &classInfo$$, GC$Daemon$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GC$Daemon$1);
	});
	return class$;
}

$Class* GC$Daemon$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun