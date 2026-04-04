#include <RepaintManagerFPUIScaleTest$2.h>
#include <RepaintManagerFPUIScaleTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $RepaintManagerFPUIScaleTest = ::RepaintManagerFPUIScaleTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void RepaintManagerFPUIScaleTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void RepaintManagerFPUIScaleTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($RepaintManagerFPUIScaleTest);
	$nc($RepaintManagerFPUIScaleTest::countDownLatch)->countDown();
}

RepaintManagerFPUIScaleTest$2::RepaintManagerFPUIScaleTest$2() {
}

$Class* RepaintManagerFPUIScaleTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManagerFPUIScaleTest$2, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(RepaintManagerFPUIScaleTest$2, init$, void, $JFrame*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(RepaintManagerFPUIScaleTest$2, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintManagerFPUIScaleTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintManagerFPUIScaleTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintManagerFPUIScaleTest$2",
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
		"RepaintManagerFPUIScaleTest"
	};
	$loadClass(RepaintManagerFPUIScaleTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RepaintManagerFPUIScaleTest$2));
	});
	return class$;
}

$Class* RepaintManagerFPUIScaleTest$2::class$ = nullptr;