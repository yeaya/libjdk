#include <sun/font/CharSequenceCodePointIterator.h>
#include <java/lang/CharSequence.h>
#include <sun/font/CodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointIterator = ::sun::font::CodePointIterator;

namespace sun {
	namespace font {

void CharSequenceCodePointIterator::init$($CharSequence* text) {
	$CodePointIterator::init$();
	$set(this, text, text);
}

void CharSequenceCodePointIterator::setToStart() {
	this->index = 0;
}

void CharSequenceCodePointIterator::setToLimit() {
	this->index = $nc(this->text)->length();
}

int32_t CharSequenceCodePointIterator::next() {
	if (this->index < $nc(this->text)->length()) {
		char16_t cp1 = this->text->charAt(this->index++);
		bool var$0 = $Character::isHighSurrogate(cp1);
		if (var$0 && this->index < this->text->length()) {
			char16_t cp2 = this->text->charAt(this->index + 1);
			if ($Character::isLowSurrogate(cp2)) {
				++this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp1;
	}
	return $CodePointIterator::DONE;
}

int32_t CharSequenceCodePointIterator::prev() {
	if (this->index > 0) {
		char16_t cp2 = $nc(this->text)->charAt(--this->index);
		if ($Character::isLowSurrogate(cp2) && this->index > 0) {
			char16_t cp1 = this->text->charAt(this->index - 1);
			if ($Character::isHighSurrogate(cp1)) {
				--this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp2;
	}
	return $CodePointIterator::DONE;
}

int32_t CharSequenceCodePointIterator::charIndex() {
	return this->index;
}

CharSequenceCodePointIterator::CharSequenceCodePointIterator() {
}

$Class* CharSequenceCodePointIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(CharSequenceCodePointIterator, text)},
		{"index", "I", nullptr, $PRIVATE, $field(CharSequenceCodePointIterator, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(CharSequenceCodePointIterator, init$, void, $CharSequence*)},
		{"charIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CharSequenceCodePointIterator, charIndex, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(CharSequenceCodePointIterator, next, int32_t)},
		{"prev", "()I", nullptr, $PUBLIC, $virtualMethod(CharSequenceCodePointIterator, prev, int32_t)},
		{"setToLimit", "()V", nullptr, $PUBLIC, $virtualMethod(CharSequenceCodePointIterator, setToLimit, void)},
		{"setToStart", "()V", nullptr, $PUBLIC, $virtualMethod(CharSequenceCodePointIterator, setToStart, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.font.CharSequenceCodePointIterator",
		"sun.font.CodePointIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharSequenceCodePointIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharSequenceCodePointIterator);
	});
	return class$;
}

$Class* CharSequenceCodePointIterator::class$ = nullptr;

	} // font
} // sun