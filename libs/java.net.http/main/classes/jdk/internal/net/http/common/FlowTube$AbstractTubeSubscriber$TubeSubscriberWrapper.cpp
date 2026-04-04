#include <jdk/internal/net/http/common/FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/common/FlowTube$AbstractTubeSubscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $FlowTube$AbstractTubeSubscriber = ::jdk::internal::net::http::common::FlowTube$AbstractTubeSubscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::init$($Flow$Subscriber* delegate) {
	$FlowTube$AbstractTubeSubscriber::init$();
	$set(this, delegate, delegate);
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::dropSubscription() {
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::onSubscribe($Flow$Subscription* subscription) {
	$nc(this->delegate)->onSubscribe(subscription);
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::onNext($List* item) {
	$nc(this->delegate)->onNext(item);
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::onError($Throwable* throwable) {
	$nc(this->delegate)->onError(throwable);
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::onComplete() {
	$nc(this->delegate)->onComplete();
}

void FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper() {
}

$Class* FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljava/util/concurrent/Flow$Subscriber;", "Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;", $FINAL, $field(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/util/List<Ljava/nio/ByteBuffer;>;>;)V", 0, $method(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, init$, void, $Flow$Subscriber*)},
		{"dropSubscription", "()V", nullptr, $PUBLIC, $virtualMethod(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, dropSubscription, void)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber", "jdk.internal.net.http.common.FlowTube", "AbstractTubeSubscriber", $PUBLIC | $STATIC | $ABSTRACT},
		{"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper", "jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber", "TubeSubscriberWrapper", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper",
		"jdk.internal.net.http.common.FlowTube$AbstractTubeSubscriber",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.FlowTube"
	};
	$loadClass(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper);
	});
	return class$;
}

$Class* FlowTube$AbstractTubeSubscriber$TubeSubscriberWrapper::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk