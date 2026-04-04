#include <JavadocExamples$LineParserSubscriber.h>
#include <JavadocExamples.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Pattern = ::java::util::regex::Pattern;

void JavadocExamples$LineParserSubscriber::init$($Pattern* pattern) {
	$set(this, matches, $new($CopyOnWriteArrayList));
	$set(this, pattern, pattern);
}

void JavadocExamples$LineParserSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$nc(subscription)->request($Long::MAX_VALUE);
}

void JavadocExamples$LineParserSubscriber::onNext($String* item) {
	if ($$nc($nc(this->pattern)->matcher(item))->matches()) {
		this->matches->add(item);
	}
}

void JavadocExamples$LineParserSubscriber::onError($Throwable* throwable) {
	$nc(throwable)->printStackTrace();
}

void JavadocExamples$LineParserSubscriber::onComplete() {
}

$List* JavadocExamples$LineParserSubscriber::getMatchingLines() {
	return $Collections::unmodifiableList(this->matches);
}

void JavadocExamples$LineParserSubscriber::onNext(Object$* item) {
	this->onNext($cast($String, item));
}

JavadocExamples$LineParserSubscriber::JavadocExamples$LineParserSubscriber() {
}

$Class* JavadocExamples$LineParserSubscriber::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL, $field(JavadocExamples$LineParserSubscriber, pattern)},
		{"matches", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<Ljava/lang/String;>;", $FINAL, $field(JavadocExamples$LineParserSubscriber, matches)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, 0, $method(JavadocExamples$LineParserSubscriber, init$, void, $Pattern*)},
		{"getMatchingLines", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(JavadocExamples$LineParserSubscriber, getMatchingLines, $List*)},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$LineParserSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$LineParserSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JavadocExamples$LineParserSubscriber, onNext, void, $String*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavadocExamples$LineParserSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(JavadocExamples$LineParserSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JavadocExamples$LineParserSubscriber", "JavadocExamples", "LineParserSubscriber", $STATIC | $FINAL},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"JavadocExamples$LineParserSubscriber",
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
	$loadClass(JavadocExamples$LineParserSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$LineParserSubscriber);
	});
	return class$;
}

$Class* JavadocExamples$LineParserSubscriber::class$ = nullptr;