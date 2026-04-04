#include <S$2.h>
#include <S.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void S$2::init$() {
}

void S$2::request(int64_t n) {
}

void S$2::cancel() {
}

S$2::S$2() {
}

$Class* S$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(S$2, init$, void)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(S$2, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(S$2, request, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"S",
		"newErroredPublisher",
		"()Ljava/util/concurrent/Flow$Publisher;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"S$2", nullptr, nullptr, 0},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"S$2",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"S"
	};
	$loadClass(S$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(S$2);
	});
	return class$;
}

$Class* S$2::class$ = nullptr;