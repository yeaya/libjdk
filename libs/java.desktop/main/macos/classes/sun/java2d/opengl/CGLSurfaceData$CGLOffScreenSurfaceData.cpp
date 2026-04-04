#include <sun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData.h>
#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

void CGLSurfaceData$CGLOffScreenSurfaceData::init$($CGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$CGLSurfaceData::init$(nullptr, gc, cm, type, width, height);
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* CGLSurfaceData$CGLOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Object* CGLSurfaceData$CGLOffScreenSurfaceData::getDestination() {
	return this->offscreenImage;
}

CGLSurfaceData$CGLOffScreenSurfaceData::CGLSurfaceData$CGLOffScreenSurfaceData() {
}

$Class* CGLSurfaceData$CGLOffScreenSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData$CGLOffScreenSurfaceData, offscreenImage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/opengl/CGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PRIVATE, $method(CGLSurfaceData$CGLOffScreenSurfaceData, init$, void, $CGLGraphicsConfig*, int32_t, int32_t, $Image*, $ColorModel*, int32_t)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLOffScreenSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLOffScreenSurfaceData, getReplacement, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLOffScreenSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.CGLSurfaceData$CGLOffScreenSurfaceData",
		"sun.java2d.opengl.CGLSurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.CGLSurfaceData"
	};
	$loadClass(CGLSurfaceData$CGLOffScreenSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CGLSurfaceData$CGLOffScreenSurfaceData));
	});
	return class$;
}

$Class* CGLSurfaceData$CGLOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun