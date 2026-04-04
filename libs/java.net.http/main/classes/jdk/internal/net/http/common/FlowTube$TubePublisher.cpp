#include <jdk/internal/net/http/common/FlowTube$TubePublisher.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$Class* FlowTube$TubePublisher::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$TubePublisher", "jdk.internal.net.http.common.FlowTube", "TubePublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.common.FlowTube$TubePublisher",
		nullptr,
		"java.util.concurrent.Flow$Publisher",
		nullptr,
		nullptr,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.FlowTube"
	};
	$loadClass(FlowTube$TubePublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$TubePublisher);
	});
	return class$;
}

$Class* FlowTube$TubePublisher::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk