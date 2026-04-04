#include <sun/java2d/xr/XRVolatileSurfaceManager.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

void XRVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
}

bool XRVolatileSurfaceManager::isAccelerationEnabled() {
	return true;
}

$SurfaceData* XRVolatileSurfaceManager::initAcceleratedSurface() {
	$useLocalObjectStack();
	$var($SurfaceData, sData, nullptr);
	try {
		$var($XRGraphicsConfig, gc, $cast($XRGraphicsConfig, $nc(this->vImg)->getGraphicsConfig()));
		$var($ColorModel, cm, $nc(gc)->getColorModel());
		int64_t drawable = 0;
		if ($instanceOf($Long, this->context)) {
			drawable = $cast($Long, this->context)->longValue();
		}
		int32_t var$0 = $nc(this->vImg)->getWidth();
		int32_t var$1 = this->vImg->getHeight();
		$var($Image, var$2, this->vImg);
		$assign(sData, $XRSurfaceData::createData(gc, var$0, var$1, cm, var$2, drawable, this->vImg->getTransparency(), false));
	} catch ($NullPointerException& ex) {
		$assign(sData, nullptr);
	} catch ($OutOfMemoryError& er) {
		$assign(sData, nullptr);
	}
	return sData;
}

bool XRVolatileSurfaceManager::isConfigValid($GraphicsConfiguration* gc) {
	return true;
}

$ImageCapabilities* XRVolatileSurfaceManager::getCapabilities($GraphicsConfiguration* gc) {
	bool var$0 = isConfigValid(gc);
	if (var$0 && isAccelerationEnabled()) {
		return $new($ImageCapabilities, true);
	}
	return $new($ImageCapabilities, false);
}

XRVolatileSurfaceManager::XRVolatileSurfaceManager() {
}

$Class* XRVolatileSurfaceManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XRVolatileSurfaceManager, init$, void, $SunVolatileImage*, Object$*)},
		{"getCapabilities", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC, $virtualMethod(XRVolatileSurfaceManager, getCapabilities, $ImageCapabilities*, $GraphicsConfiguration*)},
		{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $virtualMethod(XRVolatileSurfaceManager, initAcceleratedSurface, $SurfaceData*)},
		{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(XRVolatileSurfaceManager, isAccelerationEnabled, bool)},
		{"isConfigValid", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PROTECTED, $virtualMethod(XRVolatileSurfaceManager, isConfigValid, bool, $GraphicsConfiguration*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.XRVolatileSurfaceManager",
		"sun.awt.image.VolatileSurfaceManager",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XRVolatileSurfaceManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XRVolatileSurfaceManager));
	});
	return class$;
}

$Class* XRVolatileSurfaceManager::class$ = nullptr;

		} // xr
	} // java2d
} // sun