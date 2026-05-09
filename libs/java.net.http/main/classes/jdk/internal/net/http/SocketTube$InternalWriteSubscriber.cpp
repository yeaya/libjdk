#include <jdk/internal/net/http/SocketTube$InternalWriteSubscriber.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/AsyncTriggerEvent.h>
#include <jdk/internal/net/http/HttpClientImpl$DelegatingExecutor.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher.h>
#include <jdk/internal/net/http/SocketTube$InternalWriteSubscriber$WriteEvent.h>
#include <jdk/internal/net/http/SocketTube$InternalWriteSubscriber$WriteSubscription.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $AsyncTriggerEvent = ::jdk::internal::net::http::AsyncTriggerEvent;
using $SocketTube = ::jdk::internal::net::http::SocketTube;
using $SocketTube$InternalWriteSubscriber$WriteEvent = ::jdk::internal::net::http::SocketTube$InternalWriteSubscriber$WriteEvent;
using $SocketTube$InternalWriteSubscriber$WriteSubscription = ::jdk::internal::net::http::SocketTube$InternalWriteSubscriber$WriteSubscription;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $Log = ::jdk::internal::net::http::common::Log;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class SocketTube$InternalWriteSubscriber$$Lambda$signalError : public $Consumer {
	$class(SocketTube$InternalWriteSubscriber$$Lambda$signalError, $NO_CLASS_INIT, $Consumer)
public:
	void init$(SocketTube$InternalWriteSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* error) override {
		$nc(inst$)->signalError($cast($Throwable, error));
	}
	SocketTube$InternalWriteSubscriber* inst$ = nullptr;
};
$Class* SocketTube$InternalWriteSubscriber$$Lambda$signalError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalWriteSubscriber$$Lambda$signalError, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;)V", nullptr, $PUBLIC, $method(SocketTube$InternalWriteSubscriber$$Lambda$signalError, init$, void, SocketTube$InternalWriteSubscriber*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber$$Lambda$signalError, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$signalError",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalWriteSubscriber$$Lambda$signalError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber$$Lambda$signalError);
	});
	return class$;
}
$Class* SocketTube$InternalWriteSubscriber$$Lambda$signalError::class$ = nullptr;

class SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1 : public $Runnable {
	$class(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SocketTube$InternalWriteSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->startSubscription();
	}
	SocketTube$InternalWriteSubscriber* inst$ = nullptr;
};
$Class* SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;)V", nullptr, $PUBLIC, $method(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, init$, void, SocketTube$InternalWriteSubscriber*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1);
	});
	return class$;
}
$Class* SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1::class$ = nullptr;

class SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2 : public $Runnable {
	$class(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(SocketTube$InternalWriteSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestMore();
	}
	SocketTube$InternalWriteSubscriber* inst$ = nullptr;
};
$Class* SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;)V", nullptr, $PUBLIC, $method(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, init$, void, SocketTube$InternalWriteSubscriber*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2);
	});
	return class$;
}
$Class* SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2::class$ = nullptr;

class SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3 : public $Supplier {
	$class(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Throwable* error) {
		$set(this, error, error);
	}
	virtual $Object* get() override {
		return $of(SocketTube$InternalWriteSubscriber::lambda$signalError$0(error));
	}
	$Throwable* error = nullptr;
};
$Class* SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"error", "Ljava/lang/Throwable;", nullptr, $PUBLIC, $field(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, error)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, init$, void, $Throwable*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3);
	});
	return class$;
}
$Class* SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3::class$ = nullptr;

bool SocketTube$InternalWriteSubscriber::$assertionsDisabled = false;

void SocketTube$InternalWriteSubscriber::init$($SocketTube* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($Consumer, var$0, $new(SocketTube$InternalWriteSubscriber$$Lambda$signalError, this));
	$set(this, startSubscription$, $new($AsyncTriggerEvent, var$0, $$new(SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1, this)));
	$set(this, writeEvent, $new($SocketTube$InternalWriteSubscriber$WriteEvent, this, this->this$0->channel, this));
	$set(this, writeDemand, $new($Demand));
}

void SocketTube$InternalWriteSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$var($SocketTube$InternalWriteSubscriber$WriteSubscription, previous, this->subscription);
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("subscribed for writing"_s);
	}
	try {
		bool needEvent = this->current == nullptr;
		if (needEvent) {
			if (previous != nullptr && previous->upstreamSubscription != subscription) {
				previous->dropSubscription();
			}
		}
		$set(this, subscription, $new($SocketTube$InternalWriteSubscriber$WriteSubscription, this, subscription));
		if (needEvent) {
			if (this->this$0->debug->on()) {
				this->this$0->debug->log("write: registering startSubscription event"_s);
			}
			$nc(this->this$0->client)->registerEvent(this->startSubscription$);
		}
	} catch ($Throwable& t) {
		signalError(t);
	}
}

void SocketTube$InternalWriteSubscriber::onNext($List* bufs) {
	$useLocalObjectStack();
	if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !(this->current == nullptr)) {
		$throwNew($AssertionError, $$of($str({$(this->this$0->dbgString()), "w.onNext current: "_s, this->current})));
	}
	if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !(this->subscription != nullptr)) {
		$throwNew($AssertionError, $$of($str({$(this->this$0->dbgString()), "w.onNext: subscription is null"_s})));
	}
	$set(this, current, bufs);
	tryFlushCurrent($nc(this->this$0->client)->isSelectorThread());
	this->this$0->debugState("leaving w.onNext"_s);
}

void SocketTube$InternalWriteSubscriber::tryFlushCurrent(bool inSelectorThread) {
	$useLocalObjectStack();
	$var($List, bufs, this->current);
	if (bufs == nullptr) {
		return;
	}
	try {
		if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !(inSelectorThread == $nc(this->this$0->client)->isSelectorThread())) {
			$throwNew($AssertionError, $$of($str({"should "_s, (inSelectorThread ? ""_s : "not "_s), " be in the selector thread"_s})));
		}
		int64_t remaining = $Utils::remaining(bufs);
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("trying to write: %d"_s, $$new($ObjectArray, {$($Long::valueOf(remaining))}));
		}
		int64_t written = this->this$0->writeAvailable(bufs);
		if (this->this$0->debug->on()) {
			this->this$0->debug->log("wrote: %d"_s, $$new($ObjectArray, {$($Long::valueOf(written))}));
		}
		if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !(written >= 0)) {
			$throwNew($AssertionError, $$of($str({"negative number of bytes written:"_s, $$str(written)})));
		}
		if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !(written <= remaining)) {
			$throwNew($AssertionError);
		}
		if (remaining - written == 0) {
			$set(this, current, nullptr);
			if (this->writeDemand->tryDecrement()) {
				$var($Runnable, requestMore, $new(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, this));
				if (inSelectorThread) {
					if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !$nc(this->this$0->client)->isSelectorThread()) {
						$throwNew($AssertionError);
					}
					$$nc($nc(this->this$0->client)->theExecutor())->execute(requestMore);
				} else {
					if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && ! !$nc(this->this$0->client)->isSelectorThread()) {
						$throwNew($AssertionError);
					}
					$nc(requestMore)->run();
				}
			}
		} else {
			resumeWriteEvent(inSelectorThread);
		}
	} catch ($Throwable& t) {
		signalError(t);
	}
}

void SocketTube$InternalWriteSubscriber::startSubscription() {
	$useLocalObjectStack();
	try {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("write: starting subscription"_s);
		}
		if ($Log::channel()) {
			$Log::logChannel("Start requesting bytes for writing to channel: {0}"_s, $$new($ObjectArray, {$(this->this$0->channelDescr())}));
		}
		if (!SocketTube$InternalWriteSubscriber::$assertionsDisabled && !$nc(this->this$0->client)->isSelectorThread()) {
			$throwNew($AssertionError);
		}
		$nc($nc(this->this$0->readPublisher)->subscriptionImpl)->handlePending();
		if (this->this$0->debug->on()) {
			this->this$0->debug->log("write: offloading requestMore"_s);
		}
		$$nc($nc(this->this$0->client)->theExecutor())->execute($$new(SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2, this));
	} catch ($Throwable& t) {
		signalError(t);
	}
}

void SocketTube$InternalWriteSubscriber::requestMore() {
	$var($SocketTube$InternalWriteSubscriber$WriteSubscription, subscription, this->subscription);
	$nc(subscription)->requestMore();
}

void SocketTube$InternalWriteSubscriber::onError($Throwable* throwable) {
	signalError(throwable);
}

void SocketTube$InternalWriteSubscriber::onComplete() {
	$useLocalObjectStack();
	this->completed = true;
	$var($List, bufs, this->current);
	int64_t remaining = bufs == nullptr ? 0 : $Utils::remaining(bufs);
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("write completed, %d yet to send"_s, $$new($ObjectArray, {$($Long::valueOf(remaining))}));
	}
	this->this$0->debugState("InternalWriteSubscriber::onComplete"_s);
}

void SocketTube$InternalWriteSubscriber::resumeWriteEvent(bool inSelectorThread) {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("scheduling write event"_s);
	}
	this->this$0->resumeEvent(this->writeEvent, $$new(SocketTube$InternalWriteSubscriber$$Lambda$signalError, this));
}

void SocketTube$InternalWriteSubscriber::signalWritable() {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("channel is writable"_s);
	}
	tryFlushCurrent(true);
}

void SocketTube$InternalWriteSubscriber::signalError($Throwable* error) {
	$useLocalObjectStack();
	$nc(this->this$0->debug)->log($$new(SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3, error));
	if ($Log::channel()) {
		$Log::logChannel("Failed to write to channel ({0}: {1})"_s, $$new($ObjectArray, {
			$(this->this$0->channelDescr()),
			error
		}));
	}
	this->completed = true;
	$nc(this->this$0->readPublisher)->signalError(error);
	$var($Flow$Subscription, subscription, this->subscription);
	if (subscription != nullptr) {
		subscription->cancel();
	}
}

void SocketTube$InternalWriteSubscriber::onNext(Object$* bufs) {
	this->onNext($cast($List, bufs));
}

$String* SocketTube$InternalWriteSubscriber::lambda$signalError$0($Throwable* error) {
	$init(SocketTube$InternalWriteSubscriber);
	return $str({"write error: "_s, error});
}

void SocketTube$InternalWriteSubscriber::clinit$($Class* clazz) {
	$load($SocketTube);
	SocketTube$InternalWriteSubscriber::$assertionsDisabled = !$SocketTube::class$->desiredAssertionStatus();
}

SocketTube$InternalWriteSubscriber::SocketTube$InternalWriteSubscriber() {
}

$Class* SocketTube$InternalWriteSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$signalError")) {
			return SocketTube$InternalWriteSubscriber$$Lambda$signalError::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1")) {
			return SocketTube$InternalWriteSubscriber$$Lambda$startSubscription$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2")) {
			return SocketTube$InternalWriteSubscriber$$Lambda$requestMore$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3")) {
			return SocketTube$InternalWriteSubscriber$$Lambda$lambda$signalError$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/SocketTube;", nullptr, $FINAL | $SYNTHETIC, $field(SocketTube$InternalWriteSubscriber, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketTube$InternalWriteSubscriber, $assertionsDisabled)},
		{"subscription", "Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber$WriteSubscription;", nullptr, $VOLATILE, $field(SocketTube$InternalWriteSubscriber, subscription)},
		{"current", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $VOLATILE, $field(SocketTube$InternalWriteSubscriber, current)},
		{"completed", "Z", nullptr, $VOLATILE, $field(SocketTube$InternalWriteSubscriber, completed)},
		{"startSubscription", "Ljdk/internal/net/http/AsyncTriggerEvent;", nullptr, $FINAL, $field(SocketTube$InternalWriteSubscriber, startSubscription$)},
		{"writeEvent", "Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber$WriteEvent;", nullptr, $FINAL, $field(SocketTube$InternalWriteSubscriber, writeEvent)},
		{"writeDemand", "Ljdk/internal/net/http/common/Demand;", nullptr, $FINAL, $field(SocketTube$InternalWriteSubscriber, writeDemand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube;)V", nullptr, $PRIVATE, $method(SocketTube$InternalWriteSubscriber, init$, void, $SocketTube*)},
		{"lambda$signalError$0", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SocketTube$InternalWriteSubscriber, lambda$signalError$0, $String*, $Throwable*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(SocketTube$InternalWriteSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SocketTube$InternalWriteSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(SocketTube$InternalWriteSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{"requestMore", "()V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, requestMore, void)},
		{"resumeWriteEvent", "(Z)V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, resumeWriteEvent, void, bool)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, signalError, void, $Throwable*)},
		{"signalWritable", "()V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, signalWritable, void)},
		{"startSubscription", "()V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, startSubscription, void)},
		{"tryFlushCurrent", "(Z)V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber, tryFlushCurrent, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$InternalWriteSubscriber", "jdk.internal.net.http.SocketTube", "InternalWriteSubscriber", $PRIVATE | $FINAL},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$WriteSubscription", "jdk.internal.net.http.SocketTube$InternalWriteSubscriber", "WriteSubscription", $FINAL},
		{"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$WriteEvent", "jdk.internal.net.http.SocketTube$InternalWriteSubscriber", "WriteEvent", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$InternalWriteSubscriber, name, initialize, &classInfo$$, SocketTube$InternalWriteSubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber);
	});
	return class$;
}

$Class* SocketTube$InternalWriteSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk