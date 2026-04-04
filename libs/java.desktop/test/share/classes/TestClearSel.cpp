#include <TestClearSel.h>
#include <ClearSelTest.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

#undef SECONDS

using $ClearSelTest = ::ClearSelTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$DefaultTableModel* TestClearSel::model = nullptr;

void TestClearSel::init$() {
}

void TestClearSel::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($ClearSelTest, test, $new($ClearSelTest, latch));
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
		$throwNew($RuntimeException, "Some text were not rendered properly during painting of Jtable rows "_s);
	}
}

TestClearSel::TestClearSel() {
}

$Class* TestClearSel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(TestClearSel, model)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestClearSel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestClearSel, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestClearSel",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestClearSel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClearSel);
	});
	return class$;
}

$Class* TestClearSel::class$ = nullptr;