#include <com/apple/eawt/event/SwipeListener.h>
#include <com/apple/eawt/event/SwipeEvent.h>
#include <jcpp.h>

using $SwipeEvent = ::com::apple::eawt::event::SwipeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$Class* SwipeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"swipedDown", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwipeListener, swipedDown, void, $SwipeEvent*)},
		{"swipedLeft", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwipeListener, swipedLeft, void, $SwipeEvent*)},
		{"swipedRight", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwipeListener, swipedRight, void, $SwipeEvent*)},
		{"swipedUp", "(Lcom/apple/eawt/event/SwipeEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwipeListener, swipedUp, void, $SwipeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.event.SwipeListener",
		nullptr,
		"com.apple.eawt.event.GestureListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(SwipeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwipeListener);
	});
	return class$;
}

$Class* SwipeListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com