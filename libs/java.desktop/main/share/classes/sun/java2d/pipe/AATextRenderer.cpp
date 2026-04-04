#include <sun/java2d/pipe/AATextRenderer.h>
#include <sun/awt/SunHints.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <jcpp.h>

#undef INTVAL_TEXT_ANTIALIAS_ON

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

void AATextRenderer::init$() {
	$GlyphListLoopPipe::init$();
}

void AATextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	drawGlyphList(sg2d, gl, $SunHints::INTVAL_TEXT_ANTIALIAS_ON);
}

AATextRenderer::AATextRenderer() {
}

$Class* AATextRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AATextRenderer, init$, void)},
		{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED, $virtualMethod(AATextRenderer, drawGlyphList, void, $SunGraphics2D*, $GlyphList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.pipe.AATextRenderer",
		"sun.java2d.pipe.GlyphListLoopPipe",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AATextRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AATextRenderer));
	});
	return class$;
}

$Class* AATextRenderer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun