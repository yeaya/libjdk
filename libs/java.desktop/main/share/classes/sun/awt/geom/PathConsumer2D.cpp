#include <sun/awt/geom/PathConsumer2D.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace geom {

$MethodInfo _PathConsumer2D_MethodInfo_[] = {
	{"closePath", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, closePath, void)},
	{"curveTo", "(FFFFFF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, curveTo, void, float, float, float, float, float, float)},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, getNativeConsumer, int64_t)},
	{"lineTo", "(FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, lineTo, void, float, float)},
	{"moveTo", "(FF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, moveTo, void, float, float)},
	{"pathDone", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, pathDone, void)},
	{"quadTo", "(FFFF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PathConsumer2D, quadTo, void, float, float, float, float)},
	{}
};

$ClassInfo _PathConsumer2D_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.geom.PathConsumer2D",
	nullptr,
	nullptr,
	nullptr,
	_PathConsumer2D_MethodInfo_
};

$Object* allocate$PathConsumer2D($Class* clazz) {
	return $of($alloc(PathConsumer2D));
}

$Class* PathConsumer2D::load$($String* name, bool initialize) {
	$loadClass(PathConsumer2D, name, initialize, &_PathConsumer2D_ClassInfo_, allocate$PathConsumer2D);
	return class$;
}

$Class* PathConsumer2D::class$ = nullptr;

		} // geom
	} // awt
} // sun