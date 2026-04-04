#include <jdk/internal/net/http/Http1Request$FixedContentSubscriber.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1BodySubscriber.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/Http1Request.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

#undef COMPLETED

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Http1Exchange$Http1BodySubscriber = ::jdk::internal::net::http::Http1Exchange$Http1BodySubscriber;
using $Http1Request = ::jdk::internal::net::http::Http1Request;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Request$FixedContentSubscriber::init$($Http1Request* this$0) {
	$set(this, this$0, this$0);
	$Http1Exchange$Http1BodySubscriber::init$(this$0->debug);
}

void Http1Request$FixedContentSubscriber::onSubscribe($Flow$Subscription* subscription) {
	if (isSubscribed()) {
		$var($Throwable, t, $new($IllegalStateException, "already subscribed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		setSubscription(subscription);
	}
}

void Http1Request$FixedContentSubscriber::onNext($ByteBuffer* item) {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("onNext"_s);
	}
	$Objects::requireNonNull(item);
	if (this->complete) {
		$var($Throwable, t, $new($IllegalStateException, "subscription already completed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		int64_t writing = item->remaining();
		int64_t written = (this->contentWritten += writing);
		if (written > this->this$0->contentLength) {
			cancelSubscription();
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($($nc(this->this$0->connection)->getConnectionFlow()));
			var$0->append(" ["_s);
			var$0->append($($($Thread::currentThread())->getName()));
			var$0->append("] Too many bytes in request body. Expected: "_s);
			var$0->append(this->this$0->contentLength);
			var$0->append(", got: "_s);
			var$0->append(written);
			$var($String, msg, $str(var$0));
			$nc(this->this$0->http1Exchange)->appendToOutgoing($$new($IOException, msg));
		} else {
			$nc(this->this$0->http1Exchange)->appendToOutgoing($($List::of(item)));
		}
	}
}

$String* Http1Request$FixedContentSubscriber::currentStateMessage() {
	$useLocalObjectStack();
	return $String::format("fixed content-length: %d, bytes sent: %d"_s, $$new($ObjectArray, {
		$($Long::valueOf(this->this$0->contentLength)),
		$($Long::valueOf(this->contentWritten))
	}));
}

void Http1Request$FixedContentSubscriber::onError($Throwable* throwable) {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("onError"_s);
	}
	if (this->complete) {
		return;
	}
	cancelSubscription();
	$nc(this->this$0->http1Exchange)->appendToOutgoing(throwable);
}

void Http1Request$FixedContentSubscriber::onComplete() {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("onComplete"_s);
	}
	if (this->complete) {
		$var($Throwable, t, $new($IllegalStateException, "subscription already completed"_s));
		$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
	} else {
		this->complete = true;
		int64_t written = this->contentWritten;
		if (this->this$0->contentLength > written) {
			cancelSubscription();
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($($nc(this->this$0->connection)->getConnectionFlow()));
			var$0->append(" ["_s);
			var$0->append($($($Thread::currentThread())->getName()));
			var$0->append("] Too few bytes returned by the publisher ("_s);
			var$0->append(written);
			var$0->append("/"_s);
			var$0->append(this->this$0->contentLength);
			var$0->append(")"_s);
			$var($Throwable, t, $new($IOException, $$str(var$0)));
			$nc(this->this$0->http1Exchange)->appendToOutgoing(t);
		} else {
			$init($Http1Exchange$Http1BodySubscriber);
			$nc(this->this$0->http1Exchange)->appendToOutgoing($Http1Exchange$Http1BodySubscriber::COMPLETED);
		}
	}
}

void Http1Request$FixedContentSubscriber::onNext(Object$* item) {
	this->onNext($cast($ByteBuffer, item));
}

Http1Request$FixedContentSubscriber::Http1Request$FixedContentSubscriber() {
}

$Class* Http1Request$FixedContentSubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Http1Request;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Request$FixedContentSubscriber, this$0)},
		{"contentWritten", "J", nullptr, $PRIVATE | $VOLATILE, $field(Http1Request$FixedContentSubscriber, contentWritten)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Request;)V", nullptr, 0, $method(Http1Request$FixedContentSubscriber, init$, void, $Http1Request*)},
		{"currentStateMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Http1Request$FixedContentSubscriber, currentStateMessage, $String*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Request$FixedContentSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Http1Request$FixedContentSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Http1Request$FixedContentSubscriber, onNext, void, $ByteBuffer*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Request$FixedContentSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(Http1Request$FixedContentSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Request$FixedContentSubscriber", "jdk.internal.net.http.Http1Request", "FixedContentSubscriber", $FINAL},
		{"jdk.internal.net.http.Http1Exchange$Http1BodySubscriber", "jdk.internal.net.http.Http1Exchange", "Http1BodySubscriber", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Request$FixedContentSubscriber",
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
	$loadClass(Http1Request$FixedContentSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Request$FixedContentSubscriber);
	});
	return class$;
}

$Class* Http1Request$FixedContentSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk