#include <jdk/internal/net/http/BufferingSubscriber$DownstreamSubscription$PushDemandedTask.h>
#include <java/lang/AssertionError.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jdk/internal/net/http/BufferingSubscriber$DownstreamSubscription.h>
#include <jdk/internal/net/http/BufferingSubscriber.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/SequentialScheduler$CompleteRestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $BufferingSubscriber = ::jdk::internal::net::http::BufferingSubscriber;
using $BufferingSubscriber$DownstreamSubscription = ::jdk::internal::net::http::BufferingSubscriber$DownstreamSubscription;
using $SequentialScheduler$CompleteRestartableTask = ::jdk::internal::net::http::common::SequentialScheduler$CompleteRestartableTask;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool BufferingSubscriber$DownstreamSubscription$PushDemandedTask::$assertionsDisabled = false;

void BufferingSubscriber$DownstreamSubscription$PushDemandedTask::init$($BufferingSubscriber$DownstreamSubscription* this$1) {
	$set(this, this$1, this$1);
	$SequentialScheduler$CompleteRestartableTask::init$();
}

void BufferingSubscriber$DownstreamSubscription$PushDemandedTask::run() {
	$useLocalObjectStack();
	try {
		$var($Throwable, t, $nc(this->this$1->this$0)->throwable);
		if (t != nullptr) {
			$nc(this->this$1->pushDemandedScheduler)->stop();
			$nc(this->this$1->this$0->downstreamSubscriber)->onError(t);
			return;
		}
		while (true) {
			$var($List, item, nullptr);
			$synchronized(this->this$1->this$0->buffersLock) {
				if ($nc(this->this$1->cancelled)->get()) {
					return;
				}
				if (!this->this$1->this$0->hasEnoughAccumulatedBytes()) {
					break;
				}
				if (!$nc(this->this$1->demand)->tryDecrement()) {
					break;
				}
				$assign(item, this->this$1->this$0->fromInternalBuffers());
			}
			if (!BufferingSubscriber$DownstreamSubscription$PushDemandedTask::$assertionsDisabled && !(item != nullptr)) {
				$throwNew($AssertionError);
			}
			$nc(this->this$1->this$0->downstreamSubscriber)->onNext(item);
		}
		if ($nc(this->this$1->cancelled)->get()) {
			return;
		}
		bool complete = false;
		$synchronized(this->this$1->this$0->buffersLock) {
			complete = this->this$1->this$0->state == 16 && $nc(this->this$1->this$0->internalBuffers)->isEmpty();
		}
		if (complete) {
			if (!BufferingSubscriber$DownstreamSubscription$PushDemandedTask::$assertionsDisabled && !$nc(this->this$1->this$0->internalBuffers)->isEmpty()) {
				$throwNew($AssertionError);
			}
			$nc(this->this$1->pushDemandedScheduler)->stop();
			$nc(this->this$1->this$0->downstreamSubscriber)->onComplete();
			return;
		}
	} catch ($Throwable& t) {
		this->this$1->cancel();
		$throw(t);
	}
	bool requestMore = false;
	$synchronized($nc(this->this$1->this$0)->buffersLock) {
		bool var$0 = !this->this$1->this$0->hasEnoughAccumulatedBytes();
		if (var$0 && !$nc(this->this$1->demand)->isFulfilled()) {
			requestMore = true;
		}
	}
	if (requestMore) {
		$nc(this->this$1->this$0->subscription)->request(1);
	}
}

void BufferingSubscriber$DownstreamSubscription$PushDemandedTask::clinit$($Class* clazz) {
	$load($BufferingSubscriber);
	BufferingSubscriber$DownstreamSubscription$PushDemandedTask::$assertionsDisabled = !$BufferingSubscriber::class$->desiredAssertionStatus();
}

BufferingSubscriber$DownstreamSubscription$PushDemandedTask::BufferingSubscriber$DownstreamSubscription$PushDemandedTask() {
}

$Class* BufferingSubscriber$DownstreamSubscription$PushDemandedTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/BufferingSubscriber$DownstreamSubscription;", nullptr, $FINAL | $SYNTHETIC, $field(BufferingSubscriber$DownstreamSubscription$PushDemandedTask, this$1)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BufferingSubscriber$DownstreamSubscription$PushDemandedTask, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/BufferingSubscriber$DownstreamSubscription;)V", nullptr, 0, $method(BufferingSubscriber$DownstreamSubscription$PushDemandedTask, init$, void, $BufferingSubscriber$DownstreamSubscription*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BufferingSubscriber$DownstreamSubscription$PushDemandedTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription", "jdk.internal.net.http.BufferingSubscriber", "DownstreamSubscription", $PRIVATE},
		{"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription$PushDemandedTask", "jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription", "PushDemandedTask", 0},
		{"jdk.internal.net.http.common.SequentialScheduler$CompleteRestartableTask", "jdk.internal.net.http.common.SequentialScheduler", "CompleteRestartableTask", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.BufferingSubscriber$DownstreamSubscription$PushDemandedTask",
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
		"jdk.internal.net.http.BufferingSubscriber"
	};
	$loadClass(BufferingSubscriber$DownstreamSubscription$PushDemandedTask, name, initialize, &classInfo$$, BufferingSubscriber$DownstreamSubscription$PushDemandedTask::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BufferingSubscriber$DownstreamSubscription$PushDemandedTask);
	});
	return class$;
}

$Class* BufferingSubscriber$DownstreamSubscription$PushDemandedTask::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk