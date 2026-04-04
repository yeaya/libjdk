#include <sun/java2d/opengl/GLXSurfaceData$GLXWindowSurfaceData.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXSurfaceData$GLXWindowSurfaceData::init$($X11ComponentPeer* peer, $GLXGraphicsConfig* gc) {
	$GLXSurfaceData::init$(peer, gc, $($nc(peer)->getColorModel()), $AccelSurface::WINDOW);
	this->scale = $nc(gc)->getScale();
}

$SurfaceData* GLXSurfaceData$GLXWindowSurfaceData::getReplacement() {
	return $nc(this->peer)->getSurfaceData();
}

$Rectangle* GLXSurfaceData$GLXWindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = ($nc(r)->y = 0);
	r->width = $cast(int32_t, $Math::ceil((double)(r->width * this->scale)));
	r->height = $cast(int32_t, $Math::ceil((double)(r->height * this->scale)));
	return r;
}

$Object* GLXSurfaceData$GLXWindowSurfaceData::getDestination() {
	return $nc(this->peer)->getTarget();
}

double GLXSurfaceData$GLXWindowSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double GLXSurfaceData$GLXWindowSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

GLXSurfaceData$GLXWindowSurfaceData::GLXSurfaceData$GLXWindowSurfaceData() {
}

$Class* GLXSurfaceData$GLXWindowSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"scale", "I", nullptr, $PROTECTED | $FINAL, $field(GLXSurfaceData$GLXWindowSurfaceData, scale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/opengl/GLXGraphicsConfig;)V", nullptr, $PUBLIC, $method(GLXSurfaceData$GLXWindowSurfaceData, init$, void, $X11ComponentPeer*, $GLXGraphicsConfig*)},
		{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXWindowSurfaceData, getBounds, $Rectangle*)},
		{"getDefaultScaleX", "()D", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXWindowSurfaceData, getDefaultScaleX, double)},
		{"getDefaultScaleY", "()D", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXWindowSurfaceData, getDefaultScaleY, double)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXWindowSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(GLXSurfaceData$GLXWindowSurfaceData, getReplacement, $SurfaceData*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData", "sun.java2d.opengl.GLXSurfaceData", "GLXWindowSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.GLXSurfaceData$GLXWindowSurfaceData",
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
	$loadClass(GLXSurfaceData$GLXWindowSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GLXSurfaceData$GLXWindowSurfaceData));
	});
	return class$;
}

$Class* GLXSurfaceData$GLXWindowSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun