#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawRect$TraceDrawRect.h>
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
using $DrawRect$TraceDrawRect = ::sun::java2d::loops::DrawRect$TraceDrawRect;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawRect::methodSignature = nullptr;
int32_t DrawRect::primTypeID = 0;

DrawRect* DrawRect::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawRect);
	return $cast(DrawRect, $GraphicsPrimitiveMgr::locate(DrawRect::primTypeID, srctype, comptype, dsttype));
}

void DrawRect::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawRect::methodSignature, DrawRect::primTypeID, srctype, comptype, dsttype);
}

void DrawRect::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawRect::methodSignature, DrawRect::primTypeID, srctype, comptype, dsttype);
}

void DrawRect::DrawRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t w, int32_t h) {
	$prepareNative(DrawRect, void, $SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x1, int32_t y1, int32_t w, int32_t h);
	$invokeNative(sg2d, dest, x1, y1, w, h);
	$finishNative();
}

$GraphicsPrimitive* DrawRect::traceWrap() {
	return $new($DrawRect$TraceDrawRect, this);
}

void DrawRect::clinit$($Class* clazz) {
	$assignStatic(DrawRect::methodSignature, "DrawRect(...)"_s->toString());
	DrawRect::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawRect::DrawRect() {
}

$Class* DrawRect::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawRect, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawRect, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawRect, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawRect, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawRect, DrawRect$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawRect;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawRect, locate, DrawRect*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawRect, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawRect$TraceDrawRect", "sun.java2d.loops.DrawRect", "TraceDrawRect", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawRect",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawRect$TraceDrawRect"
	};
	$loadClass(DrawRect, name, initialize, &classInfo$$, DrawRect::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawRect);
	});
	return class$;
}

$Class* DrawRect::class$ = nullptr;

		} // loops
	} // java2d
} // sun