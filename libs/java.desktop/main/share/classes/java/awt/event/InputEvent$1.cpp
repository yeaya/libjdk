#include <java/awt/event/InputEvent$1.h>
#include <java/awt/event/InputEvent.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void InputEvent$1::init$() {
}

$ints* InputEvent$1::getButtonDownMasks() {
	return $InputEvent::getButtonDownMasks();
}

bool InputEvent$1::canAccessSystemClipboard($InputEvent* event) {
	return $nc(event)->canAccessSystemClipboard$;
}

void InputEvent$1::setCanAccessSystemClipboard($InputEvent* event, bool canAccessSystemClipboard) {
	$nc(event)->canAccessSystemClipboard$ = canAccessSystemClipboard;
}

InputEvent$1::InputEvent$1() {
}

$Class* InputEvent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InputEvent$1, init$, void)},
		{"canAccessSystemClipboard", "(Ljava/awt/event/InputEvent;)Z", nullptr, $PUBLIC, $virtualMethod(InputEvent$1, canAccessSystemClipboard, bool, $InputEvent*)},
		{"getButtonDownMasks", "()[I", nullptr, $PUBLIC, $virtualMethod(InputEvent$1, getButtonDownMasks, $ints*)},
		{"setCanAccessSystemClipboard", "(Ljava/awt/event/InputEvent;Z)V", nullptr, $PUBLIC, $virtualMethod(InputEvent$1, setCanAccessSystemClipboard, void, $InputEvent*, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.event.InputEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.event.InputEvent$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$InputEventAccessor", "sun.awt.AWTAccessor", "InputEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.event.InputEvent$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$InputEventAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.event.InputEvent"
	};
	$loadClass(InputEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputEvent$1);
	});
	return class$;
}

$Class* InputEvent$1::class$ = nullptr;

		} // event
	} // awt
} // java