#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Match.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

#undef CACHESIZE
#undef EXTENDED_COMMENT
#undef IGNORE_CASE
#undef MULTIPLE_LINES
#undef PROHIBIT_FIXED_STRING_OPTIMIZATION
#undef PROHIBIT_HEAD_CHARACTER_OPTIMIZATION
#undef SINGLE_LINE
#undef SPECIAL_COMMA
#undef UNICODE_WORD_BOUNDARY
#undef USE_UNICODE_CATEGORY
#undef XMLSCHEMA_MODE

using $RegularExpressionArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression>;
using $Match = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match;
using $ParseException = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::ParseException;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
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

$FieldInfo _REUtil_FieldInfo_[] = {
	{"CACHESIZE", "I", nullptr, $STATIC | $FINAL, $constField(REUtil, CACHESIZE)},
	{"regexCache", "[Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression;", nullptr, $STATIC | $FINAL, $staticField(REUtil, regexCache)},
	{}
};

$MethodInfo _REUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(REUtil, init$, void)},
	{"composeFromSurrogates", "(II)I", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, composeFromSurrogates, int32_t, int32_t, int32_t)},
	{"createOptionString", "(I)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, createOptionString, $String*, int32_t)},
	{"createRegex", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression;", nullptr, $PUBLIC | $STATIC, $staticMethod(REUtil, createRegex, $RegularExpression*, $String*, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"decomposeToSurrogates", "(I)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, decomposeToSurrogates, $String*, int32_t)},
	{"dumpString", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(REUtil, dumpString, void, $String*)},
	{"getOptionValue", "(I)I", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, getOptionValue, int32_t, int32_t)},
	{"isHighSurrogate", "(I)Z", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, isHighSurrogate, bool, int32_t)},
	{"isLowSurrogate", "(I)Z", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, isLowSurrogate, bool, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(REUtil, main, void, $StringArray*)},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(REUtil, matches, bool, $String*, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"matches", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(REUtil, matches, bool, $String*, $String*, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseOptions", "(Ljava/lang/String;)I", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, parseOptions, int32_t, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"quoteMeta", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(REUtil, quoteMeta, $String*, $String*)},
	{"stripExtendedComment", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(REUtil, stripExtendedComment, $String*, $String*)},
	{"substring", "(Ljava/text/CharacterIterator;II)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticMethod(REUtil, substring, $String*, $CharacterIterator*, int32_t, int32_t)},
	{}
};

$ClassInfo _REUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.REUtil",
	"java.lang.Object",
	nullptr,
	_REUtil_FieldInfo_,
	_REUtil_MethodInfo_
};

$Object* allocate$REUtil($Class* clazz) {
	return $of($alloc(REUtil));
}

$RegularExpressionArray* REUtil::regexCache = nullptr;

void REUtil::init$() {
}

int32_t REUtil::composeFromSurrogates(int32_t high, int32_t low) {
	$init(REUtil);
	return 0x00010000 + ((high - 0x0000D800) << 10) + low - 0x0000DC00;
}

bool REUtil::isLowSurrogate(int32_t ch) {
	$init(REUtil);
	return ((int32_t)(ch & (uint32_t)0x0000FC00)) == 0x0000DC00;
}

bool REUtil::isHighSurrogate(int32_t ch) {
	$init(REUtil);
	return ((int32_t)(ch & (uint32_t)0x0000FC00)) == 0x0000D800;
}

$String* REUtil::decomposeToSurrogates(int32_t ch) {
	$init(REUtil);
	$var($chars, chs, $new($chars, 2));
	ch -= 0x00010000;
	chs->set(0, (char16_t)((ch >> 10) + 0x0000D800));
	chs->set(1, (char16_t)(((int32_t)(ch & (uint32_t)1023)) + 0x0000DC00));
	return $new($String, chs);
}

$String* REUtil::substring($CharacterIterator* iterator, int32_t begin, int32_t end) {
	$init(REUtil);
	$var($chars, src, $new($chars, end - begin));
	for (int32_t i = 0; i < src->length; ++i) {
		src->set(i, $nc(iterator)->setIndex(i + begin));
	}
	return $new($String, src);
}

int32_t REUtil::getOptionValue(int32_t ch) {
	$init(REUtil);
	int32_t ret = 0;
	switch (ch) {
	case u'i':
		{
			ret = $RegularExpression::IGNORE_CASE;
			break;
		}
	case u'm':
		{
			ret = $RegularExpression::MULTIPLE_LINES;
			break;
		}
	case u's':
		{
			ret = $RegularExpression::SINGLE_LINE;
			break;
		}
	case u'x':
		{
			ret = $RegularExpression::EXTENDED_COMMENT;
			break;
		}
	case u'u':
		{
			ret = $RegularExpression::USE_UNICODE_CATEGORY;
			break;
		}
	case u'w':
		{
			ret = $RegularExpression::UNICODE_WORD_BOUNDARY;
			break;
		}
	case u'F':
		{
			ret = $RegularExpression::PROHIBIT_FIXED_STRING_OPTIMIZATION;
			break;
		}
	case u'H':
		{
			ret = $RegularExpression::PROHIBIT_HEAD_CHARACTER_OPTIMIZATION;
			break;
		}
	case u'X':
		{
			ret = $RegularExpression::XMLSCHEMA_MODE;
			break;
		}
	case u',':
		{
			ret = $RegularExpression::SPECIAL_COMMA;
			break;
		}
	default:
		{}
	}
	return ret;
}

int32_t REUtil::parseOptions($String* opts) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	if (opts == nullptr) {
		return 0;
	}
	int32_t options = 0;
	for (int32_t i = 0; i < $nc(opts)->length(); ++i) {
		int32_t v = getOptionValue(opts->charAt(i));
		if (v == 0) {
			$throwNew($ParseException, $$str({"Unknown Option: "_s, $(opts->substring(i))}), -1);
		}
		options |= v;
	}
	return options;
}

$String* REUtil::createOptionString(int32_t options) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 9));
	if (((int32_t)(options & (uint32_t)$RegularExpression::PROHIBIT_FIXED_STRING_OPTIMIZATION)) != 0) {
		sb->append(u'F');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::PROHIBIT_HEAD_CHARACTER_OPTIMIZATION)) != 0) {
		sb->append(u'H');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::XMLSCHEMA_MODE)) != 0) {
		sb->append(u'X');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::IGNORE_CASE)) != 0) {
		sb->append(u'i');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::MULTIPLE_LINES)) != 0) {
		sb->append(u'm');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::SINGLE_LINE)) != 0) {
		sb->append(u's');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::USE_UNICODE_CATEGORY)) != 0) {
		sb->append(u'u');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::UNICODE_WORD_BOUNDARY)) != 0) {
		sb->append(u'w');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::EXTENDED_COMMENT)) != 0) {
		sb->append(u'x');
	}
	if (((int32_t)(options & (uint32_t)$RegularExpression::SPECIAL_COMMA)) != 0) {
		sb->append(u',');
	}
	return $nc($(sb->toString()))->intern();
}

$String* REUtil::stripExtendedComment($String* regex) {
	$init(REUtil);
	int32_t len = $nc(regex)->length();
	$var($StringBuilder, buffer, $new($StringBuilder, len));
	int32_t offset = 0;
	int32_t charClass = 0;
	while (offset < len) {
		int32_t ch = regex->charAt(offset++);
		if (ch == u'\t' || ch == u'\n' || ch == u'\f' || ch == u'\r' || ch == u' ') {
			if (charClass > 0) {
				buffer->append((char16_t)ch);
			}
			continue;
		}
		if (ch == u'#') {
			while (offset < len) {
				ch = regex->charAt(offset++);
				if (ch == u'\r' || ch == u'\n') {
					break;
				}
			}
			continue;
		}
		int32_t next = 0;
		if (ch == u'\\' && offset < len) {
			if ((next = regex->charAt(offset)) == u'#' || next == u'\t' || next == u'\n' || next == u'\f' || next == u'\r' || next == u' ') {
				buffer->append((char16_t)next);
				++offset;
			} else {
				buffer->append(u'\\');
				buffer->append((char16_t)next);
				++offset;
			}
		} else if (ch == u'[') {
			++charClass;
			buffer->append((char16_t)ch);
			if (offset < len) {
				next = regex->charAt(offset);
				if (next == u'[' || next == u']') {
					buffer->append((char16_t)next);
					++offset;
				} else if (next == u'^' && offset + 1 < len) {
					next = regex->charAt(offset + 1);
					if (next == u'[' || next == u']') {
						buffer->append(u'^');
						buffer->append((char16_t)next);
						offset += 2;
					}
				}
			}
		} else {
			if (charClass > 0 && ch == u']') {
				--charClass;
			}
			buffer->append((char16_t)ch);
		}
	}
	return buffer->toString();
}

void REUtil::main($StringArray* argv) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	$var($String, pattern, nullptr);
	try {
		$var($String, options, ""_s);
		$var($String, target, nullptr);
		if ($nc(argv)->length == 0) {
			$nc($System::out)->println("Error:Usage: java REUtil -i|-m|-s|-u|-w|-X regularExpression String"_s);
			$System::exit(0);
		}
		for (int32_t i = 0; i < $nc(argv)->length; ++i) {
			bool var$0 = $nc(argv->get(i))->length() == 0;
			if (var$0 || $nc(argv->get(i))->charAt(0) != u'-') {
				if (pattern == nullptr) {
					$assign(pattern, argv->get(i));
				} else if (target == nullptr) {
					$assign(target, argv->get(i));
				} else {
					$nc($System::err)->println($$str({"Unnecessary: "_s, argv->get(i)}));
				}
			} else if ($nc(argv->get(i))->equals("-i"_s)) {
				$plusAssign(options, "i"_s);
			} else if ($nc(argv->get(i))->equals("-m"_s)) {
				$plusAssign(options, "m"_s);
			} else if ($nc(argv->get(i))->equals("-s"_s)) {
				$plusAssign(options, "s"_s);
			} else if ($nc(argv->get(i))->equals("-u"_s)) {
				$plusAssign(options, "u"_s);
			} else if ($nc(argv->get(i))->equals("-w"_s)) {
				$plusAssign(options, "w"_s);
			} else if ($nc(argv->get(i))->equals("-X"_s)) {
				$plusAssign(options, "X"_s);
			} else {
				$nc($System::err)->println($$str({"Unknown option: "_s, argv->get(i)}));
			}
		}
		$var($RegularExpression, reg, $new($RegularExpression, pattern, options));
		$nc($System::out)->println($$str({"RegularExpression: "_s, reg}));
		$var($Match, match, $new($Match));
		reg->matches(target, match);
		for (int32_t i = 0; i < match->getNumberOfGroups(); ++i) {
			if (i == 0) {
				$nc($System::out)->print("Matched range for the whole pattern: "_s);
			} else {
				$nc($System::out)->print($$str({"["_s, $$str(i), "]: "_s}));
			}
			if (match->getBeginning(i) < 0) {
				$nc($System::out)->println("-1"_s);
			} else {
				$var($String, var$2, $$str({$$str(match->getBeginning(i)), ", "_s}));
				$var($String, var$1, $$concat(var$2, $$str(match->getEnd(i))));
				$nc($System::out)->print($$concat(var$1, ", "_s));
				$nc($System::out)->println($$str({"\""_s, $(match->getCapturedText(i)), "\""_s}));
			}
		}
	} catch ($ParseException& pe) {
		if (pattern == nullptr) {
			pe->printStackTrace();
		} else {
			$nc($System::err)->println($$str({"com.sun.org.apache.xerces.internal.utils.regex.ParseException: "_s, $(pe->getMessage())}));
			$var($String, indent, "        "_s);
			$nc($System::err)->println($$str({indent, pattern}));
			int32_t loc = pe->getLocation();
			if (loc >= 0) {
				$nc($System::err)->print(indent);
				for (int32_t i = 0; i < loc; ++i) {
					$nc($System::err)->print("-"_s);
				}
				$nc($System::err)->println("^"_s);
			}
		}
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

$RegularExpression* REUtil::createRegex($String* pattern, $String* options) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	$var($RegularExpression, re, nullptr);
	int32_t intOptions = REUtil::parseOptions(options);
	$synchronized(REUtil::regexCache) {
		int32_t i = 0;
		for (i = 0; i < REUtil::CACHESIZE; ++i) {
			$var($RegularExpression, cached, $nc(REUtil::regexCache)->get(i));
			if (cached == nullptr) {
				i = -1;
				break;
			}
			if ($nc(cached)->equals(pattern, intOptions)) {
				$assign(re, cached);
				break;
			}
		}
		if (re != nullptr) {
			if (i != 0) {
				$System::arraycopy(REUtil::regexCache, 0, REUtil::regexCache, 1, i);
				$nc(REUtil::regexCache)->set(0, re);
			}
		} else {
			$assign(re, $new($RegularExpression, pattern, options));
			$System::arraycopy(REUtil::regexCache, 0, REUtil::regexCache, 1, REUtil::CACHESIZE - 1);
			$nc(REUtil::regexCache)->set(0, re);
		}
	}
	return re;
}

bool REUtil::matches($String* regex, $String* target) {
	$init(REUtil);
	return $nc($(REUtil::createRegex(regex, nullptr)))->matches(target);
}

bool REUtil::matches($String* regex, $String* options, $String* target) {
	$init(REUtil);
	return $nc($(REUtil::createRegex(regex, options)))->matches(target);
}

$String* REUtil::quoteMeta($String* literal) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(literal)->length();
	$var($StringBuilder, buffer, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		int32_t ch = literal->charAt(i);
		if (".*+?{[()|\\^$"_s->indexOf(ch) >= 0) {
			if (buffer == nullptr) {
				$assign(buffer, $new($StringBuilder, i + (len - i) * 2));
				if (i > 0) {
					buffer->append($(literal->substring(0, i)));
				}
			}
			$nc(buffer)->append(u'\\');
			buffer->append((char16_t)ch);
		} else if (buffer != nullptr) {
			buffer->append((char16_t)ch);
		}
	}
	return buffer != nullptr ? $nc(buffer)->toString() : literal;
}

void REUtil::dumpString($String* v) {
	$init(REUtil);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(v)->length(); ++i) {
		$nc($System::out)->print($($Integer::toHexString(v->charAt(i))));
		$nc($System::out)->print(" "_s);
	}
	$nc($System::out)->println();
}

void clinit$REUtil($Class* class$) {
	$assignStatic(REUtil::regexCache, $new($RegularExpressionArray, REUtil::CACHESIZE));
}

REUtil::REUtil() {
}

$Class* REUtil::load$($String* name, bool initialize) {
	$loadClass(REUtil, name, initialize, &_REUtil_ClassInfo_, clinit$REUtil, allocate$REUtil);
	return class$;
}

$Class* REUtil::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com