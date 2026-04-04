#include <TestHTMLBulletsSizeAndAliasing.h>
#include <AliasingTest.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $AliasingTest = ::AliasingTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

void TestHTMLBulletsSizeAndAliasing::init$() {
}

void TestHTMLBulletsSizeAndAliasing::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($AliasingTest, test, $new($AliasingTest, latch));
	$var($Thread, T1, $new($Thread, test));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(60, $TimeUnit::SECONDS);
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "JEditorPane unordered list bullets look pixelated"_s);
	}
}

TestHTMLBulletsSizeAndAliasing::TestHTMLBulletsSizeAndAliasing() {
}

$Class* TestHTMLBulletsSizeAndAliasing::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestHTMLBulletsSizeAndAliasing, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestHTMLBulletsSizeAndAliasing, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestHTMLBulletsSizeAndAliasing",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestHTMLBulletsSizeAndAliasing, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestHTMLBulletsSizeAndAliasing);
	});
	return class$;
}

$Class* TestHTMLBulletsSizeAndAliasing::class$ = nullptr;