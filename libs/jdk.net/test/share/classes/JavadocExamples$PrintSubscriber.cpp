#include <JavadocExamples$PrintSubscriber.h>
#include <JavadocExamples.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

void JavadocExamples$PrintSubscriber::init$($PrintStream* out) {
	$set(this, out, out);
}

void JavadocExamples$PrintSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$nc(subscription)->request($Long::MAX_VALUE);
}

void JavadocExamples$PrintSubscriber::onNext($String* item) {
	$nc(this->out)->println(item);
}

void JavadocExamples$PrintSubscriber::onError($Throwable* throwable) {
	$nc(throwable)->printStackTrace();
}

void JavadocExamples$PrintSubscriber::onComplete() {
}

void JavadocExamples$PrintSubscriber::onNext(Object$* item) {
	this->onNext($cast($String, item));
}

JavadocExamples$PrintSubscriber::JavadocExamples$PrintSubscriber() {
}

$Class* JavadocExamples$PrintSubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/PrintStream;", nullptr, $FINAL, $field(JavadocExamples$PrintSubscriber, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, 0, $method(JavadocExamples$PrintSubscriber, init$, void, $PrintStream*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$PrintSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$PrintSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JavadocExamples$PrintSubscriber, onNext, void, $String*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavadocExamples$PrintSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$PrintSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JavadocExamples$PrintSubscriber", "JavadocExamples", "PrintSubscriber", $STATIC | $FINAL},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"JavadocExamples$PrintSubscriber",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JavadocExamples"
	};
	$loadClass(JavadocExamples$PrintSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$PrintSubscriber);
	});
	return class$;
}

$Class* JavadocExamples$PrintSubscriber::class$ = nullptr;