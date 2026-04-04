#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber$1.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jcpp.h>

#undef COMPLETED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Http1Exchange = ::jdk::internal::net::http::Http1Exchange;
using $Http1Exchange$Http1BodySubscriber$1 = ::jdk::internal::net::http::Http1Exchange$Http1BodySubscriber$1;
using $Log = ::jdk::internal::net::http::common::Log;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool Http1Exchange$Http1BodySubscriber::$assertionsDisabled = false;
$List* Http1Exchange$Http1BodySubscriber::COMPLETED = nullptr;

void Http1Exchange$Http1BodySubscriber::init$($Logger* debug) {
	$set(this, whenSubscribed, $new($MinimalFuture));
	if (!Http1Exchange$Http1BodySubscriber::$assertionsDisabled && !(debug != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, debug, debug);
}

void Http1Exchange$Http1BodySubscriber::request(int64_t n) {
	$useLocalObjectStack();
	if ($nc(this->debug)->on()) {
		this->debug->log("Http1BodySubscriber requesting %d, from %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(n)),
			this->subscription
		}));
	}
	$nc(this->subscription)->request(n);
}

bool Http1Exchange$Http1BodySubscriber::isSubscribed() {
	return this->subscription != nullptr;
}

void Http1Exchange$Http1BodySubscriber::setSubscription($Flow$Subscription* subscription) {
	$set(this, subscription, subscription);
	this->whenSubscribed->complete(subscription);
}

void Http1Exchange$Http1BodySubscriber::cancelSubscription() {
	$useLocalObjectStack();
	try {
		$nc(this->subscription)->cancel();
	} catch ($Throwable& t) {
		$var($String, msg, "Ignoring exception raised when canceling BodyPublisher subscription"_s);
		if ($nc(this->debug)->on()) {
			this->debug->log("%s: %s"_s, $$new($ObjectArray, {
				msg,
				t
			}));
		}
		$Log::logError("{0}: {1}"_s, $$new($ObjectArray, {
			msg,
			$of(t)
		}));
	}
}

Http1Exchange$Http1BodySubscriber* Http1Exchange$Http1BodySubscriber::completeSubscriber($Logger* debug) {
	$init(Http1Exchange$Http1BodySubscriber);
	return $new($Http1Exchange$Http1BodySubscriber$1, debug);
}

void Http1Exchange$Http1BodySubscriber::clinit$($Class* clazz) {
	$load($Http1Exchange);
	Http1Exchange$Http1BodySubscriber::$assertionsDisabled = !$Http1Exchange::class$->desiredAssertionStatus();
	$assignStatic(Http1Exchange$Http1BodySubscriber::COMPLETED, $List::of($($ByteBuffer::allocate(0))));
}

Http1Exchange$Http1BodySubscriber::Http1Exchange$Http1BodySubscriber() {
}

$Class* Http1Exchange$Http1BodySubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Exchange$Http1BodySubscriber, $assertionsDisabled)},
		{"whenSubscribed", "Ljdk/internal/net/http/common/MinimalFuture;", "Ljdk/internal/net/http/common/MinimalFuture<Ljava/util/concurrent/Flow$Subscription;>;", $FINAL, $field(Http1Exchange$Http1BodySubscriber, whenSubscribed)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(Http1Exchange$Http1BodySubscriber, subscription)},
		{"complete", "Z", nullptr, $VOLATILE, $field(Http1Exchange$Http1BodySubscriber, complete)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $FINAL, $field(Http1Exchange$Http1BodySubscriber, debug)},
		{"COMPLETED", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $STATIC | $FINAL, $staticField(Http1Exchange$Http1BodySubscriber, COMPLETED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/Logger;)V", nullptr, 0, $method(Http1Exchange$Http1BodySubscriber, init$, void, $Logger*)},
		{"cancelSubscription", "()V", nullptr, $FINAL, $method(Http1Exchange$Http1BodySubscriber, cancelSubscription, void)},
		{"completeSubscriber", "(Ljdk/internal/net/http/common/Logger;)Ljdk/internal/net/http/Http1Exchange$Http1BodySubscriber;", nullptr, $STATIC, $staticMethod(Http1Exchange$Http1BodySubscriber, completeSubscriber, Http1Exchange$Http1BodySubscriber*, $Logger*)},
		{"currentStateMessage", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(Http1Exchange$Http1BodySubscriber, currentStateMessage, $String*)},
		{"isSubscribed", "()Z", nullptr, $FINAL, $method(Http1Exchange$Http1BodySubscriber, isSubscribed, bool)},
		{"request", "(J)V", nullptr, $FINAL, $method(Http1Exchange$Http1BodySubscriber, request, void, int64_t)},
		{"setSubscription", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $FINAL, $method(Http1Exchange$Http1BodySubscriber, setSubscription, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber", "jdk.internal.net.http.Http1Exchange", "Http1BodySubscriber", $STATIC | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$Http1BodySubscriber, name, initialize, &classInfo$$, Http1Exchange$Http1BodySubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$Http1BodySubscriber);
	});
	return class$;
}

$Class* Http1Exchange$Http1BodySubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk