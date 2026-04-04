#include <jdk/internal/net/http/ResponseSubscribers$ConsumerSubscriber.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Consumer = ::java::util::function::Consumer;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ResponseSubscribers$ConsumerSubscriber::init$($Consumer* consumer) {
	$set(this, result, $new($MinimalFuture));
	$set(this, subscribed, $new($AtomicBoolean));
	$set(this, consumer, $cast($Consumer, $Objects::requireNonNull(consumer)));
}

$CompletionStage* ResponseSubscribers$ConsumerSubscriber::getBody() {
	return this->result;
}

void ResponseSubscribers$ConsumerSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$Objects::requireNonNull(subscription);
	if (!this->subscribed->compareAndSet(false, true)) {
		subscription->cancel();
	} else {
		$set(this, subscription, subscription);
		subscription->request(1);
	}
}

void ResponseSubscribers$ConsumerSubscriber::onNext($List* items) {
	$useLocalObjectStack();
	$Objects::requireNonNull(items);
	{
		$var($Iterator, i$, items->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ByteBuffer, item, $cast($ByteBuffer, i$->next()));
			{
				$var($bytes, buf, $new($bytes, $nc(item)->remaining()));
				item->get(buf);
				$nc(this->consumer)->accept($($Optional::of(buf)));
			}
		}
	}
	$nc(this->subscription)->request(1);
}

void ResponseSubscribers$ConsumerSubscriber::onError($Throwable* throwable) {
	$Objects::requireNonNull(throwable);
	this->result->completeExceptionally(throwable);
}

void ResponseSubscribers$ConsumerSubscriber::onComplete() {
	$nc(this->consumer)->accept($($Optional::empty()));
	this->result->complete(nullptr);
}

void ResponseSubscribers$ConsumerSubscriber::onNext(Object$* items) {
	this->onNext($cast($List, items));
}

ResponseSubscribers$ConsumerSubscriber::ResponseSubscribers$ConsumerSubscriber() {
}

$Class* ResponseSubscribers$ConsumerSubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumer", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<Ljava/util/Optional<[B>;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$ConsumerSubscriber, consumer)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE, $field(ResponseSubscribers$ConsumerSubscriber, subscription)},
		{"result", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$ConsumerSubscriber, result)},
		{"subscribed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$ConsumerSubscriber, subscribed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<Ljava/util/Optional<[B>;>;)V", $PUBLIC, $method(ResponseSubscribers$ConsumerSubscriber, init$, void, $Consumer*)},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<Ljava/lang/Void;>;", $PUBLIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, getBody, $CompletionStage*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ConsumerSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$ConsumerSubscriber", "jdk.internal.net.http.ResponseSubscribers", "ConsumerSubscriber", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$ConsumerSubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$ConsumerSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$ConsumerSubscriber);
	});
	return class$;
}

$Class* ResponseSubscribers$ConsumerSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk