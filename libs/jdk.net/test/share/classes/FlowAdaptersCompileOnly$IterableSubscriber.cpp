#include <FlowAdaptersCompileOnly$IterableSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/lang/Iterable.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

void FlowAdaptersCompileOnly$IterableSubscriber::init$() {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onNext($Iterable* item) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onComplete() {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onNext(Object$* item) {
	this->onNext($cast($Iterable, item));
}

FlowAdaptersCompileOnly$IterableSubscriber::FlowAdaptersCompileOnly$IterableSubscriber() {
}

$Class* FlowAdaptersCompileOnly$IterableSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$IterableSubscriber, init$, void)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IterableSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IterableSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IterableSubscriber, onNext, void, $Iterable*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$IterableSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IterableSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$IterableSubscriber", "FlowAdaptersCompileOnly", "IterableSubscriber", $STATIC},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$IterableSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/Iterable<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$IterableSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$IterableSubscriber);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$IterableSubscriber::class$ = nullptr;