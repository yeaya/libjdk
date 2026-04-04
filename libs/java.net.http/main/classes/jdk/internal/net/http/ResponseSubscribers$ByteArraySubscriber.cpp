#include <jdk/internal/net/http/ResponseSubscribers$ByteArraySubscriber.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef MAX_VALUE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Function = ::java::util::function::Function;
using $ResponseSubscribers = ::jdk::internal::net::http::ResponseSubscribers;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool ResponseSubscribers$ByteArraySubscriber::$assertionsDisabled = false;

void ResponseSubscribers$ByteArraySubscriber::init$($Function* finisher) {
	$set(this, result, $new($MinimalFuture));
	$set(this, received, $new($ArrayList));
	$set(this, finisher, finisher);
}

void ResponseSubscribers$ByteArraySubscriber::onSubscribe($Flow$Subscription* subscription) {
	if (this->subscription != nullptr) {
		$nc(subscription)->cancel();
		return;
	}
	$set(this, subscription, subscription);
	$nc(subscription)->request($Long::MAX_VALUE);
}

void ResponseSubscribers$ByteArraySubscriber::onNext($List* items) {
	if (!ResponseSubscribers$ByteArraySubscriber::$assertionsDisabled && !$Utils::hasRemaining(items)) {
		$throwNew($AssertionError);
	}
	this->received->addAll(items);
}

void ResponseSubscribers$ByteArraySubscriber::onError($Throwable* throwable) {
	this->received->clear();
	this->result->completeExceptionally(throwable);
}

$bytes* ResponseSubscribers$ByteArraySubscriber::join($List* bytes) {
	$init(ResponseSubscribers$ByteArraySubscriber);
	$useLocalObjectStack();
	int32_t size = $Utils::remaining(bytes, $Integer::MAX_VALUE);
	$var($bytes, res, $new($bytes, size));
	int32_t from = 0;
	{
		$var($Iterator, i$, $nc(bytes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ByteBuffer, b, $cast($ByteBuffer, i$->next()));
			{
				int32_t l = $nc(b)->remaining();
				b->get(res, from, l);
				from += l;
			}
		}
	}
	return res;
}

void ResponseSubscribers$ByteArraySubscriber::onComplete() {
	$useLocalObjectStack();
	try {
		this->result->complete($($nc(this->finisher)->apply($(join(this->received)))));
		this->received->clear();
	} catch ($IllegalArgumentException& e) {
		this->result->completeExceptionally(e);
	}
}

$CompletionStage* ResponseSubscribers$ByteArraySubscriber::getBody() {
	return this->result;
}

void ResponseSubscribers$ByteArraySubscriber::onNext(Object$* items) {
	this->onNext($cast($List, items));
}

void ResponseSubscribers$ByteArraySubscriber::clinit$($Class* clazz) {
	$load($ResponseSubscribers);
	ResponseSubscribers$ByteArraySubscriber::$assertionsDisabled = !$ResponseSubscribers::class$->desiredAssertionStatus();
}

ResponseSubscribers$ByteArraySubscriber::ResponseSubscribers$ByteArraySubscriber() {
}

$Class* ResponseSubscribers$ByteArraySubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponseSubscribers$ByteArraySubscriber, $assertionsDisabled)},
		{"finisher", "Ljava/util/function/Function;", "Ljava/util/function/Function<[BTT;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$ByteArraySubscriber, finisher)},
		{"result", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TT;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$ByteArraySubscriber, result)},
		{"received", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$ByteArraySubscriber, received)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$ByteArraySubscriber, subscription)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;)V", "(Ljava/util/function/Function<[BTT;>;)V", $PUBLIC, $method(ResponseSubscribers$ByteArraySubscriber, init$, void, $Function*)},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<TT;>;", $PUBLIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, getBody, $CompletionStage*)},
		{"join", "(Ljava/util/List;)[B", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)[B", $PRIVATE | $STATIC, $staticMethod(ResponseSubscribers$ByteArraySubscriber, join, $bytes*, $List*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$ByteArraySubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$ByteArraySubscriber", "jdk.internal.net.http.ResponseSubscribers", "ByteArraySubscriber", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$ByteArraySubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$ByteArraySubscriber, name, initialize, &classInfo$$, ResponseSubscribers$ByteArraySubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$ByteArraySubscriber);
	});
	return class$;
}

$Class* ResponseSubscribers$ByteArraySubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk