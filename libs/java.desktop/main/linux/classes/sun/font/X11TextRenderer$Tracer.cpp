#include <sun/font/X11TextRenderer$Tracer.h>
#include <sun/font/GlyphList.h>
#include <sun/font/X11TextRenderer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $X11TextRenderer = ::sun::font::X11TextRenderer;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace font {

void X11TextRenderer$Tracer::init$() {
	$X11TextRenderer::init$();
}

void X11TextRenderer$Tracer::doDrawGlyphList(int64_t dstData, int64_t xgc, $Region* clip, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("X11DrawGlyphs"_s);
	$X11TextRenderer::doDrawGlyphList(dstData, xgc, clip, gl);
}

X11TextRenderer$Tracer::X11TextRenderer$Tracer() {
}

$Class* X11TextRenderer$Tracer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11TextRenderer$Tracer, init$, void)},
		{"doDrawGlyphList", "(JJLsun/java2d/pipe/Region;Lsun/font/GlyphList;)V", nullptr, 0, $virtualMethod(X11TextRenderer$Tracer, doDrawGlyphList, void, int64_t, int64_t, $Region*, $GlyphList*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11TextRenderer$Tracer", "sun.font.X11TextRenderer", "Tracer", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.X11TextRenderer$Tracer",
		"sun.font.X11TextRenderer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.X11TextRenderer"
	};
	$loadClass(X11TextRenderer$Tracer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11TextRenderer$Tracer);
	});
	return class$;
}

$Class* X11TextRenderer$Tracer::class$ = nullptr;

	} // font
} // sun