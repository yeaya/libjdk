#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::init$($Flow$Subscriber* subscriber) {
	$set(this, ref, subscriber);
}

$Flow$Subscriber* ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::get() {
	return this->ref;
}

$Flow$Subscriber* ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::clear() {
	$var($Flow$Subscriber, res, this->ref);
	$set(this, ref, nullptr);
	return res;
}

ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::ResponseSubscribers$PublishingBodySubscriber$SubscriberRef() {
}

$Class* ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ref", "Ljava/util/concurrent/Flow$Subscriber;", "Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $VOLATILE, $field(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", 0, $method(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, init$, void, $Flow$Subscriber*)},
		{"clear", "()Ljava/util/concurrent/Flow$Subscriber;", "()Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", 0, $method(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, clear, $Flow$Subscriber*)},
		{"get", "()Ljava/util/concurrent/Flow$Subscriber;", "()Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", 0, $method(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, get, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "jdk.internal.net.http.ResponseSubscribers", "PublishingBodySubscriber", $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriberRef", "jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "SubscriberRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriberRef",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$SubscriberRef);
	});
	return class$;
}

$Class* ResponseSubscribers$PublishingBodySubscriber$SubscriberRef::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk