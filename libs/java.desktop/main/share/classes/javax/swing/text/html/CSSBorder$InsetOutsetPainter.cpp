#include <javax/swing/text/html/CSSBorder$InsetOutsetPainter.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef INSET

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $CSSBorder$ShadowLightPainter = ::javax::swing::text::html::CSSBorder$ShadowLightPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSSBorder$InsetOutsetPainter::init$($CSS$Value* type) {
	$CSSBorder$ShadowLightPainter::init$();
	$set(this, type, type);
}

void CSSBorder$InsetOutsetPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalObjectStack();
	$init($CSS$Value);
	$nc(g)->setColor(((side + 1) % 4 < 2) == (this->type == $CSS$Value::INSET) ? $(getShadowColor(color)) : $(getLightColor(color)));
	g->fillPolygon(shape);
}

CSSBorder$InsetOutsetPainter::CSSBorder$InsetOutsetPainter() {
}

$Class* CSSBorder$InsetOutsetPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljavax/swing/text/html/CSS$Value;", nullptr, 0, $field(CSSBorder$InsetOutsetPainter, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/CSS$Value;)V", nullptr, 0, $method(CSSBorder$InsetOutsetPainter, init$, void, $CSS$Value*)},
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $virtualMethod(CSSBorder$InsetOutsetPainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$InsetOutsetPainter", "javax.swing.text.html.CSSBorder", "InsetOutsetPainter", $STATIC},
		{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.CSSBorder$InsetOutsetPainter",
		"javax.swing.text.html.CSSBorder$ShadowLightPainter",
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
	$loadClass(CSSBorder$InsetOutsetPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$InsetOutsetPainter);
	});
	return class$;
}

$Class* CSSBorder$InsetOutsetPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax