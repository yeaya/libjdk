#include <javax/swing/text/html/CSSBorder$SolidPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSSBorder$SolidPainter::init$() {
}

void CSSBorder$SolidPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$nc(g)->setColor(color);
	g->fillPolygon(shape);
}

CSSBorder$SolidPainter::CSSBorder$SolidPainter() {
}

$Class* CSSBorder$SolidPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSSBorder$SolidPainter, init$, void)},
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $virtualMethod(CSSBorder$SolidPainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$SolidPainter", "javax.swing.text.html.CSSBorder", "SolidPainter", $STATIC},
		{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSSBorder$SolidPainter",
		"java.lang.Object",
		"javax.swing.text.html.CSSBorder$BorderPainter",
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
	$loadClass(CSSBorder$SolidPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$SolidPainter);
	});
	return class$;
}

$Class* CSSBorder$SolidPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax