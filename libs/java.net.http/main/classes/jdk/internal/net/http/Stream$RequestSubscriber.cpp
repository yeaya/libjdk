#include <jdk/internal/net/http/Stream$RequestSubscriber.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ConcurrentLinkedDeque.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/frame/DataFrame.h>
#include <jdk/internal/net/http/frame/ResetFrame.h>
#include <jcpp.h>

#undef COMPLETED
#undef END_STREAM
#undef PROTOCOL_ERROR

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ConcurrentLinkedDeque = ::java::util::concurrent::ConcurrentLinkedDeque;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::jdk::internal::net::http::Stream;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $DataFrame = ::jdk::internal::net::http::frame::DataFrame;
using $ResetFrame = ::jdk::internal::net::http::frame::ResetFrame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class Stream$RequestSubscriber$$Lambda$trySend : public $Runnable {
	$class(Stream$RequestSubscriber$$Lambda$trySend, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Stream$RequestSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->trySend();
	}
	Stream$RequestSubscriber* inst$ = nullptr;
};
$Class* Stream$RequestSubscriber$$Lambda$trySend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Stream$RequestSubscriber$$Lambda$trySend, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream$RequestSubscriber;)V", nullptr, $PUBLIC, $method(Stream$RequestSubscriber$$Lambda$trySend, init$, void, Stream$RequestSubscriber*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber$$Lambda$trySend, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$RequestSubscriber$$Lambda$trySend",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$RequestSubscriber$$Lambda$trySend, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$RequestSubscriber$$Lambda$trySend);
	});
	return class$;
}
$Class* Stream$RequestSubscriber$$Lambda$trySend::class$ = nullptr;

class Stream$RequestSubscriber$$Lambda$lambda$onError$0$1 : public $Supplier {
	$class(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Throwable* throwable) {
		$set(this, throwable, throwable);
	}
	virtual $Object* get() override {
		 return $of(Stream$RequestSubscriber::lambda$onError$0(throwable));
	}
	$Throwable* throwable = nullptr;
};
$Class* Stream$RequestSubscriber$$Lambda$lambda$onError$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"throwable", "Ljava/lang/Throwable;", nullptr, $PUBLIC, $field(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, throwable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, init$, void, $Throwable*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.Stream$RequestSubscriber$$Lambda$lambda$onError$0$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1);
	});
	return class$;
}
$Class* Stream$RequestSubscriber$$Lambda$lambda$onError$0$1::class$ = nullptr;

bool Stream$RequestSubscriber::$assertionsDisabled = false;

void Stream$RequestSubscriber::init$($Stream* this$0, int64_t contentLen) {
	$set(this, this$0, this$0);
	$set(this, outgoing, $new($ConcurrentLinkedDeque));
	$set(this, errorRef, $new($AtomicReference));
	this->contentLength = contentLen;
	this->remainingContentLength = contentLen;
	$set(this, sendScheduler, $SequentialScheduler::lockingScheduler($$new(Stream$RequestSubscriber$$Lambda$trySend, this)));
}

void Stream$RequestSubscriber::onSubscribe($Flow$Subscription* subscription) {
	if (this->subscription != nullptr) {
		$throwNew($IllegalStateException, "already subscribed"_s);
	}
	$set(this, subscription, subscription);
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("RequestSubscriber: onSubscribe, request 1"_s);
	}
	$nc(subscription)->request(1);
}

void Stream$RequestSubscriber::onNext($ByteBuffer* item) {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("RequestSubscriber: onNext(%d)"_s, $$new($ObjectArray, {$($Integer::valueOf($nc(item)->remaining()))}));
	}
	int32_t size = this->outgoing->size();
	if (!Stream$RequestSubscriber::$assertionsDisabled && !(size == 0)) {
		$throwNew($AssertionError, $$of($str({"non-zero size: "_s, $$str(size)})));
	}
	onNextImpl(item);
}

void Stream$RequestSubscriber::onNextImpl($ByteBuffer* item) {
	if ($nc(this->this$0->requestBodyCF)->isDone()) {
		$nc(this->sendScheduler)->stop();
		$nc(this->subscription)->cancel();
		return;
	}
	this->outgoing->add(item);
	$nc(this->sendScheduler)->runOrSchedule();
}

void Stream$RequestSubscriber::onError($Throwable* throwable) {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log($$new(Stream$RequestSubscriber$$Lambda$lambda$onError$0$1, throwable));
	}
	if (this->errorRef->compareAndSet(nullptr, throwable)) {
		$nc(this->sendScheduler)->runOrSchedule();
	}
}

void Stream$RequestSubscriber::onComplete() {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("RequestSubscriber: onComplete"_s);
	}
	int32_t size = this->outgoing->size();
	if (!Stream$RequestSubscriber::$assertionsDisabled && !(size == 0 || size == 1)) {
		$throwNew($AssertionError, $$of($str({"non-zero or one size: "_s, $$str(size)})));
	}
	onNextImpl($Stream::COMPLETED);
}

void Stream$RequestSubscriber::trySend() {
	$useLocalObjectStack();
	try {
		$var($Throwable, t, $cast($Throwable, this->errorRef->get()));
		if (t != nullptr) {
			$nc(this->sendScheduler)->stop();
			if ($nc(this->this$0->requestBodyCF)->isDone()) {
				return;
			}
			$nc(this->subscription)->cancel();
			this->this$0->requestBodyCF->completeExceptionally(t);
			this->this$0->cancelImpl(t);
			return;
		}
		int32_t state = this->this$0->streamState;
		do {
			$var($ByteBuffer, item, $cast($ByteBuffer, this->outgoing->peekFirst()));
			if (item == nullptr) {
				return;
			} else if (item == $Stream::COMPLETED) {
				$nc(this->sendScheduler)->stop();
				complete();
				return;
			}
			while ($nc(item)->hasRemaining() && state == 0) {
				if ($nc(this->this$0->debug)->on()) {
					this->this$0->debug->log("trySend: %d"_s, $$new($ObjectArray, {$($Integer::valueOf(item->remaining()))}));
				}
				$var($DataFrame, df, this->this$0->getDataFrame(item));
				if (df == nullptr) {
					if (this->this$0->debug->on()) {
						this->this$0->debug->log("trySend: can\'t send yet: %d"_s, $$new($ObjectArray, {$($Integer::valueOf(item->remaining()))}));
					}
					return;
				}
				if (this->contentLength > 0) {
					this->remainingContentLength -= $nc(df)->getDataLength();
					if (this->remainingContentLength < 0) {
						$var($StringBuilder, var$0, $new($StringBuilder));
						var$0->append($($$nc(this->this$0->connection())->getConnectionFlow()));
						var$0->append(" stream="_s);
						var$0->append(this->this$0->streamid);
						var$0->append(" ["_s);
						var$0->append($($($Thread::currentThread())->getName()));
						var$0->append("] Too many bytes in request body. Expected: "_s);
						var$0->append(this->contentLength);
						var$0->append(", got: "_s);
						var$0->append(this->contentLength);
						var$0->append(this->remainingContentLength);
						$var($String, msg, $str(var$0));
						if (!Stream$RequestSubscriber::$assertionsDisabled && !(this->this$0->streamid > 0)) {
							$throwNew($AssertionError);
						}
						$nc(this->this$0->connection$)->resetStream(this->this$0->streamid, $ResetFrame::PROTOCOL_ERROR);
						$throwNew($IOException, msg);
					} else if (this->remainingContentLength == 0) {
						if (!Stream$RequestSubscriber::$assertionsDisabled && ! !this->this$0->endStreamSent) {
							$throwNew($AssertionError, $of("internal error, send data after END_STREAM flag"_s));
						}
						df->setFlag($DataFrame::END_STREAM);
						this->this$0->endStreamSent = true;
					}
				} else if (!Stream$RequestSubscriber::$assertionsDisabled && ! !this->this$0->endStreamSent) {
					$throwNew($AssertionError, $of("internal error, send data after END_STREAM flag"_s));
				}
				if ((state = this->this$0->streamState) != 0) {
					if (this->this$0->debug->on()) {
						this->this$0->debug->log("trySend: cancelled: %s"_s, $$new($ObjectArray, {$($String::valueOf(t))}));
					}
					break;
				}
				if (this->this$0->debug->on()) {
					this->this$0->debug->log("trySend: sending: %d"_s, $$new($ObjectArray, {$($Integer::valueOf($nc(df)->getDataLength()))}));
				}
				this->this$0->sendDataFrame(df);
			}
			if (state != 0) {
				break;
			}
			if (!Stream$RequestSubscriber::$assertionsDisabled && ! !item->hasRemaining()) {
				$throwNew($AssertionError);
			}
			$var($ByteBuffer, b, $cast($ByteBuffer, this->outgoing->removeFirst()));
			if (!Stream$RequestSubscriber::$assertionsDisabled && !(b == item)) {
				$throwNew($AssertionError);
			}
		} while (this->outgoing->peekFirst() != nullptr);
		if (state != 0) {
			$assign(t, $cast($Throwable, this->errorRef->get()));
			if (t == nullptr) {
				$assign(t, $new($IOException, $($ResetFrame::stringForCode(this->this$0->streamState))));
			}
			$throw(t);
		}
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("trySend: request 1"_s);
		}
		$nc(this->subscription)->request(1);
	} catch ($Throwable& ex) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("trySend: "_s, ex);
		}
		$nc(this->sendScheduler)->stop();
		$nc(this->subscription)->cancel();
		$nc(this->this$0->requestBodyCF)->completeExceptionally(ex);
		this->this$0->cancelImpl(ex);
	}
}

void Stream$RequestSubscriber::complete() {
	$useLocalObjectStack();
	int64_t remaining = this->remainingContentLength;
	int64_t written = this->contentLength - remaining;
	if (remaining > 0) {
		$nc(this->this$0->connection$)->resetStream(this->this$0->streamid, $ResetFrame::PROTOCOL_ERROR);
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($$nc(this->this$0->connection())->getConnectionFlow()));
		var$0->append(" stream="_s);
		var$0->append(this->this$0->streamid);
		var$0->append(" ["_s);
		var$0->append($($($Thread::currentThread())->getName()));
		var$0->append("] Too few bytes returned by the publisher ("_s);
		var$0->append(written);
		var$0->append("/"_s);
		var$0->append(this->contentLength);
		var$0->append(")"_s);
		$throwNew($IOException, $$str(var$0));
	}
	if (!this->this$0->endStreamSent) {
		this->this$0->endStreamSent = true;
		$nc(this->this$0->connection$)->sendDataFrame($(this->this$0->getEmptyEndStreamDataFrame()));
	}
	$nc(this->this$0->requestBodyCF)->complete(nullptr);
}

void Stream$RequestSubscriber::onNext(Object$* item) {
	this->onNext($cast($ByteBuffer, item));
}

$String* Stream$RequestSubscriber::lambda$onError$0($Throwable* throwable) {
	$init(Stream$RequestSubscriber);
	return $str({"RequestSubscriber: onError: "_s, throwable});
}

void Stream$RequestSubscriber::clinit$($Class* clazz) {
	$load($Stream);
	Stream$RequestSubscriber::$assertionsDisabled = !$Stream::class$->desiredAssertionStatus();
}

Stream$RequestSubscriber::Stream$RequestSubscriber() {
}

$Class* Stream$RequestSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.Stream$RequestSubscriber$$Lambda$trySend")) {
			return Stream$RequestSubscriber$$Lambda$trySend::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.Stream$RequestSubscriber$$Lambda$lambda$onError$0$1")) {
			return Stream$RequestSubscriber$$Lambda$lambda$onError$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Stream;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$RequestSubscriber, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Stream$RequestSubscriber, $assertionsDisabled)},
		{"contentLength", "J", nullptr, $PRIVATE | $FINAL, $field(Stream$RequestSubscriber, contentLength)},
		{"remainingContentLength", "J", nullptr, $PRIVATE | $VOLATILE, $field(Stream$RequestSubscriber, remainingContentLength)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(Stream$RequestSubscriber, subscription)},
		{"outgoing", "Ljava/util/concurrent/ConcurrentLinkedDeque;", "Ljava/util/concurrent/ConcurrentLinkedDeque<Ljava/nio/ByteBuffer;>;", $FINAL, $field(Stream$RequestSubscriber, outgoing)},
		{"errorRef", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/lang/Throwable;>;", $PRIVATE | $FINAL, $field(Stream$RequestSubscriber, errorRef)},
		{"sendScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(Stream$RequestSubscriber, sendScheduler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream;J)V", nullptr, 0, $method(Stream$RequestSubscriber, init$, void, $Stream*, int64_t)},
		{"complete", "()V", nullptr, $PRIVATE, $method(Stream$RequestSubscriber, complete, void), "java.io.IOException"},
		{"lambda$onError$0", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stream$RequestSubscriber, lambda$onError$0, $String*, $Throwable*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber, onNext, void, $ByteBuffer*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Stream$RequestSubscriber, onNext, void, Object$*)},
		{"onNextImpl", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Stream$RequestSubscriber, onNextImpl, void, $ByteBuffer*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(Stream$RequestSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{"trySend", "()V", nullptr, 0, $virtualMethod(Stream$RequestSubscriber, trySend, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Stream$RequestSubscriber", "jdk.internal.net.http.Stream", "RequestSubscriber", 0},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Stream$RequestSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Stream"
	};
	$loadClass(Stream$RequestSubscriber, name, initialize, &classInfo$$, Stream$RequestSubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$RequestSubscriber);
	});
	return class$;
}

$Class* Stream$RequestSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk