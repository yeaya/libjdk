#include <com/apple/eawt/event/GesturePhaseListener.h>
#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <jcpp.h>

using $GesturePhaseEvent = ::com::apple::eawt::event::GesturePhaseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$Class* GesturePhaseListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"gestureBegan", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GesturePhaseListener, gestureBegan, void, $GesturePhaseEvent*)},
		{"gestureEnded", "(Lcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GesturePhaseListener, gestureEnded, void, $GesturePhaseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.event.GesturePhaseListener",
		nullptr,
		"com.apple.eawt.event.GestureListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(GesturePhaseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GesturePhaseListener);
	});
	return class$;
}

$Class* GesturePhaseListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com