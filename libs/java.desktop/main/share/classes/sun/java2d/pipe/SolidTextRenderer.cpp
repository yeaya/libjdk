#include <sun/java2d/pipe/SolidTextRenderer.h>
#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_OFF

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

void SolidTextRenderer::init$() {
	$GlyphListLoopPipe::init$();
}

void SolidTextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	drawGlyphList(sg2d, gl, $SunHints::INTVAL_TEXT_ANTIALIAS_OFF);
}

SolidTextRenderer::SolidTextRenderer() {
}

$Class* SolidTextRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SolidTextRenderer, init$, void)},
		{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED, $virtualMethod(SolidTextRenderer, drawGlyphList, void, $SunGraphics2D*, $GlyphList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.pipe.SolidTextRenderer",
		"sun.java2d.pipe.GlyphListLoopPipe",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SolidTextRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SolidTextRenderer));
	});
	return class$;
}

$Class* SolidTextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun