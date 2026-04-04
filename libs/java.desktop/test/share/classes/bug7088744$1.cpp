#include <bug7088744$1.h>
#include <bug7088744.h>
#include <java/awt/Component.h>
#include <java/awt/Event.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_MASK
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef META_DOWN_MASK
#undef META_MASK
#undef NOBUTTON

using $Component = ::java::awt::Component;
using $Event = ::java::awt::Event;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug7088744$1::init$() {
}

void bug7088744$1::run() {
	$useLocalObjectStack();
	$var($Component, source, $new($JLabel));
	$var($MouseEvent, mouseEventNoButtons, $new($MouseEvent, source, 0, $System::currentTimeMillis(), (($Event::ALT_MASK | $Event::META_MASK) | $InputEvent::ALT_DOWN_MASK) | $InputEvent::META_DOWN_MASK, 0, 0, 0, false, $MouseEvent::NOBUTTON));
	if ($SwingUtilities::isLeftMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isLeftMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON1_MASK, 0, 0, 1, false, $MouseEvent::BUTTON1))) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isLeftMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON1_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON1))) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 3"_s);
	}
	if ($SwingUtilities::isMiddleMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isMiddleMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON2_MASK, 0, 0, 1, false, $MouseEvent::BUTTON2))) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isMiddleMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON2_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON2))) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 3"_s);
	}
	if ($SwingUtilities::isRightMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isRightMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON3_MASK, 0, 0, 1, false, $MouseEvent::BUTTON3))) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isRightMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON3_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON3))) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 3"_s);
	}
}

bug7088744$1::bug7088744$1() {
}

$Class* bug7088744$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7088744$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7088744$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7088744",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7088744$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7088744$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7088744"
	};
	$loadClass(bug7088744$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7088744$1);
	});
	return class$;
}

$Class* bug7088744$1::class$ = nullptr;