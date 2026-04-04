#include <jdk/internal/net/http/ResponseSubscribers$HttpResponseInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef DEBUG
#undef LAST_BUFFER
#undef LAST_LIST
#undef MAX_BUFFERS_IN_QUEUE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Supplier = ::java::util::function::Supplier;
using $ResponseSubscribers = ::jdk::internal::net::http::ResponseSubscribers;
using $Logger = ::jdk::internal::net::http::common::Logger;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class ResponseSubscribers$HttpResponseInputStream$$Lambda$toString : public $Supplier {
	$class(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	$String* inst$ = nullptr;
};
$Class* ResponseSubscribers$HttpResponseInputStream$$Lambda$toString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$HttpResponseInputStream$$Lambda$toString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString);
	});
	return class$;
}
$Class* ResponseSubscribers$HttpResponseInputStream$$Lambda$toString::class$ = nullptr;

int32_t ResponseSubscribers$HttpResponseInputStream::hashCode() {
	 return this->$InputStream::hashCode();
}

bool ResponseSubscribers$HttpResponseInputStream::equals(Object$* arg0) {
	 return this->$InputStream::equals(arg0);
}

$Object* ResponseSubscribers$HttpResponseInputStream::clone() {
	 return this->$InputStream::clone();
}

$String* ResponseSubscribers$HttpResponseInputStream::toString() {
	 return this->$InputStream::toString();
}

void ResponseSubscribers$HttpResponseInputStream::finalize() {
	this->$InputStream::finalize();
}

bool ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled = false;
$ByteBuffer* ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER = nullptr;
$List* ResponseSubscribers$HttpResponseInputStream::LAST_LIST = nullptr;
$Logger* ResponseSubscribers$HttpResponseInputStream::debug = nullptr;

void ResponseSubscribers$HttpResponseInputStream::init$() {
	ResponseSubscribers$HttpResponseInputStream::init$(ResponseSubscribers$HttpResponseInputStream::MAX_BUFFERS_IN_QUEUE);
}

void ResponseSubscribers$HttpResponseInputStream::init$(int32_t maxBuffers) {
	$InputStream::init$();
	$set(this, subscribed, $new($AtomicBoolean));
	int32_t capacity = (maxBuffers <= 0 ? ResponseSubscribers$HttpResponseInputStream::MAX_BUFFERS_IN_QUEUE : maxBuffers);
	$set(this, buffers, $new($ArrayBlockingQueue, capacity + 1));
}

$CompletionStage* ResponseSubscribers$HttpResponseInputStream::getBody() {
	return $CompletableFuture::completedStage(this);
}

$ByteBuffer* ResponseSubscribers$HttpResponseInputStream::current() {
	$useLocalObjectStack();
	while (this->currentBuffer == nullptr || !$nc(this->currentBuffer)->hasRemaining()) {
		if (this->closed || this->failed != nullptr) {
			$throwNew($IOException, "closed"_s, this->failed);
		}
		if (this->currentBuffer == ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER) {
			break;
		}
		try {
			if (this->currentListItr == nullptr || !$nc(this->currentListItr)->hasNext()) {
				if ($nc(ResponseSubscribers$HttpResponseInputStream::debug)->on()) {
					ResponseSubscribers$HttpResponseInputStream::debug->log("Taking list of Buffers"_s);
				}
				$var($List, lb, $cast($List, $nc(this->buffers)->take()));
				$set(this, currentListItr, $nc(lb)->iterator());
				if (ResponseSubscribers$HttpResponseInputStream::debug->on()) {
					ResponseSubscribers$HttpResponseInputStream::debug->log("List of Buffers Taken"_s);
				}
				if (this->closed || this->failed != nullptr) {
					$throwNew($IOException, "closed"_s, this->failed);
				}
				if (lb == ResponseSubscribers$HttpResponseInputStream::LAST_LIST) {
					$set(this, currentListItr, nullptr);
					$set(this, currentBuffer, ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER);
					break;
				}
				$var($Flow$Subscription, s, this->subscription);
				if (s != nullptr) {
					if (ResponseSubscribers$HttpResponseInputStream::debug->on()) {
						ResponseSubscribers$HttpResponseInputStream::debug->log("Increased demand by 1"_s);
					}
					s->request(1);
				}
				if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !(this->currentListItr != nullptr)) {
					$throwNew($AssertionError);
				}
				if (lb->isEmpty()) {
					continue;
				}
			}
			if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !(this->currentListItr != nullptr)) {
				$throwNew($AssertionError);
			}
			if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !$nc(this->currentListItr)->hasNext()) {
				$throwNew($AssertionError);
			}
			if ($nc(ResponseSubscribers$HttpResponseInputStream::debug)->on()) {
				ResponseSubscribers$HttpResponseInputStream::debug->log("Next Buffer"_s);
			}
			$set(this, currentBuffer, $cast($ByteBuffer, $nc(this->currentListItr)->next()));
		} catch ($InterruptedException& ex) {
		}
	}
	if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !(this->currentBuffer == ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER || $nc(this->currentBuffer)->hasRemaining())) {
		$throwNew($AssertionError);
	}
	return this->currentBuffer;
}

int32_t ResponseSubscribers$HttpResponseInputStream::read($bytes* bytes, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(bytes)->length);
	if (len == 0) {
		return 0;
	}
	$var($ByteBuffer, buffer, nullptr);
	if (($assign(buffer, current())) == ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER) {
		return -1;
	}
	int32_t read = $Math::min($nc(buffer)->remaining(), len);
	if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !(read > 0 && read <= buffer->remaining())) {
		$throwNew($AssertionError);
	}
	buffer->get(bytes, off, read);
	return read;
}

int32_t ResponseSubscribers$HttpResponseInputStream::read() {
	$var($ByteBuffer, buffer, nullptr);
	if (($assign(buffer, current())) == ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER) {
		return -1;
	}
	return $nc(buffer)->get() & 0xff;
}

int32_t ResponseSubscribers$HttpResponseInputStream::available() {
	$useLocalObjectStack();
	if (this->closed) {
		return 0;
	}
	int32_t available = 0;
	$var($ByteBuffer, current, this->currentBuffer);
	if (current == ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER) {
		return 0;
	}
	if (current != nullptr) {
		available = current->remaining();
	}
	if (available != 0) {
		return available;
	}
	$var($Iterator, iterator, this->currentListItr);
	if (iterator != nullptr && iterator->hasNext()) {
		return 1;
	}
	if ($nc(this->buffers)->isEmpty()) {
		return 0;
	}
	return 1;
}

void ResponseSubscribers$HttpResponseInputStream::onSubscribe($Flow$Subscription* s) {
	$useLocalObjectStack();
	$Objects::requireNonNull(s);
	try {
		if (!$nc(this->subscribed)->compareAndSet(false, true)) {
			s->cancel();
		} else {
			bool closed = false;
			$synchronized(this) {
				closed = this->closed;
				if (!closed) {
					$set(this, subscription, s);
				}
			}
			if (closed) {
				s->cancel();
				return;
			}
			if (!ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled && !($nc(this->buffers)->remainingCapacity() > 1)) {
				$throwNew($AssertionError);
			}
			if ($nc(ResponseSubscribers$HttpResponseInputStream::debug)->on()) {
				ResponseSubscribers$HttpResponseInputStream::debug->log($$str({"onSubscribe: requesting "_s, $$str($Math::max(1, $nc(this->buffers)->remainingCapacity() - 1))}));
			}
			s->request($Math::max(1, $nc(this->buffers)->remainingCapacity() - 1));
		}
	} catch ($Throwable& t) {
		$set(this, failed, t);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				close();
			} catch ($IOException& x) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			onError(t);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ResponseSubscribers$HttpResponseInputStream::onNext($List* t) {
	$Objects::requireNonNull(t);
	try {
		if ($nc(ResponseSubscribers$HttpResponseInputStream::debug)->on()) {
			ResponseSubscribers$HttpResponseInputStream::debug->log("next item received"_s);
		}
		if (!$nc(this->buffers)->offer(t)) {
			$throwNew($IllegalStateException, "queue is full"_s);
		}
		if (ResponseSubscribers$HttpResponseInputStream::debug->on()) {
			ResponseSubscribers$HttpResponseInputStream::debug->log("item offered"_s);
		}
	} catch ($Throwable& ex) {
		$set(this, failed, ex);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				close();
			} catch ($IOException& ex1) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			onError(ex);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ResponseSubscribers$HttpResponseInputStream::onError($Throwable* thrwbl) {
	$set(this, subscription, nullptr);
	$set(this, failed, $cast($Throwable, $Objects::requireNonNull(thrwbl)));
	$nc(this->buffers)->offer(ResponseSubscribers$HttpResponseInputStream::LAST_LIST);
}

void ResponseSubscribers$HttpResponseInputStream::onComplete() {
	$set(this, subscription, nullptr);
	onNext(ResponseSubscribers$HttpResponseInputStream::LAST_LIST);
}

void ResponseSubscribers$HttpResponseInputStream::close() {
	$useLocalObjectStack();
	$var($Flow$Subscription, s, nullptr);
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		this->closed = true;
		$assign(s, this->subscription);
		$set(this, subscription, nullptr);
	}
	$var($Throwable, var$0, nullptr);
	try {
		if (s != nullptr) {
			s->cancel();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(this->buffers)->offer(ResponseSubscribers$HttpResponseInputStream::LAST_LIST);
		$InputStream::close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void ResponseSubscribers$HttpResponseInputStream::onNext(Object$* t) {
	this->onNext($cast($List, t));
}

void ResponseSubscribers$HttpResponseInputStream::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($ResponseSubscribers);
	ResponseSubscribers$HttpResponseInputStream::$assertionsDisabled = !$ResponseSubscribers::class$->desiredAssertionStatus();
	$assignStatic(ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER, $ByteBuffer::wrap($$new($bytes, 0)));
	$assignStatic(ResponseSubscribers$HttpResponseInputStream::LAST_LIST, $List::of(ResponseSubscribers$HttpResponseInputStream::LAST_BUFFER));
	$init($Utils);
	$assignStatic(ResponseSubscribers$HttpResponseInputStream::debug, $Utils::getDebugLogger($$new(ResponseSubscribers$HttpResponseInputStream$$Lambda$toString, "HttpResponseInputStream"_s), $Utils::DEBUG));
}

ResponseSubscribers$HttpResponseInputStream::ResponseSubscribers$HttpResponseInputStream() {
}

$Class* ResponseSubscribers$HttpResponseInputStream::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$HttpResponseInputStream$$Lambda$toString")) {
			return ResponseSubscribers$HttpResponseInputStream$$Lambda$toString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponseSubscribers$HttpResponseInputStream, $assertionsDisabled)},
		{"MAX_BUFFERS_IN_QUEUE", "I", nullptr, $STATIC | $FINAL, $constField(ResponseSubscribers$HttpResponseInputStream, MAX_BUFFERS_IN_QUEUE)},
		{"LAST_BUFFER", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResponseSubscribers$HttpResponseInputStream, LAST_BUFFER)},
		{"LAST_LIST", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResponseSubscribers$HttpResponseInputStream, LAST_LIST)},
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResponseSubscribers$HttpResponseInputStream, debug)},
		{"buffers", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$HttpResponseInputStream, buffers)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$HttpResponseInputStream, subscription)},
		{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$HttpResponseInputStream, closed)},
		{"failed", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$HttpResponseInputStream, failed)},
		{"currentListItr", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;", $PRIVATE | $VOLATILE, $field(ResponseSubscribers$HttpResponseInputStream, currentListItr)},
		{"currentBuffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$HttpResponseInputStream, currentBuffer)},
		{"subscribed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$HttpResponseInputStream, subscribed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResponseSubscribers$HttpResponseInputStream, init$, void)},
		{"<init>", "(I)V", nullptr, 0, $method(ResponseSubscribers$HttpResponseInputStream, init$, void, int32_t)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, close, void), "java.io.IOException"},
		{"current", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(ResponseSubscribers$HttpResponseInputStream, current, $ByteBuffer*), "java.io.IOException"},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<Ljava/io/InputStream;>;", $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, getBody, $CompletionStage*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, onSubscribe, void, $Flow$Subscription*)},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$HttpResponseInputStream, read, int32_t), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$HttpResponseInputStream", "jdk.internal.net.http.ResponseSubscribers", "HttpResponseInputStream", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$HttpResponseInputStream",
		"java.io.InputStream",
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/io/InputStream;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<Ljava/io/InputStream;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$HttpResponseInputStream, name, initialize, &classInfo$$, ResponseSubscribers$HttpResponseInputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ResponseSubscribers$HttpResponseInputStream));
	});
	return class$;
}

$Class* ResponseSubscribers$HttpResponseInputStream::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk