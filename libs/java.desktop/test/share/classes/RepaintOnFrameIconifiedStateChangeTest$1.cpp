#include <RepaintOnFrameIconifiedStateChangeTest$1.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void RepaintOnFrameIconifiedStateChangeTest$1::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$1::run() {
	$nc($System::out)->println("Creating GUI..."_s);
	$RepaintOnFrameIconifiedStateChangeTest::createGUI();
}

RepaintOnFrameIconifiedStateChangeTest$1::RepaintOnFrameIconifiedStateChangeTest$1() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$1",
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
		"RepaintOnFrameIconifiedStateChangeTest"
	};
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintOnFrameIconifiedStateChangeTest$1);
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$1::class$ = nullptr;