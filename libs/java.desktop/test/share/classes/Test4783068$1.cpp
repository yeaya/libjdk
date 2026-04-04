#include <Test4783068$1.h>
#include <Test4783068.h>
#include <jcpp.h>

using $Test4783068 = ::Test4783068;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test4783068$1::init$() {
}

void Test4783068$1::run() {
	$$new($Test4783068)->test();
}

Test4783068$1::Test4783068$1() {
}

$Class* Test4783068$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test4783068$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test4783068$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test4783068",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4783068$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test4783068$1",
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
		"Test4783068"
	};
	$loadClass(Test4783068$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4783068$1);
	});
	return class$;
}

$Class* Test4783068$1::class$ = nullptr;