#include <jdk/internal/net/http/common/FlowTube$AbstractTubeSubscriber.h>
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

void FlowTube$AbstractTubeSubscriber::init$() {
}

FlowTube$AbstractTubeSubscriber::FlowTube$AbstractTubeSubscriber() {
}

$Class* FlowTube$AbstractTubeSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FlowTube$AbstractTubeSubscriber, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber", "jdk.internal.net.http.common.FlowTube", "AbstractTubeSubscriber", $PUBLIC | $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$TubeSubscriber", "jdk.internal.net.http.common.FlowTube", "TubeSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper", "jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber", "TubeSubscriberWrapper", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.common.FlowTube$TubeSubscriber",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.FlowTube"
	};
	$loadClass(FlowTube$AbstractTubeSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$AbstractTubeSubscriber);
	});
	return class$;
}

$Class* FlowTube$AbstractTubeSubscriber::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk