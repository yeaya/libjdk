#include <RepaintOnFrameIconifiedStateChangeTest$5.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void RepaintOnFrameIconifiedStateChangeTest$5::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$5::run() {
	$init($RepaintOnFrameIconifiedStateChangeTest);
	if ($RepaintOnFrameIconifiedStateChangeTest::frame != nullptr) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->dispose();
		$assignStatic($RepaintOnFrameIconifiedStateChangeTest::frame, nullptr);
	}
}

RepaintOnFrameIconifiedStateChangeTest$5::RepaintOnFrameIconifiedStateChangeTest$5() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$5",
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
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintOnFrameIconifiedStateChangeTest$5);
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$5::class$ = nullptr;