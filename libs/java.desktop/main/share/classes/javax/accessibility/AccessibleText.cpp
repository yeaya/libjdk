#include <javax/accessibility/AccessibleText.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

#undef CHARACTER
#undef SENTENCE
#undef WORD

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

$Class* AccessibleText::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CHARACTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, CHARACTER)},
		{"WORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, WORD)},
		{"SENTENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, SENTENCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getAfterIndex, $String*, int32_t, int32_t)},
		{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getAtIndex, $String*, int32_t, int32_t)},
		{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getBeforeIndex, $String*, int32_t, int32_t)},
		{"getCaretPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getCaretPosition, int32_t)},
		{"getCharCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getCharCount, int32_t)},
		{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getCharacterAttribute, $AttributeSet*, int32_t)},
		{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getCharacterBounds, $Rectangle*, int32_t)},
		{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getIndexAtPoint, int32_t, $Point*)},
		{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getSelectedText, $String*)},
		{"getSelectionEnd", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getSelectionEnd, int32_t)},
		{"getSelectionStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleText, getSelectionStart, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleText",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleText, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleText);
	});
	return class$;
}

$Class* AccessibleText::class$ = nullptr;

	} // accessibility
} // javax