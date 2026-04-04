#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin$Checker.h>
#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ClientCommunicatorAdmin = ::com::sun::jmx::remote::internal::ClientCommunicatorAdmin;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ClientCommunicatorAdmin$Checker::init$($ClientCommunicatorAdmin* this$0) {
	$set(this, this$0, this$0);
}

void ClientCommunicatorAdmin$Checker::run() {
	$useLocalObjectStack();
	$set(this, myThread, $Thread::currentThread());
	while (this->this$0->state != 3 && !this->myThread->isInterrupted()) {
		try {
			$Thread::sleep(this->this$0->period);
		} catch ($InterruptedException& ire) {
		}
		if (this->this$0->state == 3 || $nc(this->myThread)->isInterrupted()) {
			break;
		}
		try {
			this->this$0->checkConnection();
		} catch ($Exception& e) {
			$synchronized(this->this$0->lock) {
				if (this->this$0->state == 3 || $nc(this->myThread)->isInterrupted()) {
					break;
				}
			}
			$assign(e, $cast($Exception, $EnvHelp::getCause(e)));
			if ($instanceOf($IOException, e) && !($instanceOf($InterruptedIOException, e))) {
				try {
					this->this$0->gotIOException($cast($IOException, e));
				} catch ($Exception& ee) {
					$nc($ClientCommunicatorAdmin::logger)->warning("Checker-run"_s, $$str({"Failed to check connection: "_s, e}));
					$ClientCommunicatorAdmin::logger->warning("Checker-run"_s, "stopping"_s);
					$ClientCommunicatorAdmin::logger->debug("Checker-run"_s, e);
					break;
				}
			} else {
				$nc($ClientCommunicatorAdmin::logger)->warning("Checker-run"_s, $$str({"Failed to check the connection: "_s, e}));
				$ClientCommunicatorAdmin::logger->debug("Checker-run"_s, e);
				break;
			}
		}
	}
	if ($nc($ClientCommunicatorAdmin::logger)->traceOn()) {
		$ClientCommunicatorAdmin::logger->trace("Checker-run"_s, "Finished."_s);
	}
}

void ClientCommunicatorAdmin$Checker::stop() {
	if (this->myThread != nullptr && this->myThread != $Thread::currentThread()) {
		this->myThread->interrupt();
	}
}

ClientCommunicatorAdmin$Checker::ClientCommunicatorAdmin$Checker() {
}

$Class* ClientCommunicatorAdmin$Checker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCommunicatorAdmin$Checker, this$0)},
		{"myThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ClientCommunicatorAdmin$Checker, myThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin;)V", nullptr, $PRIVATE, $method(ClientCommunicatorAdmin$Checker, init$, void, $ClientCommunicatorAdmin*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClientCommunicatorAdmin$Checker, run, void)},
		{"stop", "()V", nullptr, $PRIVATE, $method(ClientCommunicatorAdmin$Checker, stop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker", "com.sun.jmx.remote.internal.ClientCommunicatorAdmin", "Checker", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ClientCommunicatorAdmin"
	};
	$loadClass(ClientCommunicatorAdmin$Checker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientCommunicatorAdmin$Checker);
	});
	return class$;
}

$Class* ClientCommunicatorAdmin$Checker::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com