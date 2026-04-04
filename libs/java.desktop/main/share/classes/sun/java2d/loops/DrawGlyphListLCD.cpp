#include <sun/java2d/loops/DrawGlyphListLCD.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListLCD$TraceDrawGlyphListLCD.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphListLCD$TraceDrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD$TraceDrawGlyphListLCD;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawGlyphListLCD::methodSignature = nullptr;
int32_t DrawGlyphListLCD::primTypeID = 0;

DrawGlyphListLCD* DrawGlyphListLCD::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphListLCD);
	return $cast(DrawGlyphListLCD, $GraphicsPrimitiveMgr::locate(DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphListLCD::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphListLCD::methodSignature, DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListLCD::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawGlyphListLCD::methodSignature, DrawGlyphListLCD::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListLCD::DrawGlyphListLCD$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
	$prepareNative(DrawGlyphListLCD, void, $SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	$invokeNative(sg2d, dest, srcData, fromGlyph, toGlyph);
	$finishNative();
}

$GraphicsPrimitive* DrawGlyphListLCD::traceWrap() {
	return $new($DrawGlyphListLCD$TraceDrawGlyphListLCD, this);
}

void DrawGlyphListLCD::clinit$($Class* clazz) {
	$assignStatic(DrawGlyphListLCD::methodSignature, "DrawGlyphListLCD(...)"_s->toString());
	DrawGlyphListLCD::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

DrawGlyphListLCD::DrawGlyphListLCD() {
}

$Class* DrawGlyphListLCD::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListLCD, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListLCD, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawGlyphListLCD, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawGlyphListLCD, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawGlyphListLCD", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawGlyphListLCD, DrawGlyphListLCD$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawGlyphListLCD, locate, DrawGlyphListLCD*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListLCD, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD", "sun.java2d.loops.DrawGlyphListLCD", "TraceDrawGlyphListLCD", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawGlyphListLCD",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD"
	};
	$loadClass(DrawGlyphListLCD, name, initialize, &classInfo$$, DrawGlyphListLCD::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphListLCD);
	});
	return class$;
}

$Class* DrawGlyphListLCD::class$ = nullptr;

		} // loops
	} // java2d
} // sun