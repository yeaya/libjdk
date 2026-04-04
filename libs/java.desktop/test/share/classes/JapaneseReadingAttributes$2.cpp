#include <JapaneseReadingAttributes$2.h>
#include <JapaneseReadingAttributes.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef READING

using $JapaneseReadingAttributes = ::JapaneseReadingAttributes;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;

void JapaneseReadingAttributes$2::init$() {
}

void JapaneseReadingAttributes$2::caretPositionChanged($InputMethodEvent* event) {
}

void JapaneseReadingAttributes$2::inputMethodTextChanged($InputMethodEvent* event) {
	$useLocalObjectStack();
	$var($AttributedCharacterIterator, itr, $nc(event)->getText());
	if (itr != nullptr) {
		int32_t toCopy = event->getCommittedCharacterCount();
		if (toCopy > 0) {
			itr->first();
			$init($JapaneseReadingAttributes);
			$var($StringBuilder, yomigana, $new($StringBuilder, $($nc($JapaneseReadingAttributes::textFieldReading)->getText())));
			while (toCopy-- > 0) {
				int32_t var$0 = itr->getIndex();
				$init($AttributedCharacterIterator$Attribute);
				if (var$0 == itr->getRunStart($AttributedCharacterIterator$Attribute::READING)) {
					$var($Annotation, annotatedText, $cast($Annotation, itr->getAttribute($AttributedCharacterIterator$Attribute::READING)));
					yomigana->append($($nc(annotatedText)->getValue()));
				}
				itr->next();
			}
			$nc($JapaneseReadingAttributes::textFieldReading)->setText($(yomigana->toString()));
		}
	}
}

JapaneseReadingAttributes$2::JapaneseReadingAttributes$2() {
}

$Class* JapaneseReadingAttributes$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JapaneseReadingAttributes$2, init$, void)},
		{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$2, caretPositionChanged, void, $InputMethodEvent*)},
		{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$2, inputMethodTextChanged, void, $InputMethodEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JapaneseReadingAttributes",
		"setupUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JapaneseReadingAttributes$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JapaneseReadingAttributes$2",
		"java.lang.Object",
		"java.awt.event.InputMethodListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JapaneseReadingAttributes"
	};
	$loadClass(JapaneseReadingAttributes$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseReadingAttributes$2);
	});
	return class$;
}

$Class* JapaneseReadingAttributes$2::class$ = nullptr;