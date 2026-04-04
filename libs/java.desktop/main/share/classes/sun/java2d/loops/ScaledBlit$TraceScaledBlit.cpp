#include <sun/java2d/loops/ScaledBlit$TraceScaledBlit.h>
#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

void ScaledBlit$TraceScaledBlit::init$($ScaledBlit* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$ScaledBlit::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* ScaledBlit$TraceScaledBlit::traceWrap() {
	return this;
}

void ScaledBlit$TraceScaledBlit::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	tracePrimitive(this->target);
	$nc(this->target)->Scale(src, dst, comp, clip, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
}

ScaledBlit$TraceScaledBlit::ScaledBlit$TraceScaledBlit() {
}

$Class* ScaledBlit$TraceScaledBlit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/ScaledBlit;", nullptr, 0, $field(ScaledBlit$TraceScaledBlit, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/ScaledBlit;)V", nullptr, $PUBLIC, $method(ScaledBlit$TraceScaledBlit, init$, void, $ScaledBlit*)},
		{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC, $virtualMethod(ScaledBlit$TraceScaledBlit, Scale, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, int32_t, int32_t, int32_t, int32_t, double, double, double, double)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(ScaledBlit$TraceScaledBlit, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.ScaledBlit$TraceScaledBlit", "sun.java2d.loops.ScaledBlit", "TraceScaledBlit", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.ScaledBlit$TraceScaledBlit",
		"sun.java2d.loops.ScaledBlit",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.ScaledBlit"
	};
	$loadClass(ScaledBlit$TraceScaledBlit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScaledBlit$TraceScaledBlit);
	});
	return class$;
}

$Class* ScaledBlit$TraceScaledBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun