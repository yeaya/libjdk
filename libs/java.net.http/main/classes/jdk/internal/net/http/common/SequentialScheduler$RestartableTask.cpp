#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler$DeferredCompleter.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SequentialScheduler$DeferredCompleter = ::jdk::internal::net::http::common::SequentialScheduler$DeferredCompleter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* SequentialScheduler$RestartableTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "(Ljdk/internal/net/http/common/SequentialScheduler$DeferredCompleter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SequentialScheduler$RestartableTask, run, void, $SequentialScheduler$DeferredCompleter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SequentialScheduler$RestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "RestartableTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.SequentialScheduler$RestartableTask",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SequentialScheduler"
	};
	$loadClass(SequentialScheduler$RestartableTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequentialScheduler$RestartableTask);
	});
	return class$;
}

$Class* SequentialScheduler$RestartableTask::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk