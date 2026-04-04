#include <sun/java2d/opengl/OGLMaskFill.h>
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
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLMaskFill::register$() {
	$init(OGLMaskFill);
	$useLocalObjectStack();
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new(OGLMaskFill, $SurfaceType::AnyColor, $CompositeType::SrcOver),
		$$new(OGLMaskFill, $SurfaceType::OpaqueColor, $CompositeType::SrcNoEa),
		$$new(OGLMaskFill, $SurfaceType::GradientPaint, $CompositeType::SrcOver),
		$$new(OGLMaskFill, $SurfaceType::OpaqueGradientPaint, $CompositeType::SrcNoEa),
		$$new(OGLMaskFill, $SurfaceType::LinearGradientPaint, $CompositeType::SrcOver),
		$$new(OGLMaskFill, $SurfaceType::OpaqueLinearGradientPaint, $CompositeType::SrcNoEa),
		$$new(OGLMaskFill, $SurfaceType::RadialGradientPaint, $CompositeType::SrcOver),
		$$new(OGLMaskFill, $SurfaceType::OpaqueRadialGradientPaint, $CompositeType::SrcNoEa),
		$$new(OGLMaskFill, $SurfaceType::TexturePaint, $CompositeType::SrcOver),
		$$new(OGLMaskFill, $SurfaceType::OpaqueTexturePaint, $CompositeType::SrcNoEa)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void OGLMaskFill::init$($SurfaceType* srcType, $CompositeType* compType) {
	$init($OGLSurfaceData);
	$BufferedMaskFill::init$($($OGLRenderQueue::getInstance()), srcType, compType, $OGLSurfaceData::OpenGLSurface);
}

void OGLMaskFill::maskFill(int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask) {
	$prepareNative(maskFill, void, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maskoff, int32_t maskscan, int32_t masklen, $bytes* mask);
	$invokeNative(x, y, w, h, maskoff, maskscan, masklen, mask);
	$finishNative();
}

void OGLMaskFill::validateContext($SunGraphics2D* sg2d, $Composite* comp, int32_t ctxflags) {
	$useLocalObjectStack();
	$var($OGLSurfaceData, dstData, nullptr);
	try {
		$assign(dstData, $cast($OGLSurfaceData, $nc(sg2d)->surfaceData));
	} catch ($ClassCastException& e) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $nc(sg2d)->surfaceData}));
	}
	$OGLContext::validateContext(dstData, dstData, $($nc(sg2d)->getCompClip()), comp, nullptr, $nc(sg2d)->paint, sg2d, ctxflags);
}

OGLMaskFill::OGLMaskFill() {
}

$Class* OGLMaskFill::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;)V", nullptr, $PROTECTED, $method(OGLMaskFill, init$, void, $SurfaceType*, $CompositeType*)},
		{"maskFill", "(IIIIIII[B)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(OGLMaskFill, maskFill, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"register", "()V", nullptr, $STATIC, $staticMethod(OGLMaskFill, register$, void)},
		{"validateContext", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Composite;I)V", nullptr, $PROTECTED, $virtualMethod(OGLMaskFill, validateContext, void, $SunGraphics2D*, $Composite*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLMaskFill",
		"sun.java2d.pipe.BufferedMaskFill",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OGLMaskFill, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLMaskFill);
	});
	return class$;
}

$Class* OGLMaskFill::class$ = nullptr;

		} // opengl
	} // java2d
} // sun