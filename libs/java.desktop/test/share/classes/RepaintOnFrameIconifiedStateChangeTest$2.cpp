#include <RepaintOnFrameIconifiedStateChangeTest$2.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void RepaintOnFrameIconifiedStateChangeTest$2::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$2::run() {
	$nc($System::out)->println("Minimizing the frame..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->setExtendedState($JFrame::ICONIFIED);
}

RepaintOnFrameIconifiedStateChangeTest$2::RepaintOnFrameIconifiedStateChangeTest$2() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$2",
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
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintOnFrameIconifiedStateChangeTest$2);
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$2::class$ = nullptr;