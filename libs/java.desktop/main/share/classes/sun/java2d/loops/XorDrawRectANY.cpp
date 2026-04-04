#include <sun/java2d/loops/XorDrawRectANY.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void XorDrawRectANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawRect::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawRectANY::DrawRect$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$GeneralRenderer::doDrawRect(pw, sg2d, sData, x, y, w, h);
}

XorDrawRectANY::XorDrawRectANY() {
}

$Class* XorDrawRectANY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XorDrawRectANY, init$, void)},
		{"DrawRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC, $virtualMethod(XorDrawRectANY, DrawRect$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.XorDrawRectANY",
		"sun.java2d.loops.DrawRect",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XorDrawRectANY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorDrawRectANY);
	});
	return class$;
}

$Class* XorDrawRectANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun