#include <com/apple/eawt/FullScreenAdapter.h>
#include <com/apple/eawt/event/FullScreenEvent.h>
#include <jcpp.h>

using $FullScreenEvent = ::com::apple::eawt::event::FullScreenEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void FullScreenAdapter::init$() {
}

void FullScreenAdapter::windowEnteringFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowEnteredFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowExitingFullScreen($FullScreenEvent* e) {
}

void FullScreenAdapter::windowExitedFullScreen($FullScreenEvent* e) {
}

FullScreenAdapter::FullScreenAdapter() {
}

$Class* FullScreenAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FullScreenAdapter, init$, void)},
		{"windowEnteredFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC, $virtualMethod(FullScreenAdapter, windowEnteredFullScreen, void, $FullScreenEvent*)},
		{"windowEnteringFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC, $virtualMethod(FullScreenAdapter, windowEnteringFullScreen, void, $FullScreenEvent*)},
		{"windowExitedFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC, $virtualMethod(FullScreenAdapter, windowExitedFullScreen, void, $FullScreenEvent*)},
		{"windowExitingFullScreen", "(Lcom/apple/eawt/event/FullScreenEvent;)V", nullptr, $PUBLIC, $virtualMethod(FullScreenAdapter, windowExitingFullScreen, void, $FullScreenEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.apple.eawt.FullScreenAdapter",
		"java.lang.Object",
		"com.apple.eawt.FullScreenListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(FullScreenAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FullScreenAdapter);
	});
	return class$;
}

$Class* FullScreenAdapter::class$ = nullptr;

		} // eawt
	} // apple
} // com