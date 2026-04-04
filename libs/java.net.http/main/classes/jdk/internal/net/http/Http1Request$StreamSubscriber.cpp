#include <jdk/internal/net/http/Http1Request$StreamSubscriber.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/Http1Request.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

#undef COMPLETED
#undef CRLF
#undef EMPTY_CHUNK_BYTES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ArrayList = ::java::util::ArrayList;
using $Objects = ::java::util::Objects;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Http1Exchange$Http1BodySubscriber = ::jdk::internal::net::http::Http1Exchange$Http1BodySubscriber;
using $Http1Request = ::jdk::internal::net::http::Http1Request;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Request$StreamSubscriber::init$($Http1Request* this$0) {
	$set(this, this$0, this$0);
	$Http1Exchange$Http1BodySubscriber::init$(this$0->debug);
}

void Http1Request$StreamSubscriber::onSubscribe($Flow$Subscription* subscription) {
	if (isSubscribed()) {
		$var($Throwable, t, $new($IllegalStateException, "already subscribed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		setSubscription(subscription);
	}
}

void Http1Request$StreamSubscriber::onNext($ByteBuffer* item) {
	$useLocalObjectStack();
	$Objects::requireNonNull(item);
	if (this->complete) {
		$var($Throwable, t, $new($IllegalStateException, "subscription already completed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		int32_t chunklen = item->remaining();
		$var($ArrayList, l, $new($ArrayList, 3));
		l->add($($Http1Request::getHeader(chunklen)));
		l->add(item);
		l->add($($ByteBuffer::wrap($Http1Request::CRLF)));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(l);
	}
}

$String* Http1Request$StreamSubscriber::currentStateMessage() {
	return $str({"streaming request body "_s, (this->complete ? "complete"_s : "incomplete"_s)});
}

void Http1Request$StreamSubscriber::onError($Throwable* throwable) {
	if (this->complete) {
		return;
	}
	cancelSubscription();
	$nc(this->this$0->http1Exchange)->appendToOutgoing(throwable);
}

void Http1Request$StreamSubscriber::onComplete() {
	$useLocalObjectStack();
	if (this->complete) {
		$var($Throwable, t, $new($IllegalStateException, "subscription already completed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		$var($ArrayList, l, $new($ArrayList, 2));
		$init($Http1Request);
		l->add($($ByteBuffer::wrap($Http1Request::EMPTY_CHUNK_BYTES)));
		l->add($($ByteBuffer::wrap($Http1Request::CRLF)));
		this->complete = true;
		$nc(this->this$0->http1Exchange)->appendToOutgoing(l);
		$init($Http1Exchange$Http1BodySubscriber);
		this->this$0->http1Exchange->appendToOutgoing($Http1Exchange$Http1BodySubscriber::COMPLETED);
		this->this$0->setFinished();
	}
}

void Http1Request$StreamSubscriber::onNext(Object$* item) {
	this->onNext($cast($ByteBuffer, item));
}

Http1Request$StreamSubscriber::Http1Request$StreamSubscriber() {
}

$Class* Http1Request$StreamSubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Http1Request;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Request$StreamSubscriber, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Request;)V", nullptr, 0, $method(Http1Request$StreamSubscriber, init$, void, $Http1Request*)},
		{"currentStateMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Http1Request$StreamSubscriber, currentStateMessage, $String*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Request$StreamSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Http1Request$StreamSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Http1Request$StreamSubscriber, onNext, void, $ByteBuffer*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Request$StreamSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(Http1Request$StreamSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Request$StreamSubscriber", "jdk.internal.net.http.Http1Request", "StreamSubscriber", $FINAL},
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber", "jdk.internal.net.http.Http1Exchange", "Http1BodySubscriber", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Request$StreamSubscriber",
		"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Request"
	};
	$loadClass(Http1Request$StreamSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Request$StreamSubscriber);
	});
	return class$;
}

$Class* Http1Request$StreamSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk