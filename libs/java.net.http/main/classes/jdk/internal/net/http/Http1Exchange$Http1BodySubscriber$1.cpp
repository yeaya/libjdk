#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber$1.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Http1Exchange$Http1BodySubscriber = ::jdk::internal::net::http::Http1Exchange$Http1BodySubscriber;
using $Logger = ::jdk::internal::net::http::common::Logger;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Exchange$Http1BodySubscriber$1::init$($Logger* debug) {
	$Http1Exchange$Http1BodySubscriber::init$(debug);
}

void Http1Exchange$Http1BodySubscriber$1::onSubscribe($Flow$Subscription* subscription) {
	error();
}

void Http1Exchange$Http1BodySubscriber$1::onNext($ByteBuffer* item) {
	error();
}

void Http1Exchange$Http1BodySubscriber$1::onError($Throwable* throwable) {
	error();
}

void Http1Exchange$Http1BodySubscriber$1::onComplete() {
	error();
}

$String* Http1Exchange$Http1BodySubscriber$1::currentStateMessage() {
	return nullptr;
}

void Http1Exchange$Http1BodySubscriber$1::error() {
	$throwNew($InternalError, "should not reach here"_s);
}

void Http1Exchange$Http1BodySubscriber$1::onNext(Object$* item) {
	this->onNext($cast($ByteBuffer, item));
}

Http1Exchange$Http1BodySubscriber$1::Http1Exchange$Http1BodySubscriber$1() {
}

$Class* Http1Exchange$Http1BodySubscriber$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/Logger;)V", nullptr, 0, $method(Http1Exchange$Http1BodySubscriber$1, init$, void, $Logger*)},
		{"currentStateMessage", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, currentStateMessage, $String*)},
		{"error", "()V", nullptr, $PRIVATE, $method(Http1Exchange$Http1BodySubscriber$1, error, void)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, onError, void, $Throwable*)},
		{"onNext", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, onNext, void, $ByteBuffer*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1BodySubscriber$1, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber",
		"completeSubscriber",
		"(Ljdk/internal/net/http/common/Logger;)Ljdk/internal/net/http/Http1Exchange$Http1BodySubscriber;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber", "jdk.internal.net.http.Http1Exchange", "Http1BodySubscriber", $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber$1",
		"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$Http1BodySubscriber$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$Http1BodySubscriber$1);
	});
	return class$;
}

$Class* Http1Exchange$Http1BodySubscriber$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk