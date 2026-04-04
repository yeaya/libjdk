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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LineAdaptersCompileOnly$CharSequenceSubscriber, init$, void)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onNext, void, $CharSequence*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(LineAdaptersCompileOnly$CharSequenceSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LineAdaptersCompileOnly$CharSequenceSubscriber", "LineAdaptersCompileOnly", "CharSequenceSubscriber", $STATIC},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LineAdaptersCompileOnly$CharSequenceSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/CharSequence;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LineAdaptersCompileOnly"
	};
	$loadClass(LineAdaptersCompileOnly$CharSequenceSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineAdaptersCompileOnly$CharSequenceSubscriber);
	});
	return class$;
}

$Class* LineAdaptersCompileOnly$CharSequenceSubscriber::class$ = nullptr;