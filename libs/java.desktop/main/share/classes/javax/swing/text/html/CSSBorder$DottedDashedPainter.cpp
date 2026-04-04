#include <javax/swing/text/html/CSSBorder$DottedDashedPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef X_AXIS

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $View = ::javax::swing::text::View;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSSBorder$DottedDashedPainter::init$(int32_t factor) {
	$CSSBorder$StrokePainter::init$();
	this->factor = factor;
}

void CSSBorder$DottedDashedPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalObjectStack();
	$var($Rectangle, r, $nc(shape)->getBounds());
	int32_t length = $nc(r)->height * this->factor;
	$var($ints, lengthPattern, $new($ints, {
		length,
		length
	}));
	$var($ColorArray, colorPattern, $new($ColorArray, {
		color,
		nullptr
	}));
	paintStrokes(r, g, $View::X_AXIS, lengthPattern, colorPattern);
}

CSSBorder$DottedDashedPainter::CSSBorder$DottedDashedPainter() {
}

$Class* CSSBorder$DottedDashedPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factor", "I", nullptr, $FINAL, $field(CSSBorder$DottedDashedPainter, factor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(CSSBorder$DottedDashedPainter, init$, void, int32_t)},
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $virtualMethod(CSSBorder$DottedDashedPainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$DottedDashedPainter", "javax.swing.text.html.CSSBorder", "DottedDashedPainter", $STATIC},
		{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSSBorder$DottedDashedPainter",
		"javax.swing.text.html.CSSBorder$StrokePainter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.CSSBorder"
	};
	$loadClass(CSSBorder$DottedDashedPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$DottedDashedPainter);
	});
	return class$;
}

$Class* CSSBorder$DottedDashedPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax