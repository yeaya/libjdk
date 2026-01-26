#include <jdk/internal/net/http/Http1Response$Http1BodySubscriber.h>

#include <java/lang/AssertionError.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jdk/internal/net/http/Http1Response.h>
#include <jdk/internal/net/http/ResponseSubscribers$TrustedSubscriber.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef NOP

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;
using $List = ::java::util::List;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Http1Response = ::jdk::internal::net::http::Http1Response;
using $ResponseSubscribers$TrustedSubscriber = ::jdk::internal::net::http::ResponseSubscribers$TrustedSubscriber;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _Http1Response$Http1BodySubscriber_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Response$Http1BodySubscriber, $assertionsDisabled)},
	{"userSubscriber", "Ljava/net/http/HttpResponse$BodySubscriber;", "Ljava/net/http/HttpResponse$BodySubscriber<TU;>;", $FINAL, $field(Http1Response$Http1BodySubscriber, userSubscriber)},
	{"completed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(Http1Response$Http1BodySubscriber, completed)},
	{"withError", "Ljava/lang/Throwable;", nullptr, $VOLATILE, $field(Http1Response$Http1BodySubscriber, withError)},
	{"subscribed", "Z", nullptr, $VOLATILE, $field(Http1Response$Http1BodySubscriber, subscribed)},
	{}
};

$MethodInfo _Http1Response$Http1BodySubscriber_MethodInfo_[] = {
	{"<init>", "(Ljava/net/http/HttpResponse$BodySubscriber;)V", "(Ljava/net/http/HttpResponse$BodySubscriber<TU;>;)V", 0, $method(Http1Response$Http1BodySubscriber, init$, void, $HttpResponse$BodySubscriber*)},
	{"complete", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(Http1Response$Http1BodySubscriber, complete, void, $Throwable*)},
	{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<TU;>;", $PUBLIC, $virtualMethod(Http1Response$Http1BodySubscriber, getBody, $CompletionStage*)},
	{"needsExecutor", "()Z", nullptr, $PUBLIC, $virtualMethod(Http1Response$Http1BodySubscriber, needsExecutor, bool)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Response$Http1BodySubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Http1Response$Http1BodySubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(Http1Response$Http1BodySubscriber, onNext, void, $List*)},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Response$Http1BodySubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(Http1Response$Http1BodySubscriber, onSubscribe, void, $Flow$Subscription*)},
	{"propagateError", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(Http1Response$Http1BodySubscriber, propagateError, void, $Throwable*)},
	{}
};

$InnerClassInfo _Http1Response$Http1BodySubscriber_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.Http1Response$Http1BodySubscriber", "jdk.internal.net.http.Http1Response", "Http1BodySubscriber", $STATIC | $FINAL},
	{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Http1Response$Http1BodySubscriber_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.Http1Response$Http1BodySubscriber",
	"java.lang.Object",
	"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
	_Http1Response$Http1BodySubscriber_FieldInfo_,
	_Http1Response$Http1BodySubscriber_MethodInfo_,
	"<U:Ljava/lang/Object;>Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<TU;>;",
	nullptr,
	_Http1Response$Http1BodySubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.Http1Response"
};

$Object* allocate$Http1Response$Http1BodySubscriber($Class* clazz) {
	return $of($alloc(Http1Response$Http1BodySubscriber));
}

bool Http1Response$Http1BodySubscriber::$assertionsDisabled = false;

void Http1Response$Http1BodySubscriber::init$($HttpResponse$BodySubscriber* userSubscriber) {
	$set(this, completed, $new($AtomicBoolean));
	$set(this, userSubscriber, userSubscriber);
}

bool Http1Response$Http1BodySubscriber::needsExecutor() {
	return $ResponseSubscribers$TrustedSubscriber::needsExecutor(this->userSubscriber);
}

void Http1Response$Http1BodySubscriber::propagateError($Throwable* t) {
	if (!Http1Response$Http1BodySubscriber::$assertionsDisabled && !(t != nullptr)) {
		$throwNew($AssertionError);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->subscribed == false) {
				this->subscribed = true;
				$init($Http1Response);
				$nc(this->userSubscriber)->onSubscribe($Http1Response::NOP);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->userSubscriber)->onError(t);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Http1Response$Http1BodySubscriber::complete($Throwable* t$renamed) {
	$var($Throwable, t, t$renamed);
	if ($nc(this->completed)->compareAndSet(false, true)) {
		$assign(t, ($set(this, withError, $Utils::getCompletionCause(t))));
		if (t == nullptr) {
			if (!Http1Response$Http1BodySubscriber::$assertionsDisabled && !this->subscribed) {
				$throwNew($AssertionError);
			}
			try {
				$nc(this->userSubscriber)->onComplete();
			} catch ($Throwable& x) {
				propagateError($assign(t, ($set(this, withError, $Utils::getCompletionCause(x)))));
			}
		} else {
			propagateError(t);
		}
	}
}

$CompletionStage* Http1Response$Http1BodySubscriber::getBody() {
	return $nc(this->userSubscriber)->getBody();
}

void Http1Response$Http1BodySubscriber::onSubscribe($Flow$Subscription* subscription) {
	if (!this->subscribed) {
		this->subscribed = true;
		$nc(this->userSubscriber)->onSubscribe(subscription);
	} else if (!Http1Response$Http1BodySubscriber::$assertionsDisabled && !$nc(this->completed)->get()) {
		$throwNew($AssertionError);
	}
}

void Http1Response$Http1BodySubscriber::onNext($List* item) {
	if (!Http1Response$Http1BodySubscriber::$assertionsDisabled && ! !$nc(this->completed)->get()) {
		$throwNew($AssertionError);
	}
	$nc(this->userSubscriber)->onNext(item);
}

void Http1Response$Http1BodySubscriber::onError($Throwable* throwable) {
	complete(throwable);
}

void Http1Response$Http1BodySubscriber::onComplete() {
	complete(nullptr);
}

void Http1Response$Http1BodySubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

void clinit$Http1Response$Http1BodySubscriber($Class* class$) {
	$load($Http1Response);
	Http1Response$Http1BodySubscriber::$assertionsDisabled = !$Http1Response::class$->desiredAssertionStatus();
}

Http1Response$Http1BodySubscriber::Http1Response$Http1BodySubscriber() {
}

$Class* Http1Response$Http1BodySubscriber::load$($String* name, bool initialize) {
	$loadClass(Http1Response$Http1BodySubscriber, name, initialize, &_Http1Response$Http1BodySubscriber_ClassInfo_, clinit$Http1Response$Http1BodySubscriber, allocate$Http1Response$Http1BodySubscriber);
	return class$;
}

$Class* Http1Response$Http1BodySubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk