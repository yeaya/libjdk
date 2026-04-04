#include <jdk/internal/net/http/common/FlowTube$AbstractTubePublisher$TubePublisherWrapper.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/common/FlowTube$AbstractTubePublisher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $FlowTube$AbstractTubePublisher = ::jdk::internal::net::http::common::FlowTube$AbstractTubePublisher;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void FlowTube$AbstractTubePublisher$TubePublisherWrapper::init$($Flow$Publisher* delegate) {
	$FlowTube$AbstractTubePublisher::init$();
	$set(this, delegate, delegate);
}

void FlowTube$AbstractTubePublisher$TubePublisherWrapper::subscribe($Flow$Subscriber* subscriber) {
	$nc(this->delegate)->subscribe(subscriber);
}

FlowTube$AbstractTubePublisher$TubePublisherWrapper::FlowTube$AbstractTubePublisher$TubePublisherWrapper() {
}

$Class* FlowTube$AbstractTubePublisher$TubePublisherWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljava/util/concurrent/Flow$Publisher;", "Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $FINAL, $field(FlowTube$AbstractTubePublisher$TubePublisherWrapper, delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Publisher;)V", "(Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", $PUBLIC, $method(FlowTube$AbstractTubePublisher$TubePublisherWrapper, init$, void, $Flow$Publisher*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", $PUBLIC, $virtualMethod(FlowTube$AbstractTubePublisher$TubePublisherWrapper, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher", "jdk.internal.net.http.common.FlowTube", "AbstractTubePublisher", $PUBLIC | $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher$TubePublisherWrapper", "jdk.internal.net.http.common.FlowTube$AbstractTubePublisher", "TubePublisherWrapper", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher$TubePublisherWrapper",
		"jdk.internal.net.http.common.FlowTube$AbstractTubePublisher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.FlowTube"
	};
	$loadClass(FlowTube$AbstractTubePublisher$TubePublisherWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$AbstractTubePublisher$TubePublisherWrapper);
	});
	return class$;
}

$Class* FlowTube$AbstractTubePublisher$TubePublisherWrapper::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk