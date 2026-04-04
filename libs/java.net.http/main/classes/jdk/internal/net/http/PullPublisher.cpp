#include <jdk/internal/net/http/PullPublisher.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <jdk/internal/net/http/PullPublisher$Subscription.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $PullPublisher$Subscription = ::jdk::internal::net::http::PullPublisher$Subscription;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool PullPublisher::$assertionsDisabled = false;

void PullPublisher::init$($Iterable* iterable, $Throwable* throwable) {
	$set(this, iterable, iterable);
	$set(this, throwable, throwable);
}

void PullPublisher::init$($Iterable* iterable) {
	PullPublisher::init$(iterable, nullptr);
}

void PullPublisher::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$var($PullPublisher$Subscription, sub, nullptr);
	if (this->throwable != nullptr) {
		if (!PullPublisher::$assertionsDisabled && !(this->iterable == nullptr)) {
			$throwNew($AssertionError, $$of($str({"non-null iterable: "_s, this->iterable})));
		}
		$assign(sub, $new($PullPublisher$Subscription, this, subscriber, nullptr, this->throwable));
	} else {
		if (!PullPublisher::$assertionsDisabled && !(this->throwable == nullptr)) {
			$throwNew($AssertionError, $$of($str({"non-null exception: "_s, this->throwable})));
		}
		$assign(sub, $new($PullPublisher$Subscription, this, subscriber, $($nc(this->iterable)->iterator()), nullptr));
	}
	$nc(subscriber)->onSubscribe(sub);
	if (this->throwable != nullptr) {
		$nc($nc(sub)->pullScheduler)->runOrSchedule();
	}
}

void PullPublisher::clinit$($Class* clazz) {
	PullPublisher::$assertionsDisabled = !PullPublisher::class$->desiredAssertionStatus();
}

PullPublisher::PullPublisher() {
}

$Class* PullPublisher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PullPublisher, $assertionsDisabled)},
		{"iterable", "Ljava/lang/Iterable;", "Ljava/lang/Iterable<TT;>;", $PRIVATE | $FINAL, $field(PullPublisher, iterable)},
		{"throwable", "Ljava/lang/Throwable;", nullptr, $PRIVATE | $FINAL, $field(PullPublisher, throwable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;Ljava/lang/Throwable;)V", "(Ljava/lang/Iterable<TT;>;Ljava/lang/Throwable;)V", 0, $method(PullPublisher, init$, void, $Iterable*, $Throwable*)},
		{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<TT;>;)V", 0, $method(PullPublisher, init$, void, $Iterable*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-TT;>;)V", $PUBLIC, $virtualMethod(PullPublisher, subscribe, void, $Flow$Subscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.PullPublisher$Subscription", "jdk.internal.net.http.PullPublisher", "Subscription", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.PullPublisher",
		"java.lang.Object",
		"java.util.concurrent.Flow$Publisher",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.PullPublisher$Subscription,jdk.internal.net.http.PullPublisher$Subscription$PullTask"
	};
	$loadClass(PullPublisher, name, initialize, &classInfo$$, PullPublisher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PullPublisher);
	});
	return class$;
}

$Class* PullPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk