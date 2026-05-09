#include <jdk/internal/net/http/common/SSLFlowDelegate$Writer.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/function/Supplier.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <javax/net/ssl/SSLSession.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$1.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$EngineResult.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate$Writer$WriterDownstreamPusher.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/SubscriberWrapper.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef CLOSED
#undef DEBUG
#undef EMPTY_BB_ARRAY
#undef EMPTY_BB_LIST
#undef HS_TRIGGER
#undef NEED_WRAP
#undef NOTHING
#undef SENTINEL

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
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
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Supplier = ::java::util::function::Supplier;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;
using $SSLFlowDelegate = ::jdk::internal::net::http::common::SSLFlowDelegate;
using $SSLFlowDelegate$1 = ::jdk::internal::net::http::common::SSLFlowDelegate$1;
using $SSLFlowDelegate$EngineResult = ::jdk::internal::net::http::common::SSLFlowDelegate$EngineResult;
using $SSLFlowDelegate$Writer$WriterDownstreamPusher = ::jdk::internal::net::http::common::SSLFlowDelegate$Writer$WriterDownstreamPusher;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;
using $SubscriberWrapper = ::jdk::internal::net::http::common::SubscriberWrapper;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

class SSLFlowDelegate$Writer$$Lambda$dbgString : public $Supplier {
	$class(SSLFlowDelegate$Writer$$Lambda$dbgString, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SSLFlowDelegate$Writer* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->dbgString());
	}
	SSLFlowDelegate$Writer* inst$ = nullptr;
};
$Class* SSLFlowDelegate$Writer$$Lambda$dbgString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SSLFlowDelegate$Writer$$Lambda$dbgString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLFlowDelegate$Writer;)V", nullptr, $PUBLIC, $method(SSLFlowDelegate$Writer$$Lambda$dbgString, init$, void, SSLFlowDelegate$Writer*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Writer$$Lambda$dbgString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.common.SSLFlowDelegate$Writer$$Lambda$dbgString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLFlowDelegate$Writer$$Lambda$dbgString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLFlowDelegate$Writer$$Lambda$dbgString);
	});
	return class$;
}
$Class* SSLFlowDelegate$Writer$$Lambda$dbgString::class$ = nullptr;

bool SSLFlowDelegate$Writer::$assertionsDisabled = false;

void SSLFlowDelegate$Writer::init$($SSLFlowDelegate* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$SubscriberWrapper::init$();
	$init($Utils);
	$set(this, debugw, $Utils::getDebugLogger($$new(SSLFlowDelegate$Writer$$Lambda$dbgString, this), $Utils::DEBUG));
	$set(this, writeList, $Collections::synchronizedList($$new($LinkedList)));
	$set(this, scheduler, $new($SequentialScheduler, $$new($SSLFlowDelegate$Writer$WriterDownstreamPusher, this)));
}

void SSLFlowDelegate$Writer::incoming($List* buffers, bool complete) {
	$useLocalObjectStack();
	$init($Utils);
	if (!SSLFlowDelegate$Writer::$assertionsDisabled && !(complete ? buffers == $Utils::EMPTY_BB_LIST : true)) {
		$throwNew($AssertionError);
	}
	if (!SSLFlowDelegate$Writer::$assertionsDisabled && !(buffers != $Utils::EMPTY_BB_LIST ? complete == false : true)) {
		$throwNew($AssertionError);
	}
	if (complete) {
		if ($nc(this->debugw)->on()) {
			this->debugw->log("adding SENTINEL"_s);
		}
		this->completing = true;
		$init($SSLFlowDelegate);
		$nc(this->writeList)->add($SSLFlowDelegate::SENTINEL);
	} else {
		$nc(this->writeList)->addAll(buffers);
	}
	if ($nc(this->debugw)->on()) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("added "_s);
		var$0->append($nc(buffers)->size());
		var$0->append(" ("_s);
		var$0->append($Utils::remaining(buffers));
		var$0->append(" bytes) to the writeList"_s);
		this->debugw->log($$str(var$0));
	}
	this->scheduler->runOrSchedule();
}

$String* SSLFlowDelegate$Writer::dbgString() {
	return $str({"SSL Writer("_s, this->this$0->tubeName, ")"_s});
}

void SSLFlowDelegate$Writer::onSubscribe() {
	if ($nc(this->debugw)->on()) {
		this->debugw->log("onSubscribe initiating handshaking"_s);
	}
	$init($SSLFlowDelegate);
	addData($SSLFlowDelegate::HS_TRIGGER);
}

void SSLFlowDelegate$Writer::schedule() {
	this->scheduler->runOrSchedule();
}

void SSLFlowDelegate$Writer::stop() {
	if ($nc(this->debugw)->on()) {
		this->debugw->log("stop"_s);
	}
	this->scheduler->stop();
}

bool SSLFlowDelegate$Writer::closing() {
	return this->this$0->closeNotifyReceived();
}

bool SSLFlowDelegate$Writer::isCompleting() {
	return this->completing;
}

int64_t SSLFlowDelegate$Writer::upstreamWindowUpdate(int64_t currentWindow, int64_t downstreamQsize) {
	if ($nc(this->writeList)->size() > 10) {
		return 0;
	} else {
		return $SubscriberWrapper::upstreamWindowUpdate(currentWindow, downstreamQsize);
	}
}

bool SSLFlowDelegate$Writer::hsTriggered() {
	$useLocalObjectStack();
	$synchronized(this->writeList) {
		$var($Iterator, i$, this->writeList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ByteBuffer, b, $cast($ByteBuffer, i$->next()));
			$init($SSLFlowDelegate);
			if (b == $SSLFlowDelegate::HS_TRIGGER) {
				return true;
			}
		}
		return false;
	}
}

void SSLFlowDelegate$Writer::triggerWrite() {
	$synchronized(this->writeList) {
		if (this->writeList->isEmpty()) {
			$init($SSLFlowDelegate);
			this->writeList->add($SSLFlowDelegate::HS_TRIGGER);
		}
	}
	this->scheduler->runOrSchedule();
}

void SSLFlowDelegate$Writer::processData() {
	$useLocalObjectStack();
	bool completing = isCompleting();
	try {
		if ($nc(this->debugw)->on()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("processData, writeList remaining:"_s);
			var$0->append($Utils::synchronizedRemaining(this->writeList));
			var$0->append(", hsTriggered:"_s);
			var$0->append(hsTriggered());
			var$0->append(", needWrap:"_s);
			var$0->append(needWrap());
			this->debugw->log($$str(var$0));
		}
		while (true) {
			bool var$2 = $Utils::synchronizedRemaining(this->writeList) > 0;
			bool var$1 = var$2 || hsTriggered();
			if (!(var$1 || needWrap())) {
				break;
			}
			{
				$var($ByteBufferArray, outbufs, $cast($ByteBufferArray, $nc(this->writeList)->toArray($Utils::EMPTY_BB_ARRAY)));
				$var($SSLFlowDelegate$EngineResult, result, wrapBuffers(outbufs));
				if (this->debugw->on()) {
					this->debugw->log("wrapBuffer returned %s"_s, $$new($ObjectArray, {$nc(result)->result}));
				}
				$init($SSLEngineResult$Status);
				if ($nc(result)->status() == $SSLEngineResult$Status::CLOSED) {
					if (!this->upstreamCompleted) {
						this->upstreamCompleted = true;
						$nc(this->upstreamSubscription)->cancel();
						this->this$0->setALPN();
					}
					if (result->bytesProduced() <= 0) {
						return;
					}
					if (!completing && !this->completed) {
						completing = (this->completing = true);
						$init($SSLFlowDelegate);
						this->writeList->add($SSLFlowDelegate::SENTINEL);
					}
				}
				bool handshaking = false;
				if (result->handshaking()) {
					if (this->debugw->on()) {
						this->debugw->log("handshaking"_s);
					}
					this->this$0->doHandshake(result, 2);
					handshaking = true;
				} else if (this->this$0->trySetALPN()) {
					this->this$0->resumeActivity();
				}
				this->this$0->cleanList(this->writeList);
				sendResultBytes(result);
				if (handshaking) {
					if (!completing && needWrap()) {
						continue;
					} else {
						return;
					}
				}
			}
		}
		if (completing && $Utils::synchronizedRemaining(this->writeList) == 0) {
			if (!this->completed) {
				this->completed = true;
				$nc(this->writeList)->clear();
				outgoing($Utils::EMPTY_BB_LIST, true);
			}
			return;
		}
		bool var$3 = $nc(this->writeList)->isEmpty();
		if (var$3 && needWrap()) {
			$init($SSLFlowDelegate);
			$nc(this->this$0->writer)->addData($SSLFlowDelegate::HS_TRIGGER);
		}
	} catch ($Throwable& ex) {
		$assign(ex, this->this$0->checkForHandshake(ex));
		errorCommon(ex);
		this->this$0->handleError(ex);
	}
}

$SSLFlowDelegate$EngineResult* SSLFlowDelegate$Writer::wrapBuffers($ByteBufferArray* src) {
	$useLocalObjectStack();
	int64_t len = $Utils::remaining(src);
	if ($nc(this->debugw)->on()) {
		this->debugw->log($$str({"wrapping "_s, $$str(len), " bytes"_s}));
	}
	$var($ByteBuffer, dst, this->writeBuffer);
	if (dst == nullptr) {
		$assign(dst, $set(this, writeBuffer, this->this$0->getNetBuffer()));
	}
	if (!SSLFlowDelegate$Writer::$assertionsDisabled && !($nc(dst)->position() == 0)) {
		$throwNew($AssertionError, $$of($str({"buffer position is "_s, $$str(dst->position())})));
	}
	if (!SSLFlowDelegate$Writer::$assertionsDisabled && !$nc(dst)->hasRemaining()) {
		$throwNew($AssertionError, $$of($str({"buffer has no remaining space: capacity="_s, $$str(dst->capacity())})));
	}
	while (true) {
		$var($SSLEngineResult, sslResult, $nc(this->this$0->engine)->wrap(src, dst));
		if (this->debugw->on()) {
			this->debugw->log($$str({"SSLResult: "_s, sslResult}));
		}
		{
			$init($SSLFlowDelegate$1);
			int32_t netSize = 0;
			$var($ByteBuffer, b, nullptr);
			$var($ByteBuffer, dest, nullptr);
			switch ($nc($SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status)->get($nc(($set(this, lastWrappedStatus, $nc(sslResult)->getStatus())))->ordinal())) {
			case 1:
				if (this->debugw->on()) {
					this->debugw->log("BUFFER_OVERFLOW"_s);
				}
				netSize = (this->this$0->packetBufferSize = $$nc(this->this$0->engine->getSession())->getPacketBufferSize());
				$assign(b, ($set(this, writeBuffer, $ByteBuffer::allocate(netSize + $nc(dst)->position()))));
				dst->flip();
				$nc(b)->put(dst);
				$assign(dst, b);
				break;
			case 2:
				if (this->debugw->on()) {
					this->debugw->log("CLOSED"_s);
				}
			case 4:
				if ($nc(dst)->position() == 0) {
					$assign(dest, $SSLFlowDelegate::NOTHING);
				} else {
					int32_t var$0 = dst->position();
					if (var$0 < dst->capacity() / 2) {
						dst->flip();
						$assign(dest, $Utils::copyAligned(dst));
						dst->clear();
					} else {
						dst->flip();
						$assign(dest, dst);
						$set(this, writeBuffer, nullptr);
					}
				}
				if (this->debugw->on()) {
					this->debugw->log("OK => produced: %d bytes into %d, not wrapped: %d"_s, $$new($ObjectArray, {
						$($Integer::valueOf($nc(dest)->remaining())),
						$($Integer::valueOf($nc(dest)->capacity())),
						$($Long::valueOf($Utils::remaining(src)))
					}));
				}
				return $new($SSLFlowDelegate$EngineResult, sslResult, dest);
			case 3:
				if ($nc(this->debug)->on()) {
					this->debug->log("BUFFER_UNDERFLOW"_s);
				}
				return $new($SSLFlowDelegate$EngineResult, sslResult);
			default:
				if (this->debugw->on()) {
					this->debugw->log("result: %s"_s, $$new($ObjectArray, {$(sslResult->getStatus())}));
				}
				if (!SSLFlowDelegate$Writer::$assertionsDisabled) {
					$throwNew($AssertionError, $$of($str({"result:"_s, $(sslResult->getStatus())})));
				}
			}
		}
	}
}

bool SSLFlowDelegate$Writer::needWrap() {
	$init($SSLEngineResult$HandshakeStatus);
	return $nc(this->this$0->engine)->getHandshakeStatus() == $SSLEngineResult$HandshakeStatus::NEED_WRAP;
}

void SSLFlowDelegate$Writer::sendResultBytes($SSLFlowDelegate$EngineResult* result) {
	$useLocalObjectStack();
	if ($nc(result)->bytesProduced() > 0) {
		if ($nc(this->debugw)->on()) {
			this->debugw->log("Sending %d bytes downstream"_s, $$new($ObjectArray, {$($Integer::valueOf(result->bytesProduced()))}));
		}
		outgoing(result->destBuffer, false);
	}
}

$String* SSLFlowDelegate$Writer::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("WRITER: "_s);
	var$0->append($($SubscriberWrapper::toString()));
	var$0->append(", writeList size: "_s);
	var$0->append($($Integer::toString($nc(this->writeList)->size())));
	var$0->append(", scheduler: "_s);
	var$0->append(this->scheduler->isStopped() ? "stopped"_s : "running"_s);
	var$0->append(", status: "_s);
	var$0->append(this->lastWrappedStatus);
	return $str(var$0);
}

void SSLFlowDelegate$Writer::clinit$($Class* clazz) {
	$load($SSLFlowDelegate);
	SSLFlowDelegate$Writer::$assertionsDisabled = !$SSLFlowDelegate::class$->desiredAssertionStatus();
}

SSLFlowDelegate$Writer::SSLFlowDelegate$Writer() {
}

$Class* SSLFlowDelegate$Writer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.common.SSLFlowDelegate$Writer$$Lambda$dbgString")) {
			return SSLFlowDelegate$Writer$$Lambda$dbgString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SSLFlowDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(SSLFlowDelegate$Writer, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLFlowDelegate$Writer, $assertionsDisabled)},
		{"scheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(SSLFlowDelegate$Writer, scheduler)},
		{"writeList", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $FINAL, $field(SSLFlowDelegate$Writer, writeList)},
		{"debugw", "Ljdk/internal/net/http/common/Logger;", nullptr, $FINAL, $field(SSLFlowDelegate$Writer, debugw)},
		{"completing", "Z", nullptr, $VOLATILE, $field(SSLFlowDelegate$Writer, completing)},
		{"completed", "Z", nullptr, 0, $field(SSLFlowDelegate$Writer, completed)},
		{"writeBuffer", "Ljava/nio/ByteBuffer;", nullptr, $VOLATILE, $field(SSLFlowDelegate$Writer, writeBuffer)},
		{"lastWrappedStatus", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PRIVATE | $VOLATILE, $field(SSLFlowDelegate$Writer, lastWrappedStatus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLFlowDelegate;)V", nullptr, 0, $method(SSLFlowDelegate$Writer, init$, void, $SSLFlowDelegate*)},
		{"closing", "()Z", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Writer, closing, bool)},
		{"dbgString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SSLFlowDelegate$Writer, dbgString, $String*)},
		{"hsTriggered", "()Z", nullptr, $PRIVATE, $method(SSLFlowDelegate$Writer, hsTriggered, bool)},
		{"incoming", "(Ljava/util/List;Z)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Z)V", $PROTECTED, $virtualMethod(SSLFlowDelegate$Writer, incoming, void, $List*, bool)},
		{"isCompleting", "()Z", nullptr, $PRIVATE, $method(SSLFlowDelegate$Writer, isCompleting, bool)},
		{"needWrap", "()Z", nullptr, $PRIVATE, $method(SSLFlowDelegate$Writer, needWrap, bool)},
		{"onSubscribe", "()V", nullptr, $PROTECTED, $virtualMethod(SSLFlowDelegate$Writer, onSubscribe, void)},
		{"processData", "()V", nullptr, $PRIVATE, $method(SSLFlowDelegate$Writer, processData, void)},
		{"schedule", "()V", nullptr, 0, $virtualMethod(SSLFlowDelegate$Writer, schedule, void)},
		{"sendResultBytes", "(Ljdk/internal/net/http/common/SSLFlowDelegate$EngineResult;)V", nullptr, $PRIVATE, $method(SSLFlowDelegate$Writer, sendResultBytes, void, $SSLFlowDelegate$EngineResult*)},
		{"stop", "()V", nullptr, 0, $virtualMethod(SSLFlowDelegate$Writer, stop, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLFlowDelegate$Writer, toString, $String*)},
		{"triggerWrite", "()V", nullptr, 0, $virtualMethod(SSLFlowDelegate$Writer, triggerWrite, void)},
		{"upstreamWindowUpdate", "(JJ)J", nullptr, $PROTECTED, $virtualMethod(SSLFlowDelegate$Writer, upstreamWindowUpdate, int64_t, int64_t, int64_t)},
		{"wrapBuffers", "([Ljava/nio/ByteBuffer;)Ljdk/internal/net/http/common/SSLFlowDelegate$EngineResult;", nullptr, 0, $virtualMethod(SSLFlowDelegate$Writer, wrapBuffers, $SSLFlowDelegate$EngineResult*, $ByteBufferArray*), "javax.net.ssl.SSLException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLFlowDelegate$Writer", "jdk.internal.net.http.common.SSLFlowDelegate", "Writer", 0},
		{"jdk.internal.net.http.common.SSLFlowDelegate$Writer$WriterDownstreamPusher", "jdk.internal.net.http.common.SSLFlowDelegate$Writer", "WriterDownstreamPusher", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.common.SSLFlowDelegate$Writer",
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
	$loadClass(SSLFlowDelegate$Writer, name, initialize, &classInfo$$, SSLFlowDelegate$Writer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SSLFlowDelegate$Writer));
	});
	return class$;
}

$Class* SSLFlowDelegate$Writer::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk