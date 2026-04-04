#include <TestTranslucentLabelText$1.h>
#include <TestTranslucentLabelText.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestTranslucentLabelText = ::TestTranslucentLabelText;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestTranslucentLabelText$1::init$() {
	$WindowAdapter::init$();
}

void TestTranslucentLabelText$1::windowClosing($WindowEvent* e) {
	$nc($System::out)->println("main dialog closing"_s);
	$init($TestTranslucentLabelText);
	$TestTranslucentLabelText::testGeneratedInterrupt = false;
	$nc($TestTranslucentLabelText::frame)->dispose();
	$nc($TestTranslucentLabelText::mainThread)->interrupt();
}

TestTranslucentLabelText$1::TestTranslucentLabelText$1() {
}

$Class* TestTranslucentLabelText$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestTranslucentLabelText$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTranslucentLabelText$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestTranslucentLabelText",
		"doTest",
		"(Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTranslucentLabelText$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestTranslucentLabelText$1",
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
		"TestTranslucentLabelText"
	};
	$loadClass(TestTranslucentLabelText$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestTranslucentLabelText$1));
	});
	return class$;
}

$Class* TestTranslucentLabelText$1::class$ = nullptr;