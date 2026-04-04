#include <LostTextTest.h>
#include <LostText.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

#undef SECONDS

using $LostText = ::LostText;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$DefaultTableModel* LostTextTest::model = nullptr;

void LostTextTest::init$() {
}

void LostTextTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($LostText, test, $new($LostText, latch));
	$var($Thread, T1, $new($Thread, test));
	T1->start();
	bool ret = false;
	try {
		$init($TimeUnit);
		ret = latch->await(30, $TimeUnit::SECONDS);
	} catch ($InterruptedException& ie) {
		$throw(ie);
	}
	if (!ret) {
		test->dispose();
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Some text were not rendered properly during painting of Jtable rows "_s);
	}
}

LostTextTest::LostTextTest() {
}

$Class* LostTextTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(LostTextTest, model)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LostTextTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LostTextTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LostTextTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LostTextTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LostTextTest);
	});
	return class$;
}

$Class* LostTextTest::class$ = nullptr;