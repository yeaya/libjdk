#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/loops/DrawParallelogram.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

int32_t RenderLoops::primTypeID = 0;

void RenderLoops::init$() {
}

void RenderLoops::clinit$($Class* clazz) {
	RenderLoops::primTypeID = $GraphicsPrimitive::makePrimTypeID();
}

RenderLoops::RenderLoops() {
}

$Class* RenderLoops::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderLoops, primTypeID)},
		{"drawLineLoop", "Lsun/java2d/loops/DrawLine;", nullptr, $PUBLIC, $field(RenderLoops, drawLineLoop)},
		{"fillRectLoop", "Lsun/java2d/loops/FillRect;", nullptr, $PUBLIC, $field(RenderLoops, fillRectLoop)},
		{"drawRectLoop", "Lsun/java2d/loops/DrawRect;", nullptr, $PUBLIC, $field(RenderLoops, drawRectLoop)},
		{"drawPolygonsLoop", "Lsun/java2d/loops/DrawPolygons;", nullptr, $PUBLIC, $field(RenderLoops, drawPolygonsLoop)},
		{"drawPathLoop", "Lsun/java2d/loops/DrawPath;", nullptr, $PUBLIC, $field(RenderLoops, drawPathLoop)},
		{"fillPathLoop", "Lsun/java2d/loops/FillPath;", nullptr, $PUBLIC, $field(RenderLoops, fillPathLoop)},
		{"fillSpansLoop", "Lsun/java2d/loops/FillSpans;", nullptr, $PUBLIC, $field(RenderLoops, fillSpansLoop)},
		{"fillParallelogramLoop", "Lsun/java2d/loops/FillParallelogram;", nullptr, $PUBLIC, $field(RenderLoops, fillParallelogramLoop)},
		{"drawParallelogramLoop", "Lsun/java2d/loops/DrawParallelogram;", nullptr, $PUBLIC, $field(RenderLoops, drawParallelogramLoop)},
		{"drawGlyphListLoop", "Lsun/java2d/loops/DrawGlyphList;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListLoop)},
		{"drawGlyphListAALoop", "Lsun/java2d/loops/DrawGlyphListAA;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListAALoop)},
		{"drawGlyphListLCDLoop", "Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListLCDLoop)},
		{"drawGlyphListColorLoop", "Lsun/java2d/loops/DrawGlyphListColor;", nullptr, $PUBLIC, $field(RenderLoops, drawGlyphListColorLoop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RenderLoops, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.RenderLoops",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RenderLoops, name, initialize, &classInfo$$, RenderLoops::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RenderLoops);
	});
	return class$;
}

$Class* RenderLoops::class$ = nullptr;

		} // loops
	} // java2d
} // sun