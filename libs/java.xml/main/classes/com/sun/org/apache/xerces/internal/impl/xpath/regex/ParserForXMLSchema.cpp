#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParserForXMLSchema.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DIGITS_INTS
#undef IGNORE_CASE
#undef LETTERS
#undef LETTERS_INT
#undef NAMECHARS
#undef SPACES
#undef S_INBRACKETS
#undef S_NORMAL
#undef T_BACKSOLIDUS
#undef T_CHAR
#undef T_EOF
#undef T_RPAREN
#undef T_XMLSCHEMA_CC_SUBTRACTION
#undef UTF16_MAX

using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $RegexParser = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _ParserForXMLSchema_FieldInfo_[] = {
	{"ranges", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC, $staticField(ParserForXMLSchema, ranges)},
	{"ranges2", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC, $staticField(ParserForXMLSchema, ranges2)},
	{"SPACES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, SPACES)},
	{"NAMECHARS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, NAMECHARS)},
	{"LETTERS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, LETTERS)},
	{"LETTERS_INT", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, LETTERS_INT)},
	{"DIGITS_INTS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParserForXMLSchema, DIGITS_INTS)},
	{}
};

$MethodInfo _ParserForXMLSchema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParserForXMLSchema, init$, void)},
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(ParserForXMLSchema, init$, void, $Locale*)},
	{"checkQuestion", "(I)Z", nullptr, 0, $virtualMethod(ParserForXMLSchema, checkQuestion, bool, int32_t)},
	{"decodeEscaped", "()I", nullptr, 0, $virtualMethod(ParserForXMLSchema, decodeEscaped, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"getRange", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED | $STATIC | $SYNCHRONIZED, $staticMethod(ParserForXMLSchema, getRange, $RangeToken*, $String*, bool)},
	{"getTokenForShorthand", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, getTokenForShorthand, $Token*, int32_t)},
	{"parseCharacterClass", "(Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, $virtualMethod(ParserForXMLSchema, parseCharacterClass, $RangeToken*, bool), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseSetOperations", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, $virtualMethod(ParserForXMLSchema, parseSetOperations, $RangeToken*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBackreference", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBackreference, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_A", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_A, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_B", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_B, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_C", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_C, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_I", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_I, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_X", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_X, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_Z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_Z, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_b", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_b, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_c", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_c, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_g", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_g, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_gt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_gt, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_i", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_i, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_lt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_lt, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processBacksolidus_z, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCIinCharacterClass", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;I)I", nullptr, 0, $virtualMethod(ParserForXMLSchema, processCIinCharacterClass, int32_t, $RangeToken*, int32_t)},
	{"processCaret", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processCaret, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCondition", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processCondition, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processDollar", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processDollar, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processIndependent", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processIndependent, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processLookahead, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processLookbehind, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processModifiers", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processModifiers, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processNegativelookahead, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processNegativelookbehind, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processParen, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen2", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processParen2, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processPlus", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processPlus, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processQuestion", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processQuestion, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processStar", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(ParserForXMLSchema, processStar, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setupRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ParserForXMLSchema, setupRange, void, $Token*, $String*)},
	{"setupRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;[I)V", nullptr, $STATIC, $staticMethod(ParserForXMLSchema, setupRange, void, $Token*, $ints*)},
	{}
};

$ClassInfo _ParserForXMLSchema_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.ParserForXMLSchema",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser",
	nullptr,
	_ParserForXMLSchema_FieldInfo_,
	_ParserForXMLSchema_MethodInfo_
};

$Object* allocate$ParserForXMLSchema($Class* clazz) {
	return $of($alloc(ParserForXMLSchema));
}

$Map* ParserForXMLSchema::ranges = nullptr;
$Map* ParserForXMLSchema::ranges2 = nullptr;
$String* ParserForXMLSchema::SPACES = nullptr;
$String* ParserForXMLSchema::NAMECHARS = nullptr;
$String* ParserForXMLSchema::LETTERS = nullptr;
$ints* ParserForXMLSchema::LETTERS_INT = nullptr;
$ints* ParserForXMLSchema::DIGITS_INTS = nullptr;

void ParserForXMLSchema::init$() {
	$RegexParser::init$();
}

void ParserForXMLSchema::init$($Locale* locale) {
	$RegexParser::init$(locale);
}

$Token* ParserForXMLSchema::processCaret() {
	this->next();
	return $Token::createChar(u'^');
}

$Token* ParserForXMLSchema::processDollar() {
	this->next();
	return $Token::createChar(u'$');
}

$Token* ParserForXMLSchema::processLookahead() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processNegativelookahead() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processLookbehind() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processNegativelookbehind() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_A() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_Z() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_z() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_b() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_B() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_lt() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_gt() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processStar($Token* tok) {
	this->next();
	return $Token::createClosure(tok);
}

$Token* ParserForXMLSchema::processPlus($Token* tok) {
	this->next();
	return $Token::createConcat(tok, $($Token::createClosure(tok)));
}

$Token* ParserForXMLSchema::processQuestion($Token* tok) {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, par, $Token::createUnion());
	$nc(par)->addChild(tok);
	par->addChild($($Token::createEmpty()));
	return par;
}

bool ParserForXMLSchema::checkQuestion(int32_t off) {
	return false;
}

$Token* ParserForXMLSchema::processParen() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createParen($(this->parseRegex()), 0));
	if (this->read() != $RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* ParserForXMLSchema::processParen2() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processCondition() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processModifiers() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processIndependent() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_c() {
	this->next();
	return this->getTokenForShorthand(u'c');
}

$Token* ParserForXMLSchema::processBacksolidus_C() {
	this->next();
	return this->getTokenForShorthand(u'C');
}

$Token* ParserForXMLSchema::processBacksolidus_i() {
	this->next();
	return this->getTokenForShorthand(u'i');
}

$Token* ParserForXMLSchema::processBacksolidus_I() {
	this->next();
	return this->getTokenForShorthand(u'I');
}

$Token* ParserForXMLSchema::processBacksolidus_g() {
	$throw($(this->ex("parser.process.1"_s, this->offset - 2)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBacksolidus_X() {
	$throw($(ex("parser.process.1"_s, this->offset - 2)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::processBackreference() {
	$throw($(ex("parser.process.1"_s, this->offset - 4)));
	$shouldNotReachHere();
}

int32_t ParserForXMLSchema::processCIinCharacterClass($RangeToken* tok, int32_t c) {
	$nc(tok)->mergeRanges($(this->getTokenForShorthand(c)));
	return -1;
}

$RangeToken* ParserForXMLSchema::parseCharacterClass(bool useNrange) {
	$useLocalCurrentObjectStackCache();
	this->setContext($RegexParser::S_INBRACKETS);
	this->next();
	bool nrange = false;
	bool wasDecoded = false;
	$var($RangeToken, base, nullptr);
	$var($RangeToken, tok, nullptr);
	if (this->read() == $RegexParser::T_CHAR && this->chardata == u'^') {
		nrange = true;
		this->next();
		$assign(base, $Token::createRange());
		$nc(base)->addRange(0, $Token::UTF16_MAX);
		$assign(tok, $Token::createRange());
	} else {
		$assign(tok, $Token::createRange());
	}
	int32_t type = 0;
	bool firstloop = true;
	while ((type = this->read()) != $RegexParser::T_EOF) {
		wasDecoded = false;
		if (type == $RegexParser::T_CHAR && this->chardata == u']' && !firstloop) {
			if (nrange) {
				$nc(base)->subtractRanges(tok);
				$assign(tok, base);
			}
			break;
		}
		int32_t c = this->chardata;
		bool end = false;
		if (type == $RegexParser::T_BACKSOLIDUS) {
			{
				int32_t pstart = 0;
				$var($RangeToken, tok2, nullptr)
				switch (c) {
				case u'd':
					{}
				case u'D':
					{}
				case u'w':
					{}
				case u'W':
					{}
				case u's':
					{}
				case u'S':
					{
						$nc(tok)->mergeRanges($(this->getTokenForShorthand(c)));
						end = true;
						break;
					}
				case u'i':
					{}
				case u'I':
					{}
				case u'c':
					{}
				case u'C':
					{
						c = this->processCIinCharacterClass(tok, c);
						if (c < 0) {
							end = true;
						}
						break;
					}
				case u'p':
					{}
				case u'P':
					{
						pstart = this->offset;
						$assign(tok2, this->processBacksolidus_pP(c));
						if (tok2 == nullptr) {
							$throw($(this->ex("parser.atom.5"_s, pstart)));
						}
						$nc(tok)->mergeRanges(tok2);
						end = true;
						break;
					}
				case u'-':
					{
						c = this->decodeEscaped();
						wasDecoded = true;
						break;
					}
				default:
					{
						c = this->decodeEscaped();
					}
				}
			}
		} else if (type == $RegexParser::T_XMLSCHEMA_CC_SUBTRACTION && !firstloop) {
			if (nrange) {
				$nc(base)->subtractRanges(tok);
				$assign(tok, base);
			}
			$var($RangeToken, range2, this->parseCharacterClass(false));
			$nc(tok)->subtractRanges(range2);
			if (this->read() != $RegexParser::T_CHAR || this->chardata != u']') {
				$throw($(this->ex("parser.cc.5"_s, this->offset)));
			}
			break;
		}
		this->next();
		if (!end) {
			if (type == $RegexParser::T_CHAR) {
				if (c == u'[') {
					$throw($(this->ex("parser.cc.6"_s, this->offset - 2)));
				}
				if (c == u']') {
					$throw($(this->ex("parser.cc.7"_s, this->offset - 2)));
				}
				if (c == u'-' && this->chardata != u']' && !firstloop) {
					$throw($(this->ex("parser.cc.8"_s, this->offset - 2)));
				}
			}
			if (this->read() != $RegexParser::T_CHAR || this->chardata != u'-' || c == u'-' && !wasDecoded && firstloop) {
				if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
					$nc(tok)->addRange(c, c);
				} else {
					addCaseInsensitiveChar(tok, c);
				}
			} else {
				this->next();
				if ((type = this->read()) == $RegexParser::T_EOF) {
					$throw($(this->ex("parser.cc.2"_s, this->offset)));
				}
				if (type == $RegexParser::T_CHAR && this->chardata == u']') {
					if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
						$nc(tok)->addRange(c, c);
					} else {
						addCaseInsensitiveChar(tok, c);
					}
					$nc(tok)->addRange(u'-', u'-');
				} else if (type == $RegexParser::T_XMLSCHEMA_CC_SUBTRACTION) {
					$throw($(this->ex("parser.cc.8"_s, this->offset - 1)));
				} else {
					int32_t rangeend = this->chardata;
					if (type == $RegexParser::T_CHAR) {
						if (rangeend == u'[') {
							$throw($(this->ex("parser.cc.6"_s, this->offset - 1)));
						}
						if (rangeend == u']') {
							$throw($(this->ex("parser.cc.7"_s, this->offset - 1)));
						}
						if (rangeend == u'-') {
							$throw($(this->ex("parser.cc.8"_s, this->offset - 2)));
						}
					} else if (type == $RegexParser::T_BACKSOLIDUS) {
						rangeend = this->decodeEscaped();
					}
					this->next();
					if (c > rangeend) {
						$throw($(this->ex("parser.ope.3"_s, this->offset - 1)));
					}
					if (!this->isSet($RegularExpression::IGNORE_CASE) || (c > 0x0000FFFF && rangeend > 0x0000FFFF)) {
						$nc(tok)->addRange(c, rangeend);
					} else {
						addCaseInsensitiveCharRange(tok, c, rangeend);
					}
				}
			}
		}
		firstloop = false;
	}
	if (this->read() == $RegexParser::T_EOF) {
		$throw($(this->ex("parser.cc.2"_s, this->offset)));
	}
	$nc(tok)->sortRanges();
	tok->compactRanges();
	this->setContext($RegexParser::S_NORMAL);
	this->next();
	return tok;
}

$RangeToken* ParserForXMLSchema::parseSetOperations() {
	$throw($(this->ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* ParserForXMLSchema::getTokenForShorthand(int32_t ch) {
	$useLocalCurrentObjectStackCache();
	switch (ch) {
	case u'd':
		{
			return ParserForXMLSchema::getRange("xml:isDigit"_s, true);
		}
	case u'D':
		{
			return ParserForXMLSchema::getRange("xml:isDigit"_s, false);
		}
	case u'w':
		{
			return ParserForXMLSchema::getRange("xml:isWord"_s, true);
		}
	case u'W':
		{
			return ParserForXMLSchema::getRange("xml:isWord"_s, false);
		}
	case u's':
		{
			return ParserForXMLSchema::getRange("xml:isSpace"_s, true);
		}
	case u'S':
		{
			return ParserForXMLSchema::getRange("xml:isSpace"_s, false);
		}
	case u'c':
		{
			return ParserForXMLSchema::getRange("xml:isNameChar"_s, true);
		}
	case u'C':
		{
			return ParserForXMLSchema::getRange("xml:isNameChar"_s, false);
		}
	case u'i':
		{
			return ParserForXMLSchema::getRange("xml:isInitialNameChar"_s, true);
		}
	case u'I':
		{
			return ParserForXMLSchema::getRange("xml:isInitialNameChar"_s, false);
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Internal Error: shorthands: \\u"_s, $($Integer::toString(ch, 16))}));
		}
	}
}

int32_t ParserForXMLSchema::decodeEscaped() {
	$useLocalCurrentObjectStackCache();
	if (this->read() != $RegexParser::T_BACKSOLIDUS) {
		$throw($(ex("parser.next.1"_s, this->offset - 1)));
	}
	int32_t c = this->chardata;
	switch (c) {
	case u'n':
		{
			c = u'\n';
			break;
		}
	case u'r':
		{
			c = u'\r';
			break;
		}
	case u't':
		{
			c = u'\t';
			break;
		}
	case u'\\':
		{}
	case u'|':
		{}
	case u'.':
		{}
	case u'^':
		{}
	case u'-':
		{}
	case u'?':
		{}
	case u'*':
		{}
	case u'+':
		{}
	case u'{':
		{}
	case u'}':
		{}
	case u'(':
		{}
	case u')':
		{}
	case u'[':
		{}
	case u']':
		{
			break;
		}
	default:
		{
			$throw($(ex("parser.process.1"_s, this->offset - 2)));
		}
	}
	return c;
}

$RangeToken* ParserForXMLSchema::getRange($String* name, bool positive) {
	$load(ParserForXMLSchema);
	$synchronized(class$) {
		$init(ParserForXMLSchema);
		$useLocalCurrentObjectStackCache();
		if (ParserForXMLSchema::ranges == nullptr) {
			$assignStatic(ParserForXMLSchema::ranges, $new($HashMap));
			$assignStatic(ParserForXMLSchema::ranges2, $new($HashMap));
			$var($Token, tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::SPACES);
			$nc(ParserForXMLSchema::ranges)->put("xml:isSpace"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isSpace"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::DIGITS_INTS);
			$nc(ParserForXMLSchema::ranges)->put("xml:isDigit"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isDigit"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			$nc(tok)->mergeRanges($($Token::getRange("P"_s, true)));
			tok->mergeRanges($($Token::getRange("Z"_s, true)));
			tok->mergeRanges($($Token::getRange("C"_s, true)));
			$nc(ParserForXMLSchema::ranges2)->put("xml:isWord"_s, tok);
			$nc(ParserForXMLSchema::ranges)->put("xml:isWord"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::NAMECHARS);
			$nc(ParserForXMLSchema::ranges)->put("xml:isNameChar"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isNameChar"_s, $($Token::complementRanges(tok)));
			$assign(tok, $Token::createRange());
			setupRange(tok, ParserForXMLSchema::LETTERS);
			setupRange(tok, ParserForXMLSchema::LETTERS_INT);
			tok->addRange(u'_', u'_');
			tok->addRange(u':', u':');
			$nc(ParserForXMLSchema::ranges)->put("xml:isInitialNameChar"_s, tok);
			$nc(ParserForXMLSchema::ranges2)->put("xml:isInitialNameChar"_s, $($Token::complementRanges(tok)));
		}
		$var($RangeToken, tok, positive ? $cast($RangeToken, $nc(ParserForXMLSchema::ranges)->get(name)) : $cast($RangeToken, $nc(ParserForXMLSchema::ranges2)->get(name)));
		return tok;
	}
}

void ParserForXMLSchema::setupRange($Token* range, $String* src) {
	$init(ParserForXMLSchema);
	int32_t len = $nc(src)->length();
	for (int32_t i = 0; i < len; i += 2) {
		int32_t var$0 = (int32_t)src->charAt(i);
		$nc(range)->addRange(var$0, src->charAt(i + 1));
	}
}

void ParserForXMLSchema::setupRange($Token* range, $ints* src) {
	$init(ParserForXMLSchema);
	int32_t len = $nc(src)->length;
	for (int32_t i = 0; i < len; i += 2) {
		$nc(range)->addRange(src->get(i), src->get(i + 1));
	}
}

void clinit$ParserForXMLSchema($Class* class$) {
	$assignStatic(ParserForXMLSchema::SPACES, "\t\n\r\r  "_s);
	$assignStatic(ParserForXMLSchema::NAMECHARS, u"-.0:AZ__az··ÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁːˑ̀͠͡ͅΆΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁ҃҆ҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆֹֻֽֿֿׁׂ֑֣֡ׄׄאתװײءغـْ٠٩ٰڷںھۀێېۓە۪ۭۨ۰۹ँःअह़्॑॔क़ॣ०९ঁঃঅঌএঐওনপরললশহ়়াৄেৈো্ৗৗড়ঢ়য়ৣ০ৱਂਂਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹ਼਼ਾੂੇੈੋ੍ਖ਼ੜਫ਼ਫ਼੦ੴઁઃઅઋઍઍએઑઓનપરલળવહ઼ૅેૉો્ૠૠ૦૯ଁଃଅଌଏଐଓନପରଲଳଶହ଼ୃେୈୋ୍ୖୗଡ଼ଢ଼ୟୡ୦୯ஂஃஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹாூெைொ்ௗௗ௧௯ఁఃఅఌఎఐఒనపళవహాౄెైొ్ౕౖౠౡ౦౯ಂಃಅಌಎಐಒನಪಳವಹಾೄೆೈೊ್ೕೖೞೞೠೡ೦೯ംഃഅഌഎഐഒനപഹാൃെൈൊ്ൗൗൠൡ൦൯กฮะฺเ๎๐๙ກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະູົຽເໄໆໆ່ໍ໐໙༘༙༠༩༹༹༵༵༷༷༾ཇཉཀྵ྄ཱ྆ྋྐྕྗྗྙྭྱྷྐྵྐྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼ⃐⃜⃡⃡ΩΩKÅ℮℮ↀↂ々々〇〇〡〯〱〵ぁゔ゙゚ゝゞァヺーヾㄅㄬ一龥가힣"_s);
	$assignStatic(ParserForXMLSchema::LETTERS, u"AZazÀÖØöøıĴľŁňŊžƀǰǴǵǺȗɐʨʻˁʰˑΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣ｦﾟ"_s);
	$assignStatic(ParserForXMLSchema::ranges, nullptr);
	$assignStatic(ParserForXMLSchema::ranges2, nullptr);
	$assignStatic(ParserForXMLSchema::LETTERS_INT, $new($ints, {
		0x0001D790,
		0x0001D7A8,
		0x0001D7AA,
		0x0001D7C9,
		0x0002FA1B,
		0x0002FA1D
	}));
	$assignStatic(ParserForXMLSchema::DIGITS_INTS, $new($ints, {
		48,
		57,
		1632,
		1641,
		1776,
		1785,
		2406,
		2415,
		2534,
		2543,
		2662,
		2671,
		2790,
		2799,
		2918,
		2927,
		3047,
		3055,
		3174,
		3183,
		3302,
		3311,
		3430,
		3439,
		3664,
		3673,
		3792,
		3801,
		3872,
		3881,
		4160,
		4169,
		4969,
		4977,
		6112,
		6121,
		6160,
		6169,
		0x0000FF10,
		0x0000FF19,
		0x0001D7CE,
		0x0001D7FF
	}));
}

ParserForXMLSchema::ParserForXMLSchema() {
}

$Class* ParserForXMLSchema::load$($String* name, bool initialize) {
	$loadClass(ParserForXMLSchema, name, initialize, &_ParserForXMLSchema_ClassInfo_, clinit$ParserForXMLSchema, allocate$ParserForXMLSchema);
	return class$;
}

$Class* ParserForXMLSchema::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com