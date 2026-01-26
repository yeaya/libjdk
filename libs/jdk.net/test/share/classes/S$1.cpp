#include <S$1.h>

#include <S.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _S$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(S$1, init$, void)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(S$1, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(S$1, onError, void, $Throwable*)},
	{"onNext", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(S$1, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(S$1, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$EnclosingMethodInfo _S$1_EnclosingMethodInfo_ = {
	"S",
	"nonCompliantSubscriber",
	"()Ljava/util/concurrent/Flow$Subscriber;"
};

$InnerClassInfo _S$1_InnerClassesInfo_[] = {
	{"S$1", nullptr, nullptr, 0},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _S$1_ClassInfo_ = {
	$ACC_SUPER,
	"S$1",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_S$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<TT;>;",
	&_S$1_EnclosingMethodInfo_,
	_S$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"S"
};

$Object* allocate$S$1($Class* clazz) {
	return $of($alloc(S$1));
}

void S$1::init$() {
}

void S$1::onSubscribe($Flow$Subscription* subscription) {
	$nc(subscription)->request($Long::MAX_VALUE);
}

void S$1::onNext(Object$* item) {
}

void S$1::onError($Throwable* throwable) {
}

void S$1::onComplete() {
}

S$1::S$1() {
}

$Class* S$1::load$($String* name, bool initialize) {
	$loadClass(S$1, name, initialize, &_S$1_ClassInfo_, allocate$S$1);
	return class$;
}

$Class* S$1::class$ = nullptr;