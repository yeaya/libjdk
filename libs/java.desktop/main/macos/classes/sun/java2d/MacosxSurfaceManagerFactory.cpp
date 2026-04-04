#include <sun/java2d/MacosxSurfaceManagerFactory.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/metal/MTLVolatileSurfaceManager.h>
#include <sun/java2d/opengl/CGLVolatileSurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $MTLVolatileSurfaceManager = ::sun::java2d::metal::MTLVolatileSurfaceManager;
using $CGLVolatileSurfaceManager = ::sun::java2d::opengl::CGLVolatileSurfaceManager;

namespace sun {
	namespace java2d {

void MacosxSurfaceManagerFactory::init$() {
	$SurfaceManagerFactory::init$();
}

$VolatileSurfaceManager* MacosxSurfaceManagerFactory::createVolatileManager($SunVolatileImage* vImg, Object$* context) {
	return $CGraphicsDevice::usingMetalPipeline() ? $cast($VolatileSurfaceManager, $new($MTLVolatileSurfaceManager, vImg, context)) : $cast($VolatileSurfaceManager, $new($CGLVolatileSurfaceManager, vImg, context));
}

MacosxSurfaceManagerFactory::MacosxSurfaceManagerFactory() {
}

$Class* MacosxSurfaceManagerFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacosxSurfaceManagerFactory, init$, void)},
		{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC, $virtualMethod(MacosxSurfaceManagerFactory, createVolatileManager, $VolatileSurfaceManager*, $SunVolatileImage*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.MacosxSurfaceManagerFactory",
		"sun.java2d.SurfaceManagerFactory",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MacosxSurfaceManagerFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacosxSurfaceManagerFactory);
	});
	return class$;
}

$Class* MacosxSurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun