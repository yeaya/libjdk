#include <jdk/internal/net/http/ResponseTimerEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ConnectException.h>
#include <java/net/http/HttpConnectTimeoutException.h>
#include <java/net/http/HttpTimeoutException.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/util/Optional.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/ExchangeImpl.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/HttpRequestImpl.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/TimeoutEvent.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ConnectException = ::java::net::ConnectException;
using $HttpConnectTimeoutException = ::java::net::http::HttpConnectTimeoutException;
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $Supplier = ::java::util::function::Supplier;
using $Exchange = ::jdk::internal::net::http::Exchange;
using $ExchangeImpl = ::jdk::internal::net::http::ExchangeImpl;
using $MultiExchange = ::jdk::internal::net::http::MultiExchange;
using $TimeoutEvent = ::jdk::internal::net::http::TimeoutEvent;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class ResponseTimerEvent$$Lambda$toString : public $Supplier {
	$class(ResponseTimerEvent$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* ResponseTimerEvent$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseTimerEvent$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResponseTimerEvent$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseTimerEvent$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseTimerEvent$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseTimerEvent$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseTimerEvent$$Lambda$toString);
	});
	return class$;
}
$Class* ResponseTimerEvent$$Lambda$toString::class$ = nullptr;

$Logger* ResponseTimerEvent::debug = nullptr;

ResponseTimerEvent* ResponseTimerEvent::of($MultiExchange* exchange) {
	$init(ResponseTimerEvent);
	return $new(ResponseTimerEvent, exchange);
}

void ResponseTimerEvent::init$($MultiExchange* multiExchange) {
	$useLocalObjectStack();
	$TimeoutEvent::init$($$cast($Duration, $$nc($nc($nc($nc(multiExchange)->exchange)->request$)->timeout())->get()));
	$set(this, multiExchange, multiExchange);
}

void ResponseTimerEvent::handle() {
	$useLocalObjectStack();
	if ($nc(ResponseTimerEvent::debug)->on()) {
		ResponseTimerEvent::debug->log("Cancelling MultiExchange due to timeout for request %s"_s, $$new($ObjectArray, {$nc($nc(this->multiExchange)->exchange)->request$}));
	}
	$var($HttpTimeoutException, t, nullptr);
	$var($Exchange, exchange, $nc(this->multiExchange)->getExchange());
	if (exchange != nullptr) {
		$var($ExchangeImpl, exchangeImpl, exchange->exchImpl);
		if (exchangeImpl != nullptr) {
			if ($$nc(exchangeImpl->connection())->connected()) {
				$assign(t, $new($HttpTimeoutException, "request timed out"_s));
			}
		}
	}
	if (t == nullptr) {
		$assign(t, $new($HttpConnectTimeoutException, "HTTP connect timed out"_s));
		t->initCause($$new($ConnectException, "HTTP connect timed out"_s));
	}
	this->multiExchange->cancel(t);
}

$String* ResponseTimerEvent::toString() {
	return $str({"ResponseTimerEvent["_s, $($TimeoutEvent::toString()), "]"_s});
}

int32_t ResponseTimerEvent::compareTo($TimeoutEvent* other) {
	return $TimeoutEvent::compareTo(other);
}

$Instant* ResponseTimerEvent::deadline() {
	return $TimeoutEvent::deadline();
}

void ResponseTimerEvent::clinit$($Class* clazz) {
	$init($Utils);
	$assignStatic(ResponseTimerEvent::debug, $Utils::getDebugLogger($$new(ResponseTimerEvent$$Lambda$toString, "ResponseTimerEvent"_s), $Utils::DEBUG));
}

ResponseTimerEvent::ResponseTimerEvent() {
}

$Class* ResponseTimerEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.ResponseTimerEvent$$Lambda$toString")) {
			return ResponseTimerEvent$$Lambda$toString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResponseTimerEvent, debug)},
		{"multiExchange", "Ljdk/internal/net/http/MultiExchange;", "Ljdk/internal/net/http/MultiExchange<*>;", $PRIVATE | $FINAL, $field(ResponseTimerEvent, multiExchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/MultiExchange;)V", "(Ljdk/internal/net/http/MultiExchange<*>;)V", $PRIVATE, $method(ResponseTimerEvent, init$, void, $MultiExchange*)},
		{"compareTo", "(Ljdk/internal/net/http/TimeoutEvent;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseTimerEvent, compareTo, int32_t, $TimeoutEvent*)},
		{"deadline", "()Ljava/time/Instant;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseTimerEvent, deadline, $Instant*)},
		{"handle", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseTimerEvent, handle, void)},
		{"of", "(Ljdk/internal/net/http/MultiExchange;)Ljdk/internal/net/http/ResponseTimerEvent;", "(Ljdk/internal/net/http/MultiExchange<*>;)Ljdk/internal/net/http/ResponseTimerEvent;", $STATIC, $staticMethod(ResponseTimerEvent, of, ResponseTimerEvent*, $MultiExchange*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResponseTimerEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.ResponseTimerEvent",
		"jdk.internal.net.http.TimeoutEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseTimerEvent, name, initialize, &classInfo$$, ResponseTimerEvent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseTimerEvent);
	});
	return class$;
}

$Class* ResponseTimerEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk