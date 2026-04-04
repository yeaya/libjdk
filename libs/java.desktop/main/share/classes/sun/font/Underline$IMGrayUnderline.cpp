#include <sun/font/Underline$IMGrayUnderline.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <sun/font/Underline.h>
#include <jcpp.h>

#undef CAP_BUTT
#undef JOIN_MITER

using $BasicStroke = ::java::awt::BasicStroke;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Underline = ::sun::font::Underline;

namespace sun {
	namespace font {

void Underline$IMGrayUnderline::init$() {
	$Underline::init$();
	$set(this, stroke, $new($BasicStroke, 1.0f, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_MITER, 10.0f, $$new($floats, {
		1,
		1
	}), 0));
}

void Underline$IMGrayUnderline::drawUnderline($Graphics2D* g2d, float thickness, float x1, float x2, float y) {
	$useLocalObjectStack();
	$var($Stroke, saveStroke, $nc(g2d)->getStroke());
	g2d->setStroke(this->stroke);
	$var($Line2D$Float, drawLine, $new($Line2D$Float, x1, y, x2, y));
	g2d->draw(drawLine);
	drawLine->y1 += 1.0f;
	drawLine->y2 += 1.0f;
	drawLine->x1 += 1.0f;
	g2d->draw(drawLine);
	g2d->setStroke(saveStroke);
}

float Underline$IMGrayUnderline::getLowerDrawLimit(float thickness) {
	return 1.0f * 2;
}

$Shape* Underline$IMGrayUnderline::getUnderlineShape(float thickness, float x1, float x2, float y) {
	$useLocalObjectStack();
	$var($GeneralPath, gp, $new($GeneralPath));
	$var($Line2D$Float, line, $new($Line2D$Float, x1, y, x2, y));
	gp->append($($nc(this->stroke)->createStrokedShape(line)), false);
	line->y1 += 1.0f;
	line->y2 += 1.0f;
	line->x1 += 1.0f;
	gp->append($($nc(this->stroke)->createStrokedShape(line)), false);
	return gp;
}

Underline$IMGrayUnderline::Underline$IMGrayUnderline() {
}

$Class* Underline$IMGrayUnderline::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stroke", "Ljava/awt/BasicStroke;", nullptr, $PRIVATE, $field(Underline$IMGrayUnderline, stroke)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Underline$IMGrayUnderline, init$, void)},
		{"drawUnderline", "(Ljava/awt/Graphics2D;FFFF)V", nullptr, 0, $virtualMethod(Underline$IMGrayUnderline, drawUnderline, void, $Graphics2D*, float, float, float, float)},
		{"getLowerDrawLimit", "(F)F", nullptr, 0, $virtualMethod(Underline$IMGrayUnderline, getLowerDrawLimit, float, float)},
		{"getUnderlineShape", "(FFFF)Ljava/awt/Shape;", nullptr, 0, $virtualMethod(Underline$IMGrayUnderline, getUnderlineShape, $Shape*, float, float, float, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Underline$IMGrayUnderline", "sun.font.Underline", "IMGrayUnderline", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.Underline$IMGrayUnderline",
		"sun.font.Underline",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.Underline"
	};
	$loadClass(Underline$IMGrayUnderline, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Underline$IMGrayUnderline);
	});
	return class$;
}

$Class* Underline$IMGrayUnderline::class$ = nullptr;

	} // font
} // sun