#include <sun/java2d/opengl/WGLSurfaceData$WGLVSyncOffScreenSurfaceData.h>
#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $WGLSurfaceData$WGLOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

void WGLSurfaceData$WGLVSyncOffScreenSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$WGLSurfaceData$WGLOffScreenSurfaceData::init$(peer, gc, width, height, image, cm, type);
	$set(this, flipSurface, $WGLSurfaceData::createData(peer, image, $AccelSurface::FLIP_BACKBUFFER));
}

$SurfaceData* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::getFlipSurface() {
	return this->flipSurface;
}

void WGLSurfaceData$WGLVSyncOffScreenSurfaceData::flush() {
	$nc(this->flipSurface)->flush();
	$WGLSurfaceData$WGLOffScreenSurfaceData::flush();
}

WGLSurfaceData$WGLVSyncOffScreenSurfaceData::WGLSurfaceData$WGLVSyncOffScreenSurfaceData() {
}

$Class* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"flipSurface", "Lsun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData;", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, flipSurface)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, init$, void, $WComponentPeer*, $WGLGraphicsConfig*, int32_t, int32_t, $Image*, $ColorModel*, int32_t)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, flush, void)},
		{"getFlipSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, getFlipSurface, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
		{"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLOffScreenSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.WGLSurfaceData$WGLVSyncOffScreenSurfaceData",
		"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.WGLSurfaceData"
	};
	$loadClass(WGLSurfaceData$WGLVSyncOffScreenSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WGLSurfaceData$WGLVSyncOffScreenSurfaceData));
	});
	return class$;
}

$Class* WGLSurfaceData$WGLVSyncOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun