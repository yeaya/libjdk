#include <TimeChangeButtonClickTest.h>
#include <TestUI.h>
#include <TimeChangeButtonClickTest$1.h>
#include <TimeChangeButtonClickTest$2.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $TestUI = ::TestUI;
using $TimeChangeButtonClickTest$1 = ::TimeChangeButtonClickTest$1;
using $TimeChangeButtonClickTest$2 = ::TimeChangeButtonClickTest$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void TimeChangeButtonClickTest::init$() {
}

void TimeChangeButtonClickTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TestUI, test, $new($TestUI, latch));
	$SwingUtilities::invokeLater($$new($TimeChangeButtonClickTest$1, test));
	$init($TimeUnit);
	bool status = latch->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	$SwingUtilities::invokeAndWait($$new($TimeChangeButtonClickTest$2, test));
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

TimeChangeButtonClickTest::TimeChangeButtonClickTest() {
}

$Class* TimeChangeButtonClickTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeChangeButtonClickTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TimeChangeButtonClickTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TimeChangeButtonClickTest$2", nullptr, nullptr, 0},
		{"TimeChangeButtonClickTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TimeChangeButtonClickTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TimeChangeButtonClickTest$2,TimeChangeButtonClickTest$1"
	};
	$loadClass(TimeChangeButtonClickTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeChangeButtonClickTest);
	});
	return class$;
}

$Class* TimeChangeButtonClickTest::class$ = nullptr;