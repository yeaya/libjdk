#include <jdk/internal/net/http/websocket/TransportImpl.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/websocket/Frame$Reader.h>
#include <jdk/internal/net/http/websocket/MessageDecoder.h>
#include <jdk/internal/net/http/websocket/MessageEncoder.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jdk/internal/net/http/websocket/MessageStreamConsumer.h>
#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ChannelState.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ReadEvent.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ReceiveTask.h>
#include <jdk/internal/net/http/websocket/TransportImpl$SendTask.h>
#include <jdk/internal/net/http/websocket/TransportImpl$WriteEvent.h>
#include <jcpp.h>

#undef CLOSED
#undef DEBUG_WS
#undef UNREGISTERED

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Supplier = ::java::util::function::Supplier;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $Frame$Reader = ::jdk::internal::net::http::websocket::Frame$Reader;
using $MessageDecoder = ::jdk::internal::net::http::websocket::MessageDecoder;
using $MessageEncoder = ::jdk::internal::net::http::websocket::MessageEncoder;
using $MessageQueue = ::jdk::internal::net::http::websocket::MessageQueue;
using $MessageStreamConsumer = ::jdk::internal::net::http::websocket::MessageStreamConsumer;
using $RawChannel = ::jdk::internal::net::http::websocket::RawChannel;
using $TransportImpl$ChannelState = ::jdk::internal::net::http::websocket::TransportImpl$ChannelState;
using $TransportImpl$ReadEvent = ::jdk::internal::net::http::websocket::TransportImpl$ReadEvent;
using $TransportImpl$ReceiveTask = ::jdk::internal::net::http::websocket::TransportImpl$ReceiveTask;
using $TransportImpl$SendTask = ::jdk::internal::net::http::websocket::TransportImpl$SendTask;
using $TransportImpl$WriteEvent = ::jdk::internal::net::http::websocket::TransportImpl$WriteEvent;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TransportImpl$$Lambda$toString : public $Supplier {
	$class(TransportImpl$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* TransportImpl$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TransportImpl$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransportImpl$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TransportImpl$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.websocket.TransportImpl$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TransportImpl$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl$$Lambda$toString);
	});
	return class$;
}
$Class* TransportImpl$$Lambda$toString::class$ = nullptr;

bool TransportImpl::$assertionsDisabled = false;
$Logger* TransportImpl::debug = nullptr;

void TransportImpl::init$($MessageQueue* queue, $MessageStreamConsumer* consumer, $RawChannel* channel) {
	$useLocalObjectStack();
	$set(this, counter, $new($AtomicLong));
	$set(this, sendScheduler, $new($SequentialScheduler, $$new($TransportImpl$SendTask, this)));
	$set(this, encoder, $new($MessageEncoder));
	$set(this, dst, $$nc($$nc(createWriteBuffer())->position(0))->limit(0));
	$set(this, dstArray, $new($ByteBufferArray, {this->dst}));
	$set(this, reader, $new($Frame$Reader));
	$set(this, demand, $new($Demand));
	$set(this, closeLock, $new($Object));
	$set(this, writeEvent, $new($TransportImpl$WriteEvent, this));
	$set(this, readEvent, $new($TransportImpl$ReadEvent, this));
	$init($TransportImpl$ChannelState);
	$set(this, writeState, $new($AtomicReference, $TransportImpl$ChannelState::UNREGISTERED));
	$set(this, readState, $TransportImpl$ChannelState::UNREGISTERED);
	$set(this, queue, queue);
	$set(this, messageConsumer, consumer);
	$set(this, channel, channel);
	$set(this, decoder, $new($MessageDecoder, this->messageConsumer));
	$set(this, data, $nc(channel)->initialByteBuffer());
	$set(this, receiveScheduler, $new($SequentialScheduler, $$new($TransportImpl$ReceiveTask, this)));
}

$ByteBuffer* TransportImpl::createWriteBuffer() {
	$useLocalObjectStack();
	$var($String, name, "jdk.httpclient.websocket.writeBufferSize"_s);
	int32_t capacity = $Utils::getIntegerNetProperty(name, 16384);
	if ($nc(TransportImpl::debug)->on()) {
		TransportImpl::debug->log("write buffer capacity %s"_s, $$new($ObjectArray, {$($Integer::valueOf(capacity))}));
	}
	return $ByteBuffer::allocate(capacity);
}

bool TransportImpl::write() {
	$useLocalObjectStack();
	if ($nc(TransportImpl::debug)->on()) {
		TransportImpl::debug->log("writing to the channel"_s);
	}
	int64_t count = $nc(this->channel)->write(this->dstArray, 0, this->dstArray->length);
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("%s bytes written"_s, $$new($ObjectArray, {$($Long::valueOf(count))}));
	}
	{
		$var($ByteBufferArray, arr$, this->dstArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($ByteBuffer, b, arr$->get(i$));
			if ($nc(b)->hasRemaining()) {
				return false;
			}
		}
	}
	return true;
}

$CompletableFuture* TransportImpl::sendText($CharSequence* message, bool isLast, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send text %s message.length=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf($nc(message)->length())),
			$($Boolean::valueOf(isLast))
		}));
	}
	$var($CharBuffer, text, $CharBuffer::wrap(message));
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addText(text, isLast, attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send text %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

$CompletableFuture* TransportImpl::sendBinary($ByteBuffer* message, bool isLast, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send binary %s message.remaining=%s last=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf($nc(message)->remaining())),
			$($Boolean::valueOf(isLast))
		}));
	}
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addBinary(message, isLast, attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send binary %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

$CompletableFuture* TransportImpl::sendPing($ByteBuffer* message, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send ping %s message.remaining=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf($nc(message)->remaining()))
		}));
	}
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addPing(message, attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send ping %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

$CompletableFuture* TransportImpl::sendPong($ByteBuffer* message, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send pong %s message.remaining=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf($nc(message)->remaining()))
		}));
	}
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addPong(message, attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send pong %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

$CompletableFuture* TransportImpl::sendPong($Supplier* message, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send pong %s supplier=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			message
		}));
	}
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addPong(message, attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send pong %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

$CompletableFuture* TransportImpl::sendClose(int32_t statusCode, $String* reason, Object$* attachment, $BiConsumer* action) {
	$useLocalObjectStack();
	int64_t id = 0;
	if ($nc(TransportImpl::debug)->on()) {
		id = this->counter->incrementAndGet();
		TransportImpl::debug->log("enter send close %s statusCode=%s reason.length=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			$($Integer::valueOf(statusCode)),
			$($Integer::valueOf($nc(reason)->length()))
		}));
	}
	$var($MinimalFuture, f, $new($MinimalFuture));
	try {
		$nc(this->queue)->addClose(statusCode, $($CharBuffer::wrap(reason)), attachment, action, f);
		this->sendScheduler->runOrSchedule();
	} catch ($IOException& e) {
		$nc(action)->accept(nullptr, e);
		f->completeExceptionally(e);
	}
	if (TransportImpl::debug->on()) {
		TransportImpl::debug->log("exit send close %s returned %s"_s, $$new($ObjectArray, {
			$($Long::valueOf(id)),
			f
		}));
	}
	return f;
}

void TransportImpl::request(int64_t n) {
	$useLocalObjectStack();
	if ($nc(TransportImpl::debug)->on()) {
		TransportImpl::debug->log("request %s"_s, $$new($ObjectArray, {$($Long::valueOf(n))}));
	}
	if (this->demand->increase(n)) {
		this->receiveScheduler->runOrSchedule();
	}
}

void TransportImpl::acknowledgeReception() {
	bool decremented = this->demand->tryDecrement();
	if (!decremented) {
		$throwNew($InternalError);
	}
}

void TransportImpl::closeOutput() {
	if ($nc(TransportImpl::debug)->on()) {
		TransportImpl::debug->log("closeOutput"_s);
	}
	$synchronized(this->closeLock) {
		if (!this->outputClosed) {
			this->outputClosed = true;
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->channel)->shutdownOutput();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$init($TransportImpl$ChannelState);
				this->writeState->set($TransportImpl$ChannelState::CLOSED);
				if (this->inputClosed) {
					$nc(this->channel)->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$TransportImpl$ChannelState* s = $cast($TransportImpl$ChannelState, this->writeState->get());
	$init($TransportImpl$ChannelState);
	if (!TransportImpl::$assertionsDisabled && !(s == $TransportImpl$ChannelState::CLOSED)) {
		$throwNew($AssertionError, s);
	}
	this->sendScheduler->runOrSchedule();
}

void TransportImpl::closeInput() {
	if ($nc(TransportImpl::debug)->on()) {
		TransportImpl::debug->log("closeInput"_s);
	}
	$synchronized(this->closeLock) {
		if (!this->inputClosed) {
			this->inputClosed = true;
			$var($Throwable, var$0, nullptr);
			try {
				this->receiveScheduler->stop();
				$nc(this->channel)->shutdownInput();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (this->outputClosed) {
					$TransportImpl$ChannelState* s = $cast($TransportImpl$ChannelState, this->writeState->get());
					$init($TransportImpl$ChannelState);
					if (!TransportImpl::$assertionsDisabled && !(s == $TransportImpl$ChannelState::CLOSED)) {
						$throwNew($AssertionError, s);
					}
					$nc(this->channel)->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void TransportImpl::clinit$($Class* clazz) {
	TransportImpl::$assertionsDisabled = !TransportImpl::class$->desiredAssertionStatus();
	$init($Utils);
	$assignStatic(TransportImpl::debug, $Utils::getWebSocketLogger($$new(TransportImpl$$Lambda$toString, "[Transport]"_s), $Utils::DEBUG_WS));
}

TransportImpl::TransportImpl() {
}

$Class* TransportImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.websocket.TransportImpl$$Lambda$toString")) {
			return TransportImpl$$Lambda$toString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TransportImpl, $assertionsDisabled)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransportImpl, debug)},
		{"counter", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, counter)},
		{"sendScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, sendScheduler)},
		{"queue", "Ljdk/internal/net/http/websocket/MessageQueue;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, queue)},
		{"encoder", "Ljdk/internal/net/http/websocket/MessageEncoder;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, encoder)},
		{"dst", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, dst)},
		{"dstArray", "[Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, dstArray)},
		{"messageConsumer", "Ljdk/internal/net/http/websocket/MessageStreamConsumer;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, messageConsumer)},
		{"decoder", "Ljdk/internal/net/http/websocket/MessageDecoder;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, decoder)},
		{"reader", "Ljdk/internal/net/http/websocket/Frame$Reader;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, reader)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, demand)},
		{"receiveScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, receiveScheduler)},
		{"channel", "Ljdk/internal/net/http/websocket/RawChannel;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, channel)},
		{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, closeLock)},
		{"writeEvent", "Ljdk/internal/net/http/websocket/RawChannel$RawEvent;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, writeEvent)},
		{"readEvent", "Ljdk/internal/net/http/websocket/RawChannel$RawEvent;", nullptr, $PRIVATE | $FINAL, $field(TransportImpl, readEvent)},
		{"writeState", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljdk/internal/net/http/websocket/TransportImpl$ChannelState;>;", $PRIVATE | $FINAL, $field(TransportImpl, writeState)},
		{"data", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(TransportImpl, data)},
		{"readState", "Ljdk/internal/net/http/websocket/TransportImpl$ChannelState;", nullptr, $PRIVATE | $VOLATILE, $field(TransportImpl, readState)},
		{"inputClosed", "Z", nullptr, $PRIVATE, $field(TransportImpl, inputClosed)},
		{"outputClosed", "Z", nullptr, $PRIVATE, $field(TransportImpl, outputClosed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/MessageQueue;Ljdk/internal/net/http/websocket/MessageStreamConsumer;Ljdk/internal/net/http/websocket/RawChannel;)V", nullptr, $PUBLIC, $method(TransportImpl, init$, void, $MessageQueue*, $MessageStreamConsumer*, $RawChannel*)},
		{"acknowledgeReception", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl, acknowledgeReception, void)},
		{"closeInput", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl, closeInput, void), "java.io.IOException"},
		{"closeOutput", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl, closeOutput, void), "java.io.IOException"},
		{"createWriteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(TransportImpl, createWriteBuffer, $ByteBuffer*)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(TransportImpl, request, void, int64_t)},
		{"sendBinary", "(Ljava/nio/ByteBuffer;ZLjava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;ZTT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendBinary, $CompletableFuture*, $ByteBuffer*, bool, Object$*, $BiConsumer*)},
		{"sendClose", "(ILjava/lang/String;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(ILjava/lang/String;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendClose, $CompletableFuture*, int32_t, $String*, Object$*, $BiConsumer*)},
		{"sendPing", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendPing, $CompletableFuture*, $ByteBuffer*, Object$*, $BiConsumer*)},
		{"sendPong", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendPong, $CompletableFuture*, $ByteBuffer*, Object$*, $BiConsumer*)},
		{"sendPong", "(Ljava/util/function/Supplier;Ljava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;TT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendPong, $CompletableFuture*, $Supplier*, Object$*, $BiConsumer*)},
		{"sendText", "(Ljava/lang/CharSequence;ZLjava/lang/Object;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", "<T:Ljava/lang/Object;>(Ljava/lang/CharSequence;ZTT;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)Ljava/util/concurrent/CompletableFuture<TT;>;", $PUBLIC, $virtualMethod(TransportImpl, sendText, $CompletableFuture*, $CharSequence*, bool, Object$*, $BiConsumer*)},
		{"write", "()Z", nullptr, $PRIVATE, $method(TransportImpl, write, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TransportImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"jdk.internal.net.http.websocket.TransportImpl$ReadEvent", "jdk.internal.net.http.websocket.TransportImpl", "ReadEvent", $PRIVATE},
		{"jdk.internal.net.http.websocket.TransportImpl$WriteEvent", "jdk.internal.net.http.websocket.TransportImpl", "WriteEvent", $PRIVATE},
		{"jdk.internal.net.http.websocket.TransportImpl$ReceiveTask", "jdk.internal.net.http.websocket.TransportImpl", "ReceiveTask", $PRIVATE},
		{"jdk.internal.net.http.websocket.TransportImpl$SendTask", "jdk.internal.net.http.websocket.TransportImpl", "SendTask", $PRIVATE},
		{"jdk.internal.net.http.websocket.TransportImpl$ChannelState", "jdk.internal.net.http.websocket.TransportImpl", "ChannelState", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.websocket.TransportImpl",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.Transport",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TransportImpl$1,jdk.internal.net.http.websocket.TransportImpl$ReadEvent,jdk.internal.net.http.websocket.TransportImpl$WriteEvent,jdk.internal.net.http.websocket.TransportImpl$ReceiveTask,jdk.internal.net.http.websocket.TransportImpl$SendTask,jdk.internal.net.http.websocket.TransportImpl$SendTask$2,jdk.internal.net.http.websocket.TransportImpl$SendTask$1,jdk.internal.net.http.websocket.TransportImpl$ChannelState"
	};
	$loadClass(TransportImpl, name, initialize, &classInfo$$, TransportImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl);
	});
	return class$;
}

$Class* TransportImpl::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk