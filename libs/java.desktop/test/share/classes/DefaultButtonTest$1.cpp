#include <DefaultButtonTest$1.h>
#include <DefaultButtonTest.h>
#include <jcpp.h>

using $DefaultButtonTest = ::DefaultButtonTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DefaultButtonTest$1::init$() {
}

void DefaultButtonTest$1::run() {
	$new($DefaultButtonTest);
}

DefaultButtonTest$1::DefaultButtonTest$1() {
}

$Class* DefaultButtonTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultButtonTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultButtonTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DefaultButtonTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultButtonTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultButtonTest$1",
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
		"DefaultButtonTest"
	};
	$loadClass(DefaultButtonTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultButtonTest$1);
	});
	return class$;
}

$Class* DefaultButtonTest$1::class$ = nullptr;