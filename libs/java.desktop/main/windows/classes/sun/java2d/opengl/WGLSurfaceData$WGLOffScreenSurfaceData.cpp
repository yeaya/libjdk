#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

void WGLSurfaceData$WGLOffScreenSurfaceData::init$($WComponentPeer* peer, $WGLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$WGLSurfaceData::init$(peer, gc, cm, type);
	this->width = $Region::clipRound(width * this->scaleX);
	this->height = $Region::clipRound(height * this->scaleY);
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* WGLSurfaceData$WGLOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Rectangle* WGLSurfaceData$WGLOffScreenSurfaceData::getBounds() {
	if (this->type == $AccelSurface::FLIP_BACKBUFFER) {
		$var($Rectangle, r, $nc(this->peer)->getBounds());
		$nc(r)->width = $Region::clipRound($nc(r)->width * this->scaleX);
		r->height = $Region::clipRound(r->height * this->scaleY);
		r->x = (r->y = 0);
		return r;
	} else {
		return $new($Rectangle, this->width, this->height);
	}
}

$Object* WGLSurfaceData$WGLOffScreenSurfaceData::getDestination() {
	return this->offscreenImage;
}

WGLSurfaceData$WGLOffScreenSurfaceData::WGLSurfaceData$WGLOffScreenSurfaceData() {
}

$Class* WGLSurfaceData$WGLOffScreenSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, offscreenImage)},
		{"width", "I", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, width)},
		{"height", "I", nullptr, $PRIVATE, $field(WGLSurfaceData$WGLOffScreenSurfaceData, height)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/opengl/WGLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(WGLSurfaceData$WGLOffScreenSurfaceData, init$, void, $WComponentPeer*, $WGLGraphicsConfig*, int32_t, int32_t, $Image*, $ColorModel*, int32_t)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(WGLSurfaceData$WGLOffScreenSurfaceData, getBounds, $Rectangle*)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WGLSurfaceData$WGLOffScreenSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(WGLSurfaceData$WGLOffScreenSurfaceData, getReplacement, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData", "sun.java2d.opengl.WGLSurfaceData", "WGLOffScreenSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.WGLSurfaceData$WGLOffScreenSurfaceData",
		"sun.java2d.opengl.WGLSurfaceData",
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
	$loadClass(WGLSurfaceData$WGLOffScreenSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WGLSurfaceData$WGLOffScreenSurfaceData));
	});
	return class$;
}

$Class* WGLSurfaceData$WGLOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun