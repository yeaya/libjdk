#include <javax/swing/text/Highlighter.h>
#include <java/awt/Graphics.h>
#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Highlighter$HighlightArray = $Array<::javax::swing::text::Highlighter$Highlight>;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$Class* Highlighter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addHighlight", "(IILjavax/swing/text/Highlighter$HighlightPainter;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, addHighlight, $Object*, int32_t, int32_t, $Highlighter$HighlightPainter*), "javax.swing.text.BadLocationException"},
		{"changeHighlight", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, changeHighlight, void, Object$*, int32_t, int32_t), "javax.swing.text.BadLocationException"},
		{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, deinstall, void, $JTextComponent*)},
		{"getHighlights", "()[Ljavax/swing/text/Highlighter$Highlight;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, getHighlights, $Highlighter$HighlightArray*)},
		{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, install, void, $JTextComponent*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, paint, void, $Graphics*)},
		{"removeAllHighlights", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, removeAllHighlights, void)},
		{"removeHighlight", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter, removeHighlight, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.text.Highlighter$HighlightPainter", "javax.swing.text.Highlighter", "HighlightPainter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.Highlighter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.Highlighter$Highlight,javax.swing.text.Highlighter$HighlightPainter"
	};
	$loadClass(Highlighter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Highlighter);
	});
	return class$;
}

$Class* Highlighter::class$ = nullptr;

		} // text
	} // swing
} // javax