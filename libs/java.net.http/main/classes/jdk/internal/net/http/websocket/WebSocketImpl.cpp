#include <jdk/internal/net/http/websocket/WebSocketImpl.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/net/URI.h>
#include <java/net/http/WebSocket$Listener.h>
#include <java/net/http/WebSocket.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/websocket/BuilderImpl.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jdk/internal/net/http/websocket/OpeningHandshake$Result.h>
#include <jdk/internal/net/http/websocket/OpeningHandshake.h>
#include <jdk/internal/net/http/websocket/StatusCodes.h>
#include <jdk/internal/net/http/websocket/Transport.h>
#include <jdk/internal/net/http/websocket/TransportFactory.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl$ReceiveTask.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl$SignallingMessageConsumer.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl$State.h>
#include <jcpp.h>

#undef CLOSE
#undef DEBUG_WS
#undef DONE
#undef ERROR
#undef OPEN
#undef REPORT
#undef UTF_8

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $URI = ::java::net::URI;
using $WebSocket = ::java::net::http::WebSocket;
using $WebSocket$Listener = ::java::net::http::WebSocket$Listener;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $Log = ::jdk::internal::net::http::common::Log;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $BuilderImpl = ::jdk::internal::net::http::websocket::BuilderImpl;
using $MessageQueue = ::jdk::internal::net::http::websocket::MessageQueue;
using $OpeningHandshake = ::jdk::internal::net::http::websocket::OpeningHandshake;
using $OpeningHandshake$Result = ::jdk::internal::net::http::websocket::OpeningHandshake$Result;
using $StatusCodes = ::jdk::internal::net::http::websocket::StatusCodes;
using $Transport = ::jdk::internal::net::http::websocket::Transport;
using $TransportFactory = ::jdk::internal::net::http::websocket::TransportFactory;
using $WebSocketImpl$ReceiveTask = ::jdk::internal::net::http::websocket::WebSocketImpl$ReceiveTask;
using $WebSocketImpl$SignallingMessageConsumer = ::jdk::internal::net::http::websocket::WebSocketImpl$SignallingMessageConsumer;
using $WebSocketImpl$State = ::jdk::internal::net::http::websocket::WebSocketImpl$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class WebSocketImpl$$Lambda$toString : public $Supplier {
	$class(WebSocketImpl$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* WebSocketImpl$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$toString);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$toString::class$ = nullptr;

class WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1 : public $Function {
	$class(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$($BuilderImpl* b) {
		$set(this, b, b);
	}
	virtual $Object* apply(Object$* r) override {
		 return WebSocketImpl::lambda$newInstanceAsync$0(b, $cast($OpeningHandshake$Result, r));
	}
	$BuilderImpl* b = nullptr;
};
$Class* WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b", "Ljdk/internal/net/http/websocket/BuilderImpl;", nullptr, $PUBLIC, $field(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/BuilderImpl;)V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, init$, void, $BuilderImpl*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1::class$ = nullptr;

class WebSocketImpl$$Lambda$lambda$sendText$1$2 : public $BiConsumer {
	$class(WebSocketImpl$$Lambda$lambda$sendText$1$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(WebSocketImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* r, Object$* e) override {
		$nc(inst$)->lambda$sendText$1($cast($WebSocket, r), $cast($Throwable, e));
	}
	WebSocketImpl* inst$ = nullptr;
};
$Class* WebSocketImpl$$Lambda$lambda$sendText$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$$Lambda$lambda$sendText$1$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl;)V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$lambda$sendText$1$2, init$, void, WebSocketImpl*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$lambda$sendText$1$2, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendText$1$2",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$lambda$sendText$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$lambda$sendText$1$2);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$lambda$sendText$1$2::class$ = nullptr;

class WebSocketImpl$$Lambda$lambda$sendPing$3$3 : public $BiConsumer {
	$class(WebSocketImpl$$Lambda$lambda$sendPing$3$3, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(WebSocketImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* r, Object$* e) override {
		$nc(inst$)->lambda$sendPing$3($cast($WebSocket, r), $cast($Throwable, e));
	}
	WebSocketImpl* inst$ = nullptr;
};
$Class* WebSocketImpl$$Lambda$lambda$sendPing$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$$Lambda$lambda$sendPing$3$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl;)V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$lambda$sendPing$3$3, init$, void, WebSocketImpl*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$lambda$sendPing$3$3, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendPing$3$3",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$lambda$sendPing$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$lambda$sendPing$3$3);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$lambda$sendPing$3$3::class$ = nullptr;

class WebSocketImpl$$Lambda$lambda$sendClose0$5$4 : public $BiConsumer {
	$class(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(WebSocketImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* r, Object$* e) override {
		$nc(inst$)->lambda$sendClose0$5($cast($WebSocket, r), $cast($Throwable, e));
	}
	WebSocketImpl* inst$ = nullptr;
};
$Class* WebSocketImpl$$Lambda$lambda$sendClose0$5$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl;)V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, init$, void, WebSocketImpl*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendClose0$5$4",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$lambda$sendClose0$5$4);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$lambda$sendClose0$5$4::class$ = nullptr;

class WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5 : public $BiConsumer {
	$class(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* r, Object$* e) override {
		WebSocketImpl::lambda$sendCloseSilently$6($cast($WebSocket, r), $cast($Throwable, e));
	}
};
$Class* WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5);
	});
	return class$;
}
$Class* WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5::class$ = nullptr;

$Logger* WebSocketImpl::debug = nullptr;

$CompletableFuture* WebSocketImpl::newInstanceAsync($BuilderImpl* b) {
	$init(WebSocketImpl);
	$useLocalObjectStack();
	$var($Function, newWebSocket, $new(WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1, b));
	$var($OpeningHandshake, h, nullptr);
	try {
		$assign(h, $new($OpeningHandshake, b));
	} catch ($Throwable& e) {
		return $MinimalFuture::failedFuture(e);
	}
	return $cast($CompletableFuture, $$nc($nc(h)->send())->thenApply(newWebSocket));
}

WebSocketImpl* WebSocketImpl::newInstance($URI* uri, $String* subprotocol, $WebSocket$Listener* listener, $TransportFactory* transport) {
	$init(WebSocketImpl);
	$var(WebSocketImpl, ws, $new(WebSocketImpl, uri, subprotocol, listener, transport));
	ws->signalOpen();
	return ws;
}

void WebSocketImpl::init$($URI* uri, $String* subprotocol, $WebSocket$Listener* listener, $TransportFactory* transportFactory) {
	$useLocalObjectStack();
	$set(this, sendCounter, $new($AtomicLong));
	$set(this, receiveCounter, $new($AtomicLong));
	$set(this, lastAutomaticPong, $new($AtomicReference));
	$set(this, DONE, $MinimalFuture::completedFuture(this));
	$set(this, outputClosed, $new($AtomicBoolean));
	$init($WebSocketImpl$State);
	$set(this, state, $new($AtomicReference, $WebSocketImpl$State::OPEN));
	$set(this, error, $new($AtomicReference));
	$set(this, pendingTextOrBinary, $new($AtomicBoolean));
	$set(this, pendingPingOrPong, $new($AtomicBoolean));
	$set(this, receiveScheduler, $new($SequentialScheduler, $$new($WebSocketImpl$ReceiveTask, this)));
	$set(this, demand, $new($Demand));
	$set(this, uri, $cast($URI, $Objects::requireNonNull(uri)));
	$set(this, subprotocol, $cast($String, $Objects::requireNonNull(subprotocol)));
	$set(this, listener, $cast($WebSocket$Listener, $Objects::requireNonNull(listener)));
	$var($MessageQueue, var$0, $new($MessageQueue, 6));
	$set(this, transport$, $nc(transportFactory)->createTransport(var$0, $$new($WebSocketImpl$SignallingMessageConsumer, this)));
}

$CompletableFuture* WebSocketImpl::sendText($CharSequence* message, bool last) {
	$useLocalObjectStack();
	$Objects::requireNonNull(message);
	int64_t id = 0;
	if ($nc(WebSocketImpl::debug)->on()) {
		id = this->sendCounter->incrementAndGet();
		WebSocketImpl::debug->log("enter send text %s payload length=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf(message->length())),
			$($Boolean::valueOf(last))
		}));
	}
	$var($CompletableFuture, result, nullptr);
	if (!setPendingTextOrBinary()) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalStateException, "Send pending"_s)));
	} else {
		$assign(result, $nc(this->transport$)->sendText(message, last, this, $$new(WebSocketImpl$$Lambda$lambda$sendText$1$2, this)));
	}
	if (WebSocketImpl::debug->on()) {
		WebSocketImpl::debug->log("exit send text %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			result
		}));
	}
	return replaceNull(result);
}

$CompletableFuture* WebSocketImpl::sendBinary($ByteBuffer* message, bool last) {
	$useLocalObjectStack();
	$Objects::requireNonNull(message);
	int64_t id = 0;
	if ($nc(WebSocketImpl::debug)->on()) {
		id = this->sendCounter->incrementAndGet();
		WebSocketImpl::debug->log("enter send binary %s payload=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			message,
			$($Boolean::valueOf(last))
		}));
	}
	$var($CompletableFuture, result, nullptr);
	if (!setPendingTextOrBinary()) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalStateException, "Send pending"_s)));
	} else {
		$assign(result, $nc(this->transport$)->sendBinary(message, last, this, $$new(WebSocketImpl$$Lambda$lambda$sendText$1$2, this)));
	}
	if (WebSocketImpl::debug->on()) {
		WebSocketImpl::debug->log("exit send binary %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			result
		}));
	}
	return replaceNull(result);
}

void WebSocketImpl::clearPendingTextOrBinary() {
	this->pendingTextOrBinary->set(false);
}

bool WebSocketImpl::setPendingTextOrBinary() {
	return this->pendingTextOrBinary->compareAndSet(false, true);
}

$CompletableFuture* WebSocketImpl::replaceNull($CompletableFuture* cf) {
	if (cf == nullptr) {
		return this->DONE;
	} else {
		return cf;
	}
}

$CompletableFuture* WebSocketImpl::sendPing($ByteBuffer* message) {
	$useLocalObjectStack();
	$Objects::requireNonNull(message);
	int64_t id = 0;
	if ($nc(WebSocketImpl::debug)->on()) {
		id = this->sendCounter->incrementAndGet();
		WebSocketImpl::debug->log("enter send ping %s payload=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			message
		}));
	}
	$var($CompletableFuture, result, nullptr);
	if (!setPendingPingOrPong()) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalStateException, "Send pending"_s)));
	} else {
		$assign(result, $nc(this->transport$)->sendPing(message, this, $$new(WebSocketImpl$$Lambda$lambda$sendPing$3$3, this)));
	}
	if (WebSocketImpl::debug->on()) {
		WebSocketImpl::debug->log("exit send ping %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			result
		}));
	}
	return replaceNull(result);
}

$CompletableFuture* WebSocketImpl::sendPong($ByteBuffer* message) {
	$useLocalObjectStack();
	$Objects::requireNonNull(message);
	int64_t id = 0;
	if ($nc(WebSocketImpl::debug)->on()) {
		id = this->sendCounter->incrementAndGet();
		WebSocketImpl::debug->log("enter send pong %s payload=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			message
		}));
	}
	$var($CompletableFuture, result, nullptr);
	if (!setPendingPingOrPong()) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalStateException, "Send pending"_s)));
	} else {
		$assign(result, $nc(this->transport$)->sendPong(message, this, $$new(WebSocketImpl$$Lambda$lambda$sendPing$3$3, this)));
	}
	if (WebSocketImpl::debug->on()) {
		WebSocketImpl::debug->log("exit send pong %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			result
		}));
	}
	return replaceNull(result);
}

bool WebSocketImpl::setPendingPingOrPong() {
	return this->pendingPingOrPong->compareAndSet(false, true);
}

void WebSocketImpl::clearPendingPingOrPong() {
	this->pendingPingOrPong->set(false);
}

$CompletableFuture* WebSocketImpl::sendClose(int32_t statusCode, $String* reason) {
	$useLocalObjectStack();
	$Objects::requireNonNull(reason);
	int64_t id = 0;
	if ($nc(WebSocketImpl::debug)->on()) {
		id = this->sendCounter->incrementAndGet();
		WebSocketImpl::debug->log("enter send close %s statusCode=%s reason.length=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf(statusCode)),
			$($Integer::valueOf(reason->length()))
		}));
	}
	$var($CompletableFuture, result, nullptr);
	if (!$StatusCodes::isLegalToSendFromClient(statusCode)) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalArgumentException, "statusCode"_s)));
	} else if (!isLegalReason(reason)) {
		$assign(result, $MinimalFuture::failedFuture($$new($IllegalArgumentException, "reason"_s)));
	} else if (!this->outputClosed->compareAndSet(false, true)) {
		$assign(result, $MinimalFuture::failedFuture($$new($IOException, "Output closed"_s)));
	} else {
		$assign(result, sendClose0(statusCode, reason));
	}
	if (WebSocketImpl::debug->on()) {
		WebSocketImpl::debug->log("exit send close %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			result
		}));
	}
	return replaceNull(result);
}

bool WebSocketImpl::isLegalReason($String* reason) {
	$init(WebSocketImpl);
	$useLocalObjectStack();
	if ($nc(reason)->length() > 123) {
		return false;
	}
	$init($StandardCharsets);
	$init($CodingErrorAction);
	$var($CharsetEncoder, encoder, $$nc($$nc($nc($StandardCharsets::UTF_8)->newEncoder())->onMalformedInput($CodingErrorAction::REPORT))->onUnmappableCharacter($CodingErrorAction::REPORT));
	$var($ByteBuffer, bytes, nullptr);
	try {
		$assign(bytes, $nc(encoder)->encode($($CharBuffer::wrap(reason))));
	} catch ($CharacterCodingException& ignored) {
		return false;
	}
	return $nc(bytes)->remaining() <= 123;
}

$CompletableFuture* WebSocketImpl::sendClose0(int32_t statusCode, $String* reason) {
	return $nc(this->transport$)->sendClose(statusCode, reason, this, $$new(WebSocketImpl$$Lambda$lambda$sendClose0$5$4, this));
}

void WebSocketImpl::processCloseError($Throwable* e) {
	if (e == nullptr) {
		$nc(WebSocketImpl::debug)->log("send close completed successfully"_s);
	} else {
		$nc(WebSocketImpl::debug)->log("send close completed with error"_s, e);
	}
	this->outputClosed->set(true);
	try {
		$nc(this->transport$)->closeOutput();
	} catch ($IOException& ignored) {
	}
}

void WebSocketImpl::request(int64_t n) {
	$useLocalObjectStack();
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("request %s"_s, $$new($ObjectArray, {$($Long::valueOf(n))}));
	}
	if (this->demand->increase(n)) {
		this->receiveScheduler->runOrSchedule();
	}
}

$String* WebSocketImpl::getSubprotocol() {
	return this->subprotocol;
}

bool WebSocketImpl::isOutputClosed() {
	return this->outputClosed->get();
}

bool WebSocketImpl::isInputClosed() {
	return this->inputClosed;
}

void WebSocketImpl::abort() {
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("abort"_s);
	}
	this->inputClosed = true;
	this->outputClosed->set(true);
	this->receiveScheduler->stop();
	close();
}

$String* WebSocketImpl::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($WebSocket::toString()));
	var$0->append("[uri="_s);
	var$0->append(this->uri);
	var$0->append(!$nc(this->subprotocol)->isEmpty() ? $$str({", subprotocol="_s, this->subprotocol}) : ""_s);
	var$0->append("]"_s);
	return $str(var$0);
}

void WebSocketImpl::sendCloseSilently(int32_t statusCode) {
	$useLocalObjectStack();
	$$nc(sendClose0(statusCode, ""_s))->whenComplete($$new(WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5));
}

$ByteBuffer* WebSocketImpl::clearAutomaticPong() {
	$var($ByteBuffer, data, nullptr);
	do {
		$assign(data, $cast($ByteBuffer, this->lastAutomaticPong->get()));
		if (data == nullptr) {
			$throwNew($InternalError);
		}
	} while (!this->lastAutomaticPong->compareAndSet(data, nullptr));
	return data;
}

bool WebSocketImpl::trySwapAutomaticPong($ByteBuffer* copy) {
	$useLocalObjectStack();
	$var($ByteBuffer, message, nullptr);
	bool swapped = false;
	while (true) {
		$assign(message, $cast($ByteBuffer, this->lastAutomaticPong->get()));
		if (message == nullptr) {
			if (!this->lastAutomaticPong->compareAndSet(nullptr, copy)) {
				$throwNew($InternalError);
			}
			swapped = false;
			break;
		} else if (this->lastAutomaticPong->compareAndSet(message, copy)) {
			swapped = true;
			break;
		}
	}
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("swapped automatic pong from %s to %s"_s, $$new($ObjectArray, {
			message,
			copy
		}));
	}
	return swapped;
}

void WebSocketImpl::signalOpen() {
	$nc(WebSocketImpl::debug)->log("signalOpen"_s);
	this->receiveScheduler->runOrSchedule();
}

void WebSocketImpl::signalError($Throwable* error) {
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("signalError %s"_s, $$new($ObjectArray, {$of(error)}));
	}
	this->inputClosed = true;
	this->outputClosed->set(true);
	bool var$0 = !$nc(this->error)->compareAndSet(nullptr, error);
	$init($WebSocketImpl$State);
	if (var$0 || !trySetState($WebSocketImpl$State::ERROR)) {
		if (WebSocketImpl::debug->on()) {
			WebSocketImpl::debug->log("signalError"_s, error);
		}
		$Log::logError(error);
	} else {
		close();
	}
}

void WebSocketImpl::close() {
	$useLocalObjectStack();
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("close"_s);
	}
	$var($Throwable, first, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(this->transport$)->closeInput();
		} catch ($Throwable& t1) {
			$assign(first, t1);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$var($Throwable, second, nullptr);
		$var($Throwable, var$2, nullptr);
		try {
			try {
				$nc(this->transport$)->closeOutput();
			} catch ($Throwable& t2) {
				$assign(second, t2);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$var($Throwable, e, nullptr);
			if (first != nullptr && second != nullptr) {
				first->addSuppressed(second);
				$assign(e, first);
			} else if (first != nullptr) {
				$assign(e, first);
			} else if (second != nullptr) {
				$assign(e, second);
			}
			if (e != nullptr) {
				if (WebSocketImpl::debug->on()) {
					WebSocketImpl::debug->log("exception in close"_s, e);
				}
			}
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl::signalClose(int32_t statusCode, $String* reason) {
	$useLocalObjectStack();
	this->inputClosed = true;
	this->statusCode = statusCode;
	$set(this, reason, reason);
	$init($WebSocketImpl$State);
	bool managed = trySetState($WebSocketImpl$State::CLOSE);
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("signalClose statusCode=%s reason.length=%s: %s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(statusCode)),
			$($Integer::valueOf($nc(reason)->length())),
			$($Boolean::valueOf(managed))
		}));
	}
	if (managed) {
		try {
			$nc(this->transport$)->closeInput();
		} catch ($Throwable& t) {
			if (WebSocketImpl::debug->on()) {
				WebSocketImpl::debug->log("exception closing input"_s, $$new($ObjectArray, {$of(t)}));
			}
		}
	}
}

bool WebSocketImpl::trySetState($WebSocketImpl$State* newState) {
	$useLocalObjectStack();
	$WebSocketImpl$State* currentState = nullptr;
	bool success = false;
	while (true) {
		currentState = $cast($WebSocketImpl$State, this->state->get());
		$init($WebSocketImpl$State);
		if (currentState == $WebSocketImpl$State::ERROR || currentState == $WebSocketImpl$State::CLOSE) {
			break;
		} else if (this->state->compareAndSet(currentState, newState)) {
			this->receiveScheduler->runOrSchedule();
			success = true;
			break;
		}
	}
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("set state %s (previous %s) %s"_s, $$new($ObjectArray, {
			newState,
			currentState,
			$($Boolean::valueOf(success))
		}));
	}
	return success;
}

bool WebSocketImpl::tryChangeState($WebSocketImpl$State* expectedState, $WebSocketImpl$State* newState) {
	$useLocalObjectStack();
	$WebSocketImpl$State* witness = $cast($WebSocketImpl$State, this->state->compareAndExchange(expectedState, newState));
	bool success = false;
	if (witness == expectedState) {
		this->receiveScheduler->runOrSchedule();
		success = true;
	} else {
		$init($WebSocketImpl$State);
		if (witness != $WebSocketImpl$State::ERROR && witness != $WebSocketImpl$State::CLOSE) {
			$throwNew($InternalError);
		}
	}
	if ($nc(WebSocketImpl::debug)->on()) {
		WebSocketImpl::debug->log("change state from %s to %s %s"_s, $$new($ObjectArray, {
			expectedState,
			newState,
			$($Boolean::valueOf(success))
		}));
	}
	return success;
}

$Transport* WebSocketImpl::transport() {
	return this->transport$;
}

void WebSocketImpl::lambda$sendCloseSilently$6($WebSocket* r, $Throwable* e) {
	$init(WebSocketImpl);
	if (e != nullptr) {
		if ($nc(WebSocketImpl::debug)->on()) {
			WebSocketImpl::debug->log("automatic closure completed with error"_s, $$new($ObjectArray, {$of(e)}));
		}
	}
}

void WebSocketImpl::lambda$sendClose0$5($WebSocket* r, $Throwable* e) {
	processCloseError(e);
}

void WebSocketImpl::lambda$sendPing$3($WebSocket* r, $Throwable* e) {
	clearPendingPingOrPong();
}

void WebSocketImpl::lambda$sendText$1($WebSocket* r, $Throwable* e) {
	clearPendingTextOrBinary();
}

$WebSocket* WebSocketImpl::lambda$newInstanceAsync$0($BuilderImpl* b, $OpeningHandshake$Result* r) {
	$init(WebSocketImpl);
	$useLocalObjectStack();
	$var($URI, var$0, $nc(b)->getUri());
	$var($String, var$1, $nc(r)->subprotocol);
	$var($WebSocket, ws, newInstance(var$0, var$1, $(b->getListener()), r->transport));
	$Reference::reachabilityFence(b);
	return ws;
}

void WebSocketImpl::clinit$($Class* clazz) {
	$init($Utils);
	$assignStatic(WebSocketImpl::debug, $Utils::getWebSocketLogger($$new(WebSocketImpl$$Lambda$toString, "[WebSocket]"_s), $Utils::DEBUG_WS));
}

WebSocketImpl::WebSocketImpl() {
}

$Class* WebSocketImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$toString")) {
			return WebSocketImpl$$Lambda$toString::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1")) {
			return WebSocketImpl$$Lambda$lambda$newInstanceAsync$0$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendText$1$2")) {
			return WebSocketImpl$$Lambda$lambda$sendText$1$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendPing$3$3")) {
			return WebSocketImpl$$Lambda$lambda$sendPing$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendClose0$5$4")) {
			return WebSocketImpl$$Lambda$lambda$sendClose0$5$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5")) {
			return WebSocketImpl$$Lambda$lambda$sendCloseSilently$6$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WebSocketImpl, debug)},
		{"sendCounter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, sendCounter)},
		{"receiveCounter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, receiveCounter)},
		{"lastAutomaticPong", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(WebSocketImpl, lastAutomaticPong)},
		{"DONE", "Ljdk/internal/net/http/common/MinimalFuture;", "Ljdk/internal/net/http/common/MinimalFuture<Ljava/net/http/WebSocket;>;", $PRIVATE | $FINAL, $field(WebSocketImpl, DONE)},
		{"inputClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WebSocketImpl, inputClosed)},
		{"outputClosed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, outputClosed)},
		{"state", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljdk/internal/net/http/websocket/WebSocketImpl$State;>;", $PRIVATE | $FINAL, $field(WebSocketImpl, state)},
		{"last", "Z", nullptr, $PRIVATE, $field(WebSocketImpl, last)},
		{"binaryData", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(WebSocketImpl, binaryData)},
		{"text", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(WebSocketImpl, text)},
		{"statusCode", "I", nullptr, $PRIVATE, $field(WebSocketImpl, statusCode)},
		{"reason", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WebSocketImpl, reason)},
		{"error", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/lang/Throwable;>;", $PRIVATE | $FINAL, $field(WebSocketImpl, error)},
		{"uri", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, uri)},
		{"subprotocol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, subprotocol)},
		{"listener", "Ljava/net/http/WebSocket$Listener;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, listener)},
		{"pendingTextOrBinary", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, pendingTextOrBinary)},
		{"pendingPingOrPong", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, pendingPingOrPong)},
		{"transport", "Ljdk/internal/net/http/websocket/Transport;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, transport$)},
		{"receiveScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, receiveScheduler)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(WebSocketImpl, demand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URI;Ljava/lang/String;Ljava/net/http/WebSocket$Listener;Ljdk/internal/net/http/websocket/TransportFactory;)V", nullptr, $PRIVATE, $method(WebSocketImpl, init$, void, $URI*, $String*, $WebSocket$Listener*, $TransportFactory*)},
		{"abort", "()V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, abort, void)},
		{"clearAutomaticPong", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(WebSocketImpl, clearAutomaticPong, $ByteBuffer*)},
		{"clearPendingPingOrPong", "()V", nullptr, $PRIVATE, $method(WebSocketImpl, clearPendingPingOrPong, void)},
		{"clearPendingTextOrBinary", "()V", nullptr, $PRIVATE, $method(WebSocketImpl, clearPendingTextOrBinary, void)},
		{"close", "()V", nullptr, $PRIVATE, $method(WebSocketImpl, close, void)},
		{"getSubprotocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, getSubprotocol, $String*)},
		{"isInputClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, isInputClosed, bool)},
		{"isLegalReason", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(WebSocketImpl, isLegalReason, bool, $String*)},
		{"isOutputClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, isOutputClosed, bool)},
		{"lambda$newInstanceAsync$0", "(Ljdk/internal/net/http/websocket/BuilderImpl;Ljdk/internal/net/http/websocket/OpeningHandshake$Result;)Ljava/net/http/WebSocket;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WebSocketImpl, lambda$newInstanceAsync$0, $WebSocket*, $BuilderImpl*, $OpeningHandshake$Result*)},
		{"lambda$sendClose0$5", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WebSocketImpl, lambda$sendClose0$5, void, $WebSocket*, $Throwable*)},
		{"lambda$sendCloseSilently$6", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WebSocketImpl, lambda$sendCloseSilently$6, void, $WebSocket*, $Throwable*)},
		{"lambda$sendPing$3", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WebSocketImpl, lambda$sendPing$3, void, $WebSocket*, $Throwable*)},
		{"lambda$sendText$1", "(Ljava/net/http/WebSocket;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WebSocketImpl, lambda$sendText$1, void, $WebSocket*, $Throwable*)},
		{"newInstance", "(Ljava/net/URI;Ljava/lang/String;Ljava/net/http/WebSocket$Listener;Ljdk/internal/net/http/websocket/TransportFactory;)Ljdk/internal/net/http/websocket/WebSocketImpl;", nullptr, $STATIC, $staticMethod(WebSocketImpl, newInstance, WebSocketImpl*, $URI*, $String*, $WebSocket$Listener*, $TransportFactory*)},
		{"newInstanceAsync", "(Ljdk/internal/net/http/websocket/BuilderImpl;)Ljava/util/concurrent/CompletableFuture;", "(Ljdk/internal/net/http/websocket/BuilderImpl;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC | $STATIC, $staticMethod(WebSocketImpl, newInstanceAsync, $CompletableFuture*, $BuilderImpl*)},
		{"processCloseError", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(WebSocketImpl, processCloseError, void, $Throwable*)},
		{"replaceNull", "(Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PRIVATE, $method(WebSocketImpl, replaceNull, $CompletableFuture*, $CompletableFuture*)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, request, void, int64_t)},
		{"sendBinary", "(Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;Z)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(WebSocketImpl, sendBinary, $CompletableFuture*, $ByteBuffer*, bool)},
		{"sendClose", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture;", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(WebSocketImpl, sendClose, $CompletableFuture*, int32_t, $String*)},
		{"sendClose0", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture;", "(ILjava/lang/String;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PRIVATE, $method(WebSocketImpl, sendClose0, $CompletableFuture*, int32_t, $String*)},
		{"sendCloseSilently", "(I)V", nullptr, $PRIVATE, $method(WebSocketImpl, sendCloseSilently, void, int32_t)},
		{"sendPing", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(WebSocketImpl, sendPing, $CompletableFuture*, $ByteBuffer*)},
		{"sendPong", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture;", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(WebSocketImpl, sendPong, $CompletableFuture*, $ByteBuffer*)},
		{"sendText", "(Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletableFuture;", "(Ljava/lang/CharSequence;Z)Ljava/util/concurrent/CompletableFuture<Ljava/net/http/WebSocket;>;", $PUBLIC, $virtualMethod(WebSocketImpl, sendText, $CompletableFuture*, $CharSequence*, bool)},
		{"setPendingPingOrPong", "()Z", nullptr, $PRIVATE, $method(WebSocketImpl, setPendingPingOrPong, bool)},
		{"setPendingTextOrBinary", "()Z", nullptr, $PRIVATE, $method(WebSocketImpl, setPendingTextOrBinary, bool)},
		{"signalClose", "(ILjava/lang/String;)V", nullptr, $PRIVATE, $method(WebSocketImpl, signalClose, void, int32_t, $String*)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(WebSocketImpl, signalError, void, $Throwable*)},
		{"signalOpen", "()V", nullptr, $PRIVATE, $method(WebSocketImpl, signalOpen, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl, toString, $String*)},
		{"transport", "()Ljdk/internal/net/http/websocket/Transport;", nullptr, $PROTECTED, $method(WebSocketImpl, transport, $Transport*)},
		{"tryChangeState", "(Ljdk/internal/net/http/websocket/WebSocketImpl$State;Ljdk/internal/net/http/websocket/WebSocketImpl$State;)Z", nullptr, $PRIVATE, $method(WebSocketImpl, tryChangeState, bool, $WebSocketImpl$State*, $WebSocketImpl$State*)},
		{"trySetState", "(Ljdk/internal/net/http/websocket/WebSocketImpl$State;)Z", nullptr, $PRIVATE, $method(WebSocketImpl, trySetState, bool, $WebSocketImpl$State*)},
		{"trySwapAutomaticPong", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PRIVATE, $method(WebSocketImpl, trySwapAutomaticPong, bool, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.WebSocketImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"jdk.internal.net.http.websocket.WebSocketImpl$SignallingMessageConsumer", "jdk.internal.net.http.websocket.WebSocketImpl", "SignallingMessageConsumer", $PRIVATE},
		{"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask", "jdk.internal.net.http.websocket.WebSocketImpl", "ReceiveTask", $PRIVATE},
		{"jdk.internal.net.http.websocket.WebSocketImpl$State", "jdk.internal.net.http.websocket.WebSocketImpl", "State", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.WebSocketImpl",
		"java.lang.Object",
		"java.net.http.WebSocket",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.WebSocketImpl$1,jdk.internal.net.http.websocket.WebSocketImpl$SignallingMessageConsumer,jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask,jdk.internal.net.http.websocket.WebSocketImpl$State"
	};
	$loadClass(WebSocketImpl, name, initialize, &classInfo$$, WebSocketImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl);
	});
	return class$;
}

$Class* WebSocketImpl::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk