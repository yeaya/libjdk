#include <jdk/internal/net/http/websocket/WebSocketImpl$ReceiveTask.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ProtocolException.h>
#include <java/net/http/WebSocket$Listener.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/websocket/FailWebSocketException.h>
#include <jdk/internal/net/http/websocket/Transport.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl$1.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl$State.h>
#include <jdk/internal/net/http/websocket/WebSocketImpl.h>
#include <jcpp.h>

#undef BINARY
#undef DONE
#undef IDLE
#undef OPEN
#undef PING
#undef PONG
#undef TEXT
#undef WAITING

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ProtocolException = ::java::net::ProtocolException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Supplier = ::java::util::function::Supplier;
using $SequentialScheduler$CompleteRestartableTask = ::jdk::internal::net::http::common::SequentialScheduler$CompleteRestartableTask;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $FailWebSocketException = ::jdk::internal::net::http::websocket::FailWebSocketException;
using $WebSocketImpl = ::jdk::internal::net::http::websocket::WebSocketImpl;
using $WebSocketImpl$1 = ::jdk::internal::net::http::websocket::WebSocketImpl$1;
using $WebSocketImpl$State = ::jdk::internal::net::http::websocket::WebSocketImpl$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0 : public $BiConsumer {
	$class(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(WebSocketImpl$ReceiveTask* inst, int32_t code) {
		$set(this, inst$, inst);
		this->code = code;
	}
	virtual void accept(Object$* r, Object$* e) override {
		$nc(inst$)->lambda$processClose$0(code, r, $cast($Throwable, e));
	}
	WebSocketImpl$ReceiveTask* inst$ = nullptr;
	int32_t code = 0;
};
$Class* WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, inst$)},
		{"code", "I", nullptr, $PUBLIC, $field(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, code)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl$ReceiveTask;I)V", nullptr, $PUBLIC, $method(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, init$, void, WebSocketImpl$ReceiveTask*, int32_t)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0);
	});
	return class$;
}
$Class* WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0::class$ = nullptr;

class WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1 : public $BiConsumer {
	$class(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(WebSocketImpl$ReceiveTask* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* r, Object$* e) override {
		$nc(inst$)->lambda$processPing$1($cast($WebSocketImpl, r), $cast($Throwable, e));
	}
	WebSocketImpl$ReceiveTask* inst$ = nullptr;
};
$Class* WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl$ReceiveTask;)V", nullptr, $PUBLIC, $method(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, init$, void, WebSocketImpl$ReceiveTask*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1);
	});
	return class$;
}
$Class* WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1::class$ = nullptr;

class WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2 : public $Supplier {
	$class(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($WebSocketImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->clearAutomaticPong());
	}
	$WebSocketImpl* inst$ = nullptr;
};
$Class* WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl;)V", nullptr, $PUBLIC, $method(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, init$, void, $WebSocketImpl*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2);
	});
	return class$;
}
$Class* WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2::class$ = nullptr;

void WebSocketImpl$ReceiveTask::init$($WebSocketImpl* this$0) {
	$set(this, this$0, this$0);
	$SequentialScheduler$CompleteRestartableTask::init$();
}

void WebSocketImpl$ReceiveTask::run() {
	$useLocalObjectStack();
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		$WebSocketImpl::debug->log("enter receive task"_s);
	}
	bool loop$break = false;
	while (!$nc(this->this$0->receiveScheduler)->isStopped()) {
		$WebSocketImpl$State* s = $cast($WebSocketImpl$State, $nc(this->this$0->state)->get());
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("receive state: %s"_s, $$new($ObjectArray, {s}));
		}
		try {
			$init($WebSocketImpl$1);
			switch ($nc($WebSocketImpl$1::$SwitchMap$jdk$internal$net$http$websocket$WebSocketImpl$State)->get($nc((s))->ordinal())) {
			case 1:
				processOpen();
				this->this$0->tryChangeState($WebSocketImpl$State::OPEN, $WebSocketImpl$State::IDLE);
				break;
			case 2:
				processText();
				this->this$0->tryChangeState($WebSocketImpl$State::TEXT, $WebSocketImpl$State::IDLE);
				break;
			case 3:
				processBinary();
				this->this$0->tryChangeState($WebSocketImpl$State::BINARY, $WebSocketImpl$State::IDLE);
				break;
			case 4:
				processPing();
				this->this$0->tryChangeState($WebSocketImpl$State::PING, $WebSocketImpl$State::IDLE);
				break;
			case 5:
				processPong();
				this->this$0->tryChangeState($WebSocketImpl$State::PONG, $WebSocketImpl$State::IDLE);
				break;
			case 6:
				processClose();
				loop$break = true;
				break;
			case 7:
				processError();
				loop$break = true;
				break;
			case 8:
				{
					bool var$0 = $nc(this->this$0->demand)->tryDecrement();
					if (var$0 && this->this$0->tryChangeState($WebSocketImpl$State::IDLE, $WebSocketImpl$State::WAITING)) {
						$nc(this->this$0->transport$)->request(1);
					}
					loop$break = true;
					break;
				}
			case 9:
				loop$break = true;
				break;
			default:
				$throwNew($InternalError, $($String::valueOf(s)));
			}
			if (loop$break) {
				break;
			}
		} catch ($Throwable& t) {
			this->this$0->signalError(t);
		}
	}
	if ($WebSocketImpl::debug->on()) {
		$WebSocketImpl::debug->log("exit receive task"_s);
	}
}

void WebSocketImpl$ReceiveTask::processError() {
	$useLocalObjectStack();
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		$WebSocketImpl::debug->log("processError"_s);
	}
	$nc(this->this$0->transport$)->closeInput();
	$nc(this->this$0->receiveScheduler)->stop();
	$var($Throwable, err, $cast($Throwable, $nc(this->this$0->error)->get()));
	if ($instanceOf($FailWebSocketException, err)) {
		int32_t code1 = $cast($FailWebSocketException, err)->getStatusCode();
		$assign(err, $$new($ProtocolException)->initCause(err));
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("failing %s with error=%s statusCode=%s"_s, $$new($ObjectArray, {
				this->this$0,
				err,
				$($Integer::valueOf(code1))
			}));
		}
		this->this$0->sendCloseSilently(code1);
	}
	int64_t id = 0;
	if ($WebSocketImpl::debug->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onError %s error=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			err
		}));
	}
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->this$0->listener)->onError(this->this$0, err);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onError %s"_s, $$new($ObjectArray, {$($Long::valueOf(id))}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::processClose() {
	$useLocalObjectStack();
	$init($WebSocketImpl);
	$nc($WebSocketImpl::debug)->log("processClose"_s);
	$nc(this->this$0->transport$)->closeInput();
	$nc(this->this$0->receiveScheduler)->stop();
	$var($CompletionStage, cs, nullptr);
	int64_t id = 0;
	if ($WebSocketImpl::debug->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onClose %s statusCode=%s reason.length=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf(this->this$0->statusCode)),
			$($Integer::valueOf($nc(this->this$0->reason)->length()))
		}));
	}
	$var($Throwable, var$0, nullptr);
	try {
		$assign(cs, $nc(this->this$0->listener)->onClose(this->this$0, this->this$0->statusCode, this->this$0->reason));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$WebSocketImpl::debug->log("exit onClose %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			cs
		}));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (cs == nullptr) {
		$assign(cs, this->this$0->DONE);
	}
	int32_t code = 0;
	if (this->this$0->statusCode == 1005 || this->this$0->statusCode == 1006) {
		code = 1000;
		$WebSocketImpl::debug->log("using statusCode %s instead of %s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->this$0->statusCode)),
			$($Integer::valueOf(code))
		}));
	} else {
		code = this->this$0->statusCode;
	}
	$nc(cs)->whenComplete($$new(WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0, this, code));
}

void WebSocketImpl$ReceiveTask::processPong() {
	$useLocalObjectStack();
	int64_t id = 0;
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onPong %s payload=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			this->this$0->binaryData
		}));
	}
	$var($CompletionStage, cs, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(cs, $nc(this->this$0->listener)->onPong(this->this$0, this->this$0->binaryData));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onPong %s returned %s"_s, $$new($ObjectArray, {
				$($Long::valueOf(id)),
				cs
			}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::processPing() {
	$useLocalObjectStack();
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		$WebSocketImpl::debug->log("processPing"_s);
	}
	$var($ByteBuffer, slice, $nc(this->this$0->binaryData)->slice());
	if (!$nc(this->this$0->outputClosed)->get()) {
		$var($ByteBuffer, copy, $$nc($$nc($ByteBuffer::allocate($nc(this->this$0->binaryData)->remaining()))->put(this->this$0->binaryData))->flip());
		if (!this->this$0->trySwapAutomaticPong(copy)) {
			$var($BiConsumer, reporter, $new(WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1, this));
			$nc(this->this$0->transport$)->sendPong($$new(WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2, this->this$0), this->this$0, reporter);
		}
	}
	int64_t id = 0;
	if ($WebSocketImpl::debug->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onPing %s payload=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			slice
		}));
	}
	$var($CompletionStage, cs, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(cs, $nc(this->this$0->listener)->onPing(this->this$0, slice));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onPing %s returned %s"_s, $$new($ObjectArray, {
				$($Long::valueOf(id)),
				cs
			}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::processBinary() {
	$useLocalObjectStack();
	int64_t id = 0;
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onBinary %s payload=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			this->this$0->binaryData,
			$($Boolean::valueOf(this->this$0->last))
		}));
	}
	$var($CompletionStage, cs, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(cs, $nc(this->this$0->listener)->onBinary(this->this$0, this->this$0->binaryData, this->this$0->last));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onBinary %s returned %s"_s, $$new($ObjectArray, {
				$($Long::valueOf(id)),
				cs
			}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::processText() {
	$useLocalObjectStack();
	int64_t id = 0;
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onText %s payload.length=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf($nc(this->this$0->text)->length())),
			$($Boolean::valueOf(this->this$0->last))
		}));
	}
	$var($CompletionStage, cs, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(cs, $nc(this->this$0->listener)->onText(this->this$0, this->this$0->text, this->this$0->last));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onText %s returned %s"_s, $$new($ObjectArray, {
				$($Long::valueOf(id)),
				cs
			}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::processOpen() {
	$useLocalObjectStack();
	int64_t id = 0;
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		id = $nc(this->this$0->receiveCounter)->incrementAndGet();
		$WebSocketImpl::debug->log("enter onOpen %s"_s, $$new($ObjectArray, {$($Long::valueOf(id))}));
	}
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->this$0->listener)->onOpen(this->this$0);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if ($WebSocketImpl::debug->on()) {
			$WebSocketImpl::debug->log("exit onOpen %s"_s, $$new($ObjectArray, {$($Long::valueOf(id))}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WebSocketImpl$ReceiveTask::lambda$processPing$1($WebSocketImpl* r, $Throwable* e) {
	if (e != nullptr) {
		this->this$0->signalError($($Utils::getCompletionCause(e)));
	}
}

void WebSocketImpl$ReceiveTask::lambda$processClose$0(int32_t code, Object$* r, $Throwable* e) {
	$init($WebSocketImpl);
	if ($nc($WebSocketImpl::debug)->on()) {
		$WebSocketImpl::debug->log("CompletionStage returned by onClose completed result=%s error=%s"_s, $$new($ObjectArray, {
			r,
			e
		}));
	}
	this->this$0->sendCloseSilently(code);
}

WebSocketImpl$ReceiveTask::WebSocketImpl$ReceiveTask() {
}

$Class* WebSocketImpl$ReceiveTask::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0")) {
			return WebSocketImpl$ReceiveTask$$Lambda$lambda$processClose$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1")) {
			return WebSocketImpl$ReceiveTask$$Lambda$lambda$processPing$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2")) {
			return WebSocketImpl$ReceiveTask$$Lambda$clearAutomaticPong$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/websocket/WebSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WebSocketImpl$ReceiveTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/WebSocketImpl;)V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, init$, void, $WebSocketImpl*)},
		{"lambda$processClose$0", "(ILjava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WebSocketImpl$ReceiveTask, lambda$processClose$0, void, int32_t, Object$*, $Throwable*)},
		{"lambda$processPing$1", "(Ljdk/internal/net/http/websocket/WebSocketImpl;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(WebSocketImpl$ReceiveTask, lambda$processPing$1, void, $WebSocketImpl*, $Throwable*)},
		{"processBinary", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processBinary, void)},
		{"processClose", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processClose, void), "java.io.IOException"},
		{"processError", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processError, void), "java.io.IOException"},
		{"processOpen", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processOpen, void)},
		{"processPing", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processPing, void)},
		{"processPong", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processPong, void)},
		{"processText", "()V", nullptr, $PRIVATE, $method(WebSocketImpl$ReceiveTask, processText, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WebSocketImpl$ReceiveTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask", "jdk.internal.net.http.websocket.WebSocketImpl", "ReceiveTask", $PRIVATE},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.WebSocketImpl$ReceiveTask",
		"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.WebSocketImpl"
	};
	$loadClass(WebSocketImpl$ReceiveTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketImpl$ReceiveTask);
	});
	return class$;
}

$Class* WebSocketImpl$ReceiveTask::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk