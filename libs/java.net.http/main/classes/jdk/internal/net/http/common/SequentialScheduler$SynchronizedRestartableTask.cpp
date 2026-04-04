#include <jdk/internal/net/http/common/SequentialScheduler$SynchronizedRestartableTask.h>
#include <java/lang/Runnable.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SequentialScheduler$CompleteRestartableTask = ::jdk::internal::net::http::common::SequentialScheduler$CompleteRestartableTask;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SequentialScheduler$SynchronizedRestartableTask::init$($Runnable* mainLoop) {
	$SequentialScheduler$CompleteRestartableTask::init$();
	$set(this, lock, $new($Object));
	$set(this, mainLoop, mainLoop);
}

void SequentialScheduler$SynchronizedRestartableTask::run() {
	$synchronized(this->lock) {
		$nc(this->mainLoop)->run();
	}
}

SequentialScheduler$SynchronizedRestartableTask::SequentialScheduler$SynchronizedRestartableTask() {
}

$Class* SequentialScheduler$SynchronizedRestartableTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mainLoop", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(SequentialScheduler$SynchronizedRestartableTask, mainLoop)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SequentialScheduler$SynchronizedRestartableTask, lock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(SequentialScheduler$SynchronizedRestartableTask, init$, void, $Runnable*)},
		{"run", "()V", nullptr, $PROTECTED, $virtualMethod(SequentialScheduler$SynchronizedRestartableTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$SynchronizedRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "SynchronizedRestartableTask", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.SequentialScheduler$SynchronizedRestartableTask",
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
	$loadClass(SequentialScheduler$SynchronizedRestartableTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$SynchronizedRestartableTask);
	});
	return class$;
}

$Class* SequentialScheduler$SynchronizedRestartableTask::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk