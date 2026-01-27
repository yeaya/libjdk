#include <sun/java2d/loops/FillSpans$TraceFillSpans.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillSpans = ::sun::java2d::loops::FillSpans;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillSpans$TraceFillSpans_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/FillSpans;", nullptr, 0, $field(FillSpans$TraceFillSpans, target)},
	{}
};

$MethodInfo _FillSpans$TraceFillSpans_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/FillSpans;)V", nullptr, $PUBLIC, $method(FillSpans$TraceFillSpans, init$, void, $FillSpans*)},
	{"FillSpans", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/SpanIterator;)V", nullptr, $PUBLIC, $virtualMethod(FillSpans$TraceFillSpans, FillSpans$, void, $SunGraphics2D*, $SurfaceData*, $SpanIterator*)},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(FillSpans$TraceFillSpans, traceWrap, $GraphicsPrimitive*)},
	{}
};

$InnerClassInfo _FillSpans$TraceFillSpans_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillSpans$TraceFillSpans", "sun.java2d.loops.FillSpans", "TraceFillSpans", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillSpans$TraceFillSpans_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.FillSpans$TraceFillSpans",
	"sun.java2d.loops.FillSpans",
	nullptr,
	_FillSpans$TraceFillSpans_FieldInfo_,
	_FillSpans$TraceFillSpans_MethodInfo_,
	nullptr,
	nullptr,
	_FillSpans$TraceFillSpans_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillSpans"
};

$Object* allocate$FillSpans$TraceFillSpans($Class* clazz) {
	return $of($alloc(FillSpans$TraceFillSpans));
}

void FillSpans$TraceFillSpans::init$($FillSpans* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$FillSpans::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* FillSpans$TraceFillSpans::traceWrap() {
	return this;
}

void FillSpans$TraceFillSpans::FillSpans$($SunGraphics2D* sg2d, $SurfaceData* dest, $SpanIterator* si) {
	tracePrimitive(this->target);
	$nc(this->target)->FillSpans$(sg2d, dest, si);
}

FillSpans$TraceFillSpans::FillSpans$TraceFillSpans() {
}

$Class* FillSpans$TraceFillSpans::load$($String* name, bool initialize) {
	$loadClass(FillSpans$TraceFillSpans, name, initialize, &_FillSpans$TraceFillSpans_ClassInfo_, allocate$FillSpans$TraceFillSpans);
	return class$;
}

$Class* FillSpans$TraceFillSpans::class$ = nullptr;

		} // loops
	} // java2d
} // sun