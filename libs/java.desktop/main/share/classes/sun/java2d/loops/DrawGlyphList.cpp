#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList$General.h>
#include <sun/java2d/loops/DrawGlyphList$TraceDrawGlyphList.h>
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
using $DrawGlyphList$General = ::sun::java2d::loops::DrawGlyphList$General;
using $DrawGlyphList$TraceDrawGlyphList = ::sun::java2d::loops::DrawGlyphList$TraceDrawGlyphList;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$String* DrawGlyphList::methodSignature = nullptr;
int32_t DrawGlyphList::primTypeID = 0;

DrawGlyphList* DrawGlyphList::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(DrawGlyphList);
	return $cast(DrawGlyphList, $GraphicsPrimitiveMgr::locate(DrawGlyphList::primTypeID, srctype, comptype, dsttype));
}

void DrawGlyphList::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(DrawGlyphList::methodSignature, DrawGlyphList::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphList::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, DrawGlyphList::methodSignature, DrawGlyphList::primTypeID, srctype, comptype, dsttype);
}

void DrawGlyphList::DrawGlyphList$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph) {
	$prepareNative(DrawGlyphList, void, $SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* srcData, int32_t fromGlyph, int32_t toGlyph);
	$invokeNative(sg2d, dest, srcData, fromGlyph, toGlyph);
	$finishNative();
}

$GraphicsPrimitive* DrawGlyphList::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	return $new($DrawGlyphList$General, srctype, comptype, dsttype);
}

$GraphicsPrimitive* DrawGlyphList::traceWrap() {
	return $new($DrawGlyphList$TraceDrawGlyphList, this);
}

void DrawGlyphList::clinit$($Class* clazz) {
	$assignStatic(DrawGlyphList::methodSignature, "DrawGlyphList(...)"_s->toString());
	DrawGlyphList::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	{
		$GraphicsPrimitiveMgr::registerGeneral($$new(DrawGlyphList, nullptr, nullptr, nullptr));
	}
}

DrawGlyphList::DrawGlyphList() {
}

$Class* DrawGlyphList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphList, methodSignature)},
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DrawGlyphList, primTypeID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(DrawGlyphList, init$, void, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(DrawGlyphList, init$, void, int64_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"DrawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(DrawGlyphList, DrawGlyphList$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/DrawGlyphList;", nullptr, $PUBLIC | $STATIC, $staticMethod(DrawGlyphList, locate, DrawGlyphList*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED, $virtualMethod(DrawGlyphList, makePrimitive, $GraphicsPrimitive*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphList, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList", "sun.java2d.loops.DrawGlyphList", "TraceDrawGlyphList", $PRIVATE | $STATIC},
		{"sun.java2d.loops.DrawGlyphList$General", "sun.java2d.loops.DrawGlyphList", "General", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.DrawGlyphList",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList,sun.java2d.loops.DrawGlyphList$General"
	};
	$loadClass(DrawGlyphList, name, initialize, &classInfo$$, DrawGlyphList::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphList);
	});
	return class$;
}

$Class* DrawGlyphList::class$ = nullptr;

		} // loops
	} // java2d
} // sun