#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/BMPattern.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

void BMPattern::init$($String* pat, bool ignoreCase) {
	BMPattern::init$(pat, 256, ignoreCase);
}

void BMPattern::init$($String* pat, int32_t tableSize, bool ignoreCase) {
	$set(this, pattern, $nc(pat)->toCharArray());
	$set(this, shiftTable, $new($ints, tableSize));
	this->ignoreCase = ignoreCase;
	int32_t length = $nc(this->pattern)->length;
	for (int32_t i = 0; i < this->shiftTable->length; ++i) {
		this->shiftTable->set(i, length);
	}
	for (int32_t i = 0; i < length; ++i) {
		char16_t ch = this->pattern->get(i);
		int32_t diff = length - i - 1;
		int32_t index = $mod(ch, this->shiftTable->length);
		if (diff < this->shiftTable->get(index)) {
			this->shiftTable->set(index, diff);
		}
		if (this->ignoreCase) {
			ch = $Character::toUpperCase(ch);
			index = $mod(ch, this->shiftTable->length);
			if (diff < this->shiftTable->get(index)) {
				this->shiftTable->set(index, diff);
			}
			ch = $Character::toLowerCase(ch);
			index = $mod(ch, this->shiftTable->length);
			if (diff < this->shiftTable->get(index)) {
				this->shiftTable->set(index, diff);
			}
		}
	}
}

int32_t BMPattern::matches($CharacterIterator* iterator, int32_t start, int32_t limit) {
	if (this->ignoreCase) {
		return this->matchesIgnoreCase(iterator, start, limit);
	}
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			if ((ch = $nc(iterator)->setIndex(--index)) != this->pattern->get(--pindex)) {
				break;
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

int32_t BMPattern::matches($String* str, int32_t start, int32_t limit) {
	if (this->ignoreCase) {
		return this->matchesIgnoreCase(str, start, limit);
	}
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			if ((ch = $nc(str)->charAt(--index)) != this->pattern->get(--pindex)) {
				break;
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

int32_t BMPattern::matches($chars* chars, int32_t start, int32_t limit) {
	if (this->ignoreCase) {
		return this->matchesIgnoreCase(chars, start, limit);
	}
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			if ((ch = $nc(chars)->get(--index)) != this->pattern->get(--pindex)) {
				break;
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

int32_t BMPattern::matchesIgnoreCase($CharacterIterator* iterator, int32_t start, int32_t limit) {
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			char16_t ch1 = ch = $nc(iterator)->setIndex(--index);
			char16_t ch2 = this->pattern->get(--pindex);
			if (ch1 != ch2) {
				ch1 = $Character::toUpperCase(ch1);
				ch2 = $Character::toUpperCase(ch2);
				bool var$0 = ch1 != ch2;
				if (var$0) {
					char16_t var$1 = $Character::toLowerCase(ch1);
					var$0 = var$1 != $Character::toLowerCase(ch2);
				}
				if (var$0) {
					break;
				}
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

int32_t BMPattern::matchesIgnoreCase($String* text, int32_t start, int32_t limit) {
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			char16_t ch1 = ch = $nc(text)->charAt(--index);
			char16_t ch2 = this->pattern->get(--pindex);
			if (ch1 != ch2) {
				ch1 = $Character::toUpperCase(ch1);
				ch2 = $Character::toUpperCase(ch2);
				bool var$0 = ch1 != ch2;
				if (var$0) {
					char16_t var$1 = $Character::toLowerCase(ch1);
					var$0 = var$1 != $Character::toLowerCase(ch2);
				}
				if (var$0) {
					break;
				}
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

int32_t BMPattern::matchesIgnoreCase($chars* chars, int32_t start, int32_t limit) {
	int32_t plength = $nc(this->pattern)->length;
	if (plength == 0) {
		return start;
	}
	int32_t index = start + plength;
	while (index <= limit) {
		int32_t pindex = plength;
		int32_t nindex = index + 1;
		char16_t ch = 0;
		do {
			char16_t ch1 = ch = $nc(chars)->get(--index);
			char16_t ch2 = this->pattern->get(--pindex);
			if (ch1 != ch2) {
				ch1 = $Character::toUpperCase(ch1);
				ch2 = $Character::toUpperCase(ch2);
				bool var$0 = ch1 != ch2;
				if (var$0) {
					char16_t var$1 = $Character::toLowerCase(ch1);
					var$0 = var$1 != $Character::toLowerCase(ch2);
				}
				if (var$0) {
					break;
				}
			}
			if (pindex == 0) {
				return index;
			}
		} while (pindex > 0);
		index += $nc(this->shiftTable)->get($mod(ch, $nc(this->shiftTable)->length)) + 1;
		if (index < nindex) {
			index = nindex;
		}
	}
	return -1;
}

BMPattern::BMPattern() {
}

$Class* BMPattern::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "[C", nullptr, $FINAL, $field(BMPattern, pattern)},
		{"shiftTable", "[I", nullptr, $FINAL, $field(BMPattern, shiftTable)},
		{"ignoreCase", "Z", nullptr, $FINAL, $field(BMPattern, ignoreCase)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(BMPattern, init$, void, $String*, bool)},
		{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(BMPattern, init$, void, $String*, int32_t, bool)},
		{"matches", "(Ljava/text/CharacterIterator;II)I", nullptr, $PUBLIC, $virtualMethod(BMPattern, matches, int32_t, $CharacterIterator*, int32_t, int32_t)},
		{"matches", "(Ljava/lang/String;II)I", nullptr, $PUBLIC, $virtualMethod(BMPattern, matches, int32_t, $String*, int32_t, int32_t)},
		{"matches", "([CII)I", nullptr, $PUBLIC, $virtualMethod(BMPattern, matches, int32_t, $chars*, int32_t, int32_t)},
		{"matchesIgnoreCase", "(Ljava/text/CharacterIterator;II)I", nullptr, 0, $virtualMethod(BMPattern, matchesIgnoreCase, int32_t, $CharacterIterator*, int32_t, int32_t)},
		{"matchesIgnoreCase", "(Ljava/lang/String;II)I", nullptr, 0, $virtualMethod(BMPattern, matchesIgnoreCase, int32_t, $String*, int32_t, int32_t)},
		{"matchesIgnoreCase", "([CII)I", nullptr, 0, $virtualMethod(BMPattern, matchesIgnoreCase, int32_t, $chars*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.BMPattern",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BMPattern, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPattern);
	});
	return class$;
}

$Class* BMPattern::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com