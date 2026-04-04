#include <bug4865918$TestScrollBar.h>
#include <bug4865918.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/Date.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef MOUSE_PRESSED

using $bug4865918 = ::bug4865918;
using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $JScrollBar = ::javax::swing::JScrollBar;

void bug4865918$TestScrollBar::init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max) {
	$JScrollBar::init$(orientation, value, extent, min, max);
}

void bug4865918$TestScrollBar::pressMouse() {
	$useLocalObjectStack();
	$init($bug4865918);
	$var($Component, var$0, $bug4865918::sbar);
	int64_t var$1 = ($$new($Date))->getTime();
	int32_t var$2 = 3 * getWidth() / 4;
	$var($MouseEvent, me, $new($MouseEvent, var$0, $MouseEvent::MOUSE_PRESSED, var$1, $MouseEvent::BUTTON1_MASK, var$2, getHeight() / 2, 1, true));
	processMouseEvent(me);
}

bug4865918$TestScrollBar::bug4865918$TestScrollBar() {
}

$Class* bug4865918$TestScrollBar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(bug4865918$TestScrollBar, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"pressMouse", "()V", nullptr, $PUBLIC, $virtualMethod(bug4865918$TestScrollBar, pressMouse, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4865918$TestScrollBar", "bug4865918", "TestScrollBar", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4865918$TestScrollBar",
		"javax.swing.JScrollBar",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4865918"
	};
	$loadClass(bug4865918$TestScrollBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4865918$TestScrollBar));
	});
	return class$;
}

$Class* bug4865918$TestScrollBar::class$ = nullptr;