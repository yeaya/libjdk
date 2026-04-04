#include <sun/java2d/loops/DrawPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawPath$TraceDrawPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawPath$TraceDrawPath = ::sun::java2d::loops::DrawPath$TraceDrawPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawPath::methodSignature = nullptr;
int32_t DrawPath::primTypeID = 0;

DrawPath* DrawPath::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawPath);
	return $cast(DrawPath, $GraphicsPrimitiveMgr::locate(DrawPath::primTypeID, srctype, comptype, dsttype));
}

void DrawPath::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawPath::methodSignature, DrawPath::primTypeID, srctype, comptype, dsttype);
}

void DrawPath::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawPath::methodSignature, DrawPath::primTypeID, srctype, comptype, dsttype);
}

void DrawPath::DrawPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	$prepareNative(DrawPath, void, $SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df);
	$invokeNative(sg2d, sData, transX, transY, p2df);
	$finishNative();
}

$GraphicsPrimitive* DrawPath::traceWrap() {
	return $new($DrawPath$TraceDrawPath, this);
}

void DrawPath::clinit$($Class* clazz) {
	$assignStatic(DrawPath::methodSignature, "DrawPath(...)"_s->toString());
	DrawPath::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawPath::DrawPath() {
}

$Class* DrawPath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPath, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawPath, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawPath, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawPath, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawPath, DrawPath$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, $Path2D$Float*)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawPath;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawPath, locate, DrawPath*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawPath, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawPath$TraceDrawPath", "sun.java2d.loops.DrawPath", "TraceDrawPath", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawPath",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawPath$TraceDrawPath"
	};
	$loadClass(DrawPath, name, initialize, &classInfo$$, DrawPath::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawPath);
	});
	return class$;
}

$Class* DrawPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun