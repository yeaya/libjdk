#include <LineAdaptersCompileOnly$CharSequenceSubscriber.h>

#include <LineAdaptersCompileOnly.h>
#include <java/lang/CharSequence.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _LineAdaptersCompileOnly$CharSequenceSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LineAdaptersCompileOnly$CharSequenceSubscriber, init$, void)},
	{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onComplete, void)},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onError, void, $Throwable*)},
	{"onNext", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onNext, void, $CharSequence*)},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onNext, void, Object$*)},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onSubscribe, void, $Flow$Subscription*)},
	{}
};

$InnerClassInfo _LineAdaptersCompileOnly$CharSequenceSubscriber_InnerClassesInfo_[] = {
	{"LineAdaptersCompileOnly$CharSequenceSubscriber", "LineAdaptersCompileOnly", "CharSequenceSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LineAdaptersCompileOnly$CharSequenceSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"LineAdaptersCompileOnly$CharSequenceSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_LineAdaptersCompileOnly$CharSequenceSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/CharSequence;>;",
	nullptr,
	_LineAdaptersCompileOnly$CharSequenceSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LineAdaptersCompileOnly"
};

$Object* allocate$LineAdaptersCompileOnly$CharSequenceSubscriber($Class* clazz) {
	return $of($alloc(LineAdaptersCompileOnly$CharSequenceSubscriber));
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::init$() {
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::onNext($CharSequence* item) {
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::onError($Throwable* throwable) {
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::onComplete() {
}

void LineAdaptersCompileOnly$CharSequenceSubscriber::onNext(Object$* item) {
	this->onNext($cast($CharSequence, item));
}

LineAdaptersCompileOnly$CharSequenceSubscriber::LineAdaptersCompileOnly$CharSequenceSubscriber() {
}

$Class* LineAdaptersCompileOnly$CharSequenceSubscriber::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$CharSequenceSubscriber, name, initialize, &_LineAdaptersCompileOnly$CharSequenceSubscriber_ClassInfo_, allocate$LineAdaptersCompileOnly$CharSequenceSubscriber);
	return class$;
}

$Class* LineAdaptersCompileOnly$CharSequenceSubscriber::class$ = nullptr;