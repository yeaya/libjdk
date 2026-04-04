#include <com/sun/jmx/remote/internal/ServerCommunicatorAdmin$Timeout.h>
#include <com/sun/jmx/remote/internal/ServerCommunicatorAdmin.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ServerCommunicatorAdmin = ::com::sun::jmx::remote::internal::ServerCommunicatorAdmin;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ServerCommunicatorAdmin$Timeout::init$($ServerCommunicatorAdmin* this$0) {
	$set(this, this$0, this$0);
}

void ServerCommunicatorAdmin$Timeout::run() {
	$useLocalObjectStack();
	bool stopping = false;
	$synchronized(this->this$0->lock) {
		if (this->this$0->timestamp == 0) {
			this->this$0->timestamp = $System::currentTimeMillis();
		}
		this->this$0->logtime("Admin: timeout="_s, this->this$0->timeout);
		this->this$0->logtime("Admin: Timestamp="_s, this->this$0->timestamp);
		while (!this->this$0->terminated) {
			try {
				while (!this->this$0->terminated && this->this$0->currentJobs != 0) {
					if ($nc($ServerCommunicatorAdmin::logger)->traceOn()) {
						$ServerCommunicatorAdmin::logger->trace("Timeout-run"_s, "Waiting without timeout."_s);
					}
					this->this$0->lock->wait();
				}
				if (this->this$0->terminated) {
					return;
				}
				int64_t remaining = this->this$0->timeout - ($System::currentTimeMillis() - this->this$0->timestamp);
				this->this$0->logtime("Admin: remaining timeout="_s, remaining);
				if (remaining > 0) {
					if ($nc($ServerCommunicatorAdmin::logger)->traceOn()) {
						$ServerCommunicatorAdmin::logger->trace("Timeout-run"_s, $$str({"Waiting with timeout: "_s, $$str(remaining), " ms remaining"_s}));
					}
					this->this$0->lock->wait(remaining);
				}
				if (this->this$0->currentJobs > 0) {
					continue;
				}
				int64_t elapsed = $System::currentTimeMillis() - this->this$0->timestamp;
				this->this$0->logtime("Admin: elapsed="_s, elapsed);
				if (!this->this$0->terminated && elapsed > this->this$0->timeout) {
					if ($nc($ServerCommunicatorAdmin::logger)->traceOn()) {
						$ServerCommunicatorAdmin::logger->trace("Timeout-run"_s, "timeout elapsed"_s);
					}
					this->this$0->logtime($$str({"Admin: timeout elapsed! "_s, $$str(elapsed), ">"_s}), this->this$0->timeout);
					this->this$0->terminated = true;
					stopping = true;
					break;
				}
			} catch ($InterruptedException& ire) {
				$nc($ServerCommunicatorAdmin::logger)->warning("Timeout-run"_s, $$str({"Unexpected Exception: "_s, ire}));
				$ServerCommunicatorAdmin::logger->debug("Timeout-run"_s, ire);
				return;
			}
		}
	}
	if (stopping) {
		if ($nc($ServerCommunicatorAdmin::logger)->traceOn()) {
			$ServerCommunicatorAdmin::logger->trace("Timeout-run"_s, "Call the doStop."_s);
		}
		this->this$0->doStop();
	}
}

ServerCommunicatorAdmin$Timeout::ServerCommunicatorAdmin$Timeout() {
}

$Class* ServerCommunicatorAdmin$Timeout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ServerCommunicatorAdmin;", nullptr, $FINAL | $SYNTHETIC, $field(ServerCommunicatorAdmin$Timeout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ServerCommunicatorAdmin;)V", nullptr, $PRIVATE, $method(ServerCommunicatorAdmin$Timeout, init$, void, $ServerCommunicatorAdmin*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ServerCommunicatorAdmin$Timeout, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ServerCommunicatorAdmin$Timeout", "com.sun.jmx.remote.internal.ServerCommunicatorAdmin", "Timeout", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ServerCommunicatorAdmin$Timeout",
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
		"com.sun.jmx.remote.internal.ServerCommunicatorAdmin"
	};
	$loadClass(ServerCommunicatorAdmin$Timeout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerCommunicatorAdmin$Timeout);
	});
	return class$;
}

$Class* ServerCommunicatorAdmin$Timeout::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com