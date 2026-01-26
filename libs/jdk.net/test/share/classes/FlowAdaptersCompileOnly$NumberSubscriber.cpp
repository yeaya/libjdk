#include <FlowAdaptersCompileOnly$NumberSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$NumberSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FlowAdaptersCompileOnly$NumberSubscriber, init$, void)},
	{"getNumber", "()Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, getNumber, $Number*)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, onNext, void, $List*)},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(FlowAdaptersCompileOnly$NumberSubscriber, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$NumberSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$NumberSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$NumberSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$NumberSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
	nullptr,
	_FlowAdaptersCompileOnly$NumberSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$NumberSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$NumberSubscriber));
}

void FlowAdaptersCompileOnly$NumberSubscriber::init$() {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onComplete() {
}

$Number* FlowAdaptersCompileOnly$NumberSubscriber::getNumber() {
	return nullptr;
}

void FlowAdaptersCompileOnly$NumberSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$NumberSubscriber::FlowAdaptersCompileOnly$NumberSubscriber() {
}

$Class* FlowAdaptersCompileOnly$NumberSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$NumberSubscriber, name, initialize, &_FlowAdaptersCompileOnly$NumberSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$NumberSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$NumberSubscriber::class$ = nullptr;