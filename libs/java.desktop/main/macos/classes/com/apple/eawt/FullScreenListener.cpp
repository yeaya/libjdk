#include <com/apple/eawt/FullScreenListener.h>
#include <com/apple/eawt/event/FullScreenEvent.h>
#include <jcpp.h>

using $FullScreenEvent = ::com::apple::eawt::event::FullScreenEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$Class* FullScreenListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"windowEnteredFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenListener, windowEnteredFullScreen, void, $FullScreenEvent*)},
		{"windowEnteringFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenListener, windowEnteringFullScreen, void, $FullScreenEvent*)},
		{"windowExitedFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenListener, windowExitedFullScreen, void, $FullScreenEvent*)},
		{"windowExitingFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FullScreenListener, windowExitingFullScreen, void, $FullScreenEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.apple.eawt.FullScreenListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(FullScreenListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FullScreenListener);
	});
	return class$;
}

$Class* FullScreenListener::class$ = nullptr;

		} // eawt
	} // apple
} // com