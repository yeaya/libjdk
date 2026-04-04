#include <TestProxyLazyValue$UserProxyLazyValue.h>
#include <TestProxyLazyValue.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className) {
	$UIDefaults$ProxyLazyValue::init$(className);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $ObjectArray* constructorArgs) {
	$UIDefaults$ProxyLazyValue::init$(className, constructorArgs);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $String* methodName) {
	$UIDefaults$ProxyLazyValue::init$(className, methodName);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $String* methodName, $ObjectArray* methodArgs) {
	$UIDefaults$ProxyLazyValue::init$(className, methodName, methodArgs);
}

TestProxyLazyValue$UserProxyLazyValue::TestProxyLazyValue$UserProxyLazyValue() {
}

$Class* TestProxyLazyValue$UserProxyLazyValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserProxyLazyValue, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserProxyLazyValue, init$, void, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserProxyLazyValue, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TestProxyLazyValue$UserProxyLazyValue, init$, void, $String*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestProxyLazyValue$UserProxyLazyValue", "TestProxyLazyValue", "UserProxyLazyValue", $PUBLIC | $STATIC},
		{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestProxyLazyValue$UserProxyLazyValue",
		"javax.swing.UIDefaults$ProxyLazyValue",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestProxyLazyValue"
	};
	$loadClass(TestProxyLazyValue$UserProxyLazyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestProxyLazyValue$UserProxyLazyValue);
	});
	return class$;
}

$Class* TestProxyLazyValue$UserProxyLazyValue::class$ = nullptr;