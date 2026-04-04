#include <jdk/internal/net/http/ExchangeImpl.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpClient$Version.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/AbstractAsyncSSLConnection.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/Http2ClientImpl.h>
#include <jdk/internal/net/http/Http2Connection$ALPNException.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/HttpRequestImpl.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG
#undef HTTP_1_1

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpClient$Version = ::java::net::http::HttpClient$Version;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Executor = ::java::util::concurrent::Executor;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $AbstractAsyncSSLConnection = ::jdk::internal::net::http::AbstractAsyncSSLConnection;
using $Exchange = ::jdk::internal::net::http::Exchange;
using $Http1Exchange = ::jdk::internal::net::http::Http1Exchange;
using $Http2ClientImpl = ::jdk::internal::net::http::Http2ClientImpl;
using $Http2Connection = ::jdk::internal::net::http::Http2Connection;
using $Http2Connection$ALPNException = ::jdk::internal::net::http::Http2Connection$ALPNException;
using $HttpConnection = ::jdk::internal::net::http::HttpConnection;
using $HttpRequestImpl = ::jdk::internal::net::http::HttpRequestImpl;
using $Stream = ::jdk::internal::net::http::Stream;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class ExchangeImpl$$Lambda$toString : public $Supplier {
	$class(ExchangeImpl$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* ExchangeImpl$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ExchangeImpl$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ExchangeImpl$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExchangeImpl$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ExchangeImpl$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExchangeImpl$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExchangeImpl$$Lambda$toString);
	});
	return class$;
}
$Class* ExchangeImpl$$Lambda$toString::class$ = nullptr;

class ExchangeImpl$$Lambda$lambda$get$0$1 : public $BiFunction {
	$class(ExchangeImpl$$Lambda$lambda$get$0$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Exchange* exchange, $HttpConnection* connection) {
		$set(this, exchange, exchange);
		$set(this, connection, connection);
	}
	virtual $Object* apply(Object$* h2c, Object$* t) override {
		 return $of(ExchangeImpl::lambda$get$0(exchange, connection, $cast($Http2Connection, h2c), $cast($Throwable, t)));
	}
	$Exchange* exchange = nullptr;
	$HttpConnection* connection = nullptr;
};
$Class* ExchangeImpl$$Lambda$lambda$get$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exchange", "Ljdk/internal/net/http/Exchange;", nullptr, $PUBLIC, $field(ExchangeImpl$$Lambda$lambda$get$0$1, exchange)},
		{"connection", "Ljdk/internal/net/http/HttpConnection;", nullptr, $PUBLIC, $field(ExchangeImpl$$Lambda$lambda$get$0$1, connection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/HttpConnection;)V", nullptr, $PUBLIC, $method(ExchangeImpl$$Lambda$lambda$get$0$1, init$, void, $Exchange*, $HttpConnection*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExchangeImpl$$Lambda$lambda$get$0$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$get$0$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExchangeImpl$$Lambda$lambda$get$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExchangeImpl$$Lambda$lambda$get$0$1);
	});
	return class$;
}
$Class* ExchangeImpl$$Lambda$lambda$get$0$1::class$ = nullptr;

class ExchangeImpl$$Lambda$lambda$get$1$2 : public $Function {
	$class(ExchangeImpl$$Lambda$lambda$get$1$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x) override {
		 return ExchangeImpl::lambda$get$1($cast($CompletableFuture, x));
	}
};
$Class* ExchangeImpl$$Lambda$lambda$get$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExchangeImpl$$Lambda$lambda$get$1$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExchangeImpl$$Lambda$lambda$get$1$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$get$1$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExchangeImpl$$Lambda$lambda$get$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExchangeImpl$$Lambda$lambda$get$1$2);
	});
	return class$;
}
$Class* ExchangeImpl$$Lambda$lambda$get$1$2::class$ = nullptr;

class ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3 : public $Function {
	$class(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$($Exchange* exchange) {
		$set(this, exchange, exchange);
	}
	virtual $Object* apply(Object$* e) override {
		 return ExchangeImpl::lambda$createExchangeImpl$2(exchange, $cast($Http1Exchange, e));
	}
	$Exchange* exchange = nullptr;
};
$Class* ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exchange", "Ljdk/internal/net/http/Exchange;", nullptr, $PUBLIC, $field(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, exchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Exchange;)V", nullptr, $PUBLIC, $method(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, init$, void, $Exchange*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3);
	});
	return class$;
}
$Class* ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3::class$ = nullptr;

$Logger* ExchangeImpl::debug = nullptr;

void ExchangeImpl::init$($Exchange* e) {
	$set(this, exchange, e);
}

$Exchange* ExchangeImpl::getExchange() {
	return this->exchange;
}

$HttpClient* ExchangeImpl::client() {
	return $nc(this->exchange)->client();
}

$CompletableFuture* ExchangeImpl::get($Exchange* exchange, $HttpConnection* connection) {
	$init(ExchangeImpl);
	$useLocalObjectStack();
	$init($HttpClient$Version);
	if ($nc(exchange)->version() == $HttpClient$Version::HTTP_1_1) {
		if ($nc(ExchangeImpl::debug)->on()) {
			ExchangeImpl::debug->log("get: HTTP/1.1: new Http1Exchange"_s);
		}
		return createHttp1Exchange(exchange, connection);
	} else {
		$var($Http2ClientImpl, c2, $$nc(exchange->client())->client2());
		$var($HttpRequestImpl, request, exchange->request());
		$var($CompletableFuture, c2f, $nc(c2)->getConnectionFor(request, exchange));
		if ($nc(ExchangeImpl::debug)->on()) {
			ExchangeImpl::debug->log("get: Trying to get HTTP/2 connection"_s);
		}
		$var($CompletableFuture, fxi, $cast($CompletableFuture, $nc(c2f)->handle($$new(ExchangeImpl$$Lambda$lambda$get$0$1, exchange, connection))));
		return $cast($CompletableFuture, $nc(fxi)->thenCompose($$new(ExchangeImpl$$Lambda$lambda$get$1$2)));
	}
}

$CompletableFuture* ExchangeImpl::createExchangeImpl($Http2Connection* c, $Throwable* t$renamed, $Exchange* exchange, $HttpConnection* connection) {
	$init(ExchangeImpl);
	$useLocalObjectStack();
	$var($Throwable, t, t$renamed);
	if ($nc(ExchangeImpl::debug)->on()) {
		ExchangeImpl::debug->log("handling HTTP/2 connection creation result"_s);
	}
	bool secure = $$nc($nc(exchange)->request())->secure();
	if (t != nullptr) {
		if (ExchangeImpl::debug->on()) {
			ExchangeImpl::debug->log("handling HTTP/2 connection creation failed: %s"_s, $$new($ObjectArray, {$of(t)}));
		}
		$assign(t, $Utils::getCompletionCause(t));
		if ($instanceOf($Http2Connection$ALPNException, t)) {
			$var($Http2Connection$ALPNException, ee, $cast($Http2Connection$ALPNException, t));
			$var($AbstractAsyncSSLConnection, as, ee->getConnection());
			if (ExchangeImpl::debug->on()) {
				ExchangeImpl::debug->log("downgrading to HTTP/1.1 with: %s"_s, $$new($ObjectArray, {as}));
			}
			$var($CompletableFuture, ex, createHttp1Exchange(exchange, as));
			return ex;
		} else {
			if (ExchangeImpl::debug->on()) {
				ExchangeImpl::debug->log("HTTP/2 connection creation failed with unexpected exception: %s"_s, $$new($ObjectArray, {$of(t)}));
			}
			return $MinimalFuture::failedFuture(t);
		}
	}
	if (secure && c == nullptr) {
		if (ExchangeImpl::debug->on()) {
			ExchangeImpl::debug->log("downgrading to HTTP/1.1 "_s);
		}
		$var($CompletableFuture, ex, createHttp1Exchange(exchange, nullptr));
		return ex;
	}
	if (c == nullptr) {
		if (ExchangeImpl::debug->on()) {
			ExchangeImpl::debug->log("new Http1Exchange, try to upgrade"_s);
		}
		return $cast($CompletableFuture, $$nc(createHttp1Exchange(exchange, connection))->thenApply($$new(ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3, exchange)));
	} else {
		if (ExchangeImpl::debug->on()) {
			ExchangeImpl::debug->log("creating HTTP/2 streams"_s);
		}
		$var($Stream, s, c->createStream(exchange));
		$var($CompletableFuture, ex, $MinimalFuture::completedFuture(s));
		return ex;
	}
}

$CompletableFuture* ExchangeImpl::createHttp1Exchange($Exchange* ex, $HttpConnection* as) {
	$init(ExchangeImpl);
	try {
		return $MinimalFuture::completedFuture($$new($Http1Exchange, ex, as));
	} catch ($Throwable& e) {
		return $MinimalFuture::failedFuture(e);
	}
	$shouldNotReachHere();
}

void ExchangeImpl::nullBody($HttpResponse* resp, $Throwable* t) {
}

void ExchangeImpl::upgraded() {
}

$Http1Exchange* ExchangeImpl::lambda$createExchangeImpl$2($Exchange* exchange, $Http1Exchange* e) {
	$init(ExchangeImpl);
	$nc(exchange)->h2Upgrade();
	return e;
}

$CompletionStage* ExchangeImpl::lambda$get$1($CompletableFuture* x) {
	$init(ExchangeImpl);
	return x;
}

$CompletableFuture* ExchangeImpl::lambda$get$0($Exchange* exchange, $HttpConnection* connection, $Http2Connection* h2c, $Throwable* t) {
	$init(ExchangeImpl);
	return createExchangeImpl(h2c, t, exchange, connection);
}

void ExchangeImpl::clinit$($Class* clazz) {
	$init($Utils);
	$assignStatic(ExchangeImpl::debug, $Utils::getDebugLogger($$new(ExchangeImpl$$Lambda$toString, "ExchangeImpl"_s), $Utils::DEBUG));
}

ExchangeImpl::ExchangeImpl() {
}

$Class* ExchangeImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.ExchangeImpl$$Lambda$toString")) {
			return ExchangeImpl$$Lambda$toString::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$get$0$1")) {
			return ExchangeImpl$$Lambda$lambda$get$0$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$get$1$2")) {
			return ExchangeImpl$$Lambda$lambda$get$1$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3")) {
			return ExchangeImpl$$Lambda$lambda$createExchangeImpl$2$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExchangeImpl, debug)},
		{"exchange", "Ljdk/internal/net/http/Exchange;", "Ljdk/internal/net/http/Exchange<TT;>;", $FINAL, $field(ExchangeImpl, exchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Exchange;)V", "(Ljdk/internal/net/http/Exchange<TT;>;)V", 0, $method(ExchangeImpl, init$, void, $Exchange*)},
		{"cancel", "()V", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, cancel, void)},
		{"cancel", "(Ljava/io/IOException;)V", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, cancel, void, $IOException*)},
		{"client", "()Ljava/net/http/HttpClient;", nullptr, 0, $virtualMethod(ExchangeImpl, client, $HttpClient*)},
		{"completed", "()V", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, completed, void)},
		{"connection", "()Ljdk/internal/net/http/HttpConnection;", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, connection, $HttpConnection*)},
		{"createExchangeImpl", "(Ljdk/internal/net/http/Http2Connection;Ljava/lang/Throwable;Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture;", "<U:Ljava/lang/Object;>(Ljdk/internal/net/http/Http2Connection;Ljava/lang/Throwable;Ljdk/internal/net/http/Exchange<TU;>;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture<+Ljdk/internal/net/http/ExchangeImpl<TU;>;>;", $PRIVATE | $STATIC, $staticMethod(ExchangeImpl, createExchangeImpl, $CompletableFuture*, $Http2Connection*, $Throwable*, $Exchange*, $HttpConnection*)},
		{"createHttp1Exchange", "(Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljdk/internal/net/http/Exchange<TT;>;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Http1Exchange<TT;>;>;", $PRIVATE | $STATIC, $staticMethod(ExchangeImpl, createHttp1Exchange, $CompletableFuture*, $Exchange*, $HttpConnection*)},
		{"get", "(Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture;", "<U:Ljava/lang/Object;>(Ljdk/internal/net/http/Exchange<TU;>;Ljdk/internal/net/http/HttpConnection;)Ljava/util/concurrent/CompletableFuture<+Ljdk/internal/net/http/ExchangeImpl<TU;>;>;", $STATIC, $staticMethod(ExchangeImpl, get, $CompletableFuture*, $Exchange*, $HttpConnection*)},
		{"getCancelCause", "()Ljava/lang/Throwable;", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, getCancelCause, $Throwable*)},
		{"getExchange", "()Ljdk/internal/net/http/Exchange;", "()Ljdk/internal/net/http/Exchange<TT;>;", $FINAL, $method(ExchangeImpl, getExchange, $Exchange*)},
		{"getResponseAsync", "(Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/Response;>;", $ABSTRACT, $virtualMethod(ExchangeImpl, getResponseAsync, $CompletableFuture*, $Executor*)},
		{"ignoreBody", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $ABSTRACT, $virtualMethod(ExchangeImpl, ignoreBody, $CompletableFuture*)},
		{"isCanceled", "()Z", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, isCanceled, bool)},
		{"lambda$createExchangeImpl$2", "(Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/Http1Exchange;)Ljdk/internal/net/http/Http1Exchange;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExchangeImpl, lambda$createExchangeImpl$2, $Http1Exchange*, $Exchange*, $Http1Exchange*)},
		{"lambda$get$0", "(Ljdk/internal/net/http/Exchange;Ljdk/internal/net/http/HttpConnection;Ljdk/internal/net/http/Http2Connection;Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExchangeImpl, lambda$get$0, $CompletableFuture*, $Exchange*, $HttpConnection*, $Http2Connection*, $Throwable*)},
		{"lambda$get$1", "(Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletionStage;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExchangeImpl, lambda$get$1, $CompletionStage*, $CompletableFuture*)},
		{"nullBody", "(Ljava/net/http/HttpResponse;Ljava/lang/Throwable;)V", "(Ljava/net/http/HttpResponse<TT;>;Ljava/lang/Throwable;)V", 0, $virtualMethod(ExchangeImpl, nullBody, void, $HttpResponse*, $Throwable*)},
		{"readBodyAsync", "(Ljava/net/http/HttpResponse$BodyHandler;ZLjava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/net/http/HttpResponse$BodyHandler<TT;>;ZLjava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture<TT;>;", $ABSTRACT, $virtualMethod(ExchangeImpl, readBodyAsync, $CompletableFuture*, $HttpResponse$BodyHandler*, bool, $Executor*)},
		{"released", "()V", nullptr, $ABSTRACT, $virtualMethod(ExchangeImpl, released, void)},
		{"sendBodyAsync", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/ExchangeImpl<TT;>;>;", $ABSTRACT, $virtualMethod(ExchangeImpl, sendBodyAsync, $CompletableFuture*)},
		{"sendHeadersAsync", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/ExchangeImpl<TT;>;>;", $ABSTRACT, $virtualMethod(ExchangeImpl, sendHeadersAsync, $CompletableFuture*)},
		{"upgraded", "()V", nullptr, 0, $virtualMethod(ExchangeImpl, upgraded, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.ExchangeImpl",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(ExchangeImpl, name, initialize, &classInfo$$, ExchangeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExchangeImpl);
	});
	return class$;
}

$Class* ExchangeImpl::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk