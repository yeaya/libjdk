#include <jdk/internal/net/http/common/SubscriptionBase.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Consumer = ::java::util::function::Consumer;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SubscriptionBase::init$($SequentialScheduler* scheduler, $Runnable* cancelAction) {
	SubscriptionBase::init$(scheduler, cancelAction, nullptr);
}

void SubscriptionBase::init$($SequentialScheduler* scheduler, $Runnable* cancelAction, $Consumer* onError) {
	$set(this, demand, $new($Demand));
	$set(this, scheduler, scheduler);
	$set(this, cancelAction, cancelAction);
	$set(this, cancelled, $new($AtomicBoolean, false));
	$set(this, onError, onError);
}

void SubscriptionBase::request(int64_t n) {
	try {
		if ($nc(this->demand)->increase(n)) {
			$nc(this->scheduler)->runOrSchedule();
		}
	} catch ($Throwable& t) {
		if (this->onError != nullptr) {
			if ($nc(this->cancelled)->getAndSet(true)) {
				return;
			}
			this->onError->accept(t);
		} else {
			$throw(t);
		}
	}
}

$String* SubscriptionBase::toString() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("SubscriptionBase: window = "_s);
		var$0->append($nc(this->demand)->get());
		var$0->append(" cancelled = "_s);
		var$0->append($($nc(this->cancelled)->toString()));
		return $str(var$0);
	}
}

bool SubscriptionBase::tryDecrement() {
	return $nc(this->demand)->tryDecrement();
}

int64_t SubscriptionBase::window() {
	return $nc(this->demand)->get();
}

void SubscriptionBase::cancel() {
	if ($nc(this->cancelled)->getAndSet(true)) {
		return;
	}
	$nc(this->scheduler)->stop();
	$nc(this->cancelAction)->run();
}

SubscriptionBase::SubscriptionBase() {
}

$Class* SubscriptionBase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $FINAL, $field(SubscriptionBase, demand)},
		{"scheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(SubscriptionBase, scheduler)},
		{"cancelAction", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(SubscriptionBase, cancelAction)},
		{"cancelled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(SubscriptionBase, cancelled)},
		{"onError", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<Ljava/lang/Throwable;>;", $FINAL, $field(SubscriptionBase, onError)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SequentialScheduler;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(SubscriptionBase, init$, void, $SequentialScheduler*, $Runnable*)},
		{"<init>", "(Ljdk/internal/net/http/common/SequentialScheduler;Ljava/lang/Runnable;Ljava/util/function/Consumer;)V", "(Ljdk/internal/net/http/common/SequentialScheduler;Ljava/lang/Runnable;Ljava/util/function/Consumer<Ljava/lang/Throwable;>;)V", $PUBLIC, $method(SubscriptionBase, init$, void, $SequentialScheduler*, $Runnable*, $Consumer*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(SubscriptionBase, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(SubscriptionBase, request, void, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SubscriptionBase, toString, $String*)},
		{"tryDecrement", "()Z", nullptr, $PUBLIC, $virtualMethod(SubscriptionBase, tryDecrement, bool)},
		{"window", "()J", nullptr, $PUBLIC, $virtualMethod(SubscriptionBase, window, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.common.SubscriptionBase",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(SubscriptionBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubscriptionBase);
	});
	return class$;
}

$Class* SubscriptionBase::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk