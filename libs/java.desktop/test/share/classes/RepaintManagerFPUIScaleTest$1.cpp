#include <RepaintManagerFPUIScaleTest$1.h>
#include <RepaintManagerFPUIScaleTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $RepaintManagerFPUIScaleTest = ::RepaintManagerFPUIScaleTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void RepaintManagerFPUIScaleTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void RepaintManagerFPUIScaleTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($RepaintManagerFPUIScaleTest);
	$nc($RepaintManagerFPUIScaleTest::countDownLatch)->countDown();
}

RepaintManagerFPUIScaleTest$1::RepaintManagerFPUIScaleTest$1() {
}

$Class* RepaintManagerFPUIScaleTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManagerFPUIScaleTest$1, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(RepaintManagerFPUIScaleTest$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(RepaintManagerFPUIScaleTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RepaintManagerFPUIScaleTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RepaintManagerFPUIScaleTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RepaintManagerFPUIScaleTest$1",
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
		"RepaintManagerFPUIScaleTest"
	};
	$loadClass(RepaintManagerFPUIScaleTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManagerFPUIScaleTest$1);
	});
	return class$;
}

$Class* RepaintManagerFPUIScaleTest$1::class$ = nullptr;