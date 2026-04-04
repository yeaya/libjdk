#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillSpans$TraceFillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillSpans$TraceFillSpans = ::sun::java2d::loops::FillSpans$TraceFillSpans;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$String* FillSpans::methodSignature = nullptr;
int32_t FillSpans::primTypeID = 0;

FillSpans* FillSpans::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillSpans);
	return $cast(FillSpans, $GraphicsPrimitiveMgr::locate(FillSpans::primTypeID, srctype, comptype, dsttype));
}

void FillSpans::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillSpans::methodSignature, FillSpans::primTypeID, srctype, comptype, dsttype);
}

void FillSpans::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillSpans::methodSignature, FillSpans::primTypeID, srctype, comptype, dsttype);
}

void FillSpans::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t pixel, int64_t pIterator, $SpanIterator* si) {
	$prepareNative(FillSpans, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t pixel, int64_t pIterator, $SpanIterator* si);
	$invokeNative(sg2d, dest, pixel, pIterator, si);
	$finishNative();
}

void FillSpans::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* dest, $SpanIterator* si) {
	FillSpans$(sg2d, dest, $nc(sg2d)->pixel, $nc(si)->getNativeIterator(), si);
}

$GraphicsPrimitive* FillSpans::traceWrap() {
	return $new($FillSpans$TraceFillSpans, this);
}

void FillSpans::clinit$($Class* clazz) {
	$assignStatic(FillSpans::methodSignature, "FillSpans(...)"_s->toString());
	FillSpans::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillSpans::FillSpans() {
}

$Class* FillSpans::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillSpans, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillSpans, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(FillSpans, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(FillSpans, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IJLsun/java2d/pipe/SpanIterator;)V", nullptr, $PRIVATE | $NATIVE, $method(FillSpans, FillSpans$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int64_t, $SpanIterator*)},
		{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC, $virtualMethod(FillSpans, FillSpans$, void, $SunGraphics2D*, $SurfaceData*, $SpanIterator*)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillSpans;", nullptr, $PUBLIC | $STATIC, $staticMethod(FillSpans, locate, FillSpans*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillSpans, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.FillSpans$TraceFillSpans", "sun.java2d.loops.FillSpans", "TraceFillSpans", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.FillSpans",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.FillSpans$TraceFillSpans"
	};
	$loadClass(FillSpans, name, initialize, &classInfo$$, FillSpans::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FillSpans);
	});
	return class$;
}

$Class* FillSpans::class$ = nullptr;

		} // loops
	} // java2d
} // sun