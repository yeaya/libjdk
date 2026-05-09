#include <jdk/internal/net/http/common/SSLFlowDelegate$Reader.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <javax/net/ssl/SSLSession.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$1.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$EngineResult.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$Reader$ReaderDownstreamPusher.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/SubscriberWrapper$SchedulingAction.h>
#include <jdk/internal/net/http/common/SubscriberWrapper.h>
#include <jdk/internal/net/http/common/SubscriptionBase.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef BUFFER_UNDERFLOW
#undef CLOSED
#undef DEBUG
#undef EMPTY_BB_LIST
#undef NEED_UNWRAP
#undef TARGET_BUFSIZE

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Supplier = ::java::util::function::Supplier;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;
using $SSLFlowDelegate = ::jdk::internal::net::http::common::SSLFlowDelegate;
using $SSLFlowDelegate$1 = ::jdk::internal::net::http::common::SSLFlowDelegate$1;
using $SSLFlowDelegate$EngineResult = ::jdk::internal::net::http::common::SSLFlowDelegate$EngineResult;
using $SSLFlowDelegate$Reader$ReaderDownstreamPusher = ::jdk::internal::net::http::common::SSLFlowDelegate$Reader$ReaderDownstreamPusher;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $SubscriberWrapper = ::jdk::internal::net::http::common::SubscriberWrapper;
using $SubscriberWrapper$SchedulingAction = ::jdk::internal::net::http::common::SubscriberWrapper$SchedulingAction;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

class SSLFlowDelegate$Reader$$Lambda$dbgString : public $Supplier {
	$class(SSLFlowDelegate$Reader$$Lambda$dbgString, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SSLFlowDelegate$Reader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->dbgString());
	}
	SSLFlowDelegate$Reader* inst$ = nullptr;
};
$Class* SSLFlowDelegate$Reader$$Lambda$dbgString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SSLFlowDelegate$Reader$$Lambda$dbgString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Reader;)V", nullptr, $PUBLIC, $method(SSLFlowDelegate$Reader$$Lambda$dbgString, init$, void, SSLFlowDelegate$Reader*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Reader$$Lambda$dbgString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.common.SSLFlowDelegate$Reader$$Lambda$dbgString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLFlowDelegate$Reader$$Lambda$dbgString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLFlowDelegate$Reader$$Lambda$dbgString);
	});
	return class$;
}
$Class* SSLFlowDelegate$Reader$$Lambda$dbgString::class$ = nullptr;

bool SSLFlowDelegate$Reader::$assertionsDisabled = false;

void SSLFlowDelegate$Reader::init$($SSLFlowDelegate* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$SubscriberWrapper::init$();
	$set(this, readBufferLock, $new($Object));
	$init($Utils);
	$set(this, debugr, $Utils::getDebugLogger($$new(SSLFlowDelegate$Reader$$Lambda$dbgString, this), $Utils::DEBUG));
	$set(this, count, $new($AtomicInteger));
	$set(this, scheduler, $SequentialScheduler::lockingScheduler($$new($SSLFlowDelegate$Reader$ReaderDownstreamPusher, this)));
	$set(this, readBuf, $ByteBuffer::allocate(1024));
	$nc(this->readBuf)->limit(0);
}

bool SSLFlowDelegate$Reader::supportsRecycling() {
	return this->this$0->recycler != nullptr;
}

$SubscriberWrapper$SchedulingAction* SSLFlowDelegate$Reader::enterScheduling() {
	return this->this$0->enterReadScheduling();
}

$String* SSLFlowDelegate$Reader::dbgString() {
	return $str({"SSL Reader("_s, this->this$0->tubeName, ")"_s});
}

void SSLFlowDelegate$Reader::incoming($List* buffers, bool complete) {
	$useLocalObjectStack();
	if ($nc(this->debugr)->on()) {
		this->debugr->log("Adding %d bytes to read buffer"_s, $$new($ObjectArray, {$($Long::valueOf($Utils::remaining(buffers)))}));
	}
	addToReadBuf(buffers, complete);
	$nc(this->scheduler)->runOrSchedule(this->this$0->exec);
}

$String* SSLFlowDelegate$Reader::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("READER: "_s);
	var$0->append($($SubscriberWrapper::toString()));
	var$0->append(", readBuf: "_s);
	var$0->append($($nc(this->readBuf)->toString()));
	var$0->append(", count: "_s);
	var$0->append($($nc(this->count)->toString()));
	var$0->append(", scheduler: "_s);
	var$0->append($nc(this->scheduler)->isStopped() ? "stopped"_s : "running"_s);
	var$0->append(", status: "_s);
	var$0->append(this->lastUnwrapStatus);
	var$0->append(", handshakeState: "_s);
	var$0->append($nc(this->this$0->handshakeState)->get());
	var$0->append(", engine: "_s);
	var$0->append($($nc(this->this$0->engine)->getHandshakeStatus()));
	return $str(var$0);
}

void SSLFlowDelegate$Reader::reallocReadBuf() {
	int32_t sz = $nc(this->readBuf)->capacity();
	$var($ByteBuffer, newb, $ByteBuffer::allocate(sz * 2));
	$nc(this->readBuf)->flip();
	$Utils::copy(this->readBuf, newb);
	$set(this, readBuf, newb);
}

int64_t SSLFlowDelegate$Reader::upstreamWindowUpdate(int64_t currentWindow, int64_t downstreamQsize) {
	$useLocalObjectStack();
	if (needsMoreData()) {
		if ($nc(this->debugr)->on()) {
			int32_t remaining = $nc(this->readBuf)->remaining();
			if (remaining > SSLFlowDelegate$Reader::TARGET_BUFSIZE) {
				this->debugr->log("readBuf has more than TARGET_BUFSIZE: %d"_s, $$new($ObjectArray, {$($Integer::valueOf(remaining))}));
			}
		}
		$nc(this->scheduler)->runOrSchedule();
	}
	return 0;
}

void SSLFlowDelegate$Reader::addToReadBuf($List* buffers, bool complete) {
	$useLocalObjectStack();
	bool var$0 = !SSLFlowDelegate$Reader::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $Utils::remaining(buffers) > 0;
		var$0 = !(var$1 || $nc(buffers)->isEmpty());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$synchronized(this->readBufferLock) {
		{
			$var($Iterator, i$, $nc(buffers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ByteBuffer, buf, $cast($ByteBuffer, i$->next()));
				{
					$nc(this->readBuf)->compact();
					while (true) {
						int32_t var$2 = $nc(this->readBuf)->remaining();
						if (!(var$2 < $nc(buf)->remaining())) {
							break;
						}
						{
							reallocReadBuf();
						}
					}
					$nc(this->readBuf)->put(buf);
					$nc(this->readBuf)->flip();
					if (this->this$0->recycler != nullptr) {
						this->this$0->recycler->accept(buf);
					}
				}
			}
		}
		if (complete) {
			this->completing = complete;
			this->minBytesRequired = 0;
		}
	}
}

bool SSLFlowDelegate$Reader::errorCommon($Throwable* throwable$renamed) {
	$var($Throwable, throwable, throwable$renamed);
	$assign(throwable, this->this$0->checkForHandshake(throwable));
	return $SubscriberWrapper::errorCommon(throwable);
}

void SSLFlowDelegate$Reader::schedule() {
	$nc(this->scheduler)->runOrSchedule(this->this$0->exec);
}

void SSLFlowDelegate$Reader::stop() {
	if ($nc(this->debugr)->on()) {
		this->debugr->log("stop"_s);
	}
	$nc(this->scheduler)->stop();
}

bool SSLFlowDelegate$Reader::needsMoreData() {
	bool var$0 = this->upstreamSubscription != nullptr && $nc(this->readBuf)->remaining() <= this->minBytesRequired;
	if (var$0) {
		$init($SSLEngineResult$HandshakeStatus);
		bool var$1 = $nc(this->this$0->engine)->getHandshakeStatus() == $SSLEngineResult$HandshakeStatus::NEED_UNWRAP;
		if (!var$1) {
			bool var$2 = !$nc($nc(this->downstreamSubscription)->demand)->isFulfilled();
			var$1 = var$2 && hasNoOutputData();
		}
		var$0 = var$1;
	}
	if (var$0) {
		return true;
	}
	return false;
}

