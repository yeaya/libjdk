#include <TestJTextPaneHTMLRendering$1.h>
#include <TestJTextPaneHTMLRendering.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestJTextPaneHTMLRendering = ::TestJTextPaneHTMLRendering;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestJTextPaneHTMLRendering$1::init$() {
	$WindowAdapter::init$();
}

void TestJTextPaneHTMLRendering$1::windowClosing($WindowEvent* e) {
	$init($TestJTextPaneHTMLRendering);
	$nc($TestJTextPaneHTMLRendering::mainFrame)->dispose();
	$nc($TestJTextPaneHTMLRendering::countDownLatch)->countDown();
}

TestJTextPaneHTMLRendering$1::TestJTextPaneHTMLRendering$1() {
}

$Class* TestJTextPaneHTMLRendering$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJTextPaneHTMLRendering$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJTextPaneHTMLRendering$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJTextPaneHTMLRendering",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJTextPaneHTMLRendering$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJTextPaneHTMLRendering$1",
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
		"TestJTextPaneHTMLRendering"
	};
	$loadClass(TestJTextPaneHTMLRendering$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestJTextPaneHTMLRendering$1));
	});
	return class$;
}

$Class* TestJTextPaneHTMLRendering$1::class$ = nullptr;