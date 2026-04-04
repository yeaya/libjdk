#include <javax/swing/text/html/CSSBorder$BorderPainter.h>
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

$Class* CSSBorder$BorderPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CSSBorder$BorderPainter, paint, void, $Polygon*, $Graphics*, $Color*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.text.html.CSSBorder$BorderPainter",
		nullptr,
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
	$loadClass(CSSBorder$BorderPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CSSBorder$BorderPainter);
	});
	return class$;
}

$Class* CSSBorder$BorderPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax