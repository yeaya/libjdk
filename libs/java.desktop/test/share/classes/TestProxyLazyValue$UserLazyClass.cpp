#include <TestProxyLazyValue$UserLazyClass.h>
#include <TestProxyLazyValue.h>
#include <jcpp.h>

#undef CONSTRUCTOR_ARG
#undef RESULT_1
#undef RESULT_2

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$String* TestProxyLazyValue$UserLazyClass::RESULT_1 = nullptr;
$String* TestProxyLazyValue$UserLazyClass::RESULT_2 = nullptr;

void TestProxyLazyValue$UserLazyClass::init$() {
}

void TestProxyLazyValue$UserLazyClass::init$(int32_t arg) {
	this->arg = arg;
}

$String* TestProxyLazyValue$UserLazyClass::method1() {
	$init(TestProxyLazyValue$UserLazyClass);
	return TestProxyLazyValue$UserLazyClass::RESULT_1;
}

$String* TestProxyLazyValue$UserLazyClass::method2($String* arg) {
	$init(TestProxyLazyValue$UserLazyClass);
	return arg;
}

TestProxyLazyValue$UserLazyClass::TestProxyLazyValue$UserLazyClass() {
}

void TestProxyLazyValue$UserLazyClass::clinit$($Class* clazz) {
	$assignStatic(TestProxyLazyValue$UserLazyClass::RESULT_1, "1"_s);
	$assignStatic(TestProxyLazyValue$UserLazyClass::RESULT_2, "2"_s);
}

$Class* TestProxyLazyValue$UserLazyClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTRUCTOR_ARG", "I", nullptr, $STATIC | $FINAL, $constField(TestProxyLazyValue$UserLazyClass, CONSTRUCTOR_ARG)},
		{"RESULT_1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestProxyLazyValue$UserLazyClass, RESULT_1)},
		{"RESULT_2", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestProxyLazyValue$UserLazyClass, RESULT_2)},
		{"arg", "I", nullptr, 0, $field(TestProxyLazyValue$UserLazyClass, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserLazyClass, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserLazyClass, init$, void, int32_t)},
		{"method1", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestProxyLazyValue$UserLazyClass, method1, $String*)},
		{"method2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestProxyLazyValue$UserLazyClass, method2, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestProxyLazyValue$UserLazyClass", "TestProxyLazyValue", "UserLazyClass", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestProxyLazyValue$UserLazyClass",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestProxyLazyValue"
	};
	$loadClass(TestProxyLazyValue$UserLazyClass, name, initialize, &classInfo$$, TestProxyLazyValue$UserLazyClass::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestProxyLazyValue$UserLazyClass);
	});
	return class$;
}

$Class* TestProxyLazyValue$UserLazyClass::class$ = nullptr;