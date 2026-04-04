#include <sun/awt/windows/WRobotPeer.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace sun {
	namespace awt {
		namespace windows {

void WRobotPeer::init$() {
}

void WRobotPeer::mouseMoveImpl(int32_t x, int32_t y) {
	$prepareNative(mouseMoveImpl, void, int32_t x, int32_t y);
	$invokeNative(x, y);
	$finishNative();
}

void WRobotPeer::mouseMove(int32_t x, int32_t y) {
	$var($Point, point, $SunGraphicsEnvironment::toDeviceSpaceAbs(x, y));
	mouseMoveImpl($nc(point)->x, $nc(point)->y);
}

void WRobotPeer::mousePress(int32_t buttons) {
	$prepareNative(mousePress, void, int32_t buttons);
	$invokeNative(buttons);
	$finishNative();
}

void WRobotPeer::mouseRelease(int32_t buttons) {
	$prepareNative(mouseRelease, void, int32_t buttons);
	$invokeNative(buttons);
	$finishNative();
}

void WRobotPeer::mouseWheel(int32_t wheelAmt) {
	$prepareNative(mouseWheel, void, int32_t wheelAmt);
	$invokeNative(wheelAmt);
	$finishNative();
}

void WRobotPeer::keyPress(int32_t keycode) {
	$prepareNative(keyPress, void, int32_t keycode);
	$invokeNative(keycode);
	$finishNative();
}

void WRobotPeer::keyRelease(int32_t keycode) {
	$prepareNative(keyRelease, void, int32_t keycode);
	$invokeNative(keycode);
	$finishNative();
}

int32_t WRobotPeer::getRGBPixel(int32_t x, int32_t y) {
	$useLocalObjectStack();
	return $nc($(getRGBPixels($$new($Rectangle, x, y, 1, 1))))->get(0);
}

$ints* WRobotPeer::getRGBPixels($Rectangle* bounds) {
	$var($ints, pixelArray, $new($ints, $nc(bounds)->width * $nc(bounds)->height));
	getRGBPixels(bounds->x, bounds->y, bounds->width, bounds->height, pixelArray);
	return pixelArray;
}

bool WRobotPeer::useAbsoluteCoordinates() {
	return true;
}

void WRobotPeer::getRGBPixels(int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray) {
	$prepareNative(getRGBPixels, void, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray);
	$invokeNative(x, y, width, height, pixelArray);
	$finishNative();
}

WRobotPeer::WRobotPeer() {
}

$Class* WRobotPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WRobotPeer, init$, void)},
		{"getRGBPixel", "(II)I", nullptr, $PUBLIC, $virtualMethod(WRobotPeer, getRGBPixel, int32_t, int32_t, int32_t)},
		{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC, $virtualMethod(WRobotPeer, getRGBPixels, $ints*, $Rectangle*)},
		{"getRGBPixels", "(IIII[I)V", nullptr, $PRIVATE | $NATIVE, $method(WRobotPeer, getRGBPixels, void, int32_t, int32_t, int32_t, int32_t, $ints*)},
		{"keyPress", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WRobotPeer, keyPress, void, int32_t)},
		{"keyRelease", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WRobotPeer, keyRelease, void, int32_t)},
		{"mouseMove", "(II)V", nullptr, $PUBLIC, $virtualMethod(WRobotPeer, mouseMove, void, int32_t, int32_t)},
		{"mouseMoveImpl", "(II)V", nullptr, $PUBLIC | $NATIVE, $method(WRobotPeer, mouseMoveImpl, void, int32_t, int32_t)},
		{"mousePress", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WRobotPeer, mousePress, void, int32_t)},
		{"mouseRelease", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WRobotPeer, mouseRelease, void, int32_t)},
		{"mouseWheel", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WRobotPeer, mouseWheel, void, int32_t)},
		{"useAbsoluteCoordinates", "()Z", nullptr, $PUBLIC, $virtualMethod(WRobotPeer, useAbsoluteCoordinates, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WRobotPeer",
		"java.lang.Object",
		"java.awt.peer.RobotPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WRobotPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WRobotPeer);
	});
	return class$;
}

$Class* WRobotPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun