#include <RepaintOnFrameIconifiedStateChangeTest$4.h>
#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef NORMAL

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void RepaintOnFrameIconifiedStateChangeTest$4::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$4::run() {
	$nc($System::out)->println("Restoring the frame..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	for (int32_t i = 0; i < $nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->length; ++i) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->set(i, false);
	}
	$RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet = true;
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->setExtendedState($JFrame::NORMAL);
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->toFront();
}

RepaintOnFrameIconifiedStateChangeTest$4::RepaintOnFrameIconifiedStateChangeTest$4() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintOnFrameIconifiedStateChangeTest$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintOnFrameIconifiedStateChangeTest$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintOnFrameIconifiedStateChangeTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintOnFrameIconifiedStateChangeTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintOnFrameIconifiedStateChangeTest$4",
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
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintOnFrameIconifiedStateChangeTest$4);
	});
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$4::class$ = nullptr;