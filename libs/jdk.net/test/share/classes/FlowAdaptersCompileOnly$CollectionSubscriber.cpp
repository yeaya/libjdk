#include <FlowAdaptersCompileOnly$CollectionSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

void FlowAdaptersCompileOnly$CollectionSubscriber::init$() {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onNext($Collection* item) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onComplete() {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onNext(Object$* item) {
	this->onNext($cast($Collection, item));
}

FlowAdaptersCompileOnly$CollectionSubscriber::FlowAdaptersCompileOnly$CollectionSubscriber() {
}

$Class* FlowAdaptersCompileOnly$CollectionSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$CollectionSubscriber, init$, void)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$CollectionSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$CollectionSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$CollectionSubscriber, onNext, void, $Collection*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$CollectionSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$CollectionSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FlowAdaptersCompileOnly$CollectionSubscriber", "FlowAdaptersCompileOnly", "CollectionSubscriber", $STATIC},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FlowAdaptersCompileOnly$CollectionSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/Collection<Ljava/nio/ByteBuffer;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FlowAdaptersCompileOnly"
	};
	$loadClass(FlowAdaptersCompileOnly$CollectionSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlowAdaptersCompileOnly$CollectionSubscriber);
	});
	return class$;
}

$Class* FlowAdaptersCompileOnly$CollectionSubscriber::class$ = nullptr;