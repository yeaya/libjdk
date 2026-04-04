#include <sun/java2d/opengl/CGLSurfaceData$CGLLayerSurfaceData.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

#undef FBOBJECT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

void CGLSurfaceData$CGLLayerSurfaceData::init$($CGLLayer* layer, $CGLGraphicsConfig* gc, int32_t width, int32_t height) {
	$CGLSurfaceData::init$(layer, gc, $($nc(gc)->getColorModel()), $OGLSurfaceData::FBOBJECT, width, height);
	$set(this, layer, layer);
	initSurface(this->width, this->height);
}

$SurfaceData* CGLSurfaceData$CGLLayerSurfaceData::getReplacement() {
	return $nc(this->layer)->getSurfaceData();
}

bool CGLSurfaceData$CGLLayerSurfaceData::isOnScreen() {
	return true;
}

$Object* CGLSurfaceData$CGLLayerSurfaceData::getDestination() {
	return $nc(this->layer)->getDestination();
}

int32_t CGLSurfaceData$CGLLayerSurfaceData::getTransparency() {
	return $nc(this->layer)->getTransparency();
}

void CGLSurfaceData$CGLLayerSurfaceData::invalidate() {
	$CGLSurfaceData::invalidate();
	clearWindow();
}

CGLSurfaceData$CGLLayerSurfaceData::CGLSurfaceData$CGLLayerSurfaceData() {
}

$Class* CGLSurfaceData$CGLLayerSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"layer", "Lsun/java2d/opengl/CGLLayer;", nullptr, $PRIVATE | $FINAL, $field(CGLSurfaceData$CGLLayerSurfaceData, layer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/opengl/CGLLayer;Lsun/java2d/opengl/CGLGraphicsConfig;II)V", nullptr, $PRIVATE, $method(CGLSurfaceData$CGLLayerSurfaceData, init$, void, $CGLLayer*, $CGLGraphicsConfig*, int32_t, int32_t)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLLayerSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLLayerSurfaceData, getReplacement, $SurfaceData*)},
		{"getTransparency", "()I", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLLayerSurfaceData, getTransparency, int32_t)},
		{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(CGLSurfaceData$CGLLayerSurfaceData, invalidate, void)},
		{"isOnScreen", "()Z", nullptr, 0, $virtualMethod(CGLSurfaceData$CGLLayerSurfaceData, isOnScreen, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData", "sun.java2d.opengl.CGLSurfaceData", "CGLLayerSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData",
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
	$loadClass(CGLSurfaceData$CGLLayerSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CGLSurfaceData$CGLLayerSurfaceData));
	});
	return class$;
}

$Class* CGLSurfaceData$CGLLayerSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun