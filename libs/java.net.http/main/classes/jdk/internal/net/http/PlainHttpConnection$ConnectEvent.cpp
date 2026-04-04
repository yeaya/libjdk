#include <jdk/internal/net/http/PlainHttpConnection$ConnectEvent.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/AsyncEvent.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/HttpClientImpl$DelegatingExecutor.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/PlainHttpConnection$ConnectState.h>
#include <jdk/internal/net/http/PlainHttpConnection.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef OP_CONNECT
#undef RETRY
#undef SUCCESS

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Supplier = ::java::util::function::Supplier;
using $AsyncEvent = ::jdk::internal::net::http::AsyncEvent;
using $Exchange = ::jdk::internal::net::http::Exchange;
using $PlainHttpConnection = ::jdk::internal::net::http::PlainHttpConnection;
using $PlainHttpConnection$ConnectState = ::jdk::internal::net::http::PlainHttpConnection$ConnectState;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0 : public $Supplier {
	$class(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(PlainHttpConnection$ConnectEvent::lambda$handle$0());
	}
};
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0);
	});
	return class$;
}
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0::class$ = nullptr;

class PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1 : public $Supplier {
	$class(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(PlainHttpConnection$ConnectEvent::lambda$handle$1());
	}
};
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1);
	});
	return class$;
}
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1::class$ = nullptr;

class PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2 : public $Runnable {
	$class(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(PlainHttpConnection$ConnectEvent* inst, $Throwable* t) {
		$set(this, inst$, inst);
		$set(this, t, t);
	}
	virtual void run() override {
		$nc(inst$)->lambda$handle$2(t);
	}
	PlainHttpConnection$ConnectEvent* inst$ = nullptr;
	$Throwable* t = nullptr;
};
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, inst$)},
		{"t", "Ljava/lang/Throwable;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PlainHttpConnection$ConnectEvent;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, init$, void, PlainHttpConnection$ConnectEvent*, $Throwable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2);
	});
	return class$;
}
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2::class$ = nullptr;

class PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3 : public $Runnable {
	$class(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(PlainHttpConnection$ConnectEvent* inst, $IOException* ioe) {
		$set(this, inst$, inst);
		$set(this, ioe, ioe);
	}
	virtual void run() override {
		$nc(inst$)->lambda$abort$3(ioe);
	}
	PlainHttpConnection$ConnectEvent* inst$ = nullptr;
	$IOException* ioe = nullptr;
};
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, inst$)},
		{"ioe", "Ljava/io/IOException;", nullptr, $PUBLIC, $field(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, ioe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PlainHttpConnection$ConnectEvent;Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, init$, void, PlainHttpConnection$ConnectEvent*, $IOException*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3);
	});
	return class$;
}
$Class* PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3::class$ = nullptr;

bool PlainHttpConnection$ConnectEvent::$assertionsDisabled = false;

void PlainHttpConnection$ConnectEvent::init$($PlainHttpConnection* this$0, $CompletableFuture* cf, $Exchange* exchange) {
	$set(this, this$0, this$0);
	$AsyncEvent::init$();
	$set(this, cf, cf);
	$set(this, exchange, exchange);
}

$SelectableChannel* PlainHttpConnection$ConnectEvent::channel() {
	return this->this$0->chan;
}

int32_t PlainHttpConnection$ConnectEvent::interestOps() {
	return $SelectionKey::OP_CONNECT;
}

void PlainHttpConnection$ConnectEvent::handle() {
	$useLocalObjectStack();
	try {
		if (!PlainHttpConnection$ConnectEvent::$assertionsDisabled && ! !this->this$0->connected$) {
			$throwNew($AssertionError, $of("Already connected"_s));
		}
		if (!PlainHttpConnection$ConnectEvent::$assertionsDisabled && ! !$nc(this->this$0->chan)->isBlocking()) {
			$throwNew($AssertionError, $of("Unexpected blocking channel"_s));
		}
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("ConnectEvent: finishing connect"_s);
		}
		bool finished = $nc(this->this$0->chan)->finishConnect();
		if (this->this$0->debug->on()) {
			this->this$0->debug->log("ConnectEvent: connect finished: %s, cancelled: %s, Local addr: %s"_s, $$new($ObjectArray, {
				$($Boolean::valueOf(finished)),
				$($Boolean::valueOf($nc($nc(this->exchange)->multi)->requestCancelled())),
				$(this->this$0->chan->getLocalAddress())
			}));
		}
		if (!PlainHttpConnection$ConnectEvent::$assertionsDisabled && !(finished || $nc($nc(this->exchange)->multi)->requestCancelled())) {
			$throwNew($AssertionError, $of("Expected channel to be connected"_s));
		}
		$var($Supplier, var$0, $new(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0));
		$nc(this->cf)->completeAsync(var$0, $($$nc(this->this$0->client())->theExecutor()));
	} catch ($Throwable& e) {
		if (this->this$0->canRetryConnect(e)) {
			++this->this$0->unsuccessfulAttempts;
			$var($Supplier, var$1, $new(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1));
			$nc(this->cf)->completeAsync(var$1, $($$nc(this->this$0->client())->theExecutor()));
			return;
		}
		$var($Throwable, t, $Utils::toConnectException(e));
		$$nc($$nc(this->this$0->client())->theExecutor())->execute($$new(PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2, this, t));
		this->this$0->close();
	}
}

void PlainHttpConnection$ConnectEvent::abort($IOException* ioe) {
	$useLocalObjectStack();
	$$nc($$nc(this->this$0->client())->theExecutor())->execute($$new(PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3, this, ioe));
	this->this$0->close();
}

void PlainHttpConnection$ConnectEvent::lambda$abort$3($IOException* ioe) {
	$nc(this->cf)->completeExceptionally(ioe);
}

void PlainHttpConnection$ConnectEvent::lambda$handle$2($Throwable* t) {
	$nc(this->cf)->completeExceptionally(t);
}

$PlainHttpConnection$ConnectState* PlainHttpConnection$ConnectEvent::lambda$handle$1() {
	$init(PlainHttpConnection$ConnectEvent);
	$init($PlainHttpConnection$ConnectState);
	return $PlainHttpConnection$ConnectState::RETRY;
}

$PlainHttpConnection$ConnectState* PlainHttpConnection$ConnectEvent::lambda$handle$0() {
	$init(PlainHttpConnection$ConnectEvent);
	$init($PlainHttpConnection$ConnectState);
	return $PlainHttpConnection$ConnectState::SUCCESS;
}

void PlainHttpConnection$ConnectEvent::clinit$($Class* clazz) {
	$load($PlainHttpConnection);
	PlainHttpConnection$ConnectEvent::$assertionsDisabled = !$PlainHttpConnection::class$->desiredAssertionStatus();
}

PlainHttpConnection$ConnectEvent::PlainHttpConnection$ConnectEvent() {
}

$Class* PlainHttpConnection$ConnectEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0")) {
			return PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1")) {
			return PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2")) {
			return PlainHttpConnection$ConnectEvent$$Lambda$lambda$handle$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3")) {
			return PlainHttpConnection$ConnectEvent$$Lambda$lambda$abort$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/PlainHttpConnection;", nullptr, $FINAL | $SYNTHETIC, $field(PlainHttpConnection$ConnectEvent, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PlainHttpConnection$ConnectEvent, $assertionsDisabled)},
		{"cf", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/PlainHttpConnection$ConnectState;>;", $PRIVATE | $FINAL, $field(PlainHttpConnection$ConnectEvent, cf)},
		{"exchange", "Ljdk/internal/net/http/Exchange;", "Ljdk/internal/net/http/Exchange<*>;", $PRIVATE | $FINAL, $field(PlainHttpConnection$ConnectEvent, exchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PlainHttpConnection;Ljava/util/concurrent/CompletableFuture;Ljdk/internal/net/http/Exchange;)V", "(Ljava/util/concurrent/CompletableFuture<Ljdk/internal/net/http/PlainHttpConnection$ConnectState;>;Ljdk/internal/net/http/Exchange<*>;)V", 0, $method(PlainHttpConnection$ConnectEvent, init$, void, $PlainHttpConnection*, $CompletableFuture*, $Exchange*)},
		{"abort", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent, abort, void, $IOException*)},
		{"channel", "()Ljava/nio/channels/SelectableChannel;", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent, channel, $SelectableChannel*)},
		{"handle", "()V", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent, handle, void)},
		{"interestOps", "()I", nullptr, $PUBLIC, $virtualMethod(PlainHttpConnection$ConnectEvent, interestOps, int32_t)},
		{"lambda$abort$3", "(Ljava/io/IOException;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(PlainHttpConnection$ConnectEvent, lambda$abort$3, void, $IOException*)},
		{"lambda$handle$0", "()Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlainHttpConnection$ConnectEvent, lambda$handle$0, $PlainHttpConnection$ConnectState*)},
		{"lambda$handle$1", "()Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlainHttpConnection$ConnectEvent, lambda$handle$1, $PlainHttpConnection$ConnectState*)},
		{"lambda$handle$2", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(PlainHttpConnection$ConnectEvent, lambda$handle$2, void, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PlainHttpConnection$ConnectEvent", "jdk.internal.net.http.PlainHttpConnection", "ConnectEvent", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.PlainHttpConnection$ConnectEvent",
		"jdk.internal.net.http.AsyncEvent",
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
	$loadClass(PlainHttpConnection$ConnectEvent, name, initialize, &classInfo$$, PlainHttpConnection$ConnectEvent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PlainHttpConnection$ConnectEvent);
	});
	return class$;
}

$Class* PlainHttpConnection$ConnectEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk