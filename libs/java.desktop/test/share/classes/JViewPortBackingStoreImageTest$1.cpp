#include <JViewPortBackingStoreImageTest$1.h>
#include <JViewPortBackingStoreImageTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JViewPortBackingStoreImageTest = ::JViewPortBackingStoreImageTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void JViewPortBackingStoreImageTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void JViewPortBackingStoreImageTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($JViewPortBackingStoreImageTest);
	$nc($JViewPortBackingStoreImageTest::countDownLatch)->countDown();
}

JViewPortBackingStoreImageTest$1::JViewPortBackingStoreImageTest$1() {
}

$Class* JViewPortBackingStoreImageTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JViewPortBackingStoreImageTest$1, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(JViewPortBackingStoreImageTest$1, init$, void, $JFrame*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JViewPortBackingStoreImageTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JViewPortBackingStoreImageTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JViewPortBackingStoreImageTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JViewPortBackingStoreImageTest$1",
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
		"JViewPortBackingStoreImageTest"
	};
	$loadClass(JViewPortBackingStoreImageTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JViewPortBackingStoreImageTest$1);
	});
	return class$;
}

$Class* JViewPortBackingStoreImageTest$1::class$ = nullptr;