#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;

namespace javax {
	namespace swing {
		namespace text {

$Class* Highlighter$Highlight::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter$Highlight, getEndOffset, int32_t)},
		{"getPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter$Highlight, getPainter, $Highlighter$HighlightPainter*)},
		{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Highlighter$Highlight, getStartOffset, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.Highlighter$Highlight",
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
	$loadClass(Highlighter$Highlight, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Highlighter$Highlight);
	});
	return class$;
}

$Class* Highlighter$Highlight::class$ = nullptr;

		} // text
	} // swing
} // javax