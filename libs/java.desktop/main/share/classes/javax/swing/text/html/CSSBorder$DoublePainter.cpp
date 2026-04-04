#include <javax/swing/text/html/CSSBorder$DoublePainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef Y_AXIS

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $View = ::javax::swing::text::View;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSSBorder$DoublePainter::init$() {
	$CSSBorder$StrokePainter::init$();
}

void CSSBorder$DoublePainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalObjectStack();
	$var($Rectangle, r, $nc(shape)->getBounds());
	int32_t length = $Math::max($nc(r)->height / 3, 1);
	$var($ints, lengthPattern, $new($ints, {
		length,
		length
	}));
	$var($ColorArray, colorPattern, $new($ColorArray, {
		color,
		nullptr
	}));
	paintStrokes(r, g, $View::Y_AXIS, lengthPattern, colorPattern);
}

CSSBorder$DoublePainter::CSSBorder$DoublePainter() {
}

$Class* CSSBorder$DoublePainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSSBorder$DoublePainter, init$, void)},
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $virtualMethod(CSSBorder$DoublePainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$DoublePainter", "javax.swing.text.html.CSSBorder", "DoublePainter", $STATIC},
		{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSSBorder$DoublePainter",
		"javax.swing.text.html.CSSBorder$StrokePainter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSSBorder"
	};
	$loadClass(CSSBorder$DoublePainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$DoublePainter);
	});
	return class$;
}

$Class* CSSBorder$DoublePainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax