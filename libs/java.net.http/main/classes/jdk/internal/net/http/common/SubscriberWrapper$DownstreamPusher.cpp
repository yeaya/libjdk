#include <jdk/internal/net/http/common/SubscriberWrapper$DownstreamPusher.h>
#include <java/lang/InternalError.h>
#include <java/util/List.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/common/SubscriberWrapper$1.h>
#include <jdk/internal/net/http/common/SubscriberWrapper$SchedulingAction.h>
#include <jdk/internal/net/http/common/SubscriberWrapper.h>
#include <jdk/internal/net/http/common/SubscriptionBase.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SubscriberWrapper = ::jdk::internal::net::http::common::SubscriberWrapper;
using $SubscriberWrapper$1 = ::jdk::internal::net::http::common::SubscriberWrapper$1;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SubscriberWrapper$DownstreamPusher::init$($SubscriberWrapper* this$0) {
	$set(this, this$0, this$0);
}

void SubscriberWrapper$DownstreamPusher::run() {
	try {
		run1();
	} catch ($Throwable& t) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log($$str({"DownstreamPusher threw: "_s, t}));
		}
		this->this$0->errorCommon(t);
	}
}

void SubscriberWrapper$DownstreamPusher::run1() {
	$useLocalObjectStack();
	if (this->this$0->downstreamCompleted) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("DownstreamPusher: downstream is already completed"_s);
		}
		return;
	}
	$init($SubscriberWrapper$1);
	switch ($nc($SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction)->get(($$nc(this->this$0->enterScheduling()))->ordinal())) {
	case 1:
		break;
	case 2:
		$nc(this->this$0->pushScheduler)->runOrSchedule();
		return;
	case 3:
		return;
	default:
		$nc(this->this$0->errorRef)->compareAndSet(nullptr, $$new($InternalError, "unknown scheduling command"_s));
		break;
	}
	$var($Throwable, error, $cast($Throwable, $nc(this->this$0->errorRef)->get()));
	if (error != nullptr && $nc(this->this$0->outputQ)->isEmpty()) {
		$synchronized(this) {
			if (this->this$0->downstreamCompleted) {
				return;
			}
			this->this$0->downstreamCompleted = true;
		}
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log($$str({"DownstreamPusher: forwarding error downstream: "_s, error}));
		}
		$nc(this->this$0->pushScheduler)->stop();
		this->this$0->outputQ->clear();
		$nc(this->this$0->downstreamSubscriber)->onError(error);
		$nc(this->this$0->cf)->completeExceptionally(error);
		return;
	}
	if (!$nc(this->this$0->outputQ)->isEmpty()) {
		if ($nc(this->this$0->debug)->on()) {
			this->this$0->debug->log("DownstreamPusher: queue not empty, downstreamSubscription: %s"_s, $$new($ObjectArray, {this->this$0->downstreamSubscription}));
		}
	} else if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("DownstreamPusher: queue empty, downstreamSubscription: %s"_s, $$new($ObjectArray, {this->this$0->downstreamSubscription}));
	}
	bool datasent = false;
	while (true) {
		bool var$0 = !this->this$0->outputQ->isEmpty();
		if (!(var$0 && $nc(this->this$0->downstreamSubscription)->tryDecrement())) {
			break;
		}
		{
			$var($List, b, $cast($List, this->this$0->outputQ->poll()));
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("DownstreamPusher: Pushing %d bytes downstream"_s, $$new($ObjectArray, {$($Long::valueOf($Utils::remaining(b)))}));
			}
			$nc(this->this$0->downstreamSubscriber)->onNext(b);
			datasent = true;
		}
	}
	bool var$1 = datasent;
	if (!var$1) {
		bool var$3 = this->this$0->outputQ->isEmpty();
		bool var$2 = var$3 && !$nc($nc(this->this$0->downstreamSubscription)->demand)->isFulfilled() && !this->this$0->upstreamCompleted;
		var$1 = var$2 && $nc(this->this$0->upstreamWindow$)->get() == 0;
	}
	if (var$1) {
		this->this$0->upstreamWindowUpdate();
	}
	this->this$0->checkCompletion();
}

SubscriberWrapper$DownstreamPusher::SubscriberWrapper$DownstreamPusher() {
}

$Class* SubscriberWrapper$DownstreamPusher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SubscriberWrapper;", nullptr, $FINAL | $SYNTHETIC, $field(SubscriberWrapper$DownstreamPusher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SubscriberWrapper;)V", nullptr, 0, $method(SubscriberWrapper$DownstreamPusher, init$, void, $SubscriberWrapper*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SubscriberWrapper$DownstreamPusher, run, void)},
		{"run1", "()V", nullptr, $PRIVATE, $method(SubscriberWrapper$DownstreamPusher, run1, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SubscriberWrapper$DownstreamPusher", "jdk.internal.net.http.common.SubscriberWrapper", "DownstreamPusher", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.common.SubscriberWrapper$DownstreamPusher",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SubscriberWrapper"
	};
	$loadClass(SubscriberWrapper$DownstreamPusher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubscriberWrapper$DownstreamPusher);
	});
	return class$;
}

$Class* SubscriberWrapper$DownstreamPusher::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk