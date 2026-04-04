#include <com/apple/eawt/event/RotationListener.h>
#include <com/apple/eawt/event/RotationEvent.h>
#include <jcpp.h>

using $RotationEvent = ::com::apple::eawt::event::RotationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$Class* RotationListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"rotate", "(Lcom/apple/eawt/event/RotationEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RotationListener, rotate, void, $RotationEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.event.RotationListener",
		nullptr,
		"com.apple.eawt.event.GestureListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(RotationListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RotationListener);
	});
	return class$;
}

$Class* RotationListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com