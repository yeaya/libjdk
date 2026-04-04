#include <jdk/internal/net/http/Stream$PushedStream.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/OptionalLong.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/ExchangeImpl.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/HttpRequestImpl.h>
#include <jdk/internal/net/http/HttpResponseImpl.h>
#include <jdk/internal/net/http/PushGroup.h>
#include <jdk/internal/net/http/Response.h>
#include <jdk/internal/net/http/Stream$HeadersConsumer.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/WindowController.h>
#include <jdk/internal/net/http/common/HttpHeadersBuilder.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef HTTP_2

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Executor = ::java::util::concurrent::Executor;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Exchange = ::jdk::internal::net::http::Exchange;
using $ExchangeImpl = ::jdk::internal::net::http::ExchangeImpl;
using $Http2Connection = ::jdk::internal::net::http::Http2Connection;
using $HttpResponseImpl = ::jdk::internal::net::http::HttpResponseImpl;
using $PushGroup = ::jdk::internal::net::http::PushGroup;
using $Response = ::jdk::internal::net::http::Response;
using $Stream = ::jdk::internal::net::http::Stream;
using $WindowController = ::jdk::internal::net::http::WindowController;
using $Log = ::jdk::internal::net::http::common::Log;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0 : public $BiConsumer {
	$class(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Stream$PushedStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* v, Object$* t) override {
		$nc(inst$)->lambda$sendBodyAsync$0($cast($ExchangeImpl, v), $cast($Throwable, t));
	}
	Stream$PushedStream* inst$ = nullptr;
};
$Class* Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$PushedStream;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, init$, void, Stream$PushedStream*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1 : public $BiConsumer {
	$class(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Stream$PushedStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* v, Object$* t) override {
		$nc(inst$)->lambda$getResponseAsync$2($cast($Response, v), $cast($Throwable, t));
	}
	Stream$PushedStream* inst$ = nullptr;
};
$Class* Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$PushedStream;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, init$, void, Stream$PushedStream*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2 : public $Function {
	$class(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* r) override {
		 return Stream$PushedStream::lambda$getResponseAsync$3($cast($Response, r));
	}
};
$Class* Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3 : public $BiConsumer {
	$class(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Stream$PushedStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* v, Object$* t) override {
		$nc(inst$)->lambda$readBodyAsync$4(v, $cast($Throwable, t));
	}
	Stream$PushedStream* inst$ = nullptr;
};
$Class* Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$PushedStream;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, init$, void, Stream$PushedStream*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3::class$ = nullptr;

class Stream$PushedStream$$Lambda$toString$4 : public $Supplier {
	$class(Stream$PushedStream$$Lambda$toString$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Response* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$Response* inst$ = nullptr;
};
$Class* Stream$PushedStream$$Lambda$toString$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$toString$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Response;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$toString$4, init$, void, $Response*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$toString$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$toString$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$toString$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$toString$4);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$toString$4::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$completeResponse$5$5 : public $Function {
	$class(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, $NO_CLASS_INIT, $Function)
public:
	void init$(Stream$PushedStream* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* v) override {
		 return $nc(inst$)->lambda$completeResponse$5($cast($Void, v));
	}
	Stream$PushedStream* inst$ = nullptr;
};
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$PushedStream;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, init$, void, Stream$PushedStream*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$5$5",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$5$5::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$completeResponse$6$6 : public $BiConsumer {
	$class(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(Stream$PushedStream* inst, $Response* r) {
		$set(this, inst$, inst);
		$set(this, r, r);
	}
	virtual void accept(Object$* body, Object$* t) override {
		$nc(inst$)->lambda$completeResponse$6(r, body, $cast($Throwable, t));
	}
	Stream$PushedStream* inst$ = nullptr;
	$Response* r = nullptr;
};
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, inst$)},
		{"r", "Ljdk/internal/net/http/Response;", nullptr, $PUBLIC, $field(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$PushedStream;Ljdk/internal/net/http/Response;)V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, init$, void, Stream$PushedStream*, $Response*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$6$6",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$6$6::class$ = nullptr;

class Stream$PushedStream$$Lambda$lambda$completeResponse$7$7 : public $Supplier {
	$class(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Stream$PushedStream::lambda$completeResponse$7();
	}
};
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$7$7",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7);
	});
	return class$;
}
$Class* Stream$PushedStream$$Lambda$lambda$completeResponse$7$7::class$ = nullptr;

void Stream$PushedStream::init$($PushGroup* pushGroup, $Http2Connection* connection, $Exchange* pushReq) {
	$Stream::init$(connection, pushReq, nullptr);
	$set(this, pushGroup, pushGroup);
	$set(this, pushReq, $nc(pushReq)->request());
	$set(this, pushCF, $new($MinimalFuture));
	$set(this, responseCF$, $new($MinimalFuture));
}

$CompletableFuture* Stream$PushedStream::responseCF() {
	return this->responseCF$;
}

void Stream$PushedStream::setPushHandler($HttpResponse$BodyHandler* pushHandler) {
	$synchronized(this) {
		$set(this, pushHandler, pushHandler);
	}
}

$HttpResponse$BodyHandler* Stream$PushedStream::getPushHandler() {
	$synchronized(this) {
		return this->pushHandler;
	}
}

$CompletableFuture* Stream$PushedStream::sendBodyAsync() {
	$useLocalObjectStack();
	return $cast($CompletableFuture, $$nc($Stream::sendBodyAsync())->whenComplete($$new(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, this)));
}

$CompletableFuture* Stream$PushedStream::sendHeadersAsync() {
	$useLocalObjectStack();
	return $cast($CompletableFuture, $$nc($Stream::sendHeadersAsync())->whenComplete($$new(Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0, this)));
}

$CompletableFuture* Stream$PushedStream::getResponseAsync($Executor* executor) {
	$useLocalObjectStack();
	$var($CompletableFuture, cf, $cast($CompletableFuture, $nc(this->pushCF)->whenComplete($$new(Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1, this))));
	if (executor != nullptr && !$nc(cf)->isDone()) {
		$assign(cf, $cast($CompletableFuture, cf->thenApplyAsync($$new(Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2), executor)));
	}
	return cf;
}

$CompletableFuture* Stream$PushedStream::readBodyAsync($HttpResponse$BodyHandler* handler, bool returnConnectionToPool, $Executor* executor) {
	$useLocalObjectStack();
	return $cast($CompletableFuture, $$nc($Stream::readBodyAsync(handler, returnConnectionToPool, executor))->whenComplete($$new(Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3, this)));
}

void Stream$PushedStream::completeResponse($Response* r) {
	$useLocalObjectStack();
	$Log::logResponse($$new(Stream$PushedStream$$Lambda$toString$4, $nc(r)));
	$nc(this->pushCF)->complete(r);
	$var($CompletableFuture, start, $new($MinimalFuture));
	$$sure($CompletableFuture, start->thenCompose($$new(Stream$PushedStream$$Lambda$lambda$completeResponse$5$5, this)))->whenComplete($$new(Stream$PushedStream$$Lambda$lambda$completeResponse$6$6, this, r));
	$var($Supplier, var$0, $new(Stream$PushedStream$$Lambda$lambda$completeResponse$7$7));
	start->completeAsync(var$0, $($$nc(getExchange())->executor()));
}

void Stream$PushedStream::completeResponseExceptionally($Throwable* t) {
	$nc(this->pushCF)->completeExceptionally(t);
}

void Stream$PushedStream::handleResponse() {
	$useLocalObjectStack();
	$var($HttpHeaders, responseHeaders, $nc(this->responseHeadersBuilder)->build());
	this->responseCode = (int32_t)$$nc($nc(responseHeaders)->firstValueAsLong(":status"_s))->orElse(-1);
	if (this->responseCode == -1) {
		completeResponseExceptionally($$new($IOException, "No status code"_s));
	}
	$init($HttpClient$Version);
	$set(this, response, $new($Response, this->pushReq, this->exchange, responseHeaders, $(connection()), this->responseCode, $HttpClient$Version::HTTP_2));
	responseHeaders->firstValueAsLong("content-length"_s);
	if ($Log::headers()) {
		$var($StringBuilder, sb, $new($StringBuilder, "RESPONSE HEADERS"_s));
		sb->append(" (streamid="_s)->append(this->streamid)->append("):\n"_s);
		$Log::dumpHeaders(sb, "    "_s, responseHeaders);
		$Log::logHeaders($(sb->toString()), $$new($ObjectArray, 0));
	}
	$nc(this->rspHeadersConsumer$)->reset();
	completeResponse(this->response);
}

$Void* Stream$PushedStream::lambda$completeResponse$7() {
	$init(Stream$PushedStream);
	return nullptr;
}

void Stream$PushedStream::lambda$completeResponse$6($Response* r, Object$* body, $Throwable* t) {
	$useLocalObjectStack();
	if (t != nullptr) {
		$nc(this->responseCF$)->completeExceptionally(t);
	} else {
		$var($HttpResponseImpl, resp, $new($HttpResponseImpl, $nc(r)->request$, r, nullptr, body, $(getExchange())));
		$nc(this->responseCF$)->complete(resp);
	}
}

$CompletionStage* Stream$PushedStream::lambda$completeResponse$5($Void* v) {
	$useLocalObjectStack();
	$var($HttpResponse$BodyHandler, var$0, getPushHandler());
	return readBodyAsync(var$0, false, $($$nc(getExchange())->executor()));
}

void Stream$PushedStream::lambda$readBodyAsync$4(Object$* v, $Throwable* t) {
	$nc(this->pushGroup)->pushError(t);
}

$Response* Stream$PushedStream::lambda$getResponseAsync$3($Response* r) {
	$init(Stream$PushedStream);
	return r;
}

void Stream$PushedStream::lambda$getResponseAsync$2($Response* v, $Throwable* t) {
	$nc(this->pushGroup)->pushError($($Utils::getCompletionCause(t)));
}

void Stream$PushedStream::lambda$sendBodyAsync$0($ExchangeImpl* v, $Throwable* t) {
	$nc(this->pushGroup)->pushError($($Utils::getCompletionCause(t)));
}

Stream$PushedStream::Stream$PushedStream() {
}

$Class* Stream$PushedStream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0")) {
			return Stream$PushedStream$$Lambda$lambda$sendBodyAsync$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1")) {
			return Stream$PushedStream$$Lambda$lambda$getResponseAsync$2$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2")) {
			return Stream$PushedStream$$Lambda$lambda$getResponseAsync$3$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3")) {
			return Stream$PushedStream$$Lambda$lambda$readBodyAsync$4$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$toString$4")) {
			return Stream$PushedStream$$Lambda$toString$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$5$5")) {
			return Stream$PushedStream$$Lambda$lambda$completeResponse$5$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$6$6")) {
			return Stream$PushedStream$$Lambda$lambda$completeResponse$6$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$PushedStream$$Lambda$lambda$completeResponse$7$7")) {
			return Stream$PushedStream$$Lambda$lambda$completeResponse$7$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"pushGroup", "Ljdk/internal/net/http/PushGroup;", "Ljdk/internal/net/http/PushGroup<TT;>;", $FINAL, $field(Stream$PushedStream, pushGroup)},
		{"pushCF", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Response;>;", $FINAL, $field(Stream$PushedStream, pushCF)},
		{"responseCF", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", 0, $field(Stream$PushedStream, responseCF$)},
		{"pushReq", "Ljdk/internal/net/http/HttpRequestImpl;", nullptr, $FINAL, $field(Stream$PushedStream, pushReq)},
		{"pushHandler", "Ljava/net/http/HttpResponse$BodyHandler;", "Ljava/net/http/HttpResponse$BodyHandler<TT;>;", 0, $field(Stream$PushedStream, pushHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PushGroup;Ljdk/internal/net/http/Http2Connection;Ljdk/internal/net/http/Exchange;)V", "(Ljdk/internal/net/http/PushGroup<TT;>;Ljdk/internal/net/http/Http2Connection;Ljdk/internal/net/http/Exchange<TT;>;)V", 0, $method(Stream$PushedStream, init$, void, $PushGroup*, $Http2Connection*, $Exchange*)},
		{"completeResponse", "(Ljdk/internal/net/http/Response;)V", nullptr, 0, $virtualMethod(Stream$PushedStream, completeResponse, void, $Response*)},
		{"completeResponseExceptionally", "(Ljava/lang/Throwable;)V", nullptr, 0, $virtualMethod(Stream$PushedStream, completeResponseExceptionally, void, $Throwable*)},
		{"getPushHandler", "()Ljava/net/http/HttpResponse$BodyHandler;", "()Ljava/net/http/HttpResponse$BodyHandler<TT;>;", $SYNCHRONIZED, $virtualMethod(Stream$PushedStream, getPushHandler, $HttpResponse$BodyHandler*)},
		{"getResponseAsync", "(Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Response;>;", 0, $virtualMethod(Stream$PushedStream, getResponseAsync, $CompletableFuture*, $Executor*)},
		{"handleResponse", "()V", nullptr, $PROTECTED, $virtualMethod(Stream$PushedStream, handleResponse, void)},
		{"lambda$completeResponse$5", "(Ljava/lang/Void;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $SYNTHETIC, $method(Stream$PushedStream, lambda$completeResponse$5, $CompletionStage*, $Void*)},
		{"lambda$completeResponse$6", "(Ljdk/internal/net/http/Response;Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Stream$PushedStream, lambda$completeResponse$6, void, $Response*, Object$*, $Throwable*)},
		{"lambda$completeResponse$7", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stream$PushedStream, lambda$completeResponse$7, $Void*)},
		{"lambda$getResponseAsync$2", "(Ljdk/internal/net/http/Response;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Stream$PushedStream, lambda$getResponseAsync$2, void, $Response*, $Throwable*)},
		{"lambda$getResponseAsync$3", "(Ljdk/internal/net/http/Response;)Ljdk/internal/net/http/Response;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stream$PushedStream, lambda$getResponseAsync$3, $Response*, $Response*)},
		{"lambda$readBodyAsync$4", "(Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Stream$PushedStream, lambda$readBodyAsync$4, void, Object$*, $Throwable*)},
		{"lambda$sendBodyAsync$0", "(Ljdk/internal/net/http/ExchangeImpl;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(Stream$PushedStream, lambda$sendBodyAsync$0, void, $ExchangeImpl*, $Throwable*)},
		{"readBodyAsync", "(Ljava/net/http/HttpResponse$BodyHandler;ZLjava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/net/http/HttpResponse$BodyHandler<TT;>;ZLjava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture<TT;>;", 0, $virtualMethod(Stream$PushedStream, readBodyAsync, $CompletableFuture*, $HttpResponse$BodyHandler*, bool, $Executor*)},
		{"responseCF", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/net/http/HttpResponse<TT;>;>;", 0, $virtualMethod(Stream$PushedStream, responseCF, $CompletableFuture*)},
		{"sendBodyAsync", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/ExchangeImpl<TT;>;>;", 0, $virtualMethod(Stream$PushedStream, sendBodyAsync, $CompletableFuture*)},
		{"sendHeadersAsync", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/ExchangeImpl<TT;>;>;", 0, $virtualMethod(Stream$PushedStream, sendHeadersAsync, $CompletableFuture*)},
		{"setPushHandler", "(Ljava/net/http/HttpResponse$BodyHandler;)V", "(Ljava/net/http/HttpResponse$BodyHandler<TT;>;)V", $SYNCHRONIZED, $virtualMethod(Stream$PushedStream, setPushHandler, void, $HttpResponse$BodyHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Stream$PushedStream", "jdk.internal.net.http.Stream", "PushedStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Stream$PushedStream",
		"jdk.internal.net.http.Stream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljdk/internal/net/http/Stream<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Stream"
	};
	$loadClass(Stream$PushedStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$PushedStream);
	});
	return class$;
}

$Class* Stream$PushedStream::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk