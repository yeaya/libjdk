#include <FlowAdaptersCompileOnly$IntegerSubscriber.h>
#include <FlowAdaptersCompileOnly$NumberSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly$NumberSubscriber = ::FlowAdaptersCompileOnly$NumberSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

void FlowAdaptersCompileOnly$IntegerSubscriber::init$() {
	$FlowAdaptersCompileOnly$NumberSubscriber::init$();
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onComplete() {
}

$Integer* FlowAdaptersCompileOnly$IntegerSubscriber::getInteger() {
	return nullptr;
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$IntegerSubscriber::FlowAdaptersCompileOnly$IntegerSubscriber() {
}

$Class* FlowAdaptersCompileOnly$IntegerSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$IntegerSubscriber, init$, void)},
		{"getInteger", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, getInteger, $Integer*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$IntegerSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$IntegerSubscriber", "FlowAdaptersCompileOnly", "IntegerSubscriber", $STATIC},
		{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$IntegerSubscriber",
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
	$loadClass(FlowAdaptersCompileOnly$IntegerSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$IntegerSubscriber);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$IntegerSubscriber::class$ = nullptr;