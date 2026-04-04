#include <TestKit$ThrowingFunction.h>
#include <TestKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* TestKit$ThrowingFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, $virtualMethod(TestKit$ThrowingFunction, run, $Object*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestKit$ThrowingFunction", "TestKit", "ThrowingFunction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TestKit$ThrowingFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestKit"
	};
	$loadClass(TestKit$ThrowingFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$ThrowingFunction);
	});
	return class$;
}

$Class* TestKit$ThrowingFunction::class$ = nullptr;