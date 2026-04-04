#include <jdk/internal/net/http/HttpConnection$HttpPublisher.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Class* HttpConnection$HttpPublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"enqueue", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(HttpConnection$HttpPublisher, enqueue, void, $List*), "java.io.IOException"},
		{"enqueueUnordered", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(HttpConnection$HttpPublisher, enqueueUnordered, void, $List*), "java.io.IOException"},
		{"signalEnqueued", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpConnection$HttpPublisher, signalEnqueued, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpConnection$HttpPublisher", "jdk.internal.net.http.HttpConnection", "HttpPublisher", $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$TubePublisher", "jdk.internal.net.http.common.FlowTube", "TubePublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.HttpConnection$HttpPublisher",
		nullptr,
		"jdk.internal.net.http.common.FlowTube$TubePublisher",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpConnection"
	};
	$loadClass(HttpConnection$HttpPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnection$HttpPublisher);
	});
	return class$;
}

$Class* HttpConnection$HttpPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk