#include <jdk/internal/net/http/common/SequentialScheduler$SchedulableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler$DeferredCompleter.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SequentialScheduler$SchedulableTask::init$($SequentialScheduler* this$0) {
	$set(this, this$0, this$0);
}

void SequentialScheduler$SchedulableTask::run() {
	$nc(this->this$0->restartableTask)->run(this->this$0->completer);
}

SequentialScheduler$SchedulableTask::SequentialScheduler$SchedulableTask() {
}

$Class* SequentialScheduler$SchedulableTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL | $SYNTHETIC, $field(SequentialScheduler$SchedulableTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SequentialScheduler;)V", nullptr, $PRIVATE, $method(SequentialScheduler$SchedulableTask, init$, void, $SequentialScheduler*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SequentialScheduler$SchedulableTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$SchedulableTask", "jdk.internal.net.http.common.SequentialScheduler", "SchedulableTask", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.SequentialScheduler$SchedulableTask",
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
		"jdk.internal.net.http.common.SequentialScheduler"
	};
	$loadClass(SequentialScheduler$SchedulableTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$SchedulableTask);
	});
	return class$;
}

$Class* SequentialScheduler$SchedulableTask::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk