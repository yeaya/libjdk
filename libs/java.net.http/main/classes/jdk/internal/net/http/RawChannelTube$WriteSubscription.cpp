#include <jdk/internal/net/http/RawChannelTube$WriteSubscription.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/RawChannelTube$WritePublisher.h>
#include <jdk/internal/net/http/RawChannelTube.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $RawChannelTube = ::jdk::internal::net::http::RawChannelTube;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $RawChannel$RawEvent = ::jdk::internal::net::http::websocket::RawChannel$RawEvent;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RawChannelTube$WriteSubscription::init$($RawChannelTube* this$0, $Flow$Subscriber* subscriber) {
	$set(this, this$0, this$0);
	$set(this, demand, $new($Demand));
	$set(this, subscriber, subscriber);
}

void RawChannelTube$WriteSubscription::request(int64_t n) {
	$useLocalObjectStack();
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("WriteSubscription::request %d"_s, $$new($ObjectArray, {$($Long::valueOf(n))}));
	}
	this->demand->increase(n);
	$var($RawChannel$RawEvent, event, nullptr);
	while (($assign(event, $cast($RawChannel$RawEvent, $nc($nc(this->this$0->writePublisher)->events)->poll()))) != nullptr) {
		if (this->this$0->debug->on()) {
			this->this$0->debug->log("WriteSubscriber: handling event"_s);
		}
		$nc(event)->handle();
		if (this->demand->isFulfilled()) {
			break;
		}
	}
}

void RawChannelTube$WriteSubscription::cancel() {
	this->cancelled = true;
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("WriteSubscription::cancel"_s);
	}
	this->this$0->shutdownOutput();
	$var($RawChannel$RawEvent, event, nullptr);
	while (($assign(event, $cast($RawChannel$RawEvent, $nc($nc(this->this$0->writePublisher)->events)->poll()))) != nullptr) {
		if (this->this$0->debug->on()) {
			this->this$0->debug->log("WriteSubscriber: handling event"_s);
		}
		$nc(event)->handle();
	}
}

RawChannelTube$WriteSubscription::RawChannelTube$WriteSubscription() {
}

$Class* RawChannelTube$WriteSubscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/RawChannelTube;", nullptr, $FINAL | $SYNTHETIC, $field(RawChannelTube$WriteSubscription, this$0)},
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", "Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $FINAL, $field(RawChannelTube$WriteSubscription, subscriber)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $FINAL, $field(RawChannelTube$WriteSubscription, demand)},
		{"cancelled", "Z", nullptr, $VOLATILE, $field(RawChannelTube$WriteSubscription, cancelled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/RawChannelTube;Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", 0, $method(RawChannelTube$WriteSubscription, init$, void, $RawChannelTube*, $Flow$Subscriber*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$WriteSubscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(RawChannelTube$WriteSubscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RawChannelTube$WriteSubscription", "jdk.internal.net.http.RawChannelTube", "WriteSubscription", 0},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.RawChannelTube$WriteSubscription",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
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
	$loadClass(RawChannelTube$WriteSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannelTube$WriteSubscription);
	});
	return class$;
}

$Class* RawChannelTube$WriteSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk