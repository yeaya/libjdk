#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawLine$TraceDrawLine.h>
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
using $DrawLine$TraceDrawLine = ::sun::java2d::loops::DrawLine$TraceDrawLine;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawLine::methodSignature = nullptr;
int32_t DrawLine::primTypeID = 0;

DrawLine* DrawLine::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawLine);
	return $cast(DrawLine, $GraphicsPrimitiveMgr::locate(DrawLine::primTypeID, srctype, comptype, dsttype));
}

void DrawLine::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawLine::methodSignature, DrawLine::primTypeID, srctype, comptype, dsttype);
}

void DrawLine::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawLine::methodSignature, DrawLine::primTypeID, srctype, comptype, dsttype);
}

void DrawLine::DrawLine$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$prepareNative(DrawLine, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	$invokeNative(sg2d, dest, x1, y1, x2, y2);
	$finishNative();
}

$GraphicsPrimitive* DrawLine::traceWrap() {
	return $new($DrawLine$TraceDrawLine, this);
}

void DrawLine::clinit$($Class* clazz) {
	$assignStatic(DrawLine::methodSignature, "DrawLine(...)"_s->toString());
	DrawLine::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawLine::DrawLine() {
}

$Class* DrawLine::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawLine, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawLine, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawLine, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawLine, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawLine", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawLine, DrawLine$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawLine;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawLine, locate, DrawLine*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawLine, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawLine$TraceDrawLine", "sun.java2d.loops.DrawLine", "TraceDrawLine", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawLine",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawLine$TraceDrawLine"
	};
	$loadClass(DrawLine, name, initialize, &classInfo$$, DrawLine::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawLine);
	});
	return class$;
}

$Class* DrawLine::class$ = nullptr;

		} // loops
	} // java2d
} // sun