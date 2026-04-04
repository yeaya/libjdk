#include <TestJSpinnerPressUnpress$1.h>
#include <TestJSpinnerPressUnpress.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestJSpinnerPressUnpress = ::TestJSpinnerPressUnpress;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestJSpinnerPressUnpress$1::init$() {
	$WindowAdapter::init$();
}

void TestJSpinnerPressUnpress$1::windowClosing($WindowEvent* e) {
	$init($TestJSpinnerPressUnpress);
	$nc($TestJSpinnerPressUnpress::mainFrame)->dispose();
	$nc($TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

TestJSpinnerPressUnpress$1::TestJSpinnerPressUnpress$1() {
}

$Class* TestJSpinnerPressUnpress$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJSpinnerPressUnpress$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJSpinnerPressUnpress$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJSpinnerPressUnpress",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJSpinnerPressUnpress$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJSpinnerPressUnpress$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestJSpinnerPressUnpress"
	};
	$loadClass(TestJSpinnerPressUnpress$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestJSpinnerPressUnpress$1));
	});
	return class$;
}

$Class* TestJSpinnerPressUnpress$1::class$ = nullptr;