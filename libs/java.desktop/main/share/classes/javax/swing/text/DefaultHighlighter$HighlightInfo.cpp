#include <javax/swing/text/DefaultHighlighter$HighlightInfo.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;

namespace javax {
	namespace swing {
		namespace text {

void DefaultHighlighter$HighlightInfo::init$($DefaultHighlighter* this$0) {
	$set(this, this$0, this$0);
}

int32_t DefaultHighlighter$HighlightInfo::getStartOffset() {
	return $nc(this->p0)->getOffset();
}

int32_t DefaultHighlighter$HighlightInfo::getEndOffset() {
	return $nc(this->p1)->getOffset();
}

$Highlighter$HighlightPainter* DefaultHighlighter$HighlightInfo::getPainter() {
	return this->painter;
}

DefaultHighlighter$HighlightInfo::DefaultHighlighter$HighlightInfo() {
}

$Class* DefaultHighlighter$HighlightInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultHighlighter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultHighlighter$HighlightInfo, this$0)},
		{"p0", "Ljavax/swing/text/Position;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, p0)},
		{"p1", "Ljavax/swing/text/Position;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, p1)},
		{"painter", "Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, 0, $field(DefaultHighlighter$HighlightInfo, painter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultHighlighter;)V", nullptr, 0, $method(DefaultHighlighter$HighlightInfo, init$, void, $DefaultHighlighter*)},
		{"getEndOffset", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultHighlighter$HighlightInfo, getEndOffset, int32_t)},
		{"getPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PUBLIC, $virtualMethod(DefaultHighlighter$HighlightInfo, getPainter, $Highlighter$HighlightPainter*)},
		{"getStartOffset", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultHighlighter$HighlightInfo, getStartOffset, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultHighlighter$HighlightInfo", "javax.swing.text.DefaultHighlighter", "HighlightInfo", 0},
		{"javax.swing.text.Highlighter$Highlight", "javax.swing.text.Highlighter", "Highlight", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultHighlighter$HighlightInfo",
		"java.lang.Object",
		"javax.swing.text.Highlighter$Highlight",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultHighlighter"
	};
	$loadClass(DefaultHighlighter$HighlightInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultHighlighter$HighlightInfo);
	});
	return class$;
}

$Class* DefaultHighlighter$HighlightInfo::class$ = nullptr;

		} // text
	} // swing
} // javax