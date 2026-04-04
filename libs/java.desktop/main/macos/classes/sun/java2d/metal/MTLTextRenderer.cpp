#include <sun/java2d/metal/MTLTextRenderer.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/metal/MTLTextRenderer$Tracer.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $MTLTextRenderer$Tracer = ::sun::java2d::metal::MTLTextRenderer$Tracer;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

$RenderQueue* MTLTextRenderer::access$000(MTLTextRenderer* x0) {
	$init(MTLTextRenderer);
	return $nc(x0)->rq;
}

void MTLTextRenderer::init$($RenderQueue* rq) {
	$BufferedTextPipe::init$(rq);
}

void MTLTextRenderer::drawGlyphList(int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions) {
	$prepareNative(drawGlyphList, void, int32_t numGlyphs, bool usePositions, bool subPixPos, bool rgbOrder, int32_t lcdContrast, float glOrigX, float glOrigY, $longs* images, $floats* positions);
	$invokeNative(numGlyphs, usePositions, subPixPos, rgbOrder, lcdContrast, glOrigX, glOrigY, images, positions);
	$finishNative();
}

void MTLTextRenderer::validateContext($SunGraphics2D* sg2d, $Composite* comp) {
	$useLocalObjectStack();
	$var($MTLSurfaceData, mtlDst, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
	$MTLContext::validateContext(mtlDst, mtlDst, $(sg2d->getCompClip()), comp, nullptr, sg2d->paint, sg2d, $MTLContext::NO_CONTEXT_FLAGS);
}

MTLTextRenderer* MTLTextRenderer::traceWrap() {
	return $new($MTLTextRenderer$Tracer, this);
}

MTLTextRenderer::MTLTextRenderer() {
}

$Class* MTLTextRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(MTLTextRenderer, init$, void, $RenderQueue*)},
		{"access$000", "(Lsun/java2d/metal/MTLTextRenderer;)Lsun/java2d/pipe/RenderQueue;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(MTLTextRenderer, access$000, $RenderQueue*, MTLTextRenderer*)},
		{"drawGlyphList", "(IZZZIFF[J[F)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(MTLTextRenderer, drawGlyphList, void, int32_t, bool, bool, bool, int32_t, float, float, $longs*, $floats*)},
		{"traceWrap", "()Lsun/java2d/metal/MTLTextRenderer;", nullptr, 0, $virtualMethod(MTLTextRenderer, traceWrap, MTLTextRenderer*)},
		{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;)V", nullptr, $PROTECTED, $virtualMethod(MTLTextRenderer, validateContext, void, $SunGraphics2D*, $Composite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLTextRenderer$Tracer", "sun.java2d.metal.MTLTextRenderer", "Tracer", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLTextRenderer",
		"sun.java2d.pipe.BufferedTextPipe",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLTextRenderer$Tracer"
	};
	$loadClass(MTLTextRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLTextRenderer);
	});
	return class$;
}

$Class* MTLTextRenderer::class$ = nullptr;

		} // metal
	} // java2d
} // sun