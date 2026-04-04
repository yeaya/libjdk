#include <jdk/internal/net/http/Http1Response$BodyReader.h>
#include <java/io/EOFException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/AbstractSubscription.h>
#include <jdk/internal/net/http/Http1Response$Receiver.h>
#include <jdk/internal/net/http/Http1Response$State.h>
#include <jdk/internal/net/http/Http1Response.h>
#include <jdk/internal/net/http/ResponseContent$BodyParser.h>
#include <jdk/internal/net/http/ResponseContent$UnknownLengthBodyParser.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef READING_BODY

using $EOFException = ::java::io::EOFException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $AbstractSubscription = ::jdk::internal::net::http::AbstractSubscription;
using $Http1Response = ::jdk::internal::net::http::Http1Response;
using $Http1Response$Receiver = ::jdk::internal::net::http::Http1Response$Receiver;
using $Http1Response$State = ::jdk::internal::net::http::Http1Response$State;
using $ResponseContent$BodyParser = ::jdk::internal::net::http::ResponseContent$BodyParser;
using $ResponseContent$UnknownLengthBodyParser = ::jdk::internal::net::http::ResponseContent$UnknownLengthBodyParser;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class Http1Response$BodyReader$$Lambda$currentStateMessage : public $Supplier {
	$class(Http1Response$BodyReader$$Lambda$currentStateMessage, $NO_CLASS_INIT, $Supplier)
public:
	void init$($ResponseContent$BodyParser* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->currentStateMessage());
	}
	$ResponseContent$BodyParser* inst$ = nullptr;
};
$Class* Http1Response$BodyReader$$Lambda$currentStateMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Http1Response$BodyReader$$Lambda$currentStateMessage, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseContent$BodyParser;)V", nullptr, $PUBLIC, $method(Http1Response$BodyReader$$Lambda$currentStateMessage, init$, void, $ResponseContent$BodyParser*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Http1Response$BodyReader$$Lambda$currentStateMessage, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Http1Response$BodyReader$$Lambda$currentStateMessage",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Http1Response$BodyReader$$Lambda$currentStateMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Response$BodyReader$$Lambda$currentStateMessage);
	});
	return class$;
}
$Class* Http1Response$BodyReader$$Lambda$currentStateMessage::class$ = nullptr;

bool Http1Response$BodyReader::$assertionsDisabled = false;

void Http1Response$BodyReader::init$($Http1Response* this$0, $Consumer* onComplete) {
	$set(this, this$0, this$0);
	$Http1Response$Receiver::init$();
	$set(this, onComplete$, onComplete);
}

void Http1Response$BodyReader::reset() {
	$set(this, parser, nullptr);
	$set(this, cf, nullptr);
	$set(this, subscription$, nullptr);
}

void Http1Response$BodyReader::start($ResponseContent$BodyParser* parser) {
	$set(this, cf, $new($MinimalFuture));
	$set(this, parser, parser);
}

$CompletableFuture* Http1Response$BodyReader::completion() {
	return this->cf;
}

bool Http1Response$BodyReader::tryAsyncReceive($ByteBuffer* b) {
	return accept(b, this->parser, this->cf);
}

void Http1Response$BodyReader::onReadError($Throwable* t$renamed) {
	$useLocalObjectStack();
	$var($Throwable, t, t$renamed);
	if ($instanceOf($EOFException, t) && this->this$0->bodyParser != nullptr && $instanceOf($ResponseContent$UnknownLengthBodyParser, this->this$0->bodyParser)) {
		$nc($cast($ResponseContent$UnknownLengthBodyParser, this->this$0->bodyParser))->complete();
		return;
	}
	$assign(t, $Utils::wrapWithExtraDetail(t, $$new(Http1Response$BodyReader$$Lambda$currentStateMessage, $nc(this->parser))));
	this->this$0->onReadError(t);
}

$AbstractSubscription* Http1Response$BodyReader::subscription() {
	return this->subscription$;
}

void Http1Response$BodyReader::onSubscribe($AbstractSubscription* s) {
	$set(this, subscription$, s);
	try {
		$nc(this->parser)->onSubscribe(s);
	} catch ($Throwable& t) {
		$nc(this->cf)->completeExceptionally(t);
		$throw(t);
	}
}

void Http1Response$BodyReader::handle($ByteBuffer* b, $ResponseContent$BodyParser* parser, $CompletableFuture* cf) {
	$useLocalObjectStack();
	if (!Http1Response$BodyReader::$assertionsDisabled && !(cf != nullptr)) {
		$throwNew($AssertionError, $of("parsing not started"_s));
	}
	if (!Http1Response$BodyReader::$assertionsDisabled && !(parser != nullptr)) {
		$throwNew($AssertionError, $of("no parser"_s));
	}
	try {
		if ($nc(this->this$0->debug)->on()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Sending "_s);
			var$0->append($nc(b)->remaining());
			var$0->append("/"_s);
			var$0->append(b->capacity());
			var$0->append(" bytes to body parser"_s);
			this->this$0->debug->log($$str(var$0));
		}
		$nc(parser)->accept(b);
	} catch ($Throwable& t) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log($$str({"Body parser failed to handle buffer: "_s, t}));
		}
		if (!$nc(cf)->isDone()) {
			cf->completeExceptionally(t);
		}
	}
}

void Http1Response$BodyReader::onComplete($Throwable* closedExceptionally) {
	if ($nc(this->cf)->isDone()) {
		return;
	}
	if (closedExceptionally != nullptr) {
		$nc(this->cf)->completeExceptionally(closedExceptionally);
	} else {
		$init($Http1Response$State);
		$nc(this->onComplete$)->accept($Http1Response$State::READING_BODY);
		$nc(this->cf)->complete($Http1Response$State::READING_BODY);
	}
}

void Http1Response$BodyReader::close($Throwable* error) {
	$useLocalObjectStack();
	$var($CompletableFuture, cf, this->cf);
	if (cf != nullptr && !cf->isDone()) {
		if (error != nullptr) {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log($$str({"close: completing body parser CF with "_s, error}));
			}
			cf->completeExceptionally(error);
		} else {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("close: completing body parser CF"_s);
			}
			$init($Http1Response$State);
			cf->complete($Http1Response$State::READING_BODY);
		}
	}
}

$String* Http1Response$BodyReader::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Http1Response$Receiver::toString()));
	var$0->append("/parser="_s);
	var$0->append($($String::valueOf(this->parser)));
	return $str(var$0);
}

void Http1Response$BodyReader::handle($ByteBuffer* b, Object$* parser, $CompletableFuture* cf) {
	this->handle(b, $cast($ResponseContent$BodyParser, parser), cf);
}

void Http1Response$BodyReader::start(Object$* parser) {
	this->start($cast($ResponseContent$BodyParser, parser));
}

void Http1Response$BodyReader::clinit$($Class* clazz) {
	$load($Http1Response);
	Http1Response$BodyReader::$assertionsDisabled = !$Http1Response::class$->desiredAssertionStatus();
}

Http1Response$BodyReader::Http1Response$BodyReader() {
}

$Class* Http1Response$BodyReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.Http1Response$BodyReader$$Lambda$currentStateMessage")) {
			return Http1Response$BodyReader$$Lambda$currentStateMessage::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Http1Response;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Response$BodyReader, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Response$BodyReader, $assertionsDisabled)},
		{"onComplete", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<Ljdk/internal/net/http/Http1Response$State;>;", $FINAL, $field(Http1Response$BodyReader, onComplete$)},
		{"parser", "Ljdk/internal/net/http/ResponseContent$BodyParser;", nullptr, $VOLATILE, $field(Http1Response$BodyReader, parser)},
		{"cf", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Http1Response$State;>;", $VOLATILE, $field(Http1Response$BodyReader, cf)},
		{"subscription", "Ljdk/internal/net/http/AbstractSubscription;", nullptr, $VOLATILE, $field(Http1Response$BodyReader, subscription$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Response;Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<Ljdk/internal/net/http/Http1Response$State;>;)V", 0, $method(Http1Response$BodyReader, init$, void, $Http1Response*, $Consumer*)},
		{"close", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Http1Response$BodyReader, close, void, $Throwable*)},
		{"completion", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Http1Response$State;>;", 0, $virtualMethod(Http1Response$BodyReader, completion, $CompletableFuture*)},
		{"handle", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/ResponseContent$BodyParser;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/ResponseContent$BodyParser;Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Http1Response$State;>;)V", $FINAL, $method(Http1Response$BodyReader, handle, void, $ByteBuffer*, $ResponseContent$BodyParser*, $CompletableFuture*)},
		{"handle", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/util/concurrent/CompletableFuture;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Response$BodyReader, handle, void, $ByteBuffer*, Object$*, $CompletableFuture*)},
		{"onComplete", "(Ljava/lang/Throwable;)V", nullptr, $FINAL, $method(Http1Response$BodyReader, onComplete, void, $Throwable*)},
		{"onReadError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Http1Response$BodyReader, onReadError, void, $Throwable*)},
		{"onSubscribe", "(Ljdk/internal/net/http/AbstractSubscription;)V", nullptr, $PUBLIC, $virtualMethod(Http1Response$BodyReader, onSubscribe, void, $AbstractSubscription*)},
		{"reset", "()V", nullptr, 0, $virtualMethod(Http1Response$BodyReader, reset, void)},
		{"start", "(Ljdk/internal/net/http/ResponseContent$BodyParser;)V", nullptr, $FINAL, $method(Http1Response$BodyReader, start, void, $ResponseContent$BodyParser*)},
		{"start", "(Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(Http1Response$BodyReader, start, void, Object$*)},
		{"subscription", "()Ljdk/internal/net/http/AbstractSubscription;", nullptr, $PUBLIC, $virtualMethod(Http1Response$BodyReader, subscription, $AbstractSubscription*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Http1Response$BodyReader, toString, $String*)},
		{"tryAsyncReceive", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Http1Response$BodyReader, tryAsyncReceive, bool, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Response$BodyReader", "jdk.internal.net.http.Http1Response", "BodyReader", $FINAL},
		{"jdk.internal.net.http.Http1Response$Receiver", "jdk.internal.net.http.Http1Response", "Receiver", $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.ResponseContent$BodyParser", "jdk.internal.net.http.ResponseContent", "BodyParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Response$BodyReader",
		"jdk.internal.net.http.Http1Response$Receiver",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljdk/internal/net/http/Http1Response$Receiver<Ljdk/internal/net/http/ResponseContent$BodyParser;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Response"
	};
	$loadClass(Http1Response$BodyReader, name, initialize, &classInfo$$, Http1Response$BodyReader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Response$BodyReader);
	});
	return class$;
}

$Class* Http1Response$BodyReader::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk