#include <sun/lwawt/LWMouseInfoPeer.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;

namespace sun {
	namespace lwawt {

void LWMouseInfoPeer::init$() {
}

int32_t LWMouseInfoPeer::fillPointWithCoords($Point* point) {
	$useLocalObjectStack();
	$var($LWCursorManager, cursorManager, $$nc($LWToolkit::getLWToolkit())->getCursorManager());
	$var($Point, cursorPos, $nc(cursorManager)->getCursorPosition());
	$nc(point)->x = $nc(cursorPos)->x;
	point->y = cursorPos->y;
	return 0;
}

bool LWMouseInfoPeer::isWindowUnderMouse($Window* w) {
	$useLocalObjectStack();
	if (w == nullptr) {
		return false;
	}
	$var($LWWindowPeer, windowPeer, $cast($LWWindowPeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(w)));
	if (windowPeer == nullptr) {
		return false;
	}
	return $$nc($LWToolkit::getLWToolkit())->getPlatformWindowUnderMouse() == $nc(windowPeer)->getPlatformWindow();
}

LWMouseInfoPeer::LWMouseInfoPeer() {
}

$Class* LWMouseInfoPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LWMouseInfoPeer, init$, void)},
		{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC, $virtualMethod(LWMouseInfoPeer, fillPointWithCoords, int32_t, $Point*)},
		{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC, $virtualMethod(LWMouseInfoPeer, isWindowUnderMouse, bool, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.LWMouseInfoPeer",
		"java.lang.Object",
		"java.awt.peer.MouseInfoPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(LWMouseInfoPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWMouseInfoPeer);
	});
	return class$;
}

$Class* LWMouseInfoPeer::class$ = nullptr;

	} // lwawt
} // sun