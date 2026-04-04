#include <sun/java2d/loops/XorFillRectANY.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

void XorFillRectANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$FillRect::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorFillRectANY::FillRect$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$var($Region, r, $$nc($nc(sg2d)->getCompClip())->getBoundsIntersectionXYWH(x, y, w, h));
	int32_t var$0 = $nc(r)->getLoX();
	int32_t var$1 = r->getLoY();
	int32_t var$2 = r->getHiX();
	$GeneralRenderer::doSetRect(sData, pw, var$0, var$1, var$2, r->getHiY());
}

XorFillRectANY::XorFillRectANY() {
}

$Class* XorFillRectANY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XorFillRectANY, init$, void)},
		{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC, $virtualMethod(XorFillRectANY, FillRect$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.XorFillRectANY",
		"sun.java2d.loops.FillRect",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XorFillRectANY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorFillRectANY);
	});
	return class$;
}

$Class* XorFillRectANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun