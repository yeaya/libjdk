#include <jdk/internal/net/http/RequestPublishers$EmptyPublisher.h>
#include <java/lang/Iterable.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RequestPublishers$EmptyPublisher::init$() {
	$set(this, delegate, $new($PullPublisher, $($Collections::emptyList()), nullptr));
}

int64_t RequestPublishers$EmptyPublisher::contentLength() {
	return 0;
}

void RequestPublishers$EmptyPublisher::subscribe($Flow$Subscriber* subscriber) {
	this->delegate->subscribe(subscriber);
}

RequestPublishers$EmptyPublisher::RequestPublishers$EmptyPublisher() {
}

$Class* RequestPublishers$EmptyPublisher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljava/util/concurrent/Flow$Publisher;", "Ljava/util/concurrent/Flow$Publisher<Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(RequestPublishers$EmptyPublisher, delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RequestPublishers$EmptyPublisher, init$, void)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$EmptyPublisher, contentLength, int64_t)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$EmptyPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$EmptyPublisher", "jdk.internal.net.http.RequestPublishers", "EmptyPublisher", $PUBLIC | $STATIC},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$EmptyPublisher",
		"java.lang.Object",
		"java.net.http.HttpRequest$BodyPublisher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$EmptyPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$EmptyPublisher);
	});
	return class$;
}

$Class* RequestPublishers$EmptyPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk