#include <jdk/internal/net/http/PullPublisher$Subscription.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/PullPublisher$Subscription$PullTask.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/SequentialScheduler$RestartableTask.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;
using $PullPublisher$Subscription$PullTask = ::jdk::internal::net::http::PullPublisher$Subscription$PullTask;
using $Demand = ::jdk::internal::net::http::common::Demand;
using $SequentialScheduler = ::jdk::internal::net::http::common::SequentialScheduler;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void PullPublisher$Subscription::init$($PullPublisher* this$0, $Flow$Subscriber* subscriber, $Iterator* iter, $Throwable* throwable) {
	$set(this, this$0, this$0);
	$set(this, pullScheduler, $new($SequentialScheduler, $$new($PullPublisher$Subscription$PullTask, this)));
	$set(this, demand, $new($Demand));
	$set(this, subscriber, subscriber);
	$set(this, iter, iter);
	$set(this, error, throwable);
}

void PullPublisher$Subscription::request(int64_t n) {
	$useLocalObjectStack();
	if (this->cancelled) {
		return;
	}
	if (n <= 0) {
		$set(this, error, $new($IllegalArgumentException, $$str({"non-positive subscription request: "_s, $$str(n)})));
	} else {
		this->demand->increase(n);
	}
	this->pullScheduler->runOrSchedule();
}

void PullPublisher$Subscription::cancel() {
	this->cancelled = true;
}

PullPublisher$Subscription::PullPublisher$Subscription() {
}

$Class* PullPublisher$Subscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/PullPublisher;", nullptr, $FINAL | $SYNTHETIC, $field(PullPublisher$Subscription, this$0)},
		{"subscriber", "Ljava/util/concurrent/Flow$Subscriber;", "Ljava/util/concurrent/Flow$Subscriber<-TT;>;", $PRIVATE | $FINAL, $field(PullPublisher$Subscription, subscriber)},
		{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<TT;>;", $PRIVATE | $FINAL, $field(PullPublisher$Subscription, iter)},
		{"completed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(PullPublisher$Subscription, completed)},
		{"cancelled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(PullPublisher$Subscription, cancelled)},
		{"error", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $VOLATILE, $field(PullPublisher$Subscription, error)},
		{"pullScheduler", "Ljdk/internal/net/http/common/SequentialScheduler;", nullptr, $FINAL, $field(PullPublisher$Subscription, pullScheduler)},
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(PullPublisher$Subscription, demand)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PullPublisher;Ljava/util/concurrent/Flow$Subscriber;Ljava/util/Iterator;Ljava/lang/Throwable;)V", "(Ljava/util/concurrent/Flow$Subscriber<-TT;>;Ljava/util/Iterator<TT;>;Ljava/lang/Throwable;)V", 0, $method(PullPublisher$Subscription, init$, void, $PullPublisher*, $Flow$Subscriber*, $Iterator*, $Throwable*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(PullPublisher$Subscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(PullPublisher$Subscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PullPublisher$Subscription", "jdk.internal.net.http.PullPublisher", "Subscription", $PRIVATE},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.PullPublisher$Subscription$PullTask", "jdk.internal.net.http.PullPublisher$Subscription", "PullTask", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.PullPublisher$Subscription",
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
		"jdk.internal.net.http.PullPublisher"
	};
	$loadClass(PullPublisher$Subscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PullPublisher$Subscription);
	});
	return class$;
}

$Class* PullPublisher$Subscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk