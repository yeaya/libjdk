#include <TestKit$ThrowingProcedure.h>
#include <TestKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* TestKit$ThrowingProcedure::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestKit$ThrowingProcedure, run, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestKit$ThrowingProcedure", "TestKit", "ThrowingProcedure", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TestKit$ThrowingProcedure",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestKit"
	};
	$loadClass(TestKit$ThrowingProcedure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestKit$ThrowingProcedure);
	});
	return class$;
}

$Class* TestKit$ThrowingProcedure::class$ = nullptr;