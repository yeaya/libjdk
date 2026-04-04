#include <sun/font/ColorGlyphSurfaceData.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/Raster.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef UNTRACKABLE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace font {

void ColorGlyphSurfaceData::init$() {
	$init($StateTrackable$State);
	$SurfaceData::init$($StateTrackable$State::UNTRACKABLE);
	initOps();
}

void ColorGlyphSurfaceData::initOps() {
	$prepareNative(initOps, void);
	$invokeNative();
	$finishNative();
}

void ColorGlyphSurfaceData::setCurrentGlyph(int64_t imgPtr) {
	$prepareNative(setCurrentGlyph, void, int64_t imgPtr);
	$invokeNative(imgPtr);
	$finishNative();
}

$SurfaceData* ColorGlyphSurfaceData::getReplacement() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$GraphicsConfiguration* ColorGlyphSurfaceData::getDeviceConfiguration() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Raster* ColorGlyphSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Rectangle* ColorGlyphSurfaceData::getBounds() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* ColorGlyphSurfaceData::getDestination() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

ColorGlyphSurfaceData::ColorGlyphSurfaceData() {
}

$Class* ColorGlyphSurfaceData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ColorGlyphSurfaceData, init$, void)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(ColorGlyphSurfaceData, getBounds, $Rectangle*)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ColorGlyphSurfaceData, getDestination, $Object*)},
		{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(ColorGlyphSurfaceData, getDeviceConfiguration, $GraphicsConfiguration*)},
		{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(ColorGlyphSurfaceData, getRaster, $Raster*, int32_t, int32_t, int32_t, int32_t)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(ColorGlyphSurfaceData, getReplacement, $SurfaceData*)},
		{"initOps", "()V", nullptr, $PRIVATE | $NATIVE, $method(ColorGlyphSurfaceData, initOps, void)},
		{"setCurrentGlyph", "(J)V", nullptr, $NATIVE, $virtualMethod(ColorGlyphSurfaceData, setCurrentGlyph, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.ColorGlyphSurfaceData",
		"sun.java2d.SurfaceData",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ColorGlyphSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorGlyphSurfaceData));
	});
	return class$;
}

$Class* ColorGlyphSurfaceData::class$ = nullptr;

	} // font
} // sun