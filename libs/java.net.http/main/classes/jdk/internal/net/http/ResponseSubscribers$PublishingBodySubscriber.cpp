#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$1.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $ResponseSubscribers = ::jdk::internal::net::http::ResponseSubscribers;
using $ResponseSubscribers$PublishingBodySubscriber$1 = ::jdk::internal::net::http::ResponseSubscribers$PublishingBodySubscriber$1;
using $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef = ::jdk::internal::net::http::ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;
using $ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef = ::jdk::internal::net::http::ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef;
using $Log = ::jdk::internal::net::http::common::Log;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0 : public $Function {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Function)
public:
	void init$(ResponseSubscribers$PublishingBodySubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* s) override {
		return $nc(inst$)->lambda$new$0($cast($Flow$Subscription, s));
	}
	ResponseSubscribers$PublishingBodySubscriber* inst$ = nullptr;
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, init$, void, ResponseSubscribers$PublishingBodySubscriber*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0::class$ = nullptr;

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1 : public $BiConsumer {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(ResponseSubscribers$PublishingBodySubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* r, Object$* t) override {
		$nc(inst$)->lambda$new$2($cast($Void, r), $cast($Throwable, t));
	}
	ResponseSubscribers$PublishingBodySubscriber* inst$ = nullptr;
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, init$, void, ResponseSubscribers$PublishingBodySubscriber*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1::class$ = nullptr;

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2 : public $Consumer {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ResponseSubscribers$PublishingBodySubscriber* inst, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* ref) {
		$set(this, inst$, inst);
		$set(this, ref, ref);
	}
	virtual void accept(Object$* s) override {
		$nc(inst$)->lambda$subscribe$3(ref, $cast($Flow$Subscription, s));
	}
	ResponseSubscribers$PublishingBodySubscriber* inst$ = nullptr;
	$ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* ref = nullptr;
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, inst$)},
		{"ref", "Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, init$, void, ResponseSubscribers$PublishingBodySubscriber*, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2::class$ = nullptr;

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3 : public $Consumer {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* s) override {
		ResponseSubscribers$PublishingBodySubscriber::lambda$onNext$4($cast($Flow$Subscription, s));
	}
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3::class$ = nullptr;

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4 : public $Consumer {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ResponseSubscribers$PublishingBodySubscriber* inst, $Throwable* t) {
		$set(this, inst$, inst);
		$set(this, t, t);
	}
	virtual void accept(Object$* s) override {
		$nc(inst$)->lambda$new$1(t, $cast($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, s));
	}
	ResponseSubscribers$PublishingBodySubscriber* inst$ = nullptr;
	$Throwable* t = nullptr;
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, inst$)},
		{"t", "Ljava/lang/Throwable;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, init$, void, ResponseSubscribers$PublishingBodySubscriber*, $Throwable*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4::class$ = nullptr;

class ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5 : public $Flow$Publisher {
	$class(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, $NO_CLASS_INIT, $Flow$Publisher)
public:
	void init$(ResponseSubscribers$PublishingBodySubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void subscribe($Flow$Subscriber* subscriber) override {
		$nc(inst$)->subscribe(subscriber);
	}
	ResponseSubscribers$PublishingBodySubscriber* inst$ = nullptr;
};
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, init$, void, ResponseSubscribers$PublishingBodySubscriber*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5",
		"java.lang.Object",
		"java.util.concurrent.Flow$Publisher",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5);
	});
	return class$;
}
$Class* ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5::class$ = nullptr;

bool ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled = false;

void ResponseSubscribers$PublishingBodySubscriber::init$() {
	$useLocalObjectStack();
	$set(this, subscriptionCF, $new($MinimalFuture));
	$set(this, subscribedCF, $new($MinimalFuture));
	$set(this, subscriberRef, $new($AtomicReference));
	$set(this, body, this->subscriptionCF->thenCompose($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0, this)));
	$set(this, subscribed, $new($AtomicBoolean));
	$set(this, completionCF, $new($MinimalFuture));
	this->completionCF->whenComplete($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1, this));
}

void ResponseSubscribers$PublishingBodySubscriber::complete($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* ref, $Throwable* t) {
	if (!ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled && !(ref != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($Flow$Subscriber, s, $nc(ref)->clear());
	if (s == nullptr) {
		return;
	}
	if (t == nullptr) {
		try {
			$nc(s)->onComplete();
		} catch ($Throwable& x) {
			$nc(s)->onError(x);
		}
	} else {
		$nc(s)->onError(t);
	}
}

void ResponseSubscribers$PublishingBodySubscriber::signalError($Throwable* err$renamed) {
	$var($Throwable, err, err$renamed);
	if (err == nullptr) {
		$assign(err, $new($NullPointerException, "null throwable"_s));
	}
	this->completionCF->completeExceptionally(err);
}

void ResponseSubscribers$PublishingBodySubscriber::signalComplete() {
	this->completionCF->complete(nullptr);
}

void ResponseSubscribers$PublishingBodySubscriber::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$Objects::requireNonNull(subscriber, "subscriber must not be null"_s);
	$var($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, ref, $new($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, subscriber));
	if ($nc(this->subscriberRef)->compareAndSet(nullptr, ref)) {
		this->subscriptionCF->thenAccept($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2, this, ref));
	} else {
		$nc(subscriber)->onSubscribe($$new($ResponseSubscribers$PublishingBodySubscriber$1, this));
		subscriber->onError($$new($IllegalStateException, "This publisher has already one subscriber"_s));
	}
}

void ResponseSubscribers$PublishingBodySubscriber::onSubscribe($Flow$Subscription* subscription) {
	$Objects::requireNonNull(subscription);
	if (!this->subscribed->compareAndSet(false, true)) {
		subscription->cancel();
	} else {
		this->subscriptionCF->complete(subscription);
	}
}

void ResponseSubscribers$PublishingBodySubscriber::onNext($List* item) {
	$useLocalObjectStack();
	$Objects::requireNonNull(item);
	try {
		if (!ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled && !this->subscriptionCF->isDone()) {
			$throwNew($AssertionError);
		}
		$var($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, ref, $cast($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef, $nc(this->subscriberRef)->get()));
		if (!ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled && !(ref != nullptr)) {
			$throwNew($AssertionError);
		}
		$var($Flow$Subscriber, subscriber, $nc(ref)->get());
		if (subscriber != nullptr) {
			subscriber->onNext(item);
		}
	} catch ($Throwable& err) {
		signalError(err);
		this->subscriptionCF->thenAccept($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3));
	}
}

void ResponseSubscribers$PublishingBodySubscriber::onError($Throwable* throwable) {
	if (!ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled && !suppress(this->subscriptionCF->isDone(), "onError called before onSubscribe"_s, throwable)) {
		$throwNew($AssertionError);
	}
	signalError(throwable);
	$Objects::requireNonNull(throwable);
}

void ResponseSubscribers$PublishingBodySubscriber::onComplete() {
	if (!this->subscriptionCF->isDone()) {
		signalError($$new($InternalError, "onComplete called before onSubscribed"_s));
	} else {
		signalComplete();
	}
}

$CompletionStage* ResponseSubscribers$PublishingBodySubscriber::getBody() {
	return this->body;
}

bool ResponseSubscribers$PublishingBodySubscriber::suppress(bool condition, $String* assertion, $Throwable* carrier) {
	$useLocalObjectStack();
	if (!condition) {
		if (carrier != nullptr) {
			carrier->addSuppressed($$new($AssertionError, $of(assertion)));
		} else if ($Log::errors()) {
			$Log::logError($$new($AssertionError, $of(assertion)));
		}
	}
	return true;
}

void ResponseSubscribers$PublishingBodySubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

void ResponseSubscribers$PublishingBodySubscriber::lambda$onNext$4($Flow$Subscription* s) {
	$init(ResponseSubscribers$PublishingBodySubscriber);
	$nc(s)->cancel();
}

void ResponseSubscribers$PublishingBodySubscriber::lambda$subscribe$3($ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* ref, $Flow$Subscription* s) {
	$useLocalObjectStack();
	$var($ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, subscription, $new($ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef, s, ref));
	try {
		subscription->subscribe();
		this->subscribedCF->complete(ref);
	} catch ($Throwable& t) {
		if ($Log::errors()) {
			$Log::logError($$str({"Failed to call onSubscribe: cancelling subscription: "_s, t}), $$new($ObjectArray, 0));
			$Log::logError(t);
		}
		subscription->cancel();
	}
}

void ResponseSubscribers$PublishingBodySubscriber::lambda$new$2($Void* r, $Throwable* t) {
	this->subscribedCF->thenAccept($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4, this, t));
}

void ResponseSubscribers$PublishingBodySubscriber::lambda$new$1($Throwable* t, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef* s) {
	complete(s, t);
}

$CompletionStage* ResponseSubscribers$PublishingBodySubscriber::lambda$new$0($Flow$Subscription* s) {
	return $MinimalFuture::completedFuture($$new(ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5, this));
}

void ResponseSubscribers$PublishingBodySubscriber::clinit$($Class* clazz) {
	$load($ResponseSubscribers);
	ResponseSubscribers$PublishingBodySubscriber::$assertionsDisabled = !$ResponseSubscribers::class$->desiredAssertionStatus();
}

ResponseSubscribers$PublishingBodySubscriber::ResponseSubscribers$PublishingBodySubscriber() {
}

$Class* ResponseSubscribers$PublishingBodySubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$2$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$subscribe$3$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$onNext$4$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$lambda$new$1$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5")) {
			return ResponseSubscribers$PublishingBodySubscriber$$Lambda$subscribe$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponseSubscribers$PublishingBodySubscriber, $assertionsDisabled)},
		{"subscriptionCF", "Ljdk/internal/net/http/common/MinimalFuture;", "Ljdk/internal/net/http/common/MinimalFuture<Ljava/util/concurrent/Flow$Subscription;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber, subscriptionCF)},
		{"subscribedCF", "Ljdk/internal/net/http/common/MinimalFuture;", "Ljdk/internal/net/http/common/MinimalFuture<Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber, subscribedCF)},
		{"subscriberRef", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;>;", $PRIVATE, $field(ResponseSubscribers$PublishingBodySubscriber, subscriberRef)},
		{"body", "Ljava/util/concurrent/CompletionStage;", "Ljava/util/concurrent/CompletionStage<Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber, body)},
		{"completionCF", "Ljdk/internal/net/http/common/MinimalFuture;", "Ljdk/internal/net/http/common/MinimalFuture<Ljava/lang/Void;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber, completionCF)},
		{"subscribed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PublishingBodySubscriber, subscribed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, init$, void)},
		{"complete", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, complete, void, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef*, $Throwable*)},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;>;", $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, getBody, $CompletionStage*)},
		{"lambda$new$0", "(Ljava/util/concurrent/Flow$Subscription;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PublishingBodySubscriber, lambda$new$0, $CompletionStage*, $Flow$Subscription*)},
		{"lambda$new$1", "(Ljava/lang/Throwable;Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PublishingBodySubscriber, lambda$new$1, void, $Throwable*, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef*)},
		{"lambda$new$2", "(Ljava/lang/Void;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PublishingBodySubscriber, lambda$new$2, void, $Void*, $Throwable*)},
		{"lambda$onNext$4", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ResponseSubscribers$PublishingBodySubscriber, lambda$onNext$4, void, $Flow$Subscription*)},
		{"lambda$subscribe$3", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$SubscriberRef;Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PublishingBodySubscriber, lambda$subscribe$3, void, $ResponseSubscribers$PublishingBodySubscriber$SubscriberRef*, $Flow$Subscription*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber, onSubscribe, void, $Flow$Subscription*)},
		{"signalComplete", "()V", nullptr, $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, signalComplete, void)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, signalError, void, $Throwable*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, subscribe, void, $Flow$Subscriber*)},
		{"suppress", "(ZLjava/lang/String;Ljava/lang/Throwable;)Z", nullptr, $PRIVATE, $method(ResponseSubscribers$PublishingBodySubscriber, suppress, bool, bool, $String*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "jdk.internal.net.http.ResponseSubscribers", "PublishingBodySubscriber", $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriptionRef", "jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "SubscriptionRef", $STATIC | $FINAL},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$SubscriberRef", "jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "SubscriberRef", $STATIC | $FINAL},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$1", nullptr, nullptr, 0},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<Ljava/util/concurrent/Flow$Publisher<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber, name, initialize, &classInfo$$, ResponseSubscribers$PublishingBodySubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber);
	});
	return class$;
}

$Class* ResponseSubscribers$PublishingBodySubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk