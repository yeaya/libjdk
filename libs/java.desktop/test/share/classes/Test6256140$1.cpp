#include <Test6256140$1.h>
#include <Test6256140.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test6256140$1::init$() {
}

void Test6256140$1::run() {
	$Test6256140::createAndShowGUI();
}

Test6256140$1::Test6256140$1() {
}

$Class* Test6256140$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6256140$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6256140$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6256140",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6256140$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6256140$1",
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
		"Test6256140"
	};
	$loadClass(Test6256140$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6256140$1);
	});
	return class$;
}

$Class* Test6256140$1::class$ = nullptr;