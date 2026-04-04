#include <sun/java2d/metal/MTLMaskFill.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/ClassCastException.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedMaskFill.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLMaskFill::register$() {
	$init(MTLMaskFill);
	$useLocalObjectStack();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new(MTLMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver),
		$$new(MTLMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa),
		$$new(MTLMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver),
		$$new(MTLMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa),
		$$new(MTLMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver),
		$$new(MTLMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa),
		$$new(MTLMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver),
		$$new(MTLMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa),
		$$new(MTLMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver),
		$$new(MTLMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void MTLMaskFill::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($MTLSurfaceData);
	$BufferedMaskFill::init$($($MTLRenderQueue::getInstance()), srcType, compType, $MTLSurfaceData::MTLSurface);
}

void MTLMaskFill::maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(maskFill, void, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void MTLMaskFill::validateContext($SunGraphics2D* sg2d, $Composite* comp, int32_t ctxflags) {
	$useLocalObjectStack();
	$var($MTLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($MTLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$MTLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), comp, nullptr, $nc(sg2d)->paint, sg2d, ctxflags);
}

MTLMaskFill::MTLMaskFill() {
}

$Class* MTLMaskFill::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PROTECTED, $method(MTLMaskFill, init$, void, $SurfaceType*, $CompositeType*)},
		{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(MTLMaskFill, maskFill, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"register", "()V", nullptr, $STATIC, $staticMethod(MTLMaskFill, register$, void)},
		{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED, $virtualMethod(MTLMaskFill, validateContext, void, $SunGraphics2D*, $Composite*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLMaskFill",
		"sun.java2d.pipe.BufferedMaskFill",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MTLMaskFill, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLMaskFill);
	});
	return class$;
}

$Class* MTLMaskFill::class$ = nullptr;

		} // metal
	} // java2d
} // sun