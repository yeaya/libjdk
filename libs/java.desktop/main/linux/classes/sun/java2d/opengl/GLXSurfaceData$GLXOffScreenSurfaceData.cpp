#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXSurfaceData$GLXOffScreenSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$GLXSurfaceData::init$(peer, gc, cm, type);
	this->scale = $$sure($X11GraphicsDevice, $nc(gc)->getDevice())->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* GLXSurfaceData$GLXOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Rectangle* GLXSurfaceData$GLXOffScreenSurfaceData::getBounds() {
	if (this->type == $AccelSurface::FLIP_BACKBUFFER) {
		$var($Rectangle, r, $nc(this->peer)->getBounds());
		$nc(r)->x = ($nc(r)->y = 0);
		r->width = $cast(int32_t, $Math::ceil((double)(r->width * this->scale)));
		r->height = $cast(int32_t, $Math::ceil((double)(r->height * this->scale)));
		return r;
	} else {
		return $new($Rectangle, this->width, this->height);
	}
}

$Object* GLXSurfaceData$GLXOffScreenSurfaceData::getDestination() {
	return this->offscreenImage;
}

double GLXSurfaceData$GLXOffScreenSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double GLXSurfaceData$GLXOffScreenSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

GLXSurfaceData$GLXOffScreenSurfaceData::GLXSurfaceData$GLXOffScreenSurfaceData() {
}

$Class* GLXSurfaceData$GLXOffScreenSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, offscreenImage)},
		{"width", "I", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, width)},
		{"height", "I", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXOffScreenSurfaceData, height)},
		{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(GLXSurfaceData$GLXOffScreenSurfaceData, scale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(GLXSurfaceData$GLXOffScreenSurfaceData, init$, void, $X11ComponentPeer*, $GLXGraphicsConfig*, int32_t, int32_t, $Image*, $ColorModel*, int32_t)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXOffScreenSurfaceData, getBounds, $Rectangle*)},
		{"getDefaultScaleX", "()D", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXOffScreenSurfaceData, getDefaultScaleX, double)},
		{"getDefaultScaleY", "()D", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXOffScreenSurfaceData, getDefaultScaleY, double)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXOffScreenSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXOffScreenSurfaceData, getReplacement, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXOffScreenSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData",
		"sun.java2d.opengl.GLXSurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.GLXSurfaceData"
	};
	$loadClass(GLXSurfaceData$GLXOffScreenSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GLXSurfaceData$GLXOffScreenSurfaceData));
	});
	return class$;
}

$Class* GLXSurfaceData$GLXOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun