#include <sun/java2d/metal/MTLTextRenderer$Tracer.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/metal/MTLTextRenderer.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MTLTextRenderer = ::sun::java2d::metal::MTLTextRenderer;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLTextRenderer$Tracer::init$($MTLTextRenderer* mtltr) {
	$MTLTextRenderer::init$($($MTLTextRenderer::access$000(mtltr)));
}

void MTLTextRenderer$Tracer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawGlyphs"_s);
	$MTLTextRenderer::drawGlyphList(sg2d, gl);
}

MTLTextRenderer$Tracer::MTLTextRenderer$Tracer() {
}

$Class* MTLTextRenderer$Tracer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/metal/MTLTextRenderer;)V", nullptr, 0, $method(MTLTextRenderer$Tracer, init$, void, $MTLTextRenderer*)},
		{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED, $virtualMethod(MTLTextRenderer$Tracer, drawGlyphList, void, $SunGraphics2D*, $GlyphList*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLTextRenderer$Tracer", "sun.java2d.metal.MTLTextRenderer", "Tracer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLTextRenderer$Tracer",
		"sun.java2d.metal.MTLTextRenderer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLTextRenderer"
	};
	$loadClass(MTLTextRenderer$Tracer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLTextRenderer$Tracer);
	});
	return class$;
}

$Class* MTLTextRenderer$Tracer::class$ = nullptr;

		} // metal
	} // java2d
} // sun