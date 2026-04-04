#include <javax/accessibility/AccessibleExtendedText.h>
#include <java/awt/Rectangle.h>
#include <javax/accessibility/AccessibleTextSequence.h>
#include <jcpp.h>

#undef ATTRIBUTE_RUN
#undef LINE

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleTextSequence = ::javax::accessibility::AccessibleTextSequence;

namespace javax {
	namespace accessibility {

$Class* AccessibleExtendedText::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleExtendedText, LINE)},
		{"ATTRIBUTE_RUN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleExtendedText, ATTRIBUTE_RUN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getTextBounds", "(II)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedText, getTextBounds, $Rectangle*, int32_t, int32_t)},
		{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedText, getTextRange, $String*, int32_t, int32_t)},
		{"getTextSequenceAfter", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedText, getTextSequenceAfter, $AccessibleTextSequence*, int32_t, int32_t)},
		{"getTextSequenceAt", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedText, getTextSequenceAt, $AccessibleTextSequence*, int32_t, int32_t)},
		{"getTextSequenceBefore", "(II)Ljavax/accessibility/AccessibleTextSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedText, getTextSequenceBefore, $AccessibleTextSequence*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleExtendedText",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessibleExtendedText, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleExtendedText);
	});
	return class$;
}

$Class* AccessibleExtendedText::class$ = nullptr;

	} // accessibility
} // javax