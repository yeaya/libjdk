#include <sun/java2d/loops/XorDrawGlyphListANY.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void XorDrawGlyphListANY::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$DrawGlyphList::init$($SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any);
}

void XorDrawGlyphListANY::DrawGlyphList$($SunGraphics2D* sg2d, $SurfaceData* sData, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph) {
	$useLocalObjectStack();
	$var($PixelWriter, pw, $GeneralRenderer::createXorPixelWriter(sg2d, sData));
	$GeneralRenderer::doDrawGlyphList(sData, pw, gl, fromGlyph, toGlyph, $($nc(sg2d)->getCompClip()));
}

XorDrawGlyphListANY::XorDrawGlyphListANY() {
}

$Class* XorDrawGlyphListANY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XorDrawGlyphListANY, init$, void)},
		{"DrawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC, $virtualMethod(XorDrawGlyphListANY, DrawGlyphList$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.XorDrawGlyphListANY",
		"sun.java2d.loops.DrawGlyphList",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XorDrawGlyphListANY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XorDrawGlyphListANY);
	});
	return class$;
}

$Class* XorDrawGlyphListANY::class$ = nullptr;

		} // loops
	} // java2d
} // sun