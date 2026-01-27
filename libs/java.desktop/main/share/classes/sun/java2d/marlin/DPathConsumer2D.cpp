#include <sun/java2d/marlin/DPathConsumer2D.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DPathConsumer2D_MethodInfo_[] = {
	{"closePath", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, closePath, void)},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, curveTo, void, double, double, double, double, double, double)},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, getNativeConsumer, int64_t)},
	{"lineTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, lineTo, void, double, double)},
	{"moveTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, moveTo, void, double, double)},
	{"pathDone", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, pathDone, void)},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, quadTo, void, double, double, double, double)},
	{}
};

$ClassInfo _DPathConsumer2D_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.marlin.DPathConsumer2D",
	nullptr,
	nullptr,
	nullptr,
	_DPathConsumer2D_MethodInfo_
};

$Object* allocate$DPathConsumer2D($Class* clazz) {
	return $of($alloc(DPathConsumer2D));
}

$Class* DPathConsumer2D::load$($String* name, bool initialize) {
	$loadClass(DPathConsumer2D, name, initialize, &_DPathConsumer2D_ClassInfo_, allocate$DPathConsumer2D);
	return class$;
}

$Class* DPathConsumer2D::class$ = nullptr;

		} // marlin
	} // java2d
} // sun