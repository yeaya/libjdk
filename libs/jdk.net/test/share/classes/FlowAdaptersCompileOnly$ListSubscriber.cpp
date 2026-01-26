#include <FlowAdaptersCompileOnly$ListSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$ListSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$ListSubscriber, init$, void)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriber, onNext, void, $List*)},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$ListSubscriber, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$ListSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$ListSubscriber", "FlowAdaptersCompileOnly", "ListSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$ListSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$ListSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$ListSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
	nullptr,
	_FlowAdaptersCompileOnly$ListSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$ListSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$ListSubscriber));
}

void FlowAdaptersCompileOnly$ListSubscriber::init$() {
}

void FlowAdaptersCompileOnly$ListSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$ListSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$ListSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$ListSubscriber::onComplete() {
}

void FlowAdaptersCompileOnly$ListSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$ListSubscriber::FlowAdaptersCompileOnly$ListSubscriber() {
}

$Class* FlowAdaptersCompileOnly$ListSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$ListSubscriber, name, initialize, &_FlowAdaptersCompileOnly$ListSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$ListSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$ListSubscriber::class$ = nullptr;