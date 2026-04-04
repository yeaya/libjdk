#include <sun/awt/image/BufImgVolatileSurfaceManager.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

void BufImgVolatileSurfaceManager::init$($SunVolatileImage* vImg, Object$* context) {
	$VolatileSurfaceManager::init$(vImg, context);
}

bool BufImgVolatileSurfaceManager::isAccelerationEnabled() {
	return false;
}

$SurfaceData* BufImgVolatileSurfaceManager::initAcceleratedSurface() {
	return nullptr;
}

BufImgVolatileSurfaceManager::BufImgVolatileSurfaceManager() {
}

$Class* BufImgVolatileSurfaceManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(BufImgVolatileSurfaceManager, init$, void, $SunVolatileImage*, Object$*)},
		{"initAcceleratedSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PROTECTED, $virtualMethod(BufImgVolatileSurfaceManager, initAcceleratedSurface, $SurfaceData*)},
		{"isAccelerationEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(BufImgVolatileSurfaceManager, isAccelerationEnabled, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.image.BufImgVolatileSurfaceManager",
		"sun.awt.image.VolatileSurfaceManager",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BufImgVolatileSurfaceManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BufImgVolatileSurfaceManager));
	});
	return class$;
}

$Class* BufImgVolatileSurfaceManager::class$ = nullptr;

		} // image
	} // awt
} // sun