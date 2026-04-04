#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$Class* DPathConsumer2D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"closePath", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, closePath, void)},
		{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, curveTo, void, double, double, double, double, double, double)},
		{"getNativeConsumer", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, getNativeConsumer, int64_t)},
		{"lineTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, lineTo, void, double, double)},
		{"moveTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, moveTo, void, double, double)},
		{"pathDone", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, pathDone, void)},
		{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DPathConsumer2D, quadTo, void, double, double, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.marlin.DPathConsumer2D",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DPathConsumer2D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DPathConsumer2D);
	});
	return class$;
}

$Class* DPathConsumer2D::class$ = nullptr;

		} // marlin
	} // java2d
} // sun