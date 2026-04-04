#include <com/apple/eawt/event/MagnificationListener.h>
#include <com/apple/eawt/event/MagnificationEvent.h>
#include <jcpp.h>

using $MagnificationEvent = ::com::apple::eawt::event::MagnificationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$Class* MagnificationListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"magnify", "(Lcom/apple/eawt/event/MagnificationEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MagnificationListener, magnify, void, $MagnificationEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.event.MagnificationListener",
		nullptr,
		"com.apple.eawt.event.GestureListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MagnificationListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MagnificationListener);
	});
	return class$;
}

$Class* MagnificationListener::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com