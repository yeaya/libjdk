#include <InternalFrameIsNotCollectedTest$CustomInternalFrame.h>
#include <InternalFrameIsNotCollectedTest.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$volatile(bool) InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = false;
$Object* InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter = nullptr;

void InternalFrameIsNotCollectedTest$CustomInternalFrame::init$($String* title) {
	$JInternalFrame::init$(title, true, true, true, true);
}

void InternalFrameIsNotCollectedTest$CustomInternalFrame::finalize() {
	$nc($System::out)->println("Finalized!"_s);
	InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = true;
	$nc(InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter)->notifyAll();
}

void InternalFrameIsNotCollectedTest$CustomInternalFrame::clinit$($Class* clazz) {
	InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized = false;
	$assignStatic(InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter, $new($Object));
}

InternalFrameIsNotCollectedTest$CustomInternalFrame::InternalFrameIsNotCollectedTest$CustomInternalFrame() {
}

$Class* InternalFrameIsNotCollectedTest$CustomInternalFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"finalized", "Z", nullptr, $PUBLIC | $STATIC | $VOLATILE, $staticField(InternalFrameIsNotCollectedTest$CustomInternalFrame, finalized)},
		{"waiter", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticField(InternalFrameIsNotCollectedTest$CustomInternalFrame, waiter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InternalFrameIsNotCollectedTest$CustomInternalFrame, init$, void, $String*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(InternalFrameIsNotCollectedTest$CustomInternalFrame, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InternalFrameIsNotCollectedTest$CustomInternalFrame", "InternalFrameIsNotCollectedTest", "CustomInternalFrame", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InternalFrameIsNotCollectedTest$CustomInternalFrame",
		"javax.swing.JInternalFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InternalFrameIsNotCollectedTest"
	};
	$loadClass(InternalFrameIsNotCollectedTest$CustomInternalFrame, name, initialize, &classInfo$$, InternalFrameIsNotCollectedTest$CustomInternalFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(InternalFrameIsNotCollectedTest$CustomInternalFrame));
	});
	return class$;
}

$Class* InternalFrameIsNotCollectedTest$CustomInternalFrame::class$ = nullptr;