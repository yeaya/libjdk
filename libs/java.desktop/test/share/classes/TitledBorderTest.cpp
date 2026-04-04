#include <TitledBorderTest.h>
#include <TitledBorder.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TitledBorder = ::TitledBorder;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void TitledBorderTest::init$() {
}

void TitledBorderTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TitledBorder, test, $new($TitledBorder, latch));
	$var($Thread, T1, $new($Thread, test));
	T1->start();
	latch->await();
	if (test->testResult == false) {
		$throwNew($RuntimeException, "User Clicked Fail! TitledBorder Not Valid"_s);
	}
}

TitledBorderTest::TitledBorderTest() {
}

$Class* TitledBorderTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TitledBorderTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TitledBorderTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TitledBorderTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TitledBorderTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorderTest);
	});
	return class$;
}

$Class* TitledBorderTest::class$ = nullptr;