#include <sun/java2d/xr/XRPaints$XRGradient.h>
#include <java/awt/Color.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/Point2D.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $GradientPaint = ::java::awt::GradientPaint;
using $Paint = ::java::awt::Paint;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRSurfaceData$XRInternalSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRInternalSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

void XRPaints$XRGradient::init$() {
	$XRPaints::init$();
}

bool XRPaints$XRGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($GradientPaint, paint, $cast($GradientPaint, $nc(sg2d)->paint));
	bool var$0 = $XRUtils::isPointCoordInShortRange($($nc(paint)->getPoint1()));
	return var$0 && $XRUtils::isPointCoordInShortRange($(paint->getPoint2()));
}

void XRPaints$XRGradient::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalObjectStack();
	$var($GradientPaint, paint, $cast($GradientPaint, pt));
	int32_t repeat = $nc(paint)->isCyclic() ? $XRUtils::RepeatReflect : $XRUtils::RepeatPad;
	$var($floats, fractions, $new($floats, {
		0,
		1
	}));
	$var($ints, pixels, convertToIntArgbPixels($$new($ColorArray, {
		$(paint->getColor1()),
		$(paint->getColor2())
	})));
	$var($Point2D, pt1, paint->getPoint1());
	$var($Point2D, pt2, paint->getPoint2());
	$init($XRPaints);
	$var($XRBackend, con, $nc($XRPaints::xrCompMan)->getBackend());
	int32_t gradient = $nc(con)->createLinearGradient(pt1, pt2, fractions, pixels, repeat);
	$nc($XRPaints::xrCompMan)->setGradientPaint($$new($XRSurfaceData$XRInternalSurfaceData, con, gradient));
}

XRPaints$XRGradient::XRPaints$XRGradient() {
}

$Class* XRPaints$XRGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XRPaints$XRGradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(XRPaints$XRGradient, isPaintValid, bool, $SunGraphics2D*)},
		{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0, $virtualMethod(XRPaints$XRGradient, setXRPaint, void, $SunGraphics2D*, $Paint*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.xr.XRPaints$XRGradient", "sun.java2d.xr.XRPaints", "XRGradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.xr.XRPaints$XRGradient",
		"sun.java2d.xr.XRPaints",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.xr.XRPaints"
	};
	$loadClass(XRPaints$XRGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRPaints$XRGradient);
	});
	return class$;
}

$Class* XRPaints$XRGradient::class$ = nullptr;

		} // xr
	} // java2d
} // sun