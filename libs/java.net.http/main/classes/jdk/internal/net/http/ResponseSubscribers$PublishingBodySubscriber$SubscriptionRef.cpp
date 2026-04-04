#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef = ::jdk::internal::net::http::ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::init$($Flow$Subscription* subscription, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* subscriberRef) {
	$set(this, subscription, subscription);
	$set(this, subscriberRef, subscriberRef);
}

void ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::request(int64_t n) {
	if ($nc(this->subscriberRef)->get() != nullptr) {
		$nc(this->subscription)->request(n);
	}
}

void ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::cancel() {
	$nc(this->subscription)->cancel();
	$nc(this->subscriberRef)->clear();
}

void ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::subscribe() {
	$var($Flow$Subscriber, subscriber, $nc(this->subscriberRef)->get());
	if (subscriber != nullptr) {
		subscriber->onSubscribe(this);
	}
}

$String* ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("SubscriptionRef/"_s);
	var$0->append($($nc(this->subscription)->getClass()->getName()));
	var$0->append("@"_s);
	var$0->append($System::identityHashCode(this->subscription));
	return $str(var$0);
}

ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef() {
}

$Class* ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, subscription)},
		{"subscriberRef", "Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;", nullptr, $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, subscriberRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscription;Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;)V", nullptr, 0, $method(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, init$, void, $Flow$Subscription*, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, request, void, int64_t)},
		{"subscribe", "()V", nullptr, 0, $method(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, subscribe, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "jdk.internal.net.http.ResponseSubscribers", "PublishingBodySubscriber", $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef", "jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "SubscriptionRef", $STATIC | $FINAL},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
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
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef);
	});
	return class$;
}

$Class* ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk