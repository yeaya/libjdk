#include <jdk/internal/net/http/RequestPublishers$PublisherAdapter.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RequestPublishers$PublisherAdapter::init$($Flow$Publisher* publisher, int64_t contentLength) {
	$set(this, publisher, $cast($Flow$Publisher, $Objects::requireNonNull(publisher)));
	this->contentLength$ = contentLength;
}

int64_t RequestPublishers$PublisherAdapter::contentLength() {
	return this->contentLength$;
}

void RequestPublishers$PublisherAdapter::subscribe($Flow$Subscriber* subscriber) {
	$nc(this->publisher)->subscribe(subscriber);
}

RequestPublishers$PublisherAdapter::RequestPublishers$PublisherAdapter() {
}

$Class* RequestPublishers$PublisherAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"publisher", "Ljava/util/concurrent/Flow$Publisher;", "Ljava/util/concurrent/Flow$Publisher<+Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(RequestPublishers$PublisherAdapter, publisher)},
		{"contentLength", "J", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$PublisherAdapter, contentLength$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Publisher;J)V", "(Ljava/util/concurrent/Flow$Publisher<+Ljava/nio/ByteBuffer;>;J)V", $PUBLIC, $method(RequestPublishers$PublisherAdapter, init$, void, $Flow$Publisher*, int64_t)},
		{"contentLength", "()J", nullptr, $PUBLIC | $FINAL, $virtualMethod(RequestPublishers$PublisherAdapter, contentLength, int64_t)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC | $FINAL, $virtualMethod(RequestPublishers$PublisherAdapter, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$PublisherAdapter", "jdk.internal.net.http.RequestPublishers", "PublisherAdapter", $PUBLIC | $STATIC | $FINAL},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$PublisherAdapter",
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
	$loadClass(RequestPublishers$PublisherAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$PublisherAdapter);
	});
	return class$;
}

$Class* RequestPublishers$PublisherAdapter::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk