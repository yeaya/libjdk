#include <sun/java2d/windows/GDIBlitLoops.h>
#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace windows {

void GDIBlitLoops::register$() {
	$init(GDIBlitLoops);
	$useLocalObjectStack();
	$init($SurfaceType);
	$init($GDIWindowSurfaceData);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		$$new(GDIBlitLoops, $SurfaceType::IntRgb, $GDIWindowSurfaceData::AnyGdi),
		$$new(GDIBlitLoops, $SurfaceType::Ushort555Rgb, $GDIWindowSurfaceData::AnyGdi, 31744, 992, 31),
		$$new(GDIBlitLoops, $SurfaceType::Ushort565Rgb, $GDIWindowSurfaceData::AnyGdi, 0x0000f800, 2016, 31),
		$$new(GDIBlitLoops, $SurfaceType::ThreeByteBgr, $GDIWindowSurfaceData::AnyGdi),
		$$new(GDIBlitLoops, $SurfaceType::ByteIndexedOpaque, $GDIWindowSurfaceData::AnyGdi, true),
		$$new(GDIBlitLoops, $SurfaceType::Index8Gray, $GDIWindowSurfaceData::AnyGdi, true),
		$$new(GDIBlitLoops, $SurfaceType::ByteGray, $GDIWindowSurfaceData::AnyGdi)
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	GDIBlitLoops::init$(srcType, dstType, 0, 0, 0);
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, bool indexed) {
	GDIBlitLoops::init$(srcType, dstType, 0, 0, 0);
	this->indexed = indexed;
}

void GDIBlitLoops::init$($SurfaceType* srcType, $SurfaceType* dstType, int32_t rmask, int32_t gmask, int32_t bmask) {
	$init($CompositeType);
	$Blit::init$(srcType, $CompositeType::SrcNoEa, dstType);
	this->indexed = false;
	this->rmask = rmask;
	this->gmask = gmask;
	this->bmask = bmask;
}

void GDIBlitLoops::nativeBlit($SurfaceData* src, $SurfaceData* dst, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, int32_t rmask, int32_t gmask, int32_t bmask, bool needLut) {
	$prepareNative(nativeBlit, void, $SurfaceData* src, $SurfaceData* dst, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, int32_t rmask, int32_t gmask, int32_t bmask, bool needLut);
	$invokeNative(src, dst, clip, sx, sy, dx, dy, w, h, rmask, gmask, bmask, needLut);
	$finishNative();
}

void GDIBlitLoops::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	nativeBlit(src, dst, clip, sx, sy, dx, dy, w, h, this->rmask, this->gmask, this->bmask, this->indexed);
}

GDIBlitLoops::GDIBlitLoops() {
}

$Class* GDIBlitLoops::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rmask", "I", nullptr, 0, $field(GDIBlitLoops, rmask)},
		{"gmask", "I", nullptr, 0, $field(GDIBlitLoops, gmask)},
		{"bmask", "I", nullptr, 0, $field(GDIBlitLoops, bmask)},
		{"indexed", "Z", nullptr, 0, $field(GDIBlitLoops, indexed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(GDIBlitLoops, init$, void, $SurfaceType*, $SurfaceType*)},
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;Z)V", nullptr, $PUBLIC, $method(GDIBlitLoops, init$, void, $SurfaceType*, $SurfaceType*, bool)},
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;III)V", nullptr, $PUBLIC, $method(GDIBlitLoops, init$, void, $SurfaceType*, $SurfaceType*, int32_t, int32_t, int32_t)},
		{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC, $virtualMethod(GDIBlitLoops, Blit$, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"nativeBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/Region;IIIIIIIIIZ)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(GDIBlitLoops, nativeBlit, void, $SurfaceData*, $SurfaceData*, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)},
		{"register", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(GDIBlitLoops, register$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.windows.GDIBlitLoops",
		"sun.java2d.loops.Blit",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GDIBlitLoops, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GDIBlitLoops);
	});
	return class$;
}

$Class* GDIBlitLoops::class$ = nullptr;

		} // windows
	} // java2d
} // sun