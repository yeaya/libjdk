#include <Test6462562$1.h>
#include <Test6462562.h>
#include <jcpp.h>

using $Test6462562 = ::Test6462562;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6462562$1::init$() {
}

void Test6462562$1::run() {
	$$new($Test6462562)->test();
}

Test6462562$1::Test6462562$1() {
}

$Class* Test6462562$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6462562$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6462562$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6462562",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6462562$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6462562$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6462562"
	};
	$loadClass(Test6462562$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6462562$1);
	});
	return class$;
}

$Class* Test6462562$1::class$ = nullptr;