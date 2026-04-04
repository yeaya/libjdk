#include <sun/awt/event/IgnorePaintEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/PaintEvent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace event {

void IgnorePaintEvent::init$($Component* source, int32_t id, $Rectangle* updateRect) {
	$PaintEvent::init$(source, id, updateRect);
}

IgnorePaintEvent::IgnorePaintEvent() {
}

$Class* IgnorePaintEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(IgnorePaintEvent, init$, void, $Component*, int32_t, $Rectangle*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.event.IgnorePaintEvent",
		"java.awt.event.PaintEvent",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IgnorePaintEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IgnorePaintEvent);
	});
	return class$;
}

$Class* IgnorePaintEvent::class$ = nullptr;

		} // event
	} // awt
} // sun