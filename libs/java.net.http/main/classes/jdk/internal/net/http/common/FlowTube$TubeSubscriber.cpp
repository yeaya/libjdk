#include <jdk/internal/net/http/common/FlowTube$TubeSubscriber.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void FlowTube$TubeSubscriber::dropSubscription() {
}

bool FlowTube$TubeSubscriber::supportsRecycling() {
	return false;
}

$Class* FlowTube$TubeSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dropSubscription", "()V", nullptr, $PUBLIC, $virtualMethod(FlowTube$TubeSubscriber, dropSubscription, void)},
		{"supportsRecycling", "()Z", nullptr, $PUBLIC, $virtualMethod(FlowTube$TubeSubscriber, supportsRecycling, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$TubeSubscriber", "jdk.internal.net.http.common.FlowTube", "TubeSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.FlowTube$TubeSubscriber",
		nullptr,
		"java.util.concurrent.Flow$Subscriber",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.FlowTube"
	};
	$loadClass(FlowTube$TubeSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$TubeSubscriber);
	});
	return class$;
}

$Class* FlowTube$TubeSubscriber::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk