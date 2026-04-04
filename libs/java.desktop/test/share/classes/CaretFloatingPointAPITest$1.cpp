#include <CaretFloatingPointAPITest$1.h>
#include <CaretFloatingPointAPITest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest = ::CaretFloatingPointAPITest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void CaretFloatingPointAPITest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void CaretFloatingPointAPITest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($CaretFloatingPointAPITest);
	$nc($CaretFloatingPointAPITest::countDownLatch)->countDown();
}

CaretFloatingPointAPITest$1::CaretFloatingPointAPITest$1() {
}

$Class* CaretFloatingPointAPITest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$1, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(CaretFloatingPointAPITest$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(CaretFloatingPointAPITest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CaretFloatingPointAPITest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CaretFloatingPointAPITest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CaretFloatingPointAPITest$1",
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
		"CaretFloatingPointAPITest"
	};
	$loadClass(CaretFloatingPointAPITest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaretFloatingPointAPITest$1);
	});
	return class$;
}

$Class* CaretFloatingPointAPITest$1::class$ = nullptr;