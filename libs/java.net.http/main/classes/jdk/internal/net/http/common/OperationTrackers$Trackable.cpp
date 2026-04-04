#include <jdk/internal/net/http/common/OperationTrackers$Trackable.h>
#include <jdk/internal/net/http/common/OperationTrackers$Tracker.h>
#include <jdk/internal/net/http/common/OperationTrackers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationTrackers$Tracker = ::jdk::internal::net::http::common::OperationTrackers$Tracker;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* OperationTrackers$Trackable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOperationsTracker", "()Ljdk/internal/net/http/common/OperationTrackers$Tracker;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperationTrackers$Trackable, getOperationsTracker, $OperationTrackers$Tracker*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.OperationTrackers$Trackable", "jdk.internal.net.http.common.OperationTrackers", "Trackable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.OperationTrackers$Trackable",
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
	$loadClass(OperationTrackers$Trackable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperationTrackers$Trackable);
	});
	return class$;
}

$Class* OperationTrackers$Trackable::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk