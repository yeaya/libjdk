#include <javax/swing/text/html/CSSBorder$NullPainter.h>
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

void CSSBorder$NullPainter::init$() {
}

void CSSBorder$NullPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
}

CSSBorder$NullPainter::CSSBorder$NullPainter() {
}

$Class* CSSBorder$NullPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSSBorder$NullPainter, init$, void)},
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $virtualMethod(CSSBorder$NullPainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$NullPainter", "javax.swing.text.html.CSSBorder", "NullPainter", $STATIC},
		{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSSBorder$NullPainter",
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
	$loadClass(CSSBorder$NullPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$NullPainter);
	});
	return class$;
}

$Class* CSSBorder$NullPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax