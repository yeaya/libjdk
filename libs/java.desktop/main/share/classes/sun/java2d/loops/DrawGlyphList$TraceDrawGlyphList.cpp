#include <sun/java2d/loops/DrawGlyphList$TraceDrawGlyphList.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList.h>
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
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void DrawGlyphList$TraceDrawGlyphList::init$($DrawGlyphList* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$DrawGlyphList::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* DrawGlyphList$TraceDrawGlyphList::traceWrap() {
	return this;
}

void DrawGlyphList$TraceDrawGlyphList::DrawGlyphList$($SunGraphics2D* sg2d, $SurfaceData* dest, $GlyphList* glyphs, int32_t fromGlyph, int32_t toGlyph) {
	tracePrimitive(this->target);
	$nc(this->target)->DrawGlyphList$(sg2d, dest, glyphs, fromGlyph, toGlyph);
}

DrawGlyphList$TraceDrawGlyphList::DrawGlyphList$TraceDrawGlyphList() {
}

$Class* DrawGlyphList$TraceDrawGlyphList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/DrawGlyphList;", nullptr, 0, $field(DrawGlyphList$TraceDrawGlyphList, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/DrawGlyphList;)V", nullptr, $PUBLIC, $method(DrawGlyphList$TraceDrawGlyphList, init$, void, $DrawGlyphList*)},
		{"DrawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/font/GlyphList;II)V", nullptr, $PUBLIC, $virtualMethod(DrawGlyphList$TraceDrawGlyphList, DrawGlyphList$, void, $SunGraphics2D*, $SurfaceData*, $GlyphList*, int32_t, int32_t)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(DrawGlyphList$TraceDrawGlyphList, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList", "sun.java2d.loops.DrawGlyphList", "TraceDrawGlyphList", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.DrawGlyphList$TraceDrawGlyphList",
		"sun.java2d.loops.DrawGlyphList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.DrawGlyphList"
	};
	$loadClass(DrawGlyphList$TraceDrawGlyphList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DrawGlyphList$TraceDrawGlyphList);
	});
	return class$;
}

$Class* DrawGlyphList$TraceDrawGlyphList::class$ = nullptr;

		} // loops
	} // java2d
} // sun