#include <sun/java2d/xr/XRPMBlitLoops.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRPMBlit.h>
#include <sun/java2d/xr/XRPMScaledBlit.h>
#include <sun/java2d/xr/XRPMTransformedBlit.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XrSwToPMBlit.h>
#include <sun/java2d/xr/XrSwToPMScaledBlit.h>
#include <sun/java2d/xr/XrSwToPMTransformedBlit.h>
#include <jcpp.h>

#undef OPAQUE

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $XRPMBlit = ::sun::java2d::xr::XRPMBlit;
using $XRPMScaledBlit = ::sun::java2d::xr::XRPMScaledBlit;
using $XRPMTransformedBlit = ::sun::java2d::xr::XRPMTransformedBlit;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XrSwToPMBlit = ::sun::java2d::xr::XrSwToPMBlit;
using $XrSwToPMScaledBlit = ::sun::java2d::xr::XrSwToPMScaledBlit;
using $XrSwToPMTransformedBlit = ::sun::java2d::xr::XrSwToPMTransformedBlit;

namespace sun {
	namespace java2d {
		namespace xr {

$WeakReference* XRPMBlitLoops::argbTmpPM = nullptr;
$WeakReference* XRPMBlitLoops::rgbTmpPM = nullptr;

void XRPMBlitLoops::init$() {
}

void XRPMBlitLoops::register$() {
	$init(XRPMBlitLoops);
	$useLocalObjectStack();
	$init($XRSurfaceData);
	$init($SurfaceType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new($XRPMBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XRPMBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XRPMScaledBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMScaledBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XRPMScaledBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMScaledBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XRPMTransformedBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMTransformedBlit, $XRSurfaceData::IntRgbX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XRPMTransformedBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntRgbX11),
		$$new($XRPMTransformedBlit, $XRSurfaceData::IntArgbPreX11, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMScaledBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntRgbX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntArgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntRgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::IntBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::ThreeByteBgr, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort565Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::Ushort555Rgb, $XRSurfaceData::IntArgbPreX11),
		$$new($XrSwToPMTransformedBlit, $SurfaceType::ByteIndexed, $XRSurfaceData::IntArgbPreX11)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

$XRSurfaceData* XRPMBlitLoops::cacheToTmpSurface($SurfaceData* src, $XRSurfaceData* dst, int32_t w, int32_t h, int32_t sx, int32_t sy) {
	$init(XRPMBlitLoops);
	$useLocalObjectStack();
	$var($SunVolatileImage, vImg, nullptr);
	$var($SurfaceType, vImgSurfaceType, nullptr);
	if ($nc(src)->getTransparency() == $Transparency::OPAQUE) {
		$assign(vImg, $cast($SunVolatileImage, $nc(XRPMBlitLoops::rgbTmpPM)->get()));
		$init($SurfaceType);
		$assign(vImgSurfaceType, $SurfaceType::IntRgb);
	} else {
		$assign(vImg, $cast($SunVolatileImage, $nc(XRPMBlitLoops::argbTmpPM)->get()));
		$init($SurfaceType);
		$assign(vImgSurfaceType, $SurfaceType::IntArgbPre);
	}
	bool var$1 = vImg == nullptr || vImg->getWidth() < w;
	bool var$0 = var$1 || vImg->getHeight() < h;
	if (var$0 || !($instanceOf($XRSurfaceData, $(vImg->getDestSurface())))) {
		if (vImg != nullptr) {
			vImg->flush();
		}
		$assign(vImg, $cast($SunVolatileImage, $$nc($nc(dst)->getGraphicsConfig())->createCompatibleVolatileImage(w, h, src->getTransparency())));
		$nc(vImg)->setAccelerationPriority(1.0f);
		if (!($instanceOf($XRSurfaceData, $(vImg->getDestSurface())))) {
			$throwNew($InvalidPipeException, "Could not create XRSurfaceData"_s);
		}
		if (src->getTransparency() == $SurfaceData::OPAQUE) {
			$assignStatic(XRPMBlitLoops::rgbTmpPM, $new($WeakReference, vImg));
		} else {
			$assignStatic(XRPMBlitLoops::argbTmpPM, $new($WeakReference, vImg));
		}
	}
	$init($CompositeType);
	$var($Blit, swToSurfaceBlit, $Blit::getFromCache($(src->getSurfaceType()), $CompositeType::SrcNoEa, vImgSurfaceType));
	if (!($instanceOf($XRSurfaceData, $($nc(vImg)->getDestSurface())))) {
		$throwNew($InvalidPipeException, $$str({"wrong surface data type: "_s, $(vImg->getDestSurface())}));
	}
	$var($XRSurfaceData, vImgSurface, $cast($XRSurfaceData, vImg->getDestSurface()));
	$init($AlphaComposite);
	$nc(swToSurfaceBlit)->Blit$(src, vImgSurface, $AlphaComposite::Src, nullptr, sx, sy, 0, 0, w, h);
	return vImgSurface;
}

void XRPMBlitLoops::clinit$($Class* clazz) {
	$assignStatic(XRPMBlitLoops::argbTmpPM, $new($WeakReference, nullptr));
	$assignStatic(XRPMBlitLoops::rgbTmpPM, $new($WeakReference, nullptr));
}

XRPMBlitLoops::XRPMBlitLoops() {
}

$Class* XRPMBlitLoops::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"argbTmpPM", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/image/SunVolatileImage;>;", $STATIC, $staticField(XRPMBlitLoops, argbTmpPM)},
		{"rgbTmpPM", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/image/SunVolatileImage;>;", $STATIC, $staticField(XRPMBlitLoops, rgbTmpPM)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XRPMBlitLoops, init$, void)},
		{"cacheToTmpSurface", "(Lsun/java2d/SurfaceData;Lsun/java2d/xr/XRSurfaceData;IIII)Lsun/java2d/xr/XRSurfaceData;", nullptr, $PROTECTED | $STATIC, $staticMethod(XRPMBlitLoops, cacheToTmpSurface, $XRSurfaceData*, $SurfaceData*, $XRSurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{"register", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(XRPMBlitLoops, register$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.xr.XRPMBlitLoops",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XRPMBlitLoops, name, initialize, &classInfo$$, XRPMBlitLoops::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XRPMBlitLoops);
	});
	return class$;
}

$Class* XRPMBlitLoops::class$ = nullptr;

		} // xr
	} // java2d
} // sun