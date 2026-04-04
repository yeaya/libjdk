#include <sun/java2d/xr/XRPaints$XRRadialGradient.h>
#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSurfaceData$XRInternalSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $Paint = ::java::awt::Paint;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRSurfaceData$XRInternalSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRInternalSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

void XRPaints$XRRadialGradient::init$() {
	$XRPaints::init$();
}

bool XRPaints$XRRadialGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalObjectStack();
	$var($RadialGradientPaint, grad, $cast($RadialGradientPaint, $nc(sg2d)->paint));
	$init($MultipleGradientPaint$ColorSpaceType);
	bool var$3 = $nc(grad)->getColorSpace() == $MultipleGradientPaint$ColorSpaceType::SRGB;
	bool var$2 = var$3 && $$nc(grad->getFocusPoint())->equals($(grad->getCenterPoint()));
	bool var$1 = var$2 && $XRUtils::isPointCoordInShortRange($(grad->getCenterPoint()));
	bool var$0 = var$1 && grad->getRadius() <= $Short::MAX_VALUE;
	return var$0 && $$nc(grad->getTransform())->getDeterminant() != 0.0;
}

void XRPaints$XRRadialGradient::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalObjectStack();
	$var($RadialGradientPaint, paint, $cast($RadialGradientPaint, pt));
	$var($ColorArray, colors, $nc(paint)->getColors());
	$var($Point2D, center, paint->getCenterPoint());
	float cx = (float)$nc(center)->getX();
	float cy = (float)center->getY();
	$var($AffineTransform, at, paint->getTransform());
	int32_t repeat = $XRUtils::getRepeatForCycleMethod($(paint->getCycleMethod()));
	$var($floats, fractions, paint->getFractions());
	$var($ints, pixels, convertToIntArgbPixels(colors));
	float radius = paint->getRadius();
	try {
		$nc(at)->invert();
	} catch ($NoninvertibleTransformException& ex) {
		ex->printStackTrace();
	}
	$init($XRPaints);
	$var($XRBackend, con, $nc($XRPaints::xrCompMan)->getBackend());
	int32_t gradient = $nc(con)->createRadialGradient(cx, cy, 0, radius, fractions, pixels, repeat);
	$var($XRSurfaceData$XRInternalSurfaceData, x11sd, $new($XRSurfaceData$XRInternalSurfaceData, con, gradient));
	x11sd->setStaticSrcTx(at);
	$nc($XRPaints::xrCompMan)->setGradientPaint(x11sd);
}

XRPaints$XRRadialGradient::XRPaints$XRRadialGradient() {
}

$Class* XRPaints$XRRadialGradient::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XRPaints$XRRadialGradient, init$, void)},
		{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0, $virtualMethod(XRPaints$XRRadialGradient, isPaintValid, bool, $SunGraphics2D*)},
		{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0, $virtualMethod(XRPaints$XRRadialGradient, setXRPaint, void, $SunGraphics2D*, $Paint*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.xr.XRPaints$XRRadialGradient", "sun.java2d.xr.XRPaints", "XRRadialGradient", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.xr.XRPaints$XRRadialGradient",
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
	$loadClass(XRPaints$XRRadialGradient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XRPaints$XRRadialGradient);
	});
	return class$;
}

$Class* XRPaints$XRRadialGradient::class$ = nullptr;

		} // xr
	} // java2d
} // sun