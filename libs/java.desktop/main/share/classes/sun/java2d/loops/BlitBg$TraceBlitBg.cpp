#include <sun/java2d/loops/BlitBg$TraceBlitBg.h>
#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

void BlitBg$TraceBlitBg::init$($BlitBg* target) {
	$useLocalObjectStack();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$BlitBg::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* BlitBg$TraceBlitBg::traceWrap() {
	return this;
}

void BlitBg$TraceBlitBg::BlitBg$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	tracePrimitive(this->target);
	$nc(this->target)->BlitBg$(src, dst, comp, clip, bgColor, srcx, srcy, dstx, dsty, width, height);
}

BlitBg$TraceBlitBg::BlitBg$TraceBlitBg() {
}

$Class* BlitBg$TraceBlitBg::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Lsun/java2d/loops/BlitBg;", nullptr, 0, $field(BlitBg$TraceBlitBg, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/loops/BlitBg;)V", nullptr, $PUBLIC, $method(BlitBg$TraceBlitBg, init$, void, $BlitBg*)},
		{"BlitBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIIII)V", nullptr, $PUBLIC, $virtualMethod(BlitBg$TraceBlitBg, BlitBg$, void, $SurfaceData*, $SurfaceData*, $Composite*, $Region*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(BlitBg$TraceBlitBg, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.BlitBg$TraceBlitBg", "sun.java2d.loops.BlitBg", "TraceBlitBg", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.loops.BlitBg$TraceBlitBg",
		"sun.java2d.loops.BlitBg",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.loops.BlitBg"
	};
	$loadClass(BlitBg$TraceBlitBg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BlitBg$TraceBlitBg);
	});
	return class$;
}

$Class* BlitBg$TraceBlitBg::class$ = nullptr;

		} // loops
	} // java2d
} // sun