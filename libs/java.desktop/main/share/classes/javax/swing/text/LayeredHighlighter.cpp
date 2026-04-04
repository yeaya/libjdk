#include <javax/swing/text/LayeredHighlighter.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

void LayeredHighlighter::init$() {
}

LayeredHighlighter::LayeredHighlighter() {
}

$Class* LayeredHighlighter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(LayeredHighlighter, init$, void)},
		{"paintLayeredHighlights", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/View;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayeredHighlighter, paintLayeredHighlights, void, $Graphics*, int32_t, int32_t, $Shape*, $JTextComponent*, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.LayeredHighlighter",
		"java.lang.Object",
		"javax.swing.text.Highlighter",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.LayeredHighlighter$LayerPainter"
	};
	$loadClass(LayeredHighlighter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayeredHighlighter);
	});
	return class$;
}

$Class* LayeredHighlighter::class$ = nullptr;

		} // text
	} // swing
} // javax