void SSLFlowDelegate$Reader::requestMoreDataIfNeeded() {
	if (needsMoreData()) {
		requestMore();
	}
}

void SSLFlowDelegate$Reader::processData() {
	$useLocalObjectStack();
	try {
		if ($nc(this->debugr)->on()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("processData: readBuf remaining:"_s);
			var$0->append($nc(this->readBuf)->remaining());
			var$0->append(", state:"_s);
			var$0->append($($SSLFlowDelegate::states(this->this$0->handshakeState)));
			var$0->append(", engine handshake status:"_s);
			var$0->append($($nc(this->this$0->engine)->getHandshakeStatus()));
			this->debugr->log($$str(var$0));
		}
		int32_t len = 0;
		bool complete = false;
		while ($nc(this->readBuf)->remaining() > (len = this->minBytesRequired)) {
			bool handshaking = false;
			try {
				$var($SSLFlowDelegate$EngineResult, result, nullptr);
				$synchronized(this->readBufferLock) {
					complete = this->completing;
					if (this->debugr->on()) {
						this->debugr->log("Unwrapping: %s"_s, $$new($ObjectArray, {$($Integer::valueOf($nc(this->readBuf)->remaining()))}));
					}
					len = len > 0 ? this->minBytesRequired = 0 : len;
					$assign(result, unwrapBuffer(this->readBuf));
					len = $nc(this->readBuf)->remaining();
					if (this->debugr->on()) {
						this->debugr->log("Unwrapped: result: %s"_s, $$new($ObjectArray, {$nc(result)->result}));
						this->debugr->log("Unwrapped: consumed: %s"_s, $$new($ObjectArray, {$($Integer::valueOf(result->bytesConsumed()))}));
					}
				}
				if ($nc(result)->bytesProduced() > 0) {
					if (this->debugr->on()) {
						this->debugr->log("sending %d"_s, $$new($ObjectArray, {$($Integer::valueOf(result->bytesProduced()))}));
					}
					$nc(this->count)->addAndGet(result->bytesProduced());
					outgoing(result->destBuffer, false);
				}
				$init($SSLEngineResult$Status);
				if (result->status() == $SSLEngineResult$Status::BUFFER_UNDERFLOW) {
					if (this->debugr->on()) {
						this->debugr->log("BUFFER_UNDERFLOW"_s);
					}
					$synchronized(this->readBufferLock) {
						this->minBytesRequired = len;
						if (!SSLFlowDelegate$Reader::$assertionsDisabled && !($nc(this->readBuf)->remaining() >= len)) {
							$throwNew($AssertionError);
						}
						if ($nc(this->readBuf)->remaining() > len) {
							continue;
						} else if (this->completing) {
							if ($nc(this->debug)->on()) {
								this->debugr->log("BUFFER_UNDERFLOW with EOF, %d bytes non decrypted."_s, $$new($ObjectArray, {$($Integer::valueOf(len))}));
							}
							$throwNew($IOException, $$str({"BUFFER_UNDERFLOW with EOF, "_s, $$str(len), " bytes non decrypted."_s}));
						}
					}
					requestMore();
					return;
				}
				if (complete && result->status() == $SSLEngineResult$Status::CLOSED) {
					if (this->debugr->on()) {
						this->debugr->log("Closed: completing"_s);
					}
					$init($Utils);
					outgoing($Utils::EMPTY_BB_LIST, true);
					this->this$0->setALPN();
					requestMoreDataIfNeeded();
					return;
				}
				if (result->handshaking()) {
					handshaking = true;
					if (this->debugr->on()) {
						this->debugr->log("handshaking"_s);
					}
					if (this->this$0->doHandshake(result, 1)) {
						continue;
					} else {
						break;
					}
				} else if (this->this$0->trySetALPN()) {
					this->this$0->resumeActivity();
				}
			} catch ($IOException& ex) {
				$var($Throwable, cause, this->this$0->checkForHandshake(ex));
				errorCommon(cause);
				this->this$0->handleError(cause);
				return;
			}
			if (handshaking && !complete) {
				requestMoreDataIfNeeded();
				return;
			}
		}
		if (!complete) {
			$synchronized(this->readBufferLock) {
				complete = this->completing && !$nc(this->readBuf)->hasRemaining();
			}
		}
		if (complete) {
			if (this->debugr->on()) {
				this->debugr->log("completing"_s);
			}
			this->this$0->setALPN();
			$init($Utils);
			outgoing($Utils::EMPTY_BB_LIST, true);
		} else {
			requestMoreDataIfNeeded();
		}
	} catch ($Throwable& ex) {
		$assign(ex, this->this$0->checkForHandshake(ex));
		errorCommon(ex);
		this->this$0->handleError(ex);
	}
}

$SSLFlowDelegate$EngineResult* SSLFlowDelegate$Reader::unwrapBuffer($ByteBuffer* src) {
	$useLocalObjectStack();
	$var($ByteBuffer, dst, this->this$0->getAppBuffer());
	int32_t len = $nc(src)->remaining();
	while (true) {
		$var($SSLEngineResult, sslResult, $nc(this->this$0->engine)->unwrap(src, dst));
		{
			$init($SSLFlowDelegate$1);
			int32_t appSize = 0;
			$var($ByteBuffer, b, nullptr);
			int32_t size = 0;
			switch ($nc($SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status)->get($nc(($set(this, lastUnwrapStatus, $nc(sslResult)->getStatus())))->ordinal())) {
			case 1:
				appSize = (this->this$0->applicationBufferSize = $$nc(this->this$0->engine->getSession())->getApplicationBufferSize());
				$assign(b, $ByteBuffer::allocate(appSize + $nc(dst)->position()));
				dst->flip();
				$nc(b)->put(dst);
				$assign(dst, b);
				break;
			case 2:
				if (!SSLFlowDelegate$Reader::$assertionsDisabled && !($nc(dst)->position() == 0)) {
					$throwNew($AssertionError);
				}
				return this->this$0->doClosure($$new($SSLFlowDelegate$EngineResult, sslResult));
			case 3:
				if (!SSLFlowDelegate$Reader::$assertionsDisabled && !($nc(dst)->position() == 0)) {
					$throwNew($AssertionError);
				}
				return $new($SSLFlowDelegate$EngineResult, sslResult);
			case 4:
				size = $nc(dst)->position();
				if ($nc(this->debug)->on()) {
					$var($StringBuilder, var$0, $new($StringBuilder));
					var$0->append("Decoded "_s);
					var$0->append(size);
					var$0->append(" bytes out of "_s);
					var$0->append(len);
					var$0->append(" into buffer of "_s);
					var$0->append(dst->capacity());
					var$0->append(" remaining to decode: "_s);
					var$0->append(src->remaining());
					$nc(this->debugr)->log($$str(var$0));
				}
				if (size > this->this$0->adaptiveAppBufferSize) {
					this->this$0->adaptiveAppBufferSize = ((int32_t)((uint32_t)(size + 7) >> 3)) << 3;
				}
				dst->flip();
				return $new($SSLFlowDelegate$EngineResult, sslResult, dst);
			}
		}
	}
}

void SSLFlowDelegate$Reader::clinit$($Class* clazz) {
	$load($SSLFlowDelegate);
	SSLFlowDelegate$Reader::$assertionsDisabled = !$SSLFlowDelegate::class$->desiredAssertionStatus();
}

SSLFlowDelegate$Reader::SSLFlowDelegate$Reader() {
}

$Class* SSLFlowDelegate$Reader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.common.SSLFlowDelegate$Reader$$Lambda$dbgString")) {
			return SSLFlowDelegate$Reader$$Lambda$dbgString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SSLFlowDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(SSLFlowDelegate$Reader, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLFlowDelegate$Reader, $assertionsDisabled)},
		{"TARGET_BUFSIZE", "I", nullptr, $STATIC | $FINAL, $constField(SSLFlowDelegate$Reader, TARGET_BUFSIZE)},
		{"scheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(SSLFlowDelegate$Reader, scheduler)},
		{"readBuf", "Ljava/nio/ByteBuffer;", nullptr, $VOLATILE, $field(SSLFlowDelegate$Reader, readBuf)},
		{"completing", "Z", nullptr, $VOLATILE, $field(SSLFlowDelegate$Reader, completing)},
		{"readBufferLock", "Ljava/lang/Object;", nullptr, $FINAL, $field(SSLFlowDelegate$Reader, readBufferLock)},
		{"debugr", "Ljdk/internal/net/http/common/Logger;", nullptr, $FINAL, $field(SSLFlowDelegate$Reader, debugr)},
		{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, 0, $field(SSLFlowDelegate$Reader, count)},
		{"minBytesRequired", "I", nullptr, $VOLATILE, $field(SSLFlowDelegate$Reader, minBytesRequired)},
		{"lastUnwrapStatus", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PRIVATE | $VOLATILE, $field(SSLFlowDelegate$Reader, lastUnwrapStatus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLFlowDelegate;)V", nullptr, 0, $method(SSLFlowDelegate$Reader, init$, void, $SSLFlowDelegate*)},
		{"addToReadBuf", "(Ljava/util/List;Z)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Z)V", $PRIVATE, $method(SSLFlowDelegate$Reader, addToReadBuf, void, $List*, bool)},
		{"dbgString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SSLFlowDelegate$Reader, dbgString, $String*)},
		{"enterScheduling", "()Ljdk/internal/net/http/common/SubscriberWrapper$SchedulingAction;", nullptr, $PROTECTED, $virtualMethod(SSLFlowDelegate$Reader, enterScheduling, $SubscriberWrapper$SchedulingAction*)},
		{"errorCommon", "(Ljava/lang/Throwable;)Z", nullptr, $PROTECTED, $virtualMethod(SSLFlowDelegate$Reader, errorCommon, bool, $Throwable*)},
		{"incoming", "(Ljava/util/List;Z)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Z)V", $PUBLIC, $virtualMethod(SSLFlowDelegate$Reader, incoming, void, $List*, bool)},
		{"needsMoreData", "()Z", nullptr, 0, $method(SSLFlowDelegate$Reader, needsMoreData, bool)},
		{"processData", "()V", nullptr, $FINAL, $method(SSLFlowDelegate$Reader, processData, void)},
		{"reallocReadBuf", "()V", nullptr, $PRIVATE, $method(SSLFlowDelegate$Reader, reallocReadBuf, void)},
		{"requestMoreDataIfNeeded", "()V", nullptr, 0, $method(SSLFlowDelegate$Reader, requestMoreDataIfNeeded, void)},
		{"schedule", "()V", nullptr, 0, $method(SSLFlowDelegate$Reader, schedule, void)},
		{"stop", "()V", nullptr, 0, $method(SSLFlowDelegate$Reader, stop, void)},
		{"supportsRecycling", "()Z", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Reader, supportsRecycling, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Reader, toString, $String*)},
		{"unwrapBuffer", "(Ljava/nio/ByteBuffer;)Ljdk/internal/net/http/common/SSLFlowDelegate$EngineResult;", nullptr, 0, $method(SSLFlowDelegate$Reader, unwrapBuffer, $SSLFlowDelegate$EngineResult*, $ByteBuffer*), "java.io.IOException"},
		{"upstreamWindowUpdate", "(JJ)J", nullptr, $PROTECTED, $virtualMethod(SSLFlowDelegate$Reader, upstreamWindowUpdate, int64_t, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLFlowDelegate$Reader", "jdk.internal.net.http.common.SSLFlowDelegate", "Reader", $FINAL},
		{"jdk.internal.net.http.common.SSLFlowDelegate$Reader$ReaderDownstreamPusher", "jdk.internal.net.http.common.SSLFlowDelegate$Reader", "ReaderDownstreamPusher", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.SSLFlowDelegate$Reader",
		"jdk.internal.net.http.common.SubscriberWrapper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SSLFlowDelegate"
	};
	$loadClass(SSLFlowDelegate$Reader, name, initialize, &classInfo$$, SSLFlowDelegate$Reader::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLFlowDelegate$Reader));
	});
	return class$;
}

$Class* SSLFlowDelegate$Reader::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk