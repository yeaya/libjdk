#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>
#include <java/awt/Color.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void CSSBorder$ShadowLightPainter::init$() {
	$CSSBorder$StrokePainter::init$();
}

$Color* CSSBorder$ShadowLightPainter::getShadowColor($Color* c) {
	$init(CSSBorder$ShadowLightPainter);
	return $CSSBorder::getAdjustedColor(c, -0.3);
}

$Color* CSSBorder$ShadowLightPainter::getLightColor($Color* c) {
	$init(CSSBorder$ShadowLightPainter);
	return $CSSBorder::getAdjustedColor(c, 0.7);
}

CSSBorder$ShadowLightPainter::CSSBorder$ShadowLightPainter() {
}

$Class* CSSBorder$ShadowLightPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CSSBorder$ShadowLightPainter, init$, void)},
		{"getLightColor", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $STATIC, $staticMethod(CSSBorder$ShadowLightPainter, getLightColor, $Color*, $Color*)},
		{"getShadowColor", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $STATIC, $staticMethod(CSSBorder$ShadowLightPainter, getShadowColor, $Color*, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
		{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.text.html.CSSBorder$ShadowLightPainter",
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
	$loadClass(CSSBorder$ShadowLightPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$ShadowLightPainter);
	});
	return class$;
}

$Class* CSSBorder$ShadowLightPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax