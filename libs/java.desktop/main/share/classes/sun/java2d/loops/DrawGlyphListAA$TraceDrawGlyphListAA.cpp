#include <sun/java2d/loops/DrawGlyphListAA$TraceDrawGlyphListAA.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
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
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void DrawGlyphListAA$TraceDrawGlyphListAA::init$($DrawGlyphListAA* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphListAA::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphListAA$TraceDrawGlyphListAA::traceWrap() {
	return this;
}

void DrawGlyphListAA$TraceDrawGlyphListAA::DrawGlyphListAA$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphListAA$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphListAA$TraceDrawGlyphListAA::DrawGlyphListAA$TraceDrawGlyphListAA() {
}

$Class* DrawGlyphListAA$TraceDrawGlyphListAA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/DrawGlyphListAA;", nullptr, 0, $field(DrawGlyphListAA$TraceDrawGlyphListAA, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/DrawGlyphListAA;)V", nullptr, $PUBLIC, $method(DrawGlyphListAA$TraceDrawGlyphListAA, init$, void, $DrawGlyphListAA*)},
		{"DrawGlyphListAA", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListAA$TraceDrawGlyphListAA, DrawGlyphListAA$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListAA$TraceDrawGlyphListAA, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA", "sun.java2d.loops.DrawGlyphListAA", "TraceDrawGlyphListAA", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.DrawGlyphListAA$TraceDrawGlyphListAA",
		"sun.java2d.loops.DrawGlyphListAA",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphListAA"
	};
	$loadClass(DrawGlyphListAA$TraceDrawGlyphListAA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphListAA$TraceDrawGlyphListAA);
	});
	return class$;
}

$Class* DrawGlyphListAA$TraceDrawGlyphListAA::class$ = nullptr;

		} // loops
	} // java2d
} // sun