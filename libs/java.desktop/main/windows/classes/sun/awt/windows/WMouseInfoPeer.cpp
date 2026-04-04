#include <sun/awt/windows/WMouseInfoPeer.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

void WMouseInfoPeer::init$() {
}

int32_t WMouseInfoPeer::fillPointWithCoords($Point* point) {
	$prepareNative(fillPointWithCoords, int32_t, $Point* point);
	int32_t $ret = $invokeNative(point);
	$finishNative();
	return $ret;
}

bool WMouseInfoPeer::isWindowUnderMouse($Window* w) {
	$prepareNative(isWindowUnderMouse, bool, $Window* w);
	bool $ret = $invokeNative(w);
	$finishNative();
	return $ret;
}

void WMouseInfoPeer::clinit$($Class* clazz) {
	{
		$$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice();
	}
}

WMouseInfoPeer::WMouseInfoPeer() {
}

$Class* WMouseInfoPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WMouseInfoPeer, init$, void)},
		{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WMouseInfoPeer, fillPointWithCoords, int32_t, $Point*)},
		{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WMouseInfoPeer, isWindowUnderMouse, bool, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.WMouseInfoPeer",
		"java.lang.Object",
		"java.awt.peer.MouseInfoPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WMouseInfoPeer, name, initialize, &classInfo$$, WMouseInfoPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WMouseInfoPeer);
	});
	return class$;
}

$Class* WMouseInfoPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun