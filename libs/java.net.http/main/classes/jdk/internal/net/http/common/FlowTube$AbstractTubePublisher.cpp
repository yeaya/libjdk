#include <jdk/internal/net/http/common/FlowTube$AbstractTubePublisher.h>
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

void FlowTube$AbstractTubePublisher::init$() {
}

FlowTube$AbstractTubePublisher::FlowTube$AbstractTubePublisher() {
}

$Class* FlowTube$AbstractTubePublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FlowTube$AbstractTubePublisher, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher", "jdk.internal.net.http.common.FlowTube", "AbstractTubePublisher", $PUBLIC | $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$TubePublisher", "jdk.internal.net.http.common.FlowTube", "TubePublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher$TubePublisherWrapper", "jdk.internal.net.http.common.FlowTube$AbstractTubePublisher", "TubePublisherWrapper", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher",
		"java.lang.Object",
		"jdk.internal.net.http.common.FlowTube$TubePublisher",
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
	$loadClass(FlowTube$AbstractTubePublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$AbstractTubePublisher);
	});
	return class$;
}

$Class* FlowTube$AbstractTubePublisher::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk