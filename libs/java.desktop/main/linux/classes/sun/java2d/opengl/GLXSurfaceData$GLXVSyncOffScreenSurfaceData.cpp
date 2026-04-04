#include <sun/java2d/opengl/GLXSurfaceData$GLXVSyncOffScreenSurfaceData.h>
#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $GLXSurfaceData$GLXOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXOffScreenSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXSurfaceData$GLXVSyncOffScreenSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$GLXSurfaceData$GLXOffScreenSurfaceData::init$(peer, gc, width, height, image, cm, type);
	$set(this, flipSurface, $GLXSurfaceData::createData(peer, image, $AccelSurface::FLIP_BACKBUFFER));
}

$SurfaceData* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::getFlipSurface() {
	return this->flipSurface;
}

void GLXSurfaceData$GLXVSyncOffScreenSurfaceData::flush() {
	$nc(this->flipSurface)->flush();
	$GLXSurfaceData$GLXOffScreenSurfaceData::flush();
}

GLXSurfaceData$GLXVSyncOffScreenSurfaceData::GLXSurfaceData$GLXVSyncOffScreenSurfaceData() {
}

$Class* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"flipSurface", "Lsun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData;", nullptr, $PRIVATE, $field(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, flipSurface)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, init$, void, $X11ComponentPeer*, $GLXGraphicsConfig*, int32_t, int32_t, $Image*, $ColorModel*, int32_t)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, flush, void)},
		{"getFlipSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, getFlipSurface, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXVSyncOffScreenSurfaceData", $PUBLIC | $STATIC},
		{"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXOffScreenSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.GLXSurfaceData$GLXVSyncOffScreenSurfaceData",
		"sun.java2d.opengl.GLXSurfaceData$GLXOffScreenSurfaceData",
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
	$loadClass(GLXSurfaceData$GLXVSyncOffScreenSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GLXSurfaceData$GLXVSyncOffScreenSurfaceData));
	});
	return class$;
}

$Class* GLXSurfaceData$GLXVSyncOffScreenSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun