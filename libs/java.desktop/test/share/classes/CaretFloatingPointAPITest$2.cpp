#include <CaretFloatingPointAPITest$2.h>
#include <CaretFloatingPointAPITest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest = ::CaretFloatingPointAPITest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void CaretFloatingPointAPITest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void CaretFloatingPointAPITest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($CaretFloatingPointAPITest);
	$nc($CaretFloatingPointAPITest::countDownLatch)->countDown();
}

CaretFloatingPointAPITest$2::CaretFloatingPointAPITest$2() {
}

$Class* CaretFloatingPointAPITest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$2, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(CaretFloatingPointAPITest$2, init$, void, $JFrame*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(CaretFloatingPointAPITest$2, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CaretFloatingPointAPITest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CaretFloatingPointAPITest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CaretFloatingPointAPITest$2",
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
		"CaretFloatingPointAPITest"
	};
	$loadClass(CaretFloatingPointAPITest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CaretFloatingPointAPITest$2));
	});
	return class$;
}

$Class* CaretFloatingPointAPITest$2::class$ = nullptr;