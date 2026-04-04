#include <PressedButtonRightClickTest$1.h>
#include <PressedButtonRightClickTest.h>
#include <jcpp.h>

using $PressedButtonRightClickTest = ::PressedButtonRightClickTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PressedButtonRightClickTest$1::init$() {
}

void PressedButtonRightClickTest$1::run() {
	$PressedButtonRightClickTest::constructTestUI();
}

PressedButtonRightClickTest$1::PressedButtonRightClickTest$1() {
}

$Class* PressedButtonRightClickTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PressedButtonRightClickTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PressedButtonRightClickTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PressedButtonRightClickTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PressedButtonRightClickTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PressedButtonRightClickTest$1",
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
		"PressedButtonRightClickTest"
	};
	$loadClass(PressedButtonRightClickTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PressedButtonRightClickTest$1);
	});
	return class$;
}

$Class* PressedButtonRightClickTest$1::class$ = nullptr;