#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef DEBUG
#undef MAPSIZE
#undef NRANGE
#undef RANGE
#undef SPECIAL_COMMA
#undef UTF16_MAX

using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RangeToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RangeToken, serialVersionUID)},
	{"ranges", "[I", nullptr, 0, $field(RangeToken, ranges)},
	{"sorted", "Z", nullptr, 0, $field(RangeToken, sorted)},
	{"compacted", "Z", nullptr, 0, $field(RangeToken, compacted)},
	{"icaseCache", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, 0, $field(RangeToken, icaseCache)},
	{"map", "[I", nullptr, 0, $field(RangeToken, map)},
	{"nonMapIndex", "I", nullptr, 0, $field(RangeToken, nonMapIndex)},
	{"MAPSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RangeToken, MAPSIZE)},
	{}
};

$MethodInfo _RangeToken_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(RangeToken, init$, void, int32_t)},
	{"addRange", "(II)V", nullptr, $PROTECTED, $virtualMethod(RangeToken, addRange, void, int32_t, int32_t)},
	{"compactRanges", "()V", nullptr, $PROTECTED, $virtualMethod(RangeToken, compactRanges, void)},
	{"complementRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticMethod(RangeToken, complementRanges, $Token*, $Token*)},
	{"createMap", "()V", nullptr, $PRIVATE, $method(RangeToken, createMap, void)},
	{"dumpRanges", "()V", nullptr, 0, $method(RangeToken, dumpRanges, void)},
	{"escapeCharInCharClass", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RangeToken, escapeCharInCharClass, $String*, int32_t)},
	{"getCaseInsensitiveToken", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $SYNCHRONIZED, $method(RangeToken, getCaseInsensitiveToken, RangeToken*)},
	{"intersectRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(RangeToken, intersectRanges, void, $Token*)},
	{"isCompacted", "()Z", nullptr, $PRIVATE | $FINAL, $method(RangeToken, isCompacted, bool)},
	{"isSorted", "()Z", nullptr, $PRIVATE | $FINAL, $method(RangeToken, isSorted, bool)},
	{"match", "(I)Z", nullptr, 0, $virtualMethod(RangeToken, match, bool, int32_t)},
	{"mergeRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(RangeToken, mergeRanges, void, $Token*)},
	{"setCompacted", "()V", nullptr, $PRIVATE | $FINAL, $method(RangeToken, setCompacted, void)},
	{"setSorted", "(Z)V", nullptr, $PRIVATE | $FINAL, $method(RangeToken, setSorted, void, bool)},
	{"sortRanges", "()V", nullptr, $PROTECTED, $virtualMethod(RangeToken, sortRanges, void)},
	{"subtractRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(RangeToken, subtractRanges, void, $Token*)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RangeToken, toString, $String*, int32_t)},
	{}
};

$ClassInfo _RangeToken_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RangeToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_RangeToken_FieldInfo_,
	_RangeToken_MethodInfo_
};

$Object* allocate$RangeToken($Class* clazz) {
	return $of($alloc(RangeToken));
}

void RangeToken::init$(int32_t type) {
	$Token::init$(type);
	$set(this, icaseCache, nullptr);
	$set(this, map, nullptr);
	this->setSorted(false);
}

void RangeToken::addRange(int32_t start, int32_t end) {
	$set(this, icaseCache, nullptr);
	int32_t r1 = 0;
	int32_t r2 = 0;
	if (start <= end) {
		r1 = start;
		r2 = end;
	} else {
		r1 = end;
		r2 = start;
	}
	int32_t pos = 0;
	if (this->ranges == nullptr) {
		$set(this, ranges, $new($ints, 2));
		$nc(this->ranges)->set(0, r1);
		$nc(this->ranges)->set(1, r2);
		this->setSorted(true);
	} else {
		pos = $nc(this->ranges)->length;
		if ($nc(this->ranges)->get(pos - 1) + 1 == r1) {
			$nc(this->ranges)->set(pos - 1, r2);
			return;
		}
		$var($ints, temp, $new($ints, pos + 2));
		$System::arraycopy(this->ranges, 0, temp, 0, pos);
		$set(this, ranges, temp);
		if ($nc(this->ranges)->get(pos - 1) >= r1) {
			this->setSorted(false);
		}
		$nc(this->ranges)->set(pos++, r1);
		$nc(this->ranges)->set(pos, r2);
		if (!this->sorted) {
			this->sortRanges();
		}
	}
}

bool RangeToken::isSorted() {
	return this->sorted;
}

void RangeToken::setSorted(bool sort) {
	this->sorted = sort;
	if (!sort) {
		this->compacted = false;
	}
}

bool RangeToken::isCompacted() {
	return this->compacted;
}

void RangeToken::setCompacted() {
	this->compacted = true;
}

void RangeToken::sortRanges() {
	if (this->isSorted()) {
		return;
	}
	if (this->ranges == nullptr) {
		return;
	}
	for (int32_t i = $nc(this->ranges)->length - 4; i >= 0; i -= 2) {
		for (int32_t j = 0; j <= i; j += 2) {
			if ($nc(this->ranges)->get(j) > $nc(this->ranges)->get(j + 2) || $nc(this->ranges)->get(j) == $nc(this->ranges)->get(j + 2) && $nc(this->ranges)->get(j + 1) > $nc(this->ranges)->get(j + 3)) {
				int32_t tmp = 0;
				tmp = $nc(this->ranges)->get(j + 2);
				$nc(this->ranges)->set(j + 2, $nc(this->ranges)->get(j));
				$nc(this->ranges)->set(j, tmp);
				tmp = $nc(this->ranges)->get(j + 3);
				$nc(this->ranges)->set(j + 3, $nc(this->ranges)->get(j + 1));
				$nc(this->ranges)->set(j + 1, tmp);
			}
		}
	}
	this->setSorted(true);
}

void RangeToken::compactRanges() {
	$useLocalCurrentObjectStackCache();
	bool DEBUG = false;
	if (this->ranges == nullptr || $nc(this->ranges)->length <= 2) {
		return;
	}
	if (this->isCompacted()) {
		return;
	}
	int32_t base = 0;
	int32_t target = 0;
	while (target < $nc(this->ranges)->length) {
		if (base != target) {
			$nc(this->ranges)->set(base, $nc(this->ranges)->get(target++));
			$nc(this->ranges)->set(base + 1, $nc(this->ranges)->get(target++));
		} else {
			target += 2;
		}
		int32_t baseend = $nc(this->ranges)->get(base + 1);
		while (target < $nc(this->ranges)->length) {
			if (baseend + 1 < $nc(this->ranges)->get(target)) {
				break;
			}
			if (baseend + 1 == $nc(this->ranges)->get(target)) {
				if (DEBUG) {
					$nc($System::err)->println($$str({"Token#compactRanges(): Compaction: ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(base + 1)), "], ["_s, $$str($nc(this->ranges)->get(target)), ", "_s, $$str($nc(this->ranges)->get(target + 1)), "] -> ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(target + 1)), "]"_s}));
				}
				$nc(this->ranges)->set(base + 1, $nc(this->ranges)->get(target + 1));
				baseend = $nc(this->ranges)->get(base + 1);
				target += 2;
			} else if (baseend >= $nc(this->ranges)->get(target + 1)) {
				if (DEBUG) {
					$nc($System::err)->println($$str({"Token#compactRanges(): Compaction: ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(base + 1)), "], ["_s, $$str($nc(this->ranges)->get(target)), ", "_s, $$str($nc(this->ranges)->get(target + 1)), "] -> ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(base + 1)), "]"_s}));
				}
				target += 2;
			} else if (baseend < $nc(this->ranges)->get(target + 1)) {
				if (DEBUG) {
					$nc($System::err)->println($$str({"Token#compactRanges(): Compaction: ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(base + 1)), "], ["_s, $$str($nc(this->ranges)->get(target)), ", "_s, $$str($nc(this->ranges)->get(target + 1)), "] -> ["_s, $$str($nc(this->ranges)->get(base)), ", "_s, $$str($nc(this->ranges)->get(target + 1)), "]"_s}));
				}
				$nc(this->ranges)->set(base + 1, $nc(this->ranges)->get(target + 1));
				baseend = $nc(this->ranges)->get(base + 1);
				target += 2;
			} else {
				$throwNew($RuntimeException, $$str({"Token#compactRanges(): Internel Error: ["_s, $$str($nc(this->ranges)->get(base)), ","_s, $$str($nc(this->ranges)->get(base + 1)), "] ["_s, $$str($nc(this->ranges)->get(target)), ","_s, $$str($nc(this->ranges)->get(target + 1)), "]"_s}));
			}
		}
		base += 2;
	}
	if (base != $nc(this->ranges)->length) {
		$var($ints, result, $new($ints, base));
		$System::arraycopy(this->ranges, 0, result, 0, base);
		$set(this, ranges, result);
	}
	this->setCompacted();
}

void RangeToken::mergeRanges($Token* token) {
	$useLocalCurrentObjectStackCache();
	$var(RangeToken, tok, $cast(RangeToken, token));
	this->sortRanges();
	$nc(tok)->sortRanges();
	if (tok->ranges == nullptr) {
		return;
	}
	$set(this, icaseCache, nullptr);
	this->setSorted(true);
	if (this->ranges == nullptr) {
		$set(this, ranges, $new($ints, $nc(tok->ranges)->length));
		$System::arraycopy(tok->ranges, 0, this->ranges, 0, $nc(tok->ranges)->length);
		return;
	}
	$var($ints, result, $new($ints, $nc(this->ranges)->length + $nc(tok->ranges)->length));
	{
		int32_t i = 0;
		int32_t j = 0;
		int32_t k = 0;
		for (; i < $nc(this->ranges)->length || j < $nc(tok->ranges)->length;) {
			if (i >= $nc(this->ranges)->length) {
				result->set(k++, $nc(tok->ranges)->get(j++));
				result->set(k++, $nc(tok->ranges)->get(j++));
			} else if (j >= $nc(tok->ranges)->length) {
				result->set(k++, $nc(this->ranges)->get(i++));
				result->set(k++, $nc(this->ranges)->get(i++));
			} else if ($nc(tok->ranges)->get(j) < $nc(this->ranges)->get(i) || $nc(tok->ranges)->get(j) == $nc(this->ranges)->get(i) && $nc(tok->ranges)->get(j + 1) < $nc(this->ranges)->get(i + 1)) {
				result->set(k++, $nc(tok->ranges)->get(j++));
				result->set(k++, $nc(tok->ranges)->get(j++));
			} else {
				result->set(k++, $nc(this->ranges)->get(i++));
				result->set(k++, $nc(this->ranges)->get(i++));
			}
		}
	}
	$set(this, ranges, result);
}

void RangeToken::subtractRanges($Token* token) {
	$useLocalCurrentObjectStackCache();
	if ($nc(token)->type == $Token::NRANGE) {
		this->intersectRanges(token);
		return;
	}
	$var(RangeToken, tok, $cast(RangeToken, token));
	if ($nc(tok)->ranges == nullptr || this->ranges == nullptr) {
		return;
	}
	$set(this, icaseCache, nullptr);
	this->sortRanges();
	this->compactRanges();
	$nc(tok)->sortRanges();
	tok->compactRanges();
	$var($ints, result, $new($ints, $nc(this->ranges)->length + $nc(tok->ranges)->length));
	int32_t wp = 0;
	int32_t src = 0;
	int32_t sub = 0;
	while (src < $nc(this->ranges)->length && sub < $nc(tok->ranges)->length) {
		int32_t srcbegin = $nc(this->ranges)->get(src);
		int32_t srcend = $nc(this->ranges)->get(src + 1);
		int32_t subbegin = $nc(tok->ranges)->get(sub);
		int32_t subend = $nc(tok->ranges)->get(sub + 1);
		if (srcend < subbegin) {
			result->set(wp++, $nc(this->ranges)->get(src++));
			result->set(wp++, $nc(this->ranges)->get(src++));
		} else if (srcend >= subbegin && srcbegin <= subend) {
			if (subbegin <= srcbegin && srcend <= subend) {
				src += 2;
			} else if (subbegin <= srcbegin) {
				$nc(this->ranges)->set(src, subend + 1);
				sub += 2;
			} else if (srcend <= subend) {
				result->set(wp++, srcbegin);
				result->set(wp++, subbegin - 1);
				src += 2;
			} else {
				result->set(wp++, srcbegin);
				result->set(wp++, subbegin - 1);
				$nc(this->ranges)->set(src, subend + 1);
				sub += 2;
			}
		} else if (subend < srcbegin) {
			sub += 2;
		} else {
			$throwNew($RuntimeException, $$str({"Token#subtractRanges(): Internal Error: ["_s, $$str($nc(this->ranges)->get(src)), ","_s, $$str($nc(this->ranges)->get(src + 1)), "] - ["_s, $$str($nc(tok->ranges)->get(sub)), ","_s, $$str($nc(tok->ranges)->get(sub + 1)), "]"_s}));
		}
	}
	while (src < $nc(this->ranges)->length) {
		result->set(wp++, $nc(this->ranges)->get(src++));
		result->set(wp++, $nc(this->ranges)->get(src++));
	}
	$set(this, ranges, $new($ints, wp));
	$System::arraycopy(result, 0, this->ranges, 0, wp);
}

void RangeToken::intersectRanges($Token* token) {
	$useLocalCurrentObjectStackCache();
	$var(RangeToken, tok, $cast(RangeToken, token));
	if ($nc(tok)->ranges == nullptr || this->ranges == nullptr) {
		return;
	}
	$set(this, icaseCache, nullptr);
	this->sortRanges();
	this->compactRanges();
	$nc(tok)->sortRanges();
	tok->compactRanges();
	$var($ints, result, $new($ints, $nc(this->ranges)->length + $nc(tok->ranges)->length));
	int32_t wp = 0;
	int32_t src1 = 0;
	int32_t src2 = 0;
	while (src1 < $nc(this->ranges)->length && src2 < $nc(tok->ranges)->length) {
		int32_t src1begin = $nc(this->ranges)->get(src1);
		int32_t src1end = $nc(this->ranges)->get(src1 + 1);
		int32_t src2begin = $nc(tok->ranges)->get(src2);
		int32_t src2end = $nc(tok->ranges)->get(src2 + 1);
		if (src1end < src2begin) {
			src1 += 2;
		} else if (src1end >= src2begin && src1begin <= src2end) {
			if (src2begin <= src1begin && src1end <= src2end) {
				result->set(wp++, src1begin);
				result->set(wp++, src1end);
				src1 += 2;
			} else if (src2begin <= src1begin) {
				result->set(wp++, src1begin);
				result->set(wp++, src2end);
				$nc(this->ranges)->set(src1, src2end + 1);
				src2 += 2;
			} else if (src1end <= src2end) {
				result->set(wp++, src2begin);
				result->set(wp++, src1end);
				src1 += 2;
			} else {
				result->set(wp++, src2begin);
				result->set(wp++, src2end);
				$nc(this->ranges)->set(src1, src2end + 1);
				src2 += 2;
			}
		} else if (src2end < src1begin) {
			src2 += 2;
		} else {
			$throwNew($RuntimeException, $$str({"Token#intersectRanges(): Internal Error: ["_s, $$str($nc(this->ranges)->get(src1)), ","_s, $$str($nc(this->ranges)->get(src1 + 1)), "] & ["_s, $$str($nc(tok->ranges)->get(src2)), ","_s, $$str($nc(tok->ranges)->get(src2 + 1)), "]"_s}));
		}
	}
	$set(this, ranges, $new($ints, wp));
	$System::arraycopy(result, 0, this->ranges, 0, wp);
}

$Token* RangeToken::complementRanges($Token* token) {
	$init(RangeToken);
	$useLocalCurrentObjectStackCache();
	if ($nc(token)->type != $Token::RANGE && token->type != $Token::NRANGE) {
		$throwNew($IllegalArgumentException, $$str({"Token#complementRanges(): must be RANGE: "_s, $$str(token->type)}));
	}
	$var(RangeToken, tok, $cast(RangeToken, token));
	$nc(tok)->sortRanges();
	tok->compactRanges();
	int32_t len = $nc(tok->ranges)->length + 2;
	if ($nc(tok->ranges)->get(0) == 0) {
		len -= 2;
	}
	int32_t last = $nc(tok->ranges)->get($nc(tok->ranges)->length - 1);
	if (last == $Token::UTF16_MAX) {
		len -= 2;
	}
	$var(RangeToken, ret, $Token::createRange());
	$set($nc(ret), ranges, $new($ints, len));
	int32_t wp = 0;
	if ($nc(tok->ranges)->get(0) > 0) {
		$nc(ret->ranges)->set(wp++, 0);
		$nc(ret->ranges)->set(wp++, $nc(tok->ranges)->get(0) - 1);
	}
	for (int32_t i = 1; i < $nc(tok->ranges)->length - 2; i += 2) {
		$nc(ret->ranges)->set(wp++, $nc(tok->ranges)->get(i) + 1);
		$nc(ret->ranges)->set(wp++, $nc(tok->ranges)->get(i + 1) - 1);
	}
	if (last != $Token::UTF16_MAX) {
		$nc(ret->ranges)->set(wp++, last + 1);
		$nc(ret->ranges)->set(wp, $Token::UTF16_MAX);
	}
	ret->setCompacted();
	return ret;
}

RangeToken* RangeToken::getCaseInsensitiveToken() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->icaseCache != nullptr) {
			return this->icaseCache;
		}
		$var(RangeToken, uppers, this->type == $Token::RANGE ? $Token::createRange() : $Token::createNRange());
		for (int32_t i = 0; i < $nc(this->ranges)->length; i += 2) {
			for (int32_t ch = $nc(this->ranges)->get(i); ch <= $nc(this->ranges)->get(i + 1); ++ch) {
				if (ch > 0x0000FFFF) {
					$nc(uppers)->addRange(ch, ch);
				} else {
					char16_t uch = $Character::toUpperCase((char16_t)ch);
					$nc(uppers)->addRange(uch, uch);
				}
			}
		}
		$var(RangeToken, lowers, this->type == $Token::RANGE ? $Token::createRange() : $Token::createNRange());
		for (int32_t i = 0; i < $nc($nc(uppers)->ranges)->length; i += 2) {
			for (int32_t ch = $nc(uppers->ranges)->get(i); ch <= $nc(uppers->ranges)->get(i + 1); ++ch) {
				if (ch > 0x0000FFFF) {
					$nc(lowers)->addRange(ch, ch);
				} else {
					char16_t lch = $Character::toLowerCase((char16_t)ch);
					$nc(lowers)->addRange(lch, lch);
				}
			}
		}
		$nc(lowers)->mergeRanges(uppers);
		lowers->mergeRanges(this);
		lowers->compactRanges();
		$set(this, icaseCache, lowers);
		return lowers;
	}
}

void RangeToken::dumpRanges() {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->print("RANGE: "_s);
	if (this->ranges == nullptr) {
		$nc($System::err)->println(" NULL"_s);
		return;
	}
	for (int32_t i = 0; i < $nc(this->ranges)->length; i += 2) {
		$nc($System::err)->print($$str({"["_s, $$str($nc(this->ranges)->get(i)), ","_s, $$str($nc(this->ranges)->get(i + 1)), "] "_s}));
	}
	$nc($System::err)->println(""_s);
}

bool RangeToken::match(int32_t ch) {
	if (this->map == nullptr) {
		this->createMap();
	}
	bool ret = false;
	if (this->type == $Token::RANGE) {
		if (ch < RangeToken::MAPSIZE) {
			return ((int32_t)($nc(this->map)->get(ch / 32) & (uint32_t)($sl(1, (int32_t)(ch & (uint32_t)31))))) != 0;
		}
		ret = false;
		for (int32_t i = this->nonMapIndex; i < $nc(this->ranges)->length; i += 2) {
			if ($nc(this->ranges)->get(i) <= ch && ch <= $nc(this->ranges)->get(i + 1)) {
				return true;
			}
		}
	} else {
		if (ch < RangeToken::MAPSIZE) {
			return ((int32_t)($nc(this->map)->get(ch / 32) & (uint32_t)($sl(1, (int32_t)(ch & (uint32_t)31))))) == 0;
		}
		ret = true;
		for (int32_t i = this->nonMapIndex; i < $nc(this->ranges)->length; i += 2) {
			if ($nc(this->ranges)->get(i) <= ch && ch <= $nc(this->ranges)->get(i + 1)) {
				return false;
			}
		}
	}
	return ret;
}

void RangeToken::createMap() {
	int32_t asize = RangeToken::MAPSIZE / 32;
	$var($ints, map, $new($ints, asize));
	int32_t nonMapIndex = $nc(this->ranges)->length;
	for (int32_t i = 0; i < asize; ++i) {
		map->set(i, 0);
	}
	for (int32_t i = 0; i < $nc(this->ranges)->length; i += 2) {
		int32_t s = $nc(this->ranges)->get(i);
		int32_t e = $nc(this->ranges)->get(i + 1);
		if (s < RangeToken::MAPSIZE) {
			for (int32_t j = s; j <= e && j < RangeToken::MAPSIZE; ++j) {
				(*map)[j / 32] |= $sl(1, (int32_t)(j & (uint32_t)31));
			}
		} else {
			nonMapIndex = i;
			break;
		}
		if (e >= RangeToken::MAPSIZE) {
			nonMapIndex = i;
			break;
		}
	}
	$set(this, map, map);
	this->nonMapIndex = nonMapIndex;
}

$String* RangeToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	if (this->type == $Token::RANGE) {
		$init($Token);
		if ($equals(this, $Token::token_dot)) {
			$assign(ret, "."_s);
		} else {
			if ($equals(this, $Token::token_0to9)) {
				$assign(ret, "\\d"_s);
			} else {
				if ($equals(this, $Token::token_wordchars)) {
					$assign(ret, "\\w"_s);
				} else {
					if ($equals(this, $Token::token_spaces)) {
						$assign(ret, "\\s"_s);
					} else {
						$var($StringBuilder, sb, $new($StringBuilder));
						sb->append(u'[');
						for (int32_t i = 0; i < $nc(this->ranges)->length; i += 2) {
							if (((int32_t)(options & (uint32_t)$RegularExpression::SPECIAL_COMMA)) != 0 && i > 0) {
								sb->append(u',');
							}
							if ($nc(this->ranges)->get(i) == $nc(this->ranges)->get(i + 1)) {
								sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i))));
							} else {
								sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i))));
								sb->append(u'-');
								sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i + 1))));
							}
						}
						sb->append(u']');
						$assign(ret, sb->toString());
					}
				}
			}
		}
	} else {
		$init($Token);
		if ($equals(this, $Token::token_not_0to9)) {
			$assign(ret, "\\D"_s);
		} else {
			if ($equals(this, $Token::token_not_wordchars)) {
				$assign(ret, "\\W"_s);
			} else {
				if ($equals(this, $Token::token_not_spaces)) {
					$assign(ret, "\\S"_s);
				} else {
					$var($StringBuffer, sb, $new($StringBuffer));
					sb->append("[^"_s);
					for (int32_t i = 0; i < $nc(this->ranges)->length; i += 2) {
						if (((int32_t)(options & (uint32_t)$RegularExpression::SPECIAL_COMMA)) != 0 && i > 0) {
							sb->append(u',');
						}
						if ($nc(this->ranges)->get(i) == $nc(this->ranges)->get(i + 1)) {
							sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i))));
						} else {
							sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i))));
							sb->append(u'-');
							sb->append($(escapeCharInCharClass($nc(this->ranges)->get(i + 1))));
						}
					}
					sb->append(u']');
					$assign(ret, sb->toString());
				}
			}
		}
	}
	return ret;
}

$String* RangeToken::escapeCharInCharClass(int32_t ch) {
	$init(RangeToken);
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	switch (ch) {
	case u'[':
		{}
	case u']':
		{}
	case u'-':
		{}
	case u'^':
		{}
	case u',':
		{}
	case u'\\':
		{
			$assign(ret, $str({"\\"_s, $$str((char16_t)ch)}));
			break;
		}
	case u'\f':
		{
			$assign(ret, "\\f"_s);
			break;
		}
	case u'\n':
		{
			$assign(ret, "\\n"_s);
			break;
		}
	case u'\r':
		{
			$assign(ret, "\\r"_s);
			break;
		}
	case u'\t':
		{
			$assign(ret, "\\t"_s);
			break;
		}
	case 27:
		{
			$assign(ret, "\\e"_s);
			break;
		}
	default:
		{
			if (ch < 32) {
				$var($String, pre, $str({"0"_s, $($Integer::toHexString(ch))}));
				$var($String, var$0, "\\x"_s);
				int32_t var$1 = pre->length() - 2;
				$assign(ret, $concat(var$0, $($nc(pre)->substring(var$1, pre->length()))));
			} else if (ch >= 0x00010000) {
				$var($String, pre, $str({"0"_s, $($Integer::toHexString(ch))}));
				$var($String, var$2, "\\v"_s);
				int32_t var$3 = pre->length() - 6;
				$assign(ret, $concat(var$2, $($nc(pre)->substring(var$3, pre->length()))));
			} else {
				$assign(ret, $str({""_s, $$str((char16_t)ch)}));
			}
		}
	}
	return ret;
}

RangeToken::RangeToken() {
}

$Class* RangeToken::load$($String* name, bool initialize) {
	$loadClass(RangeToken, name, initialize, &_RangeToken_ClassInfo_, allocate$RangeToken);
	return class$;
}

$Class* RangeToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com