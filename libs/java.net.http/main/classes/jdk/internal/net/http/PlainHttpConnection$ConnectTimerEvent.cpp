#include <jdk/internal/net/http/PlainHttpConnection$ConnectTimerEvent.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ConnectException.h>
#include <java/time/Duration.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/HttpClientImpl$DelegatingExecutor.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/PlainHttpConnection.h>
#include <jdk/internal/net/http/TimeoutEvent.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ConnectException = ::java::net::ConnectException;
using $Duration = ::java::time::Duration;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Exchange = ::jdk::internal::net::http::Exchange;
using $PlainHttpConnection = ::jdk::internal::net::http::PlainHttpConnection;
using $TimeoutEvent = ::jdk::internal::net::http::TimeoutEvent;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0 : public $Runnable {
	$class(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(PlainHttpConnection$ConnectTimerEvent* inst, $ConnectException* ce) {
		$set(this, inst$, inst);
		$set(this, ce, ce);
	}
	virtual void run() override {
		$nc(inst$)->lambda$handle$0(ce);
	}
	PlainHttpConnection$ConnectTimerEvent* inst$ = nullptr;
	$ConnectException* ce = nullptr;
};
$Class* PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, inst$)},
		{"ce", "Ljava/net/ConnectException;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, ce)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PlainHttpConnection$ConnectTimerEvent;Ljava/net/ConnectException;)V", nullptr, $PUBLIC, $method(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, init$, void, PlainHttpConnection$ConnectTimerEvent*, $ConnectException*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0);
	});
	return class$;
}
$Class* PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0::class$ = nullptr;

void PlainHttpConnection$ConnectTimerEvent::init$($PlainHttpConnection* this$0, $Duration* duration, $Exchange* exchange, $CompletableFuture* cf) {
	$set(this, this$0, this$0);
	$TimeoutEvent::init$(duration);
	$set(this, exchange, exchange);
	$set(this, cf, cf);
}

void PlainHttpConnection$ConnectTimerEvent::handle() {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("HTTP connect timed out"_s);
	}
	$var($ConnectException, ce, $new($ConnectException, "HTTP connect timed out"_s));
	$nc($nc(this->exchange)->multi)->cancel(ce);
	$$nc($$nc(this->this$0->client())->theExecutor())->execute($$new(PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0, this, ce));
}

$String* PlainHttpConnection$ConnectTimerEvent::toString() {
	return $str({"ConnectTimerEvent, "_s, $($TimeoutEvent::toString())});
}

void PlainHttpConnection$ConnectTimerEvent::lambda$handle$0($ConnectException* ce) {
	$nc(this->cf)->completeExceptionally(ce);
}

PlainHttpConnection$ConnectTimerEvent::PlainHttpConnection$ConnectTimerEvent() {
}

$Class* PlainHttpConnection$ConnectTimerEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0")) {
			return PlainHttpConnection$ConnectTimerEvent$$Lambda$lambda$handle$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/PlainHttpConnection;", nullptr, $FINAL | $SYNTHETIC, $field(PlainHttpConnection$ConnectTimerEvent, this$0)},
		{"cf", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<*>;", $PRIVATE | $FINAL, $field(PlainHttpConnection$ConnectTimerEvent, cf)},
		{"exchange", "Ljdk/internal/net/http/Exchange;", "Ljdk/internal/net/http/Exchange<*>;", $PRIVATE | $FINAL, $field(PlainHttpConnection$ConnectTimerEvent, exchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PlainHttpConnection;Ljava/time/Duration;Ljdk/internal/net/http/Exchange;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/time/Duration;Ljdk/internal/net/http/Exchange<*>;Ljava/util/concurrent/CompletableFuture<*>;)V", 0, $method(PlainHttpConnection$ConnectTimerEvent, init$, void, $PlainHttpConnection*, $Duration*, $Exchange*, $CompletableFuture*)},
		{"handle", "()V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectTimerEvent, handle, void)},
		{"lambda$handle$0", "(Ljava/net/ConnectException;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(PlainHttpConnection$ConnectTimerEvent, lambda$handle$0, void, $ConnectException*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectTimerEvent, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PlainHttpConnection$ConnectTimerEvent", "jdk.internal.net.http.PlainHttpConnection", "ConnectTimerEvent", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.PlainHttpConnection$ConnectTimerEvent",
		"jdk.internal.net.http.TimeoutEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.PlainHttpConnection"
	};
	$loadClass(PlainHttpConnection$ConnectTimerEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectTimerEvent);
	});
	return class$;
}

$Class* PlainHttpConnection$ConnectTimerEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk