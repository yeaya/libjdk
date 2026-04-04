#include <jdk/internal/net/http/LineSubscriberAdapter.h>
#include <java/nio/charset/Charset.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/LineSubscriberAdapter$LineSubscription.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Function = ::java::util::function::Function;
using $LineSubscriberAdapter$LineSubscription = ::jdk::internal::net::http::LineSubscriberAdapter$LineSubscription;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void LineSubscriberAdapter::init$($Flow$Subscriber* subscriber, $Function* finisher, $Charset* charset, $String* eol) {
	$set(this, cf, $new($MinimalFuture));
	$set(this, subscribed, $new($AtomicBoolean));
	if (eol != nullptr && eol->isEmpty()) {
		$throwNew($IllegalArgumentException, "empty line separator"_s);
	}
	$set(this, subscriber, $cast($Flow$Subscriber, $Objects::requireNonNull(subscriber)));
	$set(this, finisher, $cast($Function, $Objects::requireNonNull(finisher)));
	$set(this, charset, $cast($Charset, $Objects::requireNonNull(charset)));
	$set(this, eol, eol);
}

void LineSubscriberAdapter::onSubscribe($Flow$Subscription* subscription) {
	$Objects::requireNonNull(subscription);
	if (!this->subscribed->compareAndSet(false, true)) {
		subscription->cancel();
		return;
	}
	$set(this, downstream, $LineSubscriberAdapter$LineSubscription::create(subscription, this->charset, this->eol, this->subscriber, this->cf));
	$nc(this->subscriber)->onSubscribe(this->downstream);
}

void LineSubscriberAdapter::onNext($List* item) {
	$Objects::requireNonNull(item);
	try {
		$nc(this->downstream)->submit(item);
	} catch ($Throwable& t) {
		onError(t);
	}
}

void LineSubscriberAdapter::onError($Throwable* throwable) {
	$Objects::requireNonNull(throwable);
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->downstream)->signalError(throwable);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->cf->completeExceptionally(throwable);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void LineSubscriberAdapter::onComplete() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->downstream)->signalComplete();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->cf->complete($($nc(this->finisher)->apply(this->subscriber)));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$CompletionStage* LineSubscriberAdapter::getBody() {
	return this->cf;
}

LineSubscriberAdapter* LineSubscriberAdapter::create($Flow$Subscriber* subscriber, $Function* finisher, $Charset* charset, $String* eol) {
	$init(LineSubscriberAdapter);
	$useLocalObjectStack();
	if (eol != nullptr && eol->isEmpty()) {
		$throwNew($IllegalArgumentException, "empty line separator"_s);
	}
	$var($Flow$Subscriber, var$0, $cast($Flow$Subscriber, $Objects::requireNonNull(subscriber)));
	$var($Function, var$1, $cast($Function, $Objects::requireNonNull(finisher)));
	return $new(LineSubscriberAdapter, var$0, var$1, $cast($Charset, $Objects::requireNonNull(charset)), eol);
}

void LineSubscriberAdapter::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

LineSubscriberAdapter::LineSubscriberAdapter() {
}

$Class* LineSubscriberAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cf", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TR;>;", $PRIVATE | $FINAL, $field(LineSubscriberAdapter, cf)},
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", "TS;", $PRIVATE | $FINAL, $field(LineSubscriberAdapter, subscriber)},
		{"finisher", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TS;+TR;>;", $PRIVATE | $FINAL, $field(LineSubscriberAdapter, finisher)},
		{"charset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $FINAL, $field(LineSubscriberAdapter, charset)},
		{"eol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LineSubscriberAdapter, eol)},
		{"subscribed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(LineSubscriberAdapter, subscribed)},
		{"downstream", "Ljdk/internal/net/http/LineSubscriberAdapter$LineSubscription;", nullptr, $PRIVATE | $VOLATILE, $field(LineSubscriberAdapter, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/nio/charset/Charset;Ljava/lang/String;)V", "(TS;Ljava/util/function/Function<-TS;+TR;>;Ljava/nio/charset/Charset;Ljava/lang/String;)V", $PRIVATE, $method(LineSubscriberAdapter, init$, void, $Flow$Subscriber*, $Function*, $Charset*, $String*)},
		{"create", "(Ljava/util/concurrent/Flow$Subscriber;Ljava/util/function/Function;Ljava/nio/charset/Charset;Ljava/lang/String;)Ljdk/internal/net/http/LineSubscriberAdapter;", "<S::Ljava/util/concurrent/Flow$Subscriber<-Ljava/lang/String;>;R:Ljava/lang/Object;>(TS;Ljava/util/function/Function<-TS;+TR;>;Ljava/nio/charset/Charset;Ljava/lang/String;)Ljdk/internal/net/http/LineSubscriberAdapter<TS;TR;>;", $PUBLIC | $STATIC, $staticMethod(LineSubscriberAdapter, create, LineSubscriberAdapter*, $Flow$Subscriber*, $Function*, $Charset*, $String*)},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<TR;>;", $PUBLIC, $virtualMethod(LineSubscriberAdapter, getBody, $CompletionStage*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(LineSubscriberAdapter, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(LineSubscriberAdapter, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(LineSubscriberAdapter, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LineSubscriberAdapter, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(LineSubscriberAdapter, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpResponse$BodySubscriber", "java.net.http.HttpResponse", "BodySubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.LineSubscriberAdapter$LineSubscription", "jdk.internal.net.http.LineSubscriberAdapter", "LineSubscription", $STATIC | $FINAL},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.LineSubscriberAdapter",
		"java.lang.Object",
		"java.net.http.HttpResponse$BodySubscriber",
		fieldInfos$$,
		methodInfos$$,
		"<S::Ljava/util/concurrent/Flow$Subscriber<-Ljava/lang/String;>;R:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/http/HttpResponse$BodySubscriber<TR;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.LineSubscriberAdapter$LineSubscription"
	};
	$loadClass(LineSubscriberAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineSubscriberAdapter);
	});
	return class$;
}

$Class* LineSubscriberAdapter::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk