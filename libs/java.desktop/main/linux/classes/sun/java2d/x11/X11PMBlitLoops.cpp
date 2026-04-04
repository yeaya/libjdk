#include <sun/java2d/x11/X11PMBlitLoops.h>
#include <java/awt/Composite.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/X11PMBlitLoops$DelegateBlitLoop.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $X11PMBlitLoops$DelegateBlitLoop = ::sun::java2d::x11::X11PMBlitLoops$DelegateBlitLoop;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

void X11PMBlitLoops::register$() {
	$init(X11PMBlitLoops);
	$useLocalObjectStack();
	$init($X11SurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::IntBgrX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntRgbX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteBgrX11, $X11SurfaceData::ThreeByteBgrX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteRgbX11, $X11SurfaceData::ThreeByteRgbX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::ByteIndexedOpaqueX11, $X11SurfaceData::ByteIndexedOpaqueX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::ByteGrayX11, $X11SurfaceData::ByteGrayX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::Index8GrayX11, $X11SurfaceData::Index8GrayX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShort555RgbX11, $X11SurfaceData::UShort555RgbX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShort565RgbX11, $X11SurfaceData::UShort565RgbX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShortIndexedX11, $X11SurfaceData::UShortIndexedX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::IntBgrX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntRgbX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteBgrX11_BM, $X11SurfaceData::ThreeByteBgrX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::ThreeByteRgbX11_BM, $X11SurfaceData::ThreeByteRgbX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::ByteIndexedX11_BM, $X11SurfaceData::ByteIndexedOpaqueX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::ByteGrayX11_BM, $X11SurfaceData::ByteGrayX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::Index8GrayX11_BM, $X11SurfaceData::Index8GrayX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShort555RgbX11_BM, $X11SurfaceData::UShort555RgbX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShort565RgbX11_BM, $X11SurfaceData::UShort565RgbX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::UShortIndexedX11_BM, $X11SurfaceData::UShortIndexedX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntArgbPreX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11, $X11SurfaceData::IntArgbPreX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntArgbPreX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::FourByteAbgrPreX11, true),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11, $X11SurfaceData::FourByteAbgrPreX11, false),
		$$new(X11PMBlitLoops, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::FourByteAbgrPreX11, true),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::IntBgrX11_BM, $X11SurfaceData::IntBgrX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::IntRgbX11_BM, $X11SurfaceData::IntRgbX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ThreeByteBgrX11_BM, $X11SurfaceData::ThreeByteBgrX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ThreeByteRgbX11_BM, $X11SurfaceData::ThreeByteRgbX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ByteIndexedX11_BM, $X11SurfaceData::ByteIndexedOpaqueX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::ByteGrayX11_BM, $X11SurfaceData::ByteGrayX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::Index8GrayX11_BM, $X11SurfaceData::Index8GrayX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShort555RgbX11_BM, $X11SurfaceData::UShort555RgbX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShort565RgbX11_BM, $X11SurfaceData::UShort565RgbX11),
		$$new($X11PMBlitLoops$DelegateBlitLoop, $X11SurfaceData::UShortIndexedX11_BM, $X11SurfaceData::UShortIndexedX11)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void X11PMBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, bool over) {
	$init($CompositeType);
	$Blit::init$(srcType, over ? $CompositeType::SrcOverNoEa : $CompositeType::SrcNoEa, dstType);
}

void X11PMBlitLoops::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$SunToolkit::awtLock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($X11SurfaceData, x11sd, $cast($X11SurfaceData, dst));
		int64_t xgc = $nc(x11sd)->getBlitGC(nullptr, false);
		int64_t var$1 = $nc(src)->getNativeOps();
		nativeBlit(var$1, $nc(dst)->getNativeOps(), xgc, clip, sx, sy, dx, dy, w, h);
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$SunToolkit::awtUnlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void X11PMBlitLoops::nativeBlit(int64_t srcData, int64_t dstData, int64_t xgc, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$prepareNative(nativeBlit, void, int64_t srcData, int64_t dstData, int64_t xgc, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNative(srcData, dstData, xgc, clip, sx, sy, dx, dy, w, h);
	$finishNative();
}

void X11PMBlitLoops::updateBitmask($SurfaceData* src, $SurfaceData* dst, bool isICM) {
	$init(X11PMBlitLoops);
	$prepareNativeStatic(updateBitmask, void, $SurfaceData* src, $SurfaceData* dst, bool isICM);
	$invokeNativeStatic(src, dst, isICM);
	$finishNativeStatic();
}

X11PMBlitLoops::X11PMBlitLoops() {
}

$Class* X11PMBlitLoops::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;Z)V", nullptr, $PUBLIC, $method(X11PMBlitLoops, init$, void, $SurfaceType*, $SurfaceType*, bool)},
		{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(X11PMBlitLoops, Blit$, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"nativeBlit", "(JJJLsun/java2d/pipe/Region;IIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(X11PMBlitLoops, nativeBlit, void, int64_t, int64_t, int64_t, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"register", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(X11PMBlitLoops, register$, void)},
		{"updateBitmask", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(X11PMBlitLoops, updateBitmask, void, $SurfaceData*, $SurfaceData*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop", "sun.java2d.x11.X11PMBlitLoops", "DelegateBlitLoop", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.x11.X11PMBlitLoops",
		"sun.java2d.loops.Blit",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop"
	};
	$loadClass(X11PMBlitLoops, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11PMBlitLoops);
	});
	return class$;
}

$Class* X11PMBlitLoops::class$ = nullptr;

		} // x11
	} // java2d
} // sun