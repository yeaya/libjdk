#include <sun/awt/geom/PathConsumer2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace geom {

$Class* PathConsumer2D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"closePath", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, closePath, void)},
		{"curveTo", "(FFFFFF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, curveTo, void, float, float, float, float, float, float)},
		{"getNativeConsumer", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, getNativeConsumer, int64_t)},
		{"lineTo", "(FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, lineTo, void, float, float)},
		{"moveTo", "(FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, moveTo, void, float, float)},
		{"pathDone", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, pathDone, void)},
		{"quadTo", "(FFFF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, quadTo, void, float, float, float, float)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.geom.PathConsumer2D",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PathConsumer2D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PathConsumer2D);
	});
	return class$;
}

$Class* PathConsumer2D::class$ = nullptr;

		} // geom
	} // awt
} // sun