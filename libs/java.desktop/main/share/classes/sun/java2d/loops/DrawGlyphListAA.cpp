#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListAA$General.h>
#include <sun/java2d/loops/DrawGlyphListAA$TraceDrawGlyphListAA.h>
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
using $DrawGlyphListAA$General = ::sun::java2d::loops::DrawGlyphListAA$General;
using $DrawGlyphListAA$TraceDrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA$TraceDrawGlyphListAA;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawGlyphListAA::methodSignature = nullptr;
int32_t DrawGlyphListAA::primTypeID = 0;

DrawGlyphListAA* DrawGlyphListAA::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphListAA);
	return $cast(DrawGlyphListAA, $GraphicsPrimitiveMgr::locate(DrawGlyphListAA::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphListAA::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphListAA::methodSignature, DrawGlyphListAA::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListAA::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawGlyphListAA::methodSignature, DrawGlyphListAA::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphListAA::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
	$prepareNative(DrawGlyphListAA, void, $SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	$invokeNative(sg2d, dest, srcData, fromGlyph, toGlyph);
	$finishNative();
}

$GraphicsPrimitive* DrawGlyphListAA::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($DrawGlyphListAA$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* DrawGlyphListAA::traceWrap() {
	return $new($DrawGlyphListAA$TraceDrawGlyphListAA, this);
}

void DrawGlyphListAA::clinit$($Class* clazz) {
	$assignStatic(DrawGlyphListAA::methodSignature, "DrawGlyphListAA(...)"_s->toString());
	DrawGlyphListAA::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(DrawGlyphListAA, nullptr, nullptr, nullptr));
	}
}

DrawGlyphListAA::DrawGlyphListAA() {
}

$Class* DrawGlyphListAA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListAA, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphListAA, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawGlyphListAA, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawGlyphListAA, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawGlyphListAA, DrawGlyphListAA$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphListAA;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawGlyphListAA, locate, DrawGlyphListAA*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED, $virtualMethod(DrawGlyphListAA, makePrimitive, $GraphicsPrimitive*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListAA, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA", "sun.java2d.loops.DrawGlyphListAA", "TraceDrawGlyphListAA", $PRIVATE | $STATIC},
		{"sun.java2d.loops.DrawGlyphListAA$General", "sun.java2d.loops.DrawGlyphListAA", "General", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawGlyphListAA",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA,sun.java2d.loops.DrawGlyphListAA$General"
	};
	$loadClass(DrawGlyphListAA, name, initialize, &classInfo$$, DrawGlyphListAA::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphListAA);
	});
	return class$;
}

$Class* DrawGlyphListAA::class$ = nullptr;

		} // loops
	} // java2d
} // sun