#include <jdk/internal/net/http/SocketTube$SocketFlowTask.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/SequentialScheduler$DeferredCompleter.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SocketTube = ::jdk::internal::net::http::SocketTube;
using $SequentialScheduler$DeferredCompleter = ::jdk::internal::net::http::common::SequentialScheduler$DeferredCompleter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool SocketTube$SocketFlowTask::$assertionsDisabled = false;

void SocketTube$SocketFlowTask::init$($Runnable* task) {
	$set(this, lock, $new($ReentrantLock));
	$set(this, task, task);
}

void SocketTube$SocketFlowTask::run($SequentialScheduler$DeferredCompleter* taskCompleter) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		bool locked = this->lock->tryLock();
		if (!SocketTube$SocketFlowTask::$assertionsDisabled && !locked) {
			$throwNew($AssertionError, $of("contention detected in SequentialScheduler"_s));
		}
		$var($Throwable, var$1, nullptr);
		try {
			$nc(this->task)->run();
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			if (locked) {
				this->lock->unlock();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		$nc(taskCompleter)->complete();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SocketTube$SocketFlowTask::clinit$($Class* clazz) {
	$load($SocketTube);
	SocketTube$SocketFlowTask::$assertionsDisabled = !$SocketTube::class$->desiredAssertionStatus();
}

SocketTube$SocketFlowTask::SocketTube$SocketFlowTask() {
}

$Class* SocketTube$SocketFlowTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketTube$SocketFlowTask, $assertionsDisabled)},
		{"task", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(SocketTube$SocketFlowTask, task)},
		{"lock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(SocketTube$SocketFlowTask, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(SocketTube$SocketFlowTask, init$, void, $Runnable*)},
		{"run", "(Ljdk/internal/net/http/common/SequentialScheduler$DeferredCompleter;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketTube$SocketFlowTask, run, void, $SequentialScheduler$DeferredCompleter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$SocketFlowTask", "jdk.internal.net.http.SocketTube", "SocketFlowTask", $PRIVATE | $STATIC},
		{"jdk.internal.net.http.common.SequentialScheduler$RestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "RestartableTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.SocketTube$SocketFlowTask",
		"java.lang.Object",
		"jdk.internal.net.http.common.SequentialScheduler$RestartableTask",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$SocketFlowTask, name, initialize, &classInfo$$, SocketTube$SocketFlowTask::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$SocketFlowTask);
	});
	return class$;
}

$Class* SocketTube$SocketFlowTask::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk