#include <TestDisabledToolTipBorder.h>
#include <TestUI.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $TestUI = ::TestUI;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestDisabledToolTipBorder$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestDisabledToolTipBorder$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestDisabledToolTipBorder::lambda$main$0();
	}
};
$Class* TestDisabledToolTipBorder$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDisabledToolTipBorder$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestDisabledToolTipBorder$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestDisabledToolTipBorder$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestDisabledToolTipBorder$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDisabledToolTipBorder$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestDisabledToolTipBorder$$Lambda$lambda$main$0::class$ = nullptr;

class TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1 : public $Runnable {
	$class(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestDisabledToolTipBorder::lambda$disposeUI$1();
	}
};
$Class* TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1);
	});
	return class$;
}
$Class* TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1::class$ = nullptr;

$TestUI* TestDisabledToolTipBorder::test = nullptr;

void TestDisabledToolTipBorder::init$() {
}

void TestDisabledToolTipBorder::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$init(TestDisabledToolTipBorder);
	$assignStatic(TestDisabledToolTipBorder::test, $new($TestUI, latch));
	$SwingUtilities::invokeAndWait($$new(TestDisabledToolTipBorder$$Lambda$lambda$main$0));
	$init($TimeUnit);
	bool status = latch->await(2, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	if ($nc(TestDisabledToolTipBorder::test)->testResult == false) {
		disposeUI();
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

void TestDisabledToolTipBorder::disposeUI() {
	$SwingUtilities::invokeAndWait($$new(TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1));
}

void TestDisabledToolTipBorder::lambda$disposeUI$1() {
	try {
		$init(TestDisabledToolTipBorder);
		if (TestDisabledToolTipBorder::test != nullptr) {
			TestDisabledToolTipBorder::test->disposeUI();
		}
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while disposing UI"_s);
	}
}

void TestDisabledToolTipBorder::lambda$main$0() {
	try {
		$init(TestDisabledToolTipBorder);
		$nc(TestDisabledToolTipBorder::test)->createUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while creating UI"_s);
	}
}

TestDisabledToolTipBorder::TestDisabledToolTipBorder() {
}

$Class* TestDisabledToolTipBorder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestDisabledToolTipBorder$$Lambda$lambda$main$0")) {
			return TestDisabledToolTipBorder$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1")) {
			return TestDisabledToolTipBorder$$Lambda$lambda$disposeUI$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"test", "LTestUI;", nullptr, $PRIVATE | $STATIC, $staticField(TestDisabledToolTipBorder, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDisabledToolTipBorder, init$, void)},
		{"disposeUI", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestDisabledToolTipBorder, disposeUI, void), "java.lang.Exception"},
		{"lambda$disposeUI$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestDisabledToolTipBorder, lambda$disposeUI$1, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestDisabledToolTipBorder, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestDisabledToolTipBorder, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestDisabledToolTipBorder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestDisabledToolTipBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDisabledToolTipBorder);
	});
	return class$;
}

$Class* TestDisabledToolTipBorder::class$ = nullptr;