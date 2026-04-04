#include <FlowAdaptersCompileOnly$LongSubscriber.h>
#include <FlowAdaptersCompileOnly$NumberSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly$NumberSubscriber = ::FlowAdaptersCompileOnly$NumberSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

void FlowAdaptersCompileOnly$LongSubscriber::init$() {
	$FlowAdaptersCompileOnly$NumberSubscriber::init$();
}

void FlowAdaptersCompileOnly$LongSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onComplete() {
}

$Long* FlowAdaptersCompileOnly$LongSubscriber::getLong() {
	return nullptr;
}

void FlowAdaptersCompileOnly$LongSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$LongSubscriber::FlowAdaptersCompileOnly$LongSubscriber() {
}

$Class* FlowAdaptersCompileOnly$LongSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$LongSubscriber, init$, void)},
		{"getLong", "()Ljava/lang/Long;", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, getLong, $Long*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$LongSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$LongSubscriber", "FlowAdaptersCompileOnly", "LongSubscriber", $STATIC},
		{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$LongSubscriber",
		"FlowAdaptersCompileOnly$NumberSubscriber",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$LongSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$LongSubscriber);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$LongSubscriber::class$ = nullptr;