#include <sun/font/CharacterIteratorCodePointIterator.h>
#include <java/text/CharacterIterator.h>
#include <sun/font/CodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CodePointIterator = ::sun::font::CodePointIterator;

namespace sun {
	namespace font {

void CharacterIteratorCodePointIterator::init$($CharacterIterator* iter) {
	$CodePointIterator::init$();
	$set(this, iter, iter);
}

void CharacterIteratorCodePointIterator::setToStart() {
	$nc(this->iter)->setIndex($nc(this->iter)->getBeginIndex());
}

void CharacterIteratorCodePointIterator::setToLimit() {
	$nc(this->iter)->setIndex($nc(this->iter)->getEndIndex());
}

int32_t CharacterIteratorCodePointIterator::next() {
	char16_t cp1 = $nc(this->iter)->current();
	if (cp1 != $CharacterIterator::DONE) {
		char16_t cp2 = this->iter->next();
		if ($Character::isHighSurrogate(cp1) && cp2 != $CharacterIterator::DONE) {
			if ($Character::isLowSurrogate(cp2)) {
				this->iter->next();
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp1;
	}
	return $CodePointIterator::DONE;
}

int32_t CharacterIteratorCodePointIterator::prev() {
	char16_t cp2 = $nc(this->iter)->previous();
	if (cp2 != $CharacterIterator::DONE) {
		if ($Character::isLowSurrogate(cp2)) {
			char16_t cp1 = this->iter->previous();
			if ($Character::isHighSurrogate(cp1)) {
				return $Character::toCodePoint(cp1, cp2);
			}
			this->iter->next();
		}
		return cp2;
	}
	return $CodePointIterator::DONE;
}

int32_t CharacterIteratorCodePointIterator::charIndex() {
	return $nc(this->iter)->getIndex();
}

CharacterIteratorCodePointIterator::CharacterIteratorCodePointIterator() {
}

$Class* CharacterIteratorCodePointIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iter", "Ljava/text/CharacterIterator;", nullptr, $PRIVATE, $field(CharacterIteratorCodePointIterator, iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC, $method(CharacterIteratorCodePointIterator, init$, void, $CharacterIterator*)},
		{"charIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorCodePointIterator, charIndex, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorCodePointIterator, next, int32_t)},
		{"prev", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorCodePointIterator, prev, int32_t)},
		{"setToLimit", "()V", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorCodePointIterator, setToLimit, void)},
		{"setToStart", "()V", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorCodePointIterator, setToStart, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.font.CharacterIteratorCodePointIterator",
		"sun.font.CodePointIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharacterIteratorCodePointIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterIteratorCodePointIterator);
	});
	return class$;
}

$Class* CharacterIteratorCodePointIterator::class$ = nullptr;

	} // font
} // sun