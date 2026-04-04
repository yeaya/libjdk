#include <java/awt/RadialGradientPaint.h>
#include <java/awt/Color.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/RadialGradientPaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

#undef NO_CYCLE
#undef SRGB

using $ColorArray = $Array<::java::awt::Color>;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $PaintContext = ::java::awt::PaintContext;
using $RadialGradientPaintContext = ::java::awt::RadialGradientPaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {

void RadialGradientPaint::init$(float cx, float cy, float radius, $floats* fractions, $ColorArray* colors) {
	$init($MultipleGradientPaint$CycleMethod);
	RadialGradientPaint::init$(cx, cy, radius, cx, cy, fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $floats* fractions, $ColorArray* colors) {
	$init($MultipleGradientPaint$CycleMethod);
	RadialGradientPaint::init$(center, radius, center, fractions, colors, $MultipleGradientPaint$CycleMethod::NO_CYCLE);
}

void RadialGradientPaint::init$(float cx, float cy, float radius, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	RadialGradientPaint::init$(cx, cy, radius, cx, cy, fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	RadialGradientPaint::init$(center, radius, center, fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$(float cx, float cy, float radius, float fx, float fy, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$useLocalObjectStack();
	$var($Point2D, var$0, $new($Point2D$Float, cx, cy));
	RadialGradientPaint::init$(var$0, radius, $$new($Point2D$Float, fx, fy), fractions, colors, cycleMethod);
}

void RadialGradientPaint::init$($Point2D* center, float radius, $Point2D* focus, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$init($MultipleGradientPaint$ColorSpaceType);
	RadialGradientPaint::init$(center, radius, focus, fractions, colors, cycleMethod, $MultipleGradientPaint$ColorSpaceType::SRGB, $$new($AffineTransform));
}

void RadialGradientPaint::init$($Point2D* center, float radius, $Point2D* focus, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod, $MultipleGradientPaint$ColorSpaceType* colorSpace, $AffineTransform* gradientTransform) {
	$MultipleGradientPaint::init$(fractions, colors, cycleMethod, colorSpace, gradientTransform);
	if (center == nullptr) {
		$throwNew($NullPointerException, "Center point must be non-null"_s);
	}
	if (focus == nullptr) {
		$throwNew($NullPointerException, "Focus point must be non-null"_s);
	}
	if (radius <= 0) {
		$throwNew($IllegalArgumentException, "Radius must be greater than zero"_s);
	}
	double var$0 = $nc(center)->getX();
	$set(this, center, $new($Point2D$Double, var$0, center->getY()));
	double var$1 = $nc(focus)->getX();
	$set(this, focus, $new($Point2D$Double, var$1, focus->getY()));
	this->radius = radius;
}

void RadialGradientPaint::init$($Rectangle2D* gradientBounds, $floats* fractions, $ColorArray* colors, $MultipleGradientPaint$CycleMethod* cycleMethod) {
	$useLocalObjectStack();
	double var$1 = $nc(gradientBounds)->getCenterX();
	$var($Point2D, var$0, $new($Point2D$Double, var$1, gradientBounds->getCenterY()));
	double var$3 = gradientBounds->getCenterX();
	$var($Point2D, var$2, $new($Point2D$Double, var$3, gradientBounds->getCenterY()));
	$init($MultipleGradientPaint$ColorSpaceType);
	$var($MultipleGradientPaint$ColorSpaceType, var$4, $MultipleGradientPaint$ColorSpaceType::SRGB);
	RadialGradientPaint::init$(var$0, 1.0f, var$2, fractions, colors, cycleMethod, var$4, $(createGradientTransform(gradientBounds)));
	if (gradientBounds->isEmpty()) {
		$throwNew($IllegalArgumentException, "Gradient bounds must be non-empty"_s);
	}
}

$AffineTransform* RadialGradientPaint::createGradientTransform($Rectangle2D* r) {
	$init(RadialGradientPaint);
	double cx = $nc(r)->getCenterX();
	double cy = r->getCenterY();
	$var($AffineTransform, xform, $AffineTransform::getTranslateInstance(cx, cy));
	double var$0 = r->getWidth() / 2;
	$nc(xform)->scale(var$0, r->getHeight() / 2);
	$nc(xform)->translate(-cx, -cy);
	return xform;
}

$PaintContext* RadialGradientPaint::createContext($ColorModel* cm, $Rectangle* deviceBounds, $Rectangle2D* userBounds, $AffineTransform* transform$renamed, $RenderingHints* hints) {
	$var($AffineTransform, transform, transform$renamed);
	$assign(transform, $new($AffineTransform, transform));
	transform->concatenate(this->gradientTransform);
	float var$0 = (float)$nc(this->center)->getX();
	float var$1 = (float)this->center->getY();
	float var$2 = this->radius;
	float var$3 = (float)$nc(this->focus)->getX();
	return $new($RadialGradientPaintContext, this, cm, deviceBounds, userBounds, transform, hints, var$0, var$1, var$2, var$3, (float)this->focus->getY(), this->fractions, this->colors, this->cycleMethod, this->colorSpace);
}

$Point2D* RadialGradientPaint::getCenterPoint() {
	double var$0 = $nc(this->center)->getX();
	return $new($Point2D$Double, var$0, this->center->getY());
}

$Point2D* RadialGradientPaint::getFocusPoint() {
	double var$0 = $nc(this->focus)->getX();
	return $new($Point2D$Double, var$0, this->focus->getY());
}

float RadialGradientPaint::getRadius() {
	return this->radius;
}

RadialGradientPaint::RadialGradientPaint() {
}

$Class* RadialGradientPaint::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"focus", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, focus)},
		{"center", "Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, center)},
		{"radius", "F", nullptr, $PRIVATE | $FINAL, $field(RadialGradientPaint, radius)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "centerPoint"},
		{'s', "radius"},
		{'s', "focusPoint"},
		{'s', "fractions"},
		{'s', "colors"},
		{'s', "cycleMethod"},
		{'s', "colorSpace"},
		{'s', "transform"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$6$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$6[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$6$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(FFF[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, float, float, float, $floats*, $ColorArray*)},
		{"<init>", "(Ljava/awt/geom/Point2D;F[F[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, $Point2D*, float, $floats*, $ColorArray*)},
		{"<init>", "(FFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, float, float, float, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*)},
		{"<init>", "(Ljava/awt/geom/Point2D;F[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, $Point2D*, float, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*)},
		{"<init>", "(FFFFF[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, float, float, float, float, float, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*)},
		{"<init>", "(Ljava/awt/geom/Point2D;FLjava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, $Point2D*, float, $Point2D*, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*)},
		{"<init>", "(Ljava/awt/geom/Point2D;FLjava/awt/geom/Point2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;Ljava/awt/MultipleGradientPaint$ColorSpaceType;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, $Point2D*, float, $Point2D*, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*, $MultipleGradientPaint$ColorSpaceType*, $AffineTransform*), nullptr, nullptr, init$methodAnnotations$$$6},
		{"<init>", "(Ljava/awt/geom/Rectangle2D;[F[Ljava/awt/Color;Ljava/awt/MultipleGradientPaint$CycleMethod;)V", nullptr, $PUBLIC, $method(RadialGradientPaint, init$, void, $Rectangle2D*, $floats*, $ColorArray*, $MultipleGradientPaint$CycleMethod*)},
		{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC, $virtualMethod(RadialGradientPaint, createContext, $PaintContext*, $ColorModel*, $Rectangle*, $Rectangle2D*, $AffineTransform*, $RenderingHints*)},
		{"createGradientTransform", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $staticMethod(RadialGradientPaint, createGradientTransform, $AffineTransform*, $Rectangle2D*)},
		{"getCenterPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(RadialGradientPaint, getCenterPoint, $Point2D*)},
		{"getFocusPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, $method(RadialGradientPaint, getFocusPoint, $Point2D*)},
		{"getRadius", "()F", nullptr, $PUBLIC, $method(RadialGradientPaint, getRadius, float)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.RadialGradientPaint",
		"java.awt.MultipleGradientPaint",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RadialGradientPaint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RadialGradientPaint);
	});
	return class$;
}

$Class* RadialGradientPaint::class$ = nullptr;

	} // awt
} // java