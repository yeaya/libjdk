#include <sun/java2d/metal/MTLMaskBlit.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedMaskBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef NO_CONTEXT_FLAGS

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedMaskBlit = ::sun::java2d::pipe::BufferedMaskBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLMaskBlit::register$() {
	$init(MTLMaskBlit);
	$useLocalObjectStack();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new(MTLMaskBlit, $SurfaceType::IntArgb, $CompositeType::SrcOver),
		$$new(MTLMaskBlit, $SurfaceType::IntArgbPre, $CompositeType::SrcOver),
		$$new(MTLMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcOver),
		$$new(MTLMaskBlit, $SurfaceType::IntRgb, $CompositeType::SrcNoEa),
		$$new(MTLMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcOver),
		$$new(MTLMaskBlit, $SurfaceType::IntBgr, $CompositeType::SrcNoEa)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void MTLMaskBlit::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($MTLSurfaceData);
	$BufferedMaskBlit::init$($($MTLRenderQueue::getInstance()), srcType, compType, $MTLSurfaceData::MTLSurface);
}

void MTLMaskBlit::validateContext($SurfaceData* dstData, $Composite* comp, $Region* clip) {
	$var($MTLSurfaceData, mtlDst, $cast($MTLSurfaceData, dstData));
	$MTLContext::validateContext(mtlDst, mtlDst, clip, comp, nullptr, nullptr, nullptr, $MTLContext::NO_CONTEXT_FLAGS);
}

MTLMaskBlit::MTLMaskBlit() {
}

$Class* MTLMaskBlit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PRIVATE, $method(MTLMaskBlit, init$, void, $SurfaceType*, $CompositeType*)},
		{"register", "()V", nullptr, $STATIC, $staticMethod(MTLMaskBlit, register$, void)},
		{"validateContext", "(Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;)V", nullptr, $PROTECTED, $virtualMethod(MTLMaskBlit, validateContext, void, $SurfaceData*, $Composite*, $Region*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLMaskBlit",
		"sun.java2d.pipe.BufferedMaskBlit",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MTLMaskBlit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLMaskBlit);
	});
	return class$;
}

$Class* MTLMaskBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun