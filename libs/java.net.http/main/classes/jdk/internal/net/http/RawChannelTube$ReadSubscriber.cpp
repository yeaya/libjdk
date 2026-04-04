#include <jdk/internal/net/http/RawChannelTube$ReadSubscriber.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/RawChannelTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $Supplier = ::java::util::function::Supplier;
using $RawChannelTube = ::jdk::internal::net::http::RawChannelTube;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $RawChannel$RawEvent = ::jdk::internal::net::http::websocket::RawChannel$RawEvent;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0 : public $Supplier {
	$class(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($List* item) {
		$set(this, item, item);
	}
	virtual $Object* get() override {
		 return $of(RawChannelTube$ReadSubscriber::lambda$onNext$0(item));
	}
	$List* item = nullptr;
};
$Class* RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"item", "Ljava/util/List;", nullptr, $PUBLIC, $field(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, item)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, init$, void, $List*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0);
	});
	return class$;
}
$Class* RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0::class$ = nullptr;

void RawChannelTube$ReadSubscriber::init$($RawChannelTube* this$0) {
	$set(this, this$0, this$0);
	$set(this, events, $new($ConcurrentLinkedQueue));
	$set(this, buffers, $new($ConcurrentLinkedQueue));
	$set(this, errorRef, $new($AtomicReference));
}

void RawChannelTube$ReadSubscriber::checkEvents() {
	$useLocalObjectStack();
	$var($Flow$Subscription, subscription, this->readSubscription);
	if (subscription != nullptr) {
		$var($Throwable, error, $cast($Throwable, this->errorRef->get()));
		while (true) {
			bool var$0 = !this->buffers->isEmpty() || error != nullptr;
			if (!(var$0 || $nc(this->this$0->closed)->get() || this->completed)) {
				break;
			}
			{
				$var($RawChannel$RawEvent, event, $cast($RawChannel$RawEvent, this->events->poll()));
				if (event == nullptr) {
					break;
				}
				if ($nc(this->this$0->debug)->on()) {
					this->this$0->debug->log("ReadSubscriber: handling event"_s);
				}
				$nc(event)->handle();
			}
		}
	}
}

void RawChannelTube$ReadSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$useLocalObjectStack();
	int64_t n = 0;
	$synchronized(this) {
		$set(this, readSubscription, subscription);
		n = this->initialRequest;
		this->initialRequest = 0;
	}
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("ReadSubscriber::onSubscribe"_s);
	}
	if (n > 0) {
		$var($Throwable, error, $cast($Throwable, this->errorRef->get()));
		if (error == nullptr && !$nc(this->this$0->closed)->get() && !this->completed) {
			if (this->this$0->debug->on()) {
				this->this$0->debug->log($$str({"readSubscription: requesting "_s, $$str(n)}));
			}
			$nc(subscription)->request(n);
		}
	}
	checkEvents();
}

void RawChannelTube$ReadSubscriber::onNext($List* item) {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log($$new(RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0, item));
	}
	this->buffers->addAll(item);
	checkEvents();
}

void RawChannelTube$ReadSubscriber::onError($Throwable* throwable) {
	bool var$0 = $nc(this->this$0->closed)->get();
	if (var$0 || this->errorRef->compareAndSet(nullptr, throwable)) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("ReadSubscriber::onError"_s, throwable);
		}
		if (this->buffers->isEmpty()) {
			checkEvents();
			this->this$0->shutdownInput();
		}
	}
}

void RawChannelTube$ReadSubscriber::onComplete() {
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("ReadSubscriber::onComplete"_s);
	}
	this->completed = true;
	if (this->buffers->isEmpty()) {
		checkEvents();
		this->this$0->shutdownInput();
	}
}

void RawChannelTube$ReadSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

$String* RawChannelTube$ReadSubscriber::lambda$onNext$0($List* item) {
	$init(RawChannelTube$ReadSubscriber);
	return $str({"ReadSubscriber::onNext "_s, $$str($Utils::remaining(item)), " bytes"_s});
}

RawChannelTube$ReadSubscriber::RawChannelTube$ReadSubscriber() {
}

$Class* RawChannelTube$ReadSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0")) {
			return RawChannelTube$ReadSubscriber$$Lambda$lambda$onNext$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/RawChannelTube;", nullptr, $FINAL | $SYNTHETIC, $field(RawChannelTube$ReadSubscriber, this$0)},
		{"readSubscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $VOLATILE, $field(RawChannelTube$ReadSubscriber, readSubscription)},
		{"completed", "Z", nullptr, $VOLATILE, $field(RawChannelTube$ReadSubscriber, completed)},
		{"initialRequest", "J", nullptr, 0, $field(RawChannelTube$ReadSubscriber, initialRequest)},
		{"events", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Ljdk/internal/net/http/websocket/RawChannel$RawEvent;>;", $FINAL, $field(RawChannelTube$ReadSubscriber, events)},
		{"buffers", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Ljava/nio/ByteBuffer;>;", $FINAL, $field(RawChannelTube$ReadSubscriber, buffers)},
		{"errorRef", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/lang/Throwable;>;", $FINAL, $field(RawChannelTube$ReadSubscriber, errorRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/RawChannelTube;)V", nullptr, 0, $method(RawChannelTube$ReadSubscriber, init$, void, $RawChannelTube*)},
		{"checkEvents", "()V", nullptr, 0, $virtualMethod(RawChannelTube$ReadSubscriber, checkEvents, void)},
		{"lambda$onNext$0", "(Ljava/util/List;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RawChannelTube$ReadSubscriber, lambda$onNext$0, $String*, $List*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$ReadSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$ReadSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RawChannelTube$ReadSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(RawChannelTube$ReadSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$ReadSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RawChannelTube$ReadSubscriber", "jdk.internal.net.http.RawChannelTube", "ReadSubscriber", 0},
		{"jdk.internal.net.http.common.FlowTube$TubeSubscriber", "jdk.internal.net.http.common.FlowTube", "TubeSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.RawChannelTube$ReadSubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.common.FlowTube$TubeSubscriber",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RawChannelTube"
	};
	$loadClass(RawChannelTube$ReadSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannelTube$ReadSubscriber);
	});
	return class$;
}

$Class* RawChannelTube$ReadSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk