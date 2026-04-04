#include <HiddenDefaultButtonTest$2.h>
#include <HiddenDefaultButtonTest.h>
#include <jcpp.h>

using $HiddenDefaultButtonTest = ::HiddenDefaultButtonTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HiddenDefaultButtonTest$2::init$() {
}

void HiddenDefaultButtonTest$2::run() {
	$HiddenDefaultButtonTest::createGUI();
}

HiddenDefaultButtonTest$2::HiddenDefaultButtonTest$2() {
}

$Class* HiddenDefaultButtonTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HiddenDefaultButtonTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HiddenDefaultButtonTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HiddenDefaultButtonTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HiddenDefaultButtonTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HiddenDefaultButtonTest$2",
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
		"HiddenDefaultButtonTest"
	};
	$loadClass(HiddenDefaultButtonTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HiddenDefaultButtonTest$2);
	});
	return class$;
}

$Class* HiddenDefaultButtonTest$2::class$ = nullptr;