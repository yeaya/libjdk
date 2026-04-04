#include <Test8152419.h>
#include <JColorChooserTest.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $JColorChooserTest = ::JColorChooserTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void Test8152419::init$() {
}

void Test8152419::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($JColorChooserTest, test, $new($JColorChooserTest, latch));
	$var($Thread, T1, $new($Thread, test));
	T1->start();
	try {
		latch->await();
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "User Clicked Fail!"_s);
	}
}

Test8152419::Test8152419() {
}

$Class* Test8152419::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8152419, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8152419, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8152419",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8152419, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8152419);
	});
	return class$;
}

$Class* Test8152419::class$ = nullptr;