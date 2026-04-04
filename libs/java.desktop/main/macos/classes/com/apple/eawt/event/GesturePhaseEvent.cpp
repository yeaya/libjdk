#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void GesturePhaseEvent::init$() {
	$GestureEvent::init$();
}

GesturePhaseEvent::GesturePhaseEvent() {
}

$Class* GesturePhaseEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GesturePhaseEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.event.GesturePhaseEvent",
		"com.apple.eawt.event.GestureEvent",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GesturePhaseEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GesturePhaseEvent);
	});
	return class$;
}

$Class* GesturePhaseEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com