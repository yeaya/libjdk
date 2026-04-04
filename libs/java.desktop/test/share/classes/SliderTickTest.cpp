#include <SliderTickTest.h>
#include <SliderTickTest$1.h>
#include <SliderTickTest$2.h>
#include <TestUI.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $SliderTickTest$1 = ::SliderTickTest$1;
using $SliderTickTest$2 = ::SliderTickTest$2;
using $TestUI = ::TestUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void SliderTickTest::init$() {
}

void SliderTickTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TestUI, test, $new($TestUI, latch));
	$SwingUtilities::invokeLater($$new($SliderTickTest$1, test));
	$init($TimeUnit);
	bool status = latch->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	$SwingUtilities::invokeAndWait($$new($SliderTickTest$2, test));
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

SliderTickTest::SliderTickTest() {
}

$Class* SliderTickTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SliderTickTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SliderTickTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SliderTickTest$2", nullptr, nullptr, 0},
		{"SliderTickTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SliderTickTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SliderTickTest$2,SliderTickTest$1"
	};
	$loadClass(SliderTickTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SliderTickTest);
	});
	return class$;
}

$Class* SliderTickTest::class$ = nullptr;