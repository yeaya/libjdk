#include <WindowsClassicHiDPIIconsTest$1.h>
#include <WindowsClassicHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $WindowsClassicHiDPIIconsTest = ::WindowsClassicHiDPIIconsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void WindowsClassicHiDPIIconsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void WindowsClassicHiDPIIconsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($WindowsClassicHiDPIIconsTest);
	$nc($WindowsClassicHiDPIIconsTest::countDownLatch)->countDown();
}

WindowsClassicHiDPIIconsTest$1::WindowsClassicHiDPIIconsTest$1() {
}

$Class* WindowsClassicHiDPIIconsTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsClassicHiDPIIconsTest$1, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(WindowsClassicHiDPIIconsTest$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsClassicHiDPIIconsTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WindowsClassicHiDPIIconsTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WindowsClassicHiDPIIconsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WindowsClassicHiDPIIconsTest$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
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
	$loadClass(WindowsClassicHiDPIIconsTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsClassicHiDPIIconsTest$1);
	});
	return class$;
}

$Class* WindowsClassicHiDPIIconsTest$1::class$ = nullptr;