#include <java/awt/Container$MouseEventTargetFilter.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <jcpp.h>

#undef FILTER
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_WHEEL_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container$EventTargetFilter = ::java::awt::Container$EventTargetFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Container$EventTargetFilter* Container$MouseEventTargetFilter::FILTER = nullptr;

void Container$MouseEventTargetFilter::init$() {
}

bool Container$MouseEventTargetFilter::accept($Component* comp) {
	return ($nc(comp)->eventMask & $AWTEvent::MOUSE_MOTION_EVENT_MASK) != 0 || (comp->eventMask & $AWTEvent::MOUSE_EVENT_MASK) != 0 || (comp->eventMask & $AWTEvent::MOUSE_WHEEL_EVENT_MASK) != 0 || comp->mouseListener != nullptr || comp->mouseMotionListener != nullptr || comp->mouseWheelListener != nullptr;
}

void Container$MouseEventTargetFilter::clinit$($Class* clazz) {
	$assignStatic(Container$MouseEventTargetFilter::FILTER, $new(Container$MouseEventTargetFilter));
}

Container$MouseEventTargetFilter::Container$MouseEventTargetFilter() {
}

$Class* Container$MouseEventTargetFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FILTER", "Ljava/awt/Container$EventTargetFilter;", nullptr, $STATIC | $FINAL, $staticField(Container$MouseEventTargetFilter, FILTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Container$MouseEventTargetFilter, init$, void)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(Container$MouseEventTargetFilter, accept, bool, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$MouseEventTargetFilter", "java.awt.Container", "MouseEventTargetFilter", $STATIC},
		{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Container$MouseEventTargetFilter",
		"java.lang.Object",
		"java.awt.Container$EventTargetFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$MouseEventTargetFilter, name, initialize, &classInfo$$, Container$MouseEventTargetFilter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Container$MouseEventTargetFilter);
	});
	return class$;
}

$Class* Container$MouseEventTargetFilter::class$ = nullptr;

	} // awt
} // java