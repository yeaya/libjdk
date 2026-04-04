#include <MetalHiDPIIconsTest$1.h>
#include <MetalHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $MetalHiDPIIconsTest = ::MetalHiDPIIconsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void MetalHiDPIIconsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void MetalHiDPIIconsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($MetalHiDPIIconsTest);
	$nc($MetalHiDPIIconsTest::countDownLatch)->countDown();
}

MetalHiDPIIconsTest$1::MetalHiDPIIconsTest$1() {
}

$Class* MetalHiDPIIconsTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(MetalHiDPIIconsTest$1, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(MetalHiDPIIconsTest$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalHiDPIIconsTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"MetalHiDPIIconsTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetalHiDPIIconsTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MetalHiDPIIconsTest$1",
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
		"MetalHiDPIIconsTest"
	};
	$loadClass(MetalHiDPIIconsTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalHiDPIIconsTest$1);
	});
	return class$;
}

$Class* MetalHiDPIIconsTest$1::class$ = nullptr;