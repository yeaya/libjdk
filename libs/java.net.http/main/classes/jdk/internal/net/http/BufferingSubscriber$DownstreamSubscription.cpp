#include <jdk/internal/net/http/BufferingSubscriber$DownstreamSubscription.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jdk/internal/net/http/BufferingSubscriber$DownstreamSubscription$PushDemandedTask.h>
#include <jdk/internal/net/http/BufferingSubscriber.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $BufferingSubscriber = ::jdk::internal::net::http::BufferingSubscriber;
using $BufferingSubscriber$DownstreamSubscription$PushDemandedTask = ::jdk::internal::net::http::BufferingSubscriber$DownstreamSubscription$PushDemandedTask;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void BufferingSubscriber$DownstreamSubscription::init$($BufferingSubscriber* this$0) {
	$set(this, this$0, this$0);
	$set(this, cancelled, $new($AtomicBoolean));
	$set(this, demand, $new($Demand));
	$set(this, pushDemandedScheduler, $new($SequentialScheduler, $$new($BufferingSubscriber$DownstreamSubscription$PushDemandedTask, this)));
}

void BufferingSubscriber$DownstreamSubscription::request(int64_t n) {
	if (this->cancelled->get() || this->illegalArg) {
		return;
	}
	if (n <= 0) {
		this->illegalArg = true;
		$nc(this->this$0->subscription)->request(n);
		return;
	}
	this->demand->increase(n);
	pushDemanded();
}

void BufferingSubscriber$DownstreamSubscription::pushDemanded() {
	if (this->cancelled->get()) {
		return;
	}
	this->pushDemandedScheduler->runOrSchedule();
}

void BufferingSubscriber$DownstreamSubscription::cancel() {
	if (this->cancelled->compareAndExchange(false, true)) {
		return;
	}
	this->this$0->state = 8;
	$nc(this->this$0->subscription)->cancel();
	this->pushDemandedScheduler->stop();
}

BufferingSubscriber$DownstreamSubscription::BufferingSubscriber$DownstreamSubscription() {
}

$Class* BufferingSubscriber$DownstreamSubscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/BufferingSubscriber;", nullptr, $FINAL | $SYNTHETIC, $field(BufferingSubscriber$DownstreamSubscription, this$0)},
		{"cancelled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(BufferingSubscriber$DownstreamSubscription, cancelled)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(BufferingSubscriber$DownstreamSubscription, demand)},
		{"illegalArg", "Z", nullptr, $PRIVATE | $VOLATILE, $field(BufferingSubscriber$DownstreamSubscription, illegalArg)},
		{"pushDemandedScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $PRIVATE | $FINAL, $field(BufferingSubscriber$DownstreamSubscription, pushDemandedScheduler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/BufferingSubscriber;)V", nullptr, $PRIVATE, $method(BufferingSubscriber$DownstreamSubscription, init$, void, $BufferingSubscriber*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber$DownstreamSubscription, cancel, void)},
		{"pushDemanded", "()V", nullptr, 0, $virtualMethod(BufferingSubscriber$DownstreamSubscription, pushDemanded, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber$DownstreamSubscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription", "jdk.internal.net.http.BufferingSubscriber", "DownstreamSubscription", $PRIVATE},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription$PushDemandedTask", "jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription", "PushDemandedTask", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription",
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
		"jdk.internal.net.http.BufferingSubscriber"
	};
	$loadClass(BufferingSubscriber$DownstreamSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferingSubscriber$DownstreamSubscription);
	});
	return class$;
}

$Class* BufferingSubscriber$DownstreamSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk