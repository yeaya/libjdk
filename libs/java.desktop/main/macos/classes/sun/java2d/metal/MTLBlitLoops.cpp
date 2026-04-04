#include <sun/java2d/metal/MTLBlitLoops.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/metal/MTLAnyCompositeBlit.h>
#include <sun/java2d/metal/MTLBufImgOps.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGeneralBlit.h>
#include <sun/java2d/metal/MTLGeneralTransformedBlit.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRTTSurfaceToSurfaceBlit.h>
#include <sun/java2d/metal/MTLRTTSurfaceToSurfaceScale.h>
#include <sun/java2d/metal/MTLRTTSurfaceToSurfaceTransform.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceToSurfaceBlit.h>
#include <sun/java2d/metal/MTLSurfaceToSurfaceScale.h>
#include <sun/java2d/metal/MTLSurfaceToSurfaceTransform.h>
#include <sun/java2d/metal/MTLSurfaceToSwBlit.h>
#include <sun/java2d/metal/MTLSwToSurfaceBlit.h>
#include <sun/java2d/metal/MTLSwToSurfaceScale.h>
#include <sun/java2d/metal/MTLSwToSurfaceTransform.h>
#include <sun/java2d/metal/MTLSwToTextureBlit.h>
#include <sun/java2d/metal/MTLTextureToSurfaceBlit.h>
#include <sun/java2d/metal/MTLTextureToSurfaceScale.h>
#include <sun/java2d/metal/MTLTextureToSurfaceTransform.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef OFFSET_HINT
#undef OFFSET_ISOBLIT
#undef OFFSET_RTT
#undef OFFSET_SRCTYPE
#undef OFFSET_TEXTURE
#undef OFFSET_XFORM
#undef OPAQUE
#undef PF_INT_ARGB
#undef PF_INT_ARGB_PRE
#undef PF_INT_BGR
#undef PF_INT_BGRX
#undef PF_INT_RGB
#undef PF_INT_RGBX
#undef RT_TEXTURE
#undef SRC_IS_OPAQUE
#undef TEXTURE

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $MTLAnyCompositeBlit = ::sun::java2d::metal::MTLAnyCompositeBlit;
using $MTLBufImgOps = ::sun::java2d::metal::MTLBufImgOps;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLGeneralBlit = ::sun::java2d::metal::MTLGeneralBlit;
using $MTLGeneralTransformedBlit = ::sun::java2d::metal::MTLGeneralTransformedBlit;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLRTTSurfaceToSurfaceBlit = ::sun::java2d::metal::MTLRTTSurfaceToSurfaceBlit;
using $MTLRTTSurfaceToSurfaceScale = ::sun::java2d::metal::MTLRTTSurfaceToSurfaceScale;
using $MTLRTTSurfaceToSurfaceTransform = ::sun::java2d::metal::MTLRTTSurfaceToSurfaceTransform;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $MTLSurfaceToSurfaceBlit = ::sun::java2d::metal::MTLSurfaceToSurfaceBlit;
using $MTLSurfaceToSurfaceScale = ::sun::java2d::metal::MTLSurfaceToSurfaceScale;
using $MTLSurfaceToSurfaceTransform = ::sun::java2d::metal::MTLSurfaceToSurfaceTransform;
using $MTLSurfaceToSwBlit = ::sun::java2d::metal::MTLSurfaceToSwBlit;
using $MTLSwToSurfaceBlit = ::sun::java2d::metal::MTLSwToSurfaceBlit;
using $MTLSwToSurfaceScale = ::sun::java2d::metal::MTLSwToSurfaceScale;
using $MTLSwToSurfaceTransform = ::sun::java2d::metal::MTLSwToSurfaceTransform;
using $MTLSwToTextureBlit = ::sun::java2d::metal::MTLSwToTextureBlit;
using $MTLTextureToSurfaceBlit = ::sun::java2d::metal::MTLTextureToSurfaceBlit;
using $MTLTextureToSurfaceScale = ::sun::java2d::metal::MTLTextureToSurfaceScale;
using $MTLTextureToSurfaceTransform = ::sun::java2d::metal::MTLTextureToSurfaceTransform;
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLBlitLoops::init$() {
}

void MTLBlitLoops::register$() {
	$useLocalObjectStack();
	$init($SurfaceType);
	$var($Blit, blitIntArgbPreToSurface, $new($MTLSwToSurfaceBlit, $SurfaceType::IntArgbPre, $MTLSurfaceData::PF_INT_ARGB_PRE));
	$var($Blit, blitIntArgbPreToTexture, $new($MTLSwToTextureBlit, $SurfaceType::IntArgbPre, $MTLSurfaceData::PF_INT_ARGB_PRE));
	$var($TransformBlit, transformBlitIntArgbPreToSurface, $new($MTLSwToSurfaceTransform, $SurfaceType::IntArgbPre, $MTLSurfaceData::PF_INT_ARGB_PRE));
	$var($MTLSurfaceToSwBlit, blitSurfaceToIntArgbPre, $new($MTLSurfaceToSwBlit, $SurfaceType::IntArgbPre, $MTLSurfaceData::PF_INT_ARGB_PRE));
	$init($MTLSurfaceData);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new($MTLSurfaceToSurfaceBlit),
		$$new($MTLSurfaceToSurfaceScale),
		$$new($MTLSurfaceToSurfaceTransform),
		$$new($MTLRTTSurfaceToSurfaceBlit),
		$$new($MTLRTTSurfaceToSurfaceScale),
		$$new($MTLRTTSurfaceToSurfaceTransform),
		$$new($MTLSurfaceToSwBlit, $SurfaceType::IntArgb, $MTLSurfaceData::PF_INT_ARGB),
		blitSurfaceToIntArgbPre,
		blitIntArgbPreToSurface,
		$$new($MTLSwToSurfaceBlit, $SurfaceType::IntRgb, $MTLSurfaceData::PF_INT_RGB),
		$$new($MTLSwToSurfaceBlit, $SurfaceType::IntRgbx, $MTLSurfaceData::PF_INT_RGBX),
		$$new($MTLSwToSurfaceBlit, $SurfaceType::IntBgr, $MTLSurfaceData::PF_INT_BGR),
		$$new($MTLSwToSurfaceBlit, $SurfaceType::IntBgrx, $MTLSurfaceData::PF_INT_BGRX),
		$$new($MTLGeneralBlit, $MTLSurfaceData::MTLSurface, $CompositeType::AnyAlpha, blitIntArgbPreToSurface),
		$$new($MTLAnyCompositeBlit, $MTLSurfaceData::MTLSurface, blitSurfaceToIntArgbPre, blitSurfaceToIntArgbPre, blitIntArgbPreToSurface),
		$$new($MTLAnyCompositeBlit, $SurfaceType::Any, nullptr, blitSurfaceToIntArgbPre, blitIntArgbPreToSurface),
		$$new($MTLSwToSurfaceScale, $SurfaceType::IntRgb, $MTLSurfaceData::PF_INT_RGB),
		$$new($MTLSwToSurfaceScale, $SurfaceType::IntRgbx, $MTLSurfaceData::PF_INT_RGBX),
		$$new($MTLSwToSurfaceScale, $SurfaceType::IntBgr, $MTLSurfaceData::PF_INT_BGR),
		$$new($MTLSwToSurfaceScale, $SurfaceType::IntBgrx, $MTLSurfaceData::PF_INT_BGRX),
		$$new($MTLSwToSurfaceScale, $SurfaceType::IntArgbPre, $MTLSurfaceData::PF_INT_ARGB_PRE),
		$$new($MTLSwToSurfaceTransform, $SurfaceType::IntRgb, $MTLSurfaceData::PF_INT_RGB),
		$$new($MTLSwToSurfaceTransform, $SurfaceType::IntRgbx, $MTLSurfaceData::PF_INT_RGBX),
		$$new($MTLSwToSurfaceTransform, $SurfaceType::IntBgr, $MTLSurfaceData::PF_INT_BGR),
		$$new($MTLSwToSurfaceTransform, $SurfaceType::IntBgrx, $MTLSurfaceData::PF_INT_BGRX),
		transformBlitIntArgbPreToSurface,
		$$new($MTLGeneralTransformedBlit, transformBlitIntArgbPreToSurface),
		$$new($MTLTextureToSurfaceBlit),
		$$new($MTLTextureToSurfaceScale),
		$$new($MTLTextureToSurfaceTransform),
		blitIntArgbPreToTexture,
		$$new($MTLSwToTextureBlit, $SurfaceType::IntRgb, $MTLSurfaceData::PF_INT_RGB),
		$$new($MTLSwToTextureBlit, $SurfaceType::IntRgbx, $MTLSurfaceData::PF_INT_RGBX),
		$$new($MTLSwToTextureBlit, $SurfaceType::IntBgr, $MTLSurfaceData::PF_INT_BGR),
		$$new($MTLSwToTextureBlit, $SurfaceType::IntBgrx, $MTLSurfaceData::PF_INT_BGRX),
		$$new($MTLGeneralBlit, $MTLSurfaceData::MTLTexture, $CompositeType::SrcNoEa, blitIntArgbPreToTexture)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

int32_t MTLBlitLoops::createPackedParams(bool isoblit, bool texture, bool rtt, bool xform, int32_t hint, int32_t srctype) {
	return (((((($sl(srctype, MTLBlitLoops::OFFSET_SRCTYPE)) | ($sl(hint, MTLBlitLoops::OFFSET_HINT))) | ($sl(texture ? 1 : 0, MTLBlitLoops::OFFSET_TEXTURE))) | ($sl(rtt ? 1 : 0, MTLBlitLoops::OFFSET_RTT))) | ($sl(xform ? 1 : 0, MTLBlitLoops::OFFSET_XFORM))) | ($sl(isoblit ? 1 : 0, MTLBlitLoops::OFFSET_ISOBLIT)));
}

void MTLBlitLoops::enqueueBlit($RenderQueue* rq, $SurfaceData* src, $SurfaceData* dst, int32_t packedParams, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalObjectStack();
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(72, 24);
	$nc(buf)->putInt(31);
	buf->putInt(packedParams);
	$$nc(buf->putInt(sx1))->putInt(sy1);
	$$nc(buf->putInt(sx2))->putInt(sy2);
	$$nc(buf->putDouble(dx1))->putDouble(dy1);
	$$nc(buf->putDouble(dx2))->putDouble(dy2);
	buf->putLong($nc(src)->getNativeOps());
	buf->putLong($nc(dst)->getNativeOps());
}

void MTLBlitLoops::Blit($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, int32_t srctype, bool texture) {
	$useLocalObjectStack();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $MTLContext::SRC_IS_OPAQUE;
	}
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		rq->addReference(srcData);
		$var($MTLSurfaceData, mtlDst, $cast($MTLSurfaceData, dstData));
		if (texture) {
			$var($MTLGraphicsConfig, gc, $nc(mtlDst)->getMTLGraphicsConfig());
			$MTLContext::setScratchSurface(gc);
		} else {
			$MTLContext::validateContext(mtlDst, mtlDst, clip, comp, xform, nullptr, nullptr, ctxflags);
		}
		int32_t packedParams = createPackedParams(false, texture, false, xform != nullptr, hint, srctype);
		enqueueBlit(rq, srcData, dstData, packedParams, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
		rq->flushNow();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		rq->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void MTLBlitLoops::IsoBlit($SurfaceData* srcData, $SurfaceData* dstData, $BufferedImage* srcImg, $BufferedImageOp* biop, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2, bool texture) {
	$useLocalObjectStack();
	int32_t ctxflags = 0;
	if ($nc(srcData)->getTransparency() == $Transparency::OPAQUE) {
		ctxflags |= $MTLContext::SRC_IS_OPAQUE;
	}
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($MTLSurfaceData, mtlSrc, $cast($MTLSurfaceData, srcData));
		$var($MTLSurfaceData, mtlDst, $cast($MTLSurfaceData, dstData));
		int32_t srctype = mtlSrc->getType();
		bool rtt = false;
		$var($MTLSurfaceData, srcCtxData, nullptr);
		if (srctype == $MTLSurfaceData::TEXTURE) {
			rtt = false;
			$assign(srcCtxData, mtlDst);
		} else {
			rtt = true;
			if (srctype == $AccelSurface::RT_TEXTURE) {
				$assign(srcCtxData, mtlDst);
			} else {
				$assign(srcCtxData, mtlSrc);
			}
		}
		$MTLContext::validateContext(srcCtxData, mtlDst, clip, comp, xform, nullptr, nullptr, ctxflags);
		if (biop != nullptr) {
			$MTLBufImgOps::enableBufImgOp(rq, mtlSrc, srcImg, biop);
		}
		int32_t packedParams = createPackedParams(true, texture, false, xform != nullptr, hint, 0);
		enqueueBlit(rq, srcData, dstData, packedParams, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
		if (biop != nullptr) {
			$MTLBufImgOps::disableBufImgOp(rq, biop);
		}
		if (rtt && $nc(mtlDst)->isOnScreen()) {
			rq->flushNow();
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		rq->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

MTLBlitLoops::MTLBlitLoops() {
}

$Class* MTLBlitLoops::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OFFSET_SRCTYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_SRCTYPE)},
		{"OFFSET_HINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_HINT)},
		{"OFFSET_TEXTURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_TEXTURE)},
		{"OFFSET_RTT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_RTT)},
		{"OFFSET_XFORM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_XFORM)},
		{"OFFSET_ISOBLIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MTLBlitLoops, OFFSET_ISOBLIT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MTLBlitLoops, init$, void)},
		{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDIZ)V", nullptr, $STATIC, $staticMethod(MTLBlitLoops, Blit, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, $AffineTransform*, int32_t, int32_t, int32_t, int32_t, int32_t, double, double, double, double, int32_t, bool)},
		{"IsoBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIDDDDZ)V", nullptr, $STATIC, $staticMethod(MTLBlitLoops, IsoBlit, void, $SurfaceData*, $SurfaceData*, $BufferedImage*, $BufferedImageOp*, $Composite*, $Region*, $AffineTransform*, int32_t, int32_t, int32_t, int32_t, int32_t, double, double, double, double, bool)},
		{"createPackedParams", "(ZZZZII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MTLBlitLoops, createPackedParams, int32_t, bool, bool, bool, bool, int32_t, int32_t)},
		{"enqueueBlit", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;IIIIIDDDD)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MTLBlitLoops, enqueueBlit, void, $RenderQueue*, $SurfaceData*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t, int32_t, double, double, double, double)},
		{"register", "()V", nullptr, $STATIC, $staticMethod(MTLBlitLoops, register$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.metal.MTLBlitLoops",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MTLBlitLoops, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLBlitLoops);
	});
	return class$;
}

$Class* MTLBlitLoops::class$ = nullptr;

		} // metal
	} // java2d
} // sun