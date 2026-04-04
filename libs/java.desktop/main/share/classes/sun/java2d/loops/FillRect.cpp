#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect$General.h>
#include <sun/java2d/loops/FillRect$TraceFillRect.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect$General = ::sun::java2d::loops::FillRect$General;
using $FillRect$TraceFillRect = ::sun::java2d::loops::FillRect$TraceFillRect;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* FillRect::methodSignature = nullptr;
int32_t FillRect::primTypeID = 0;

FillRect* FillRect::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillRect);
	return $cast(FillRect, $GraphicsPrimitiveMgr::locate(FillRect::primTypeID, srctype, comptype, dsttype));
}

void FillRect::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillRect::methodSignature, FillRect::primTypeID, srctype, comptype, dsttype);
}

void FillRect::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillRect::methodSignature, FillRect::primTypeID, srctype, comptype, dsttype);
}

void FillRect::FillRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(FillRect, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(sg2d, dest, x, y, w, h);
	$finishNative();
}

$GraphicsPrimitive* FillRect::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($FillRect$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* FillRect::traceWrap() {
	return $new($FillRect$TraceFillRect, this);
}

void FillRect::clinit$($Class* clazz) {
	$assignStatic(FillRect::methodSignature, "FillRect(...)"_s->toString());
	FillRect::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(FillRect, nullptr, nullptr, nullptr));
	}
}

FillRect::FillRect() {
}

$Class* FillRect::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillRect, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillRect, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(FillRect, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(FillRect, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(FillRect, FillRect$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillRect;", nullptr, $PUBLIC | $STATIC, $staticMethod(FillRect, locate, FillRect*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED, $virtualMethod(FillRect, makePrimitive, $GraphicsPrimitive*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillRect, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.FillRect$TraceFillRect", "sun.java2d.loops.FillRect", "TraceFillRect", $PRIVATE | $STATIC},
		{"sun.java2d.loops.FillRect$General", "sun.java2d.loops.FillRect", "General", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.FillRect",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.FillRect$TraceFillRect,sun.java2d.loops.FillRect$General"
	};
	$loadClass(FillRect, name, initialize, &classInfo$$, FillRect::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FillRect);
	});
	return class$;
}

$Class* FillRect::class$ = nullptr;

		} // loops
	} // java2d
} // sun