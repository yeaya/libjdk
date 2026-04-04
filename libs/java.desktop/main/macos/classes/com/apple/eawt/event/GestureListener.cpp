#include <com/apple/eawt/event/GestureListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$Class* GestureListener::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.event.GestureListener",
		nullptr,
		"java.util.EventListener"
	};
	$loadClass(GestureListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GestureListener);
	});
	return class$;
}

$Class* GestureListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com