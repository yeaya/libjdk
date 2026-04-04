#include <sun/java2d/metal/MTLSurfaceData$MTLLayerSurfaceData.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef RT_TEXTURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLSurfaceData$MTLLayerSurfaceData::init$($MTLLayer* layer, $MTLGraphicsConfig* gc, int32_t width, int32_t height) {
	$MTLSurfaceData::init$(layer, gc, $($nc(gc)->getColorModel()), $AccelSurface::RT_TEXTURE, width, height);
	$set(this, layer, layer);
	initSurface(this->width, this->height);
}

$SurfaceData* MTLSurfaceData$MTLLayerSurfaceData::getReplacement() {
	return $nc(this->layer)->getSurfaceData();
}

bool MTLSurfaceData$MTLLayerSurfaceData::isOnScreen() {
	return true;
}

$Object* MTLSurfaceData$MTLLayerSurfaceData::getDestination() {
	return $nc(this->layer)->getDestination();
}

int32_t MTLSurfaceData$MTLLayerSurfaceData::getTransparency() {
	return $nc(this->layer)->getTransparency();
}

void MTLSurfaceData$MTLLayerSurfaceData::invalidate() {
	$MTLSurfaceData::invalidate();
	clearWindow();
}

$BufferedContext* MTLSurfaceData$MTLLayerSurfaceData::getContext() {
	return $MTLSurfaceData::getContext();
}

MTLSurfaceData$MTLLayerSurfaceData::MTLSurfaceData$MTLLayerSurfaceData() {
}

$Class* MTLSurfaceData$MTLLayerSurfaceData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"layer", "Lsun/java2d/metal/MTLLayer;", nullptr, $PRIVATE | $FINAL, $field(MTLSurfaceData$MTLLayerSurfaceData, layer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/metal/MTLLayer;Lsun/java2d/metal/MTLGraphicsConfig;II)V", nullptr, $PRIVATE, $method(MTLSurfaceData$MTLLayerSurfaceData, init$, void, $MTLLayer*, $MTLGraphicsConfig*, int32_t, int32_t)},
		{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, getContext, $BufferedContext*)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, getDestination, $Object*)},
		{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, getReplacement, $SurfaceData*)},
		{"getTransparency", "()I", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, getTransparency, int32_t)},
		{"invalidate", "()V", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, invalidate, void)},
		{"isOnScreen", "()Z", nullptr, $PUBLIC, $virtualMethod(MTLSurfaceData$MTLLayerSurfaceData, isOnScreen, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData", "sun.java2d.metal.MTLSurfaceData", "MTLLayerSurfaceData", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData",
		"sun.java2d.metal.MTLSurfaceData",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLSurfaceData"
	};
	$loadClass(MTLSurfaceData$MTLLayerSurfaceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MTLSurfaceData$MTLLayerSurfaceData));
	});
	return class$;
}

$Class* MTLSurfaceData$MTLLayerSurfaceData::class$ = nullptr;

		} // metal
	} // java2d
} // sun