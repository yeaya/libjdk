#include <TestProxyLazyValue.h>
#include <TestProxyLazyValue$UserLazyClass.h>
#include <TestProxyLazyValue$UserProxyLazyValue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef CONSTRUCTOR_ARG
#undef RESULT_1
#undef RESULT_2

using $TestProxyLazyValue$UserLazyClass = ::TestProxyLazyValue$UserLazyClass;
using $TestProxyLazyValue$UserProxyLazyValue = ::TestProxyLazyValue$UserProxyLazyValue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

class TestProxyLazyValue$$Lambda$testUserProxyLazyValue : public $Runnable {
	$class(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestProxyLazyValue::testUserProxyLazyValue();
	}
};
$Class* TestProxyLazyValue$$Lambda$testUserProxyLazyValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestProxyLazyValue$$Lambda$testUserProxyLazyValue",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestProxyLazyValue$$Lambda$testUserProxyLazyValue);
	});
	return class$;
}
$Class* TestProxyLazyValue$$Lambda$testUserProxyLazyValue::class$ = nullptr;

class TestProxyLazyValue$$Lambda$testProxyLazyValue$1 : public $Runnable {
	$class(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestProxyLazyValue::testProxyLazyValue();
	}
};
$Class* TestProxyLazyValue$$Lambda$testProxyLazyValue$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestProxyLazyValue$$Lambda$testProxyLazyValue$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestProxyLazyValue$$Lambda$testProxyLazyValue$1);
	});
	return class$;
}
$Class* TestProxyLazyValue$$Lambda$testProxyLazyValue$1::class$ = nullptr;

void TestProxyLazyValue::init$() {
}

void TestProxyLazyValue::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestProxyLazyValue);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestProxyLazyValue$$Lambda$testUserProxyLazyValue));
	$SwingUtilities::invokeAndWait($$new(TestProxyLazyValue$$Lambda$testProxyLazyValue$1));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestProxyLazyValue$$Lambda$testUserProxyLazyValue));
	$SwingUtilities::invokeAndWait($$new(TestProxyLazyValue$$Lambda$testProxyLazyValue$1));
}

void TestProxyLazyValue::testUserProxyLazyValue() {
	$useLocalObjectStack();
	$load($TestProxyLazyValue$UserLazyClass);
	$var($Object, obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	$var($String, var$0, $TestProxyLazyValue$UserLazyClass::class$->getName());
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, var$0, $$new($ObjectArray, {$($Integer::valueOf($TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG))}))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	if ($nc($cast($TestProxyLazyValue$UserLazyClass, obj))->arg != $TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG) {
		$throwNew($RuntimeException, "Constructt argument is wrong!"_s);
	}
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method1"_s)->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_1)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method2"_s, $$new($ObjectArray, {$TestProxyLazyValue$UserLazyClass::RESULT_2}))->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_2)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
}

void TestProxyLazyValue::testProxyLazyValue() {
	$useLocalObjectStack();
	$load($TestProxyLazyValue$UserLazyClass);
	$var($Object, obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	$var($String, var$0, $TestProxyLazyValue$UserLazyClass::class$->getName());
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, var$0, $$new($ObjectArray, {$($Integer::valueOf($TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG))}))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	if ($nc($cast($TestProxyLazyValue$UserLazyClass, obj))->arg != $TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG) {
		$throwNew($RuntimeException, "Constructt argument is wrong!"_s);
	}
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method1"_s)->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_1)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method2"_s, $$new($ObjectArray, {$TestProxyLazyValue$UserLazyClass::RESULT_2}))->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_2)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
}

TestProxyLazyValue::TestProxyLazyValue() {
}

$Class* TestProxyLazyValue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestProxyLazyValue$$Lambda$testUserProxyLazyValue")) {
			return TestProxyLazyValue$$Lambda$testUserProxyLazyValue::load$(name, initialize);
		}
		if (name->equals("TestProxyLazyValue$$Lambda$testProxyLazyValue$1")) {
			return TestProxyLazyValue$$Lambda$testProxyLazyValue$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestProxyLazyValue, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestProxyLazyValue, main, void, $StringArray*), "java.lang.Exception"},
		{"testProxyLazyValue", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestProxyLazyValue, testProxyLazyValue, void)},
		{"testUserProxyLazyValue", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestProxyLazyValue, testUserProxyLazyValue, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestProxyLazyValue$UserProxyLazyValue", "TestProxyLazyValue", "UserProxyLazyValue", $PUBLIC | $STATIC},
		{"TestProxyLazyValue$UserLazyClass", "TestProxyLazyValue", "UserLazyClass", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestProxyLazyValue",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestProxyLazyValue$UserProxyLazyValue,TestProxyLazyValue$UserLazyClass"
	};
	$loadClass(TestProxyLazyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestProxyLazyValue);
	});
	return class$;
}

$Class* TestProxyLazyValue::class$ = nullptr;