#include <sun/rmi/transport/tcp/TCPTransport$1.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/util/concurrent/ExecutorService.h>
#include <sun/rmi/runtime/NewThreadAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $NewThreadAction = ::sun::rmi::runtime::NewThreadAction;

namespace sun {
	namespace rmi {
		namespace transport {
			namespace tcp {

void TCPTransport$1::init$() {
}

$Thread* TCPTransport$1::newThread($Runnable* runnable) {
	$beforeCallerSensitive();
	return $cast($Thread, $AccessController::doPrivileged($$new($NewThreadAction, runnable, "TCP Connection(idle)"_s, true, true)));
}

TCPTransport$1::TCPTransport$1() {
}

$Class* TCPTransport$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TCPTransport$1, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(TCPTransport$1, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.tcp.TCPTransport",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.tcp.TCPTransport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.tcp.TCPTransport$1",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.tcp.TCPTransport"
	};
	$loadClass(TCPTransport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TCPTransport$1);
	});
	return class$;
}

$Class* TCPTransport$1::class$ = nullptr;

			} // tcp
		} // transport
	} // rmi
} // sun