#include <jdk/internal/net/http/common/SequentialScheduler$LockingRestartableTask.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $SequentialScheduler$CompleteRestartableTask = ::jdk::internal::net::http::common::SequentialScheduler$CompleteRestartableTask;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

bool SequentialScheduler$LockingRestartableTask::$assertionsDisabled = false;

void SequentialScheduler$LockingRestartableTask::init$($Runnable* mainLoop) {
	$SequentialScheduler$CompleteRestartableTask::init$();
	$set(this, lock, $new($ReentrantLock));
	$set(this, mainLoop, mainLoop);
}

void SequentialScheduler$LockingRestartableTask::run() {
	bool locked = this->lock->tryLock();
	if (!SequentialScheduler$LockingRestartableTask::$assertionsDisabled && !locked) {
		$throwNew($AssertionError, $of("contention detected in SequentialScheduler"_s));
	}
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->mainLoop)->run();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (locked) {
			this->lock->unlock();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SequentialScheduler$LockingRestartableTask::clinit$($Class* clazz) {
	$load($SequentialScheduler);
	SequentialScheduler$LockingRestartableTask::$assertionsDisabled = !$SequentialScheduler::class$->desiredAssertionStatus();
}

SequentialScheduler$LockingRestartableTask::SequentialScheduler$LockingRestartableTask() {
}

$Class* SequentialScheduler$LockingRestartableTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SequentialScheduler$LockingRestartableTask, $assertionsDisabled)},
		{"mainLoop", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(SequentialScheduler$LockingRestartableTask, mainLoop)},
		{"lock", "Ljava/util/concurrent/locks/Lock;", nullptr, $PRIVATE | $FINAL, $field(SequentialScheduler$LockingRestartableTask, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(SequentialScheduler$LockingRestartableTask, init$, void, $Runnable*)},
		{"run", "()V", nullptr, $PROTECTED, $virtualMethod(SequentialScheduler$LockingRestartableTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$LockingRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "LockingRestartableTask", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.SequentialScheduler$LockingRestartableTask",
		"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SequentialScheduler"
	};
	$loadClass(SequentialScheduler$LockingRestartableTask, name, initialize, &classInfo$$, SequentialScheduler$LockingRestartableTask::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$LockingRestartableTask);
	});
	return class$;
}

$Class* SequentialScheduler$LockingRestartableTask::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk