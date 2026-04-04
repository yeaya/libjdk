#include <WindowsClassicHiDPIIconsTest$2.h>
#include <WindowsClassicHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $WindowsClassicHiDPIIconsTest = ::WindowsClassicHiDPIIconsTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void WindowsClassicHiDPIIconsTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void WindowsClassicHiDPIIconsTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($WindowsClassicHiDPIIconsTest);
	$nc($WindowsClassicHiDPIIconsTest::countDownLatch)->countDown();
}

WindowsClassicHiDPIIconsTest$2::WindowsClassicHiDPIIconsTest$2() {
}

$Class* WindowsClassicHiDPIIconsTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsClassicHiDPIIconsTest$2, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(WindowsClassicHiDPIIconsTest$2, init$, void, $JFrame*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsClassicHiDPIIconsTest$2, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WindowsClassicHiDPIIconsTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WindowsClassicHiDPIIconsTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WindowsClassicHiDPIIconsTest$2",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WindowsClassicHiDPIIconsTest"
	};
	$loadClass(WindowsClassicHiDPIIconsTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsClassicHiDPIIconsTest$2));
	});
	return class$;
}

$Class* WindowsClassicHiDPIIconsTest$2::class$ = nullptr;