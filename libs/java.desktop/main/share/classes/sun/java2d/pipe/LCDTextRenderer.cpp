#include <sun/java2d/pipe/LCDTextRenderer.h>
#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

void LCDTextRenderer::init$() {
	$GlyphListLoopPipe::init$();
}

void LCDTextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	drawGlyphList(sg2d, gl, $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB);
}

LCDTextRenderer::LCDTextRenderer() {
}

$Class* LCDTextRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LCDTextRenderer, init$, void)},
		{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED, $virtualMethod(LCDTextRenderer, drawGlyphList, void, $SunGraphics2D*, $GlyphList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.pipe.LCDTextRenderer",
		"sun.java2d.pipe.GlyphListLoopPipe",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LCDTextRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LCDTextRenderer));
	});
	return class$;
}

$Class* LCDTextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun