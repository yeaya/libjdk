#include <JViewPortBackingStoreImageTest$2.h>
#include <JViewPortBackingStoreImageTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JViewPortBackingStoreImageTest = ::JViewPortBackingStoreImageTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void JViewPortBackingStoreImageTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void JViewPortBackingStoreImageTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($JViewPortBackingStoreImageTest);
	$nc($JViewPortBackingStoreImageTest::countDownLatch)->countDown();
}

JViewPortBackingStoreImageTest$2::JViewPortBackingStoreImageTest$2() {
}

$Class* JViewPortBackingStoreImageTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JViewPortBackingStoreImageTest$2, val$mainFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(JViewPortBackingStoreImageTest$2, init$, void, $JFrame*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(JViewPortBackingStoreImageTest$2, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JViewPortBackingStoreImageTest",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JViewPortBackingStoreImageTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JViewPortBackingStoreImageTest$2",
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
		"JViewPortBackingStoreImageTest"
	};
	$loadClass(JViewPortBackingStoreImageTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JViewPortBackingStoreImageTest$2));
	});
	return class$;
}

$Class* JViewPortBackingStoreImageTest$2::class$ = nullptr;