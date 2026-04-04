#include <GetSpanHiDpiBug.h>
#include <SpanTest.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $SpanTest = ::SpanTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

void GetSpanHiDpiBug::init$() {
}

void GetSpanHiDpiBug::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($SpanTest, test, $new($SpanTest, latch));
	$var($Thread, T1, $new($Thread, test));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(3000, $TimeUnit::SECONDS);
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Some characters overlap"_s);
	}
}

GetSpanHiDpiBug::GetSpanHiDpiBug() {
}

$Class* GetSpanHiDpiBug::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetSpanHiDpiBug, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetSpanHiDpiBug, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetSpanHiDpiBug",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetSpanHiDpiBug, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSpanHiDpiBug);
	});
	return class$;
}

$Class* GetSpanHiDpiBug::class$ = nullptr;