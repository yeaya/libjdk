#include <sun/awt/X11/XRobotPeer.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/security/AccessController.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace X11 {

bool XRobotPeer::tryGtk = false;
$volatile(bool) XRobotPeer::useGtk = false;

void XRobotPeer::init$($X11GraphicsDevice* gd) {
	$useLocalObjectStack();
	$set(this, xgc, $cast($X11GraphicsConfig, $nc(gd)->getDefaultConfiguration()));
	$var($SunToolkit, tk, $cast($SunToolkit, $Toolkit::getDefaultToolkit()));
	int32_t var$0 = $nc(tk)->getNumberOfButtons();
	setup(var$0, $($$nc($AWTAccessor::getInputEventAccessor())->getButtonDownMasks()));
	bool isGtkSupported = false;
	if (XRobotPeer::tryGtk) {
		if ($instanceOf($UNIXToolkit, tk) && $cast($UNIXToolkit, tk)->loadGTK()) {
			isGtkSupported = true;
		}
	}
	XRobotPeer::useGtk = (XRobotPeer::tryGtk && isGtkSupported);
}

void XRobotPeer::mouseMove(int32_t x, int32_t y) {
	$var($X11GraphicsConfig, var$0, this->xgc);
	int32_t var$1 = $nc(this->xgc)->scaleUp(x);
	mouseMoveImpl(var$0, var$1, this->xgc->scaleUp(y));
}

void XRobotPeer::mousePress(int32_t buttons) {
	mousePressImpl(buttons);
}

void XRobotPeer::mouseRelease(int32_t buttons) {
	mouseReleaseImpl(buttons);
}

void XRobotPeer::mouseWheel(int32_t wheelAmt) {
	mouseWheelImpl(wheelAmt);
}

void XRobotPeer::keyPress(int32_t keycode) {
	keyPressImpl(keycode);
}

void XRobotPeer::keyRelease(int32_t keycode) {
	keyReleaseImpl(keycode);
}

int32_t XRobotPeer::getRGBPixel(int32_t x, int32_t y) {
	$var($ints, pixelArray, $new($ints, 1));
	getRGBPixelsImpl(this->xgc, x, y, 1, 1, pixelArray, XRobotPeer::useGtk);
	return pixelArray->get(0);
}

$ints* XRobotPeer::getRGBPixels($Rectangle* bounds) {
	$var($ints, pixelArray, $new($ints, $nc(bounds)->width * $nc(bounds)->height));
	getRGBPixelsImpl(this->xgc, bounds->x, bounds->y, bounds->width, bounds->height, pixelArray, XRobotPeer::useGtk);
	return pixelArray;
}

void XRobotPeer::setup(int32_t numberOfButtons, $ints* buttonDownMasks) {
	$init(XRobotPeer);
	$prepareNativeStatic(setup, void, int32_t numberOfButtons, $ints* buttonDownMasks);
	$invokeNativeStatic(numberOfButtons, buttonDownMasks);
	$finishNativeStatic();
}

void XRobotPeer::loadNativeLibraries() {
	$init(XRobotPeer);
	$prepareNativeStatic(loadNativeLibraries, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void XRobotPeer::mouseMoveImpl($X11GraphicsConfig* xgc, int32_t x, int32_t y) {
	$init(XRobotPeer);
	$prepareNativeStatic(mouseMoveImpl, void, $X11GraphicsConfig* xgc, int32_t x, int32_t y);
	$invokeNativeStatic(xgc, x, y);
	$finishNativeStatic();
}

void XRobotPeer::mousePressImpl(int32_t buttons) {
	$init(XRobotPeer);
	$prepareNativeStatic(mousePressImpl, void, int32_t buttons);
	$invokeNativeStatic(buttons);
	$finishNativeStatic();
}

void XRobotPeer::mouseReleaseImpl(int32_t buttons) {
	$init(XRobotPeer);
	$prepareNativeStatic(mouseReleaseImpl, void, int32_t buttons);
	$invokeNativeStatic(buttons);
	$finishNativeStatic();
}

void XRobotPeer::mouseWheelImpl(int32_t wheelAmt) {
	$init(XRobotPeer);
	$prepareNativeStatic(mouseWheelImpl, void, int32_t wheelAmt);
	$invokeNativeStatic(wheelAmt);
	$finishNativeStatic();
}

void XRobotPeer::keyPressImpl(int32_t keycode) {
	$init(XRobotPeer);
	$prepareNativeStatic(keyPressImpl, void, int32_t keycode);
	$invokeNativeStatic(keycode);
	$finishNativeStatic();
}

void XRobotPeer::keyReleaseImpl(int32_t keycode) {
	$init(XRobotPeer);
	$prepareNativeStatic(keyReleaseImpl, void, int32_t keycode);
	$invokeNativeStatic(keycode);
	$finishNativeStatic();
}

void XRobotPeer::getRGBPixelsImpl($X11GraphicsConfig* xgc, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray, bool isGtkSupported) {
	$init(XRobotPeer);
	$prepareNativeStatic(getRGBPixelsImpl, void, $X11GraphicsConfig* xgc, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray, bool isGtkSupported);
	$invokeNativeStatic(xgc, x, y, width, height, pixelArray, isGtkSupported);
	$finishNativeStatic();
}

void XRobotPeer::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		XRobotPeer::loadNativeLibraries();
		XRobotPeer::tryGtk = $Boolean::parseBoolean($$cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "awt.robot.gtk"_s, "true"_s))));
	}
}

XRobotPeer::XRobotPeer() {
}

$Class* XRobotPeer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tryGtk", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XRobotPeer, tryGtk)},
		{"useGtk", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XRobotPeer, useGtk)},
		{"xgc", "Lsun/awt/X11GraphicsConfig;", nullptr, $PRIVATE | $FINAL, $field(XRobotPeer, xgc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11GraphicsDevice;)V", nullptr, 0, $method(XRobotPeer, init$, void, $X11GraphicsDevice*)},
		{"getRGBPixel", "(II)I", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, getRGBPixel, int32_t, int32_t, int32_t)},
		{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, getRGBPixels, $ints*, $Rectangle*)},
		{"getRGBPixelsImpl", "(Lsun/awt/X11GraphicsConfig;IIII[IZ)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, getRGBPixelsImpl, void, $X11GraphicsConfig*, int32_t, int32_t, int32_t, int32_t, $ints*, bool)},
		{"keyPress", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, keyPress, void, int32_t)},
		{"keyPressImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, keyPressImpl, void, int32_t)},
		{"keyRelease", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, keyRelease, void, int32_t)},
		{"keyReleaseImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, keyReleaseImpl, void, int32_t)},
		{"loadNativeLibraries", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XRobotPeer, loadNativeLibraries, void)},
		{"mouseMove", "(II)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, mouseMove, void, int32_t, int32_t)},
		{"mouseMoveImpl", "(Lsun/awt/X11GraphicsConfig;II)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, mouseMoveImpl, void, $X11GraphicsConfig*, int32_t, int32_t)},
		{"mousePress", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, mousePress, void, int32_t)},
		{"mousePressImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, mousePressImpl, void, int32_t)},
		{"mouseRelease", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, mouseRelease, void, int32_t)},
		{"mouseReleaseImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, mouseReleaseImpl, void, int32_t)},
		{"mouseWheel", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRobotPeer, mouseWheel, void, int32_t)},
		{"mouseWheelImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, mouseWheelImpl, void, int32_t)},
		{"setup", "(I[I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $staticMethod(XRobotPeer, setup, void, int32_t, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XRobotPeer",
		"java.lang.Object",
		"java.awt.peer.RobotPeer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XRobotPeer, name, initialize, &classInfo$$, XRobotPeer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XRobotPeer);
	});
	return class$;
}

$Class* XRobotPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun