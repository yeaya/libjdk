#include <sun/java2d/loops/FillRect$TraceFillRect.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillRect = ::sun::java2d::loops::FillRect;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void FillRect$TraceFillRect::init$($FillRect* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$FillRect::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* FillRect$TraceFillRect::traceWrap() {
	return this;
}

void FillRect$TraceFillRect::FillRect$($SunGraphics2D* sg2d, $SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) {
	tracePrimitive(this->target);
	$nc(this->target)->FillRect$(sg2d, dest, x, y, w, h);
}

FillRect$TraceFillRect::FillRect$TraceFillRect() {
}

$Class* FillRect$TraceFillRect::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/FillRect;", nullptr, 0, $field(FillRect$TraceFillRect, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/FillRect;)V", nullptr, $PUBLIC, $method(FillRect$TraceFillRect, init$, void, $FillRect*)},
		{"FillRect", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC, $virtualMethod(FillRect$TraceFillRect, FillRect$, void, $SunGraphics2D*, $SurfaceData*, int32_t, int32_t, int32_t, int32_t)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillRect$TraceFillRect, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.FillRect$TraceFillRect", "sun.java2d.loops.FillRect", "TraceFillRect", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.FillRect$TraceFillRect",
		"sun.java2d.loops.FillRect",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.FillRect"
	};
	$loadClass(FillRect$TraceFillRect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FillRect$TraceFillRect);
	});
	return class$;
}

$Class* FillRect$TraceFillRect::class$ = nullptr;

		} // loops
	} // java2d
} // sun