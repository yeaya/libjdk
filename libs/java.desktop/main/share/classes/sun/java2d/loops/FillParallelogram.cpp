#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillParallelogram$TraceFillParallelogram.h>
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
using $FillParallelogram$TraceFillParallelogram = ::sun::java2d::loops::FillParallelogram$TraceFillParallelogram;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* FillParallelogram::methodSignature = nullptr;
int32_t FillParallelogram::primTypeID = 0;

FillParallelogram* FillParallelogram::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(FillParallelogram);
	return $cast(FillParallelogram, $GraphicsPrimitiveMgr::locate(FillParallelogram::primTypeID, srctype, comptype, dsttype));
}

void FillParallelogram::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(FillParallelogram::methodSignature, FillParallelogram::primTypeID, srctype, comptype, dsttype);
}

void FillParallelogram::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, FillParallelogram::methodSignature, FillParallelogram::primTypeID, srctype, comptype, dsttype);
}

void FillParallelogram::FillParallelogram$($SunGraphics2D* sg2d, $SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2) {
	$prepareNative(FillParallelogram, void, $SunGraphics2D* sg2d, $SurfaceData* dest, double x0, double y0, double dx1, double dy1, double dx2, double dy2);
	$invokeNative(sg2d, dest, x0, y0, dx1, dy1, dx2, dy2);
	$finishNative();
}

$GraphicsPrimitive* FillParallelogram::traceWrap() {
	return $new($FillParallelogram$TraceFillParallelogram, this);
}

void FillParallelogram::clinit$($Class* clazz) {
	$assignStatic(FillParallelogram::methodSignature, "FillParallelogram(...)"_s->toString());
	FillParallelogram::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

FillParallelogram::FillParallelogram() {
}

$Class* FillParallelogram::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillParallelogram, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FillParallelogram, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(FillParallelogram, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(FillParallelogram, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"FillParallelogram", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;DDDDDD)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(FillParallelogram, FillParallelogram$, void, $SunGraphics2D*, $SurfaceData*, double, double, double, double, double, double)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/FillParallelogram;", nullptr, $PUBLIC | $STATIC, $staticMethod(FillParallelogram, locate, FillParallelogram*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillParallelogram, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.FillParallelogram$TraceFillParallelogram", "sun.java2d.loops.FillParallelogram", "TraceFillParallelogram", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.FillParallelogram",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.FillParallelogram$TraceFillParallelogram"
	};
	$loadClass(FillParallelogram, name, initialize, &classInfo$$, FillParallelogram::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FillParallelogram);
	});
	return class$;
}

$Class* FillParallelogram::class$ = nullptr;

		} // loops
	} // java2d
} // sun