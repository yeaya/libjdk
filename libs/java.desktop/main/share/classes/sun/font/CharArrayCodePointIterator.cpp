#include <sun/font/CharArrayCodePointIterator.h>

#include <sun/font/CodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointIterator = ::sun::font::CodePointIterator;

namespace sun {
	namespace font {

$FieldInfo _CharArrayCodePointIterator_FieldInfo_[] = {
	{"text", "[C", nullptr, $PRIVATE, $field(CharArrayCodePointIterator, text)},
	{"start", "I", nullptr, $PRIVATE, $field(CharArrayCodePointIterator, start)},
	{"limit", "I", nullptr, $PRIVATE, $field(CharArrayCodePointIterator, limit)},
	{"index", "I", nullptr, $PRIVATE, $field(CharArrayCodePointIterator, index)},
	{}
};

$MethodInfo _CharArrayCodePointIterator_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(CharArrayCodePointIterator, init$, void, $chars*)},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(CharArrayCodePointIterator, init$, void, $chars*, int32_t, int32_t)},
	{"charIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CharArrayCodePointIterator, charIndex, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(CharArrayCodePointIterator, next, int32_t)},
	{"prev", "()I", nullptr, $PUBLIC, $virtualMethod(CharArrayCodePointIterator, prev, int32_t)},
	{"setToLimit", "()V", nullptr, $PUBLIC, $virtualMethod(CharArrayCodePointIterator, setToLimit, void)},
	{"setToStart", "()V", nullptr, $PUBLIC, $virtualMethod(CharArrayCodePointIterator, setToStart, void)},
	{}
};

$ClassInfo _CharArrayCodePointIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.CharArrayCodePointIterator",
	"sun.font.CodePointIterator",
	nullptr,
	_CharArrayCodePointIterator_FieldInfo_,
	_CharArrayCodePointIterator_MethodInfo_
};

$Object* allocate$CharArrayCodePointIterator($Class* clazz) {
	return $of($alloc(CharArrayCodePointIterator));
}

void CharArrayCodePointIterator::init$($chars* text) {
	$CodePointIterator::init$();
	$set(this, text, text);
	this->limit = $nc(text)->length;
}

void CharArrayCodePointIterator::init$($chars* text, int32_t start, int32_t limit) {
	$CodePointIterator::init$();
	if (start < 0 || limit < start || limit > $nc(text)->length) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, text, text);
	this->start = (this->index = start);
	this->limit = limit;
}

void CharArrayCodePointIterator::setToStart() {
	this->index = this->start;
}

void CharArrayCodePointIterator::setToLimit() {
	this->index = this->limit;
}

int32_t CharArrayCodePointIterator::next() {
	if (this->index < this->limit) {
		char16_t cp1 = $nc(this->text)->get(this->index++);
		if ($Character::isHighSurrogate(cp1) && this->index < this->limit) {
			char16_t cp2 = $nc(this->text)->get(this->index);
			if ($Character::isLowSurrogate(cp2)) {
				++this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp1;
	}
	return $CodePointIterator::DONE;
}

int32_t CharArrayCodePointIterator::prev() {
	if (this->index > this->start) {
		char16_t cp2 = $nc(this->text)->get(--this->index);
		if ($Character::isLowSurrogate(cp2) && this->index > this->start) {
			char16_t cp1 = $nc(this->text)->get(this->index - 1);
			if ($Character::isHighSurrogate(cp1)) {
				--this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp2;
	}
	return $CodePointIterator::DONE;
}

int32_t CharArrayCodePointIterator::charIndex() {
	return this->index;
}

CharArrayCodePointIterator::CharArrayCodePointIterator() {
}

$Class* CharArrayCodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CharArrayCodePointIterator, name, initialize, &_CharArrayCodePointIterator_ClassInfo_, allocate$CharArrayCodePointIterator);
	return class$;
}

$Class* CharArrayCodePointIterator::class$ = nullptr;

	} // font
} // sun