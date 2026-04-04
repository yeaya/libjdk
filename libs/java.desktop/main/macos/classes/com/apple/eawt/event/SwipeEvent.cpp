#include <com/apple/eawt/event/SwipeEvent.h>
#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void SwipeEvent::init$() {
	$GestureEvent::init$();
}

SwipeEvent::SwipeEvent() {
}

$Class* SwipeEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SwipeEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.event.SwipeEvent",
		"com.apple.eawt.event.GestureEvent",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SwipeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwipeEvent);
	});
	return class$;
}

$Class* SwipeEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com