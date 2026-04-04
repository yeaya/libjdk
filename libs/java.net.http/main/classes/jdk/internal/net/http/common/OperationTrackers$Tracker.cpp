#include <jdk/internal/net/http/common/OperationTrackers$Tracker.h>
#include <jdk/internal/net/http/common/OperationTrackers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* OperationTrackers$Tracker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, getName, $String*)},
		{"getOutstandingHttp2Streams", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, getOutstandingHttp2Streams, int64_t)},
		{"getOutstandingHttpOperations", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, getOutstandingHttpOperations, int64_t)},
		{"getOutstandingOperations", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, getOutstandingOperations, int64_t)},
		{"getOutstandingWebSocketOperations", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, getOutstandingWebSocketOperations, int64_t)},
		{"isFacadeReferenced", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Tracker, isFacadeReferenced, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.OperationTrackers$Tracker", "jdk.internal.net.http.common.OperationTrackers", "Tracker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.OperationTrackers$Tracker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.OperationTrackers"
	};
	$loadClass(OperationTrackers$Tracker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperationTrackers$Tracker);
	});
	return class$;
}

$Class* OperationTrackers$Tracker::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk