#include <java/awt/event/MouseEvent$1.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void MouseEvent$1::init$() {
}

bool MouseEvent$1::isCausedByTouchEvent($MouseEvent* ev) {
	return $nc(ev)->causedByTouchEvent;
}

void MouseEvent$1::setCausedByTouchEvent($MouseEvent* ev, bool causedByTouchEvent) {
	$nc(ev)->causedByTouchEvent = causedByTouchEvent;
}

MouseEvent$1::MouseEvent$1() {
}

$Class* MouseEvent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MouseEvent$1, init$, void)},
		{"isCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC, $virtualMethod(MouseEvent$1, isCausedByTouchEvent, bool, $MouseEvent*)},
		{"setCausedByTouchEvent", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PUBLIC, $virtualMethod(MouseEvent$1, setCausedByTouchEvent, void, $MouseEvent*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.event.MouseEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.event.MouseEvent$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$MouseEventAccessor", "sun.awt.AWTAccessor", "MouseEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.event.MouseEvent$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$MouseEventAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.event.MouseEvent"
	};
	$loadClass(MouseEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MouseEvent$1);
	});
	return class$;
}

$Class* MouseEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java