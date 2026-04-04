#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$Class* Highlighter$HighlightPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"paint", "(Ljava/awt/Graphics;IILjava/awt/Shape;Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter$HighlightPainter, paint, void, $Graphics*, int32_t, int32_t, $Shape*, $JTextComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.Highlighter$HighlightPainter",
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
		"javax.swing.text.Highlighter"
	};
	$loadClass(Highlighter$HighlightPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Highlighter$HighlightPainter);
	});
	return class$;
}

$Class* Highlighter$HighlightPainter::class$ = nullptr;

		} // text
	} // swing
} // javax