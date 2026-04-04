#include <JSpinnerButtonFocusTest$1.h>
#include <JSpinnerButtonFocusTest.h>
#include <java/awt/Robot.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef VK_TAB

using $JSpinnerButtonFocusTest = ::JSpinnerButtonFocusTest;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JSpinnerButtonFocusTest$1::init$() {
	$FocusAdapter::init$();
}

void JSpinnerButtonFocusTest$1::focusGained($FocusEvent* e) {
	$FocusAdapter::focusGained(e);
	$init($JSpinnerButtonFocusTest);
	$nc($JSpinnerButtonFocusTest::robot)->keyPress($KeyEvent::VK_TAB);
	$nc($JSpinnerButtonFocusTest::robot)->keyRelease($KeyEvent::VK_TAB);
	$nc($JSpinnerButtonFocusTest::latch1)->countDown();
}

JSpinnerButtonFocusTest$1::JSpinnerButtonFocusTest$1() {
}

$Class* JSpinnerButtonFocusTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JSpinnerButtonFocusTest$1, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JSpinnerButtonFocusTest$1, focusGained, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JSpinnerButtonFocusTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JSpinnerButtonFocusTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JSpinnerButtonFocusTest$1",
		"java.awt.event.FocusAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JSpinnerButtonFocusTest"
	};
	$loadClass(JSpinnerButtonFocusTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest$1);
	});
	return class$;
}

$Class* JSpinnerButtonFocusTest$1::class$ = nullptr;