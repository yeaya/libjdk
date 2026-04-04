#include <sun/java2d/loops/DrawGlyphListLCD$TraceDrawGlyphListLCD.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
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
using $DrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void DrawGlyphListLCD$TraceDrawGlyphListLCD::init$($DrawGlyphListLCD* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphListLCD::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphListLCD$TraceDrawGlyphListLCD::traceWrap() {
	return this;
}

void DrawGlyphListLCD$TraceDrawGlyphListLCD::DrawGlyphListLCD$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphListLCD$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphListLCD$TraceDrawGlyphListLCD::DrawGlyphListLCD$TraceDrawGlyphListLCD() {
}

$Class* DrawGlyphListLCD$TraceDrawGlyphListLCD::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/DrawGlyphListLCD;", nullptr, 0, $field(DrawGlyphListLCD$TraceDrawGlyphListLCD, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/DrawGlyphListLCD;)V", nullptr, $PUBLIC, $method(DrawGlyphListLCD$TraceDrawGlyphListLCD, init$, void, $DrawGlyphListLCD*)},
		{"DrawGlyphListLCD", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListLCD$TraceDrawGlyphListLCD, DrawGlyphListLCD$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphListLCD$TraceDrawGlyphListLCD, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD", "sun.java2d.loops.DrawGlyphListLCD", "TraceDrawGlyphListLCD", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.DrawGlyphListLCD$TraceDrawGlyphListLCD",
		"sun.java2d.loops.DrawGlyphListLCD",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphListLCD"
	};
	$loadClass(DrawGlyphListLCD$TraceDrawGlyphListLCD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphListLCD$TraceDrawGlyphListLCD);
	});
	return class$;
}

$Class* DrawGlyphListLCD$TraceDrawGlyphListLCD::class$ = nullptr;

		} // loops
	} // java2d
} // sun