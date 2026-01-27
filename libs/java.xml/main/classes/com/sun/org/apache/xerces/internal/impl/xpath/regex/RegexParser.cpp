#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/CaseInsensitiveMap.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser$ReferencePosition.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConditionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ModifierToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ANCHOR
#undef EXTENDED_COMMENT
#undef IGNORE_CASE
#undef INDEPENDENT
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef SPECIAL_COMMA
#undef S_INBRACKETS
#undef S_INXBRACKETS
#undef S_NORMAL
#undef T_BACKSOLIDUS
#undef T_CARET
#undef T_CHAR
#undef T_COMMENT
#undef T_CONDITION
#undef T_DOLLAR
#undef T_DOT
#undef T_EOF
#undef T_INDEPENDENT
#undef T_LBRACKET
#undef T_LOOKAHEAD
#undef T_LOOKBEHIND
#undef T_LPAREN
#undef T_LPAREN2
#undef T_MODIFIERS
#undef T_NEGATIVELOOKAHEAD
#undef T_NEGATIVELOOKBEHIND
#undef T_OR
#undef T_PLUS
#undef T_POSIX_CHARCLASS_START
#undef T_QUESTION
#undef T_RPAREN
#undef T_SET_OPERATIONS
#undef T_STAR
#undef T_XMLSCHEMA_CC_SUBTRACTION
#undef UNION
#undef USE_UNICODE_CATEGORY
#undef UTF16_MAX
#undef XMLSCHEMA_MODE

using $CaseInsensitiveMap = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::CaseInsensitiveMap;
using $ParseException = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::ParseException;
using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $RegexParser$ReferencePosition = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser$ReferencePosition;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RegexParser_FieldInfo_[] = {
	{"T_CHAR", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_CHAR)},
	{"T_EOF", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_EOF)},
	{"T_OR", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_OR)},
	{"T_STAR", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_STAR)},
	{"T_PLUS", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_PLUS)},
	{"T_QUESTION", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_QUESTION)},
	{"T_LPAREN", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_LPAREN)},
	{"T_RPAREN", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_RPAREN)},
	{"T_DOT", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_DOT)},
	{"T_LBRACKET", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_LBRACKET)},
	{"T_BACKSOLIDUS", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_BACKSOLIDUS)},
	{"T_CARET", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_CARET)},
	{"T_DOLLAR", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_DOLLAR)},
	{"T_LPAREN2", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_LPAREN2)},
	{"T_LOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_LOOKAHEAD)},
	{"T_NEGATIVELOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_NEGATIVELOOKAHEAD)},
	{"T_LOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_LOOKBEHIND)},
	{"T_NEGATIVELOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_NEGATIVELOOKBEHIND)},
	{"T_INDEPENDENT", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_INDEPENDENT)},
	{"T_SET_OPERATIONS", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_SET_OPERATIONS)},
	{"T_POSIX_CHARCLASS_START", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_POSIX_CHARCLASS_START)},
	{"T_COMMENT", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_COMMENT)},
	{"T_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_MODIFIERS)},
	{"T_CONDITION", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_CONDITION)},
	{"T_XMLSCHEMA_CC_SUBTRACTION", "I", nullptr, $STATIC | $FINAL, $constField(RegexParser, T_XMLSCHEMA_CC_SUBTRACTION)},
	{"offset", "I", nullptr, 0, $field(RegexParser, offset)},
	{"regex", "Ljava/lang/String;", nullptr, 0, $field(RegexParser, regex)},
	{"regexlen", "I", nullptr, 0, $field(RegexParser, regexlen)},
	{"options", "I", nullptr, 0, $field(RegexParser, options)},
	{"resources", "Ljava/util/ResourceBundle;", nullptr, 0, $field(RegexParser, resources)},
	{"chardata", "I", nullptr, 0, $field(RegexParser, chardata)},
	{"nexttoken", "I", nullptr, 0, $field(RegexParser, nexttoken)},
	{"S_NORMAL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RegexParser, S_NORMAL)},
	{"S_INBRACKETS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RegexParser, S_INBRACKETS)},
	{"S_INXBRACKETS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(RegexParser, S_INXBRACKETS)},
	{"context", "I", nullptr, 0, $field(RegexParser, context)},
	{"parenOpened", "I", nullptr, 0, $field(RegexParser, parenOpened)},
	{"parennumber", "I", nullptr, 0, $field(RegexParser, parennumber)},
	{"hasBackReferences", "Z", nullptr, 0, $field(RegexParser, hasBackReferences)},
	{"references", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser$ReferencePosition;>;", 0, $field(RegexParser, references)},
	{}
};

$MethodInfo _RegexParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RegexParser, init$, void)},
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(RegexParser, init$, void, $Locale*)},
	{"addCaseInsensitiveChar", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;I)V", nullptr, $PROTECTED | $STATIC | $FINAL, $staticMethod(RegexParser, addCaseInsensitiveChar, void, $RangeToken*, int32_t)},
	{"addCaseInsensitiveCharRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;II)V", nullptr, $PROTECTED | $STATIC | $FINAL, $staticMethod(RegexParser, addCaseInsensitiveCharRange, void, $RangeToken*, int32_t, int32_t)},
	{"checkQuestion", "(I)Z", nullptr, 0, $virtualMethod(RegexParser, checkQuestion, bool, int32_t)},
	{"decodeEscaped", "()I", nullptr, 0, $virtualMethod(RegexParser, decodeEscaped, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"ex", "(Ljava/lang/String;I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException;", nullptr, $FINAL, $method(RegexParser, ex, $ParseException*, $String*, int32_t)},
	{"getTokenForShorthand", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, getTokenForShorthand, $Token*, int32_t)},
	{"hexChar", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegexParser, hexChar, int32_t, int32_t)},
	{"isSet", "(I)Z", nullptr, $PROTECTED | $FINAL, $method(RegexParser, isSet, bool, int32_t)},
	{"next", "()V", nullptr, $FINAL, $method(RegexParser, next, void)},
	{"parse", "(Ljava/lang/String;I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, parse, $Token*, $String*, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseAtom", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, parseAtom, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseCharacterClass", "(Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, $virtualMethod(RegexParser, parseCharacterClass, $RangeToken*, bool), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseFactor", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, parseFactor, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseRegex", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, parseRegex, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseSetOperations", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, $virtualMethod(RegexParser, parseSetOperations, $RangeToken*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"parseTerm", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, parseTerm, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBackreference", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBackreference, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_A", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_A, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_B", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_B, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_C", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_C, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_I", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_I, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_X", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_X, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_Z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_Z, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_b", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_b, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_c", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_c, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_g", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_g, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_gt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_gt, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_i", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_i, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_lt", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_lt, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_pP", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED, $virtualMethod(RegexParser, processBacksolidus_pP, $RangeToken*, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processBacksolidus_z", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processBacksolidus_z, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCIinCharacterClass", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;I)I", nullptr, 0, $virtualMethod(RegexParser, processCIinCharacterClass, int32_t, $RangeToken*, int32_t)},
	{"processCaret", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processCaret, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processCondition", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processCondition, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processDollar", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processDollar, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processIndependent", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processIndependent, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processLookahead, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processLookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processLookbehind, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processModifiers", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processModifiers, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookahead", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processNegativelookahead, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processNegativelookbehind", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processNegativelookbehind, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processParen, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processParen2", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processParen2, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processPlus", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processPlus, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processQuestion", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processQuestion, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"processStar", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(RegexParser, processStar, $Token*, $Token*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"read", "()I", nullptr, $FINAL, $method(RegexParser, read, int32_t)},
	{"setContext", "(I)V", nullptr, $PROTECTED | $FINAL, $method(RegexParser, setContext, void, int32_t)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(RegexParser, setLocale, void, $Locale*)},
	{}
};

$InnerClassInfo _RegexParser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser$ReferencePosition", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser", "ReferencePosition", $STATIC},
	{}
};

$ClassInfo _RegexParser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser",
	"java.lang.Object",
	nullptr,
	_RegexParser_FieldInfo_,
	_RegexParser_MethodInfo_,
	nullptr,
	nullptr,
	_RegexParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser$ReferencePosition"
};

$Object* allocate$RegexParser($Class* clazz) {
	return $of($alloc(RegexParser));
}

void RegexParser::init$() {
	this->context = RegexParser::S_NORMAL;
	this->parenOpened = 1;
	this->parennumber = 1;
	$set(this, references, nullptr);
	this->setLocale($($Locale::getDefault()));
}

void RegexParser::init$($Locale* locale) {
	this->context = RegexParser::S_NORMAL;
	this->parenOpened = 1;
	this->parennumber = 1;
	$set(this, references, nullptr);
	this->setLocale(locale);
}

void RegexParser::setLocale($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	try {
		if (locale != nullptr) {
			$set(this, resources, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.xpath.regex.message"_s, locale));
		} else {
			$set(this, resources, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.xpath.regex.message"_s));
		}
	} catch ($MissingResourceException& mre) {
		$throwNew($RuntimeException, $$str({"Installation Problem???  Couldn\'t load messages: "_s, $(mre->getMessage())}));
	}
}

$ParseException* RegexParser::ex($String* key, int32_t loc) {
	return $new($ParseException, $($nc(this->resources)->getString(key)), loc);
}

bool RegexParser::isSet(int32_t flag) {
	return ((int32_t)(this->options & (uint32_t)flag)) == flag;
}

$Token* RegexParser::parse($String* regex, int32_t options) {
	$useLocalCurrentObjectStackCache();
	this->options = options;
	this->offset = 0;
	this->setContext(RegexParser::S_NORMAL);
	this->parennumber = 1;
	this->parenOpened = 1;
	this->hasBackReferences = false;
	$set(this, regex, regex);
	if (this->isSet($RegularExpression::EXTENDED_COMMENT)) {
		$set(this, regex, $REUtil::stripExtendedComment(this->regex));
	}
	this->regexlen = $nc(this->regex)->length();
	this->next();
	$var($Token, ret, this->parseRegex());
	if (this->offset != this->regexlen) {
		$throw($(ex("parser.parse.1"_s, this->offset)));
	}
	if (this->read() != RegexParser::T_EOF) {
		$throw($(ex("parser.parse.1"_s, this->offset - 1)));
	}
	if (this->references != nullptr) {
		for (int32_t i = 0; i < $nc(this->references)->size(); ++i) {
			$var($RegexParser$ReferencePosition, position, $cast($RegexParser$ReferencePosition, $nc(this->references)->get(i)));
			if (this->parennumber <= $nc(position)->refNumber) {
				$throw($(ex("parser.parse.2"_s, position->position)));
			}
		}
		$nc(this->references)->clear();
	}
	return ret;
}

void RegexParser::setContext(int32_t con) {
	this->context = con;
}

int32_t RegexParser::read() {
	return this->nexttoken;
}

void RegexParser::next() {
	$useLocalCurrentObjectStackCache();
	if (this->offset >= this->regexlen) {
		this->chardata = -1;
		this->nexttoken = RegexParser::T_EOF;
		return;
	}
	int32_t ret = 0;
	int32_t ch = $nc(this->regex)->charAt(this->offset++);
	this->chardata = ch;
	if (this->context == RegexParser::S_INBRACKETS) {
		switch (ch) {
		case u'\\':
			{
				ret = RegexParser::T_BACKSOLIDUS;
				if (this->offset >= this->regexlen) {
					$throw($(ex("parser.next.1"_s, this->offset - 1)));
				}
				this->chardata = $nc(this->regex)->charAt(this->offset++);
				break;
			}
		case u'-':
			{
				if (this->offset < this->regexlen && $nc(this->regex)->charAt(this->offset) == u'[') {
					++this->offset;
					ret = RegexParser::T_XMLSCHEMA_CC_SUBTRACTION;
				} else {
					ret = RegexParser::T_CHAR;
				}
				break;
			}
		case u'[':
			{
				bool var$0 = !this->isSet($RegularExpression::XMLSCHEMA_MODE) && this->offset < this->regexlen;
				if (var$0 && $nc(this->regex)->charAt(this->offset) == u':') {
					++this->offset;
					ret = RegexParser::T_POSIX_CHARCLASS_START;
					break;
				}
			}
		default:
			{
				if ($REUtil::isHighSurrogate(ch) && this->offset < this->regexlen) {
					int32_t low = $nc(this->regex)->charAt(this->offset);
					if ($REUtil::isLowSurrogate(low)) {
						this->chardata = $REUtil::composeFromSurrogates(ch, low);
						++this->offset;
					}
				}
				ret = RegexParser::T_CHAR;
			}
		}
		this->nexttoken = ret;
		return;
	}
	switch (ch) {
	case u'|':
		{
			ret = RegexParser::T_OR;
			break;
		}
	case u'*':
		{
			ret = RegexParser::T_STAR;
			break;
		}
	case u'+':
		{
			ret = RegexParser::T_PLUS;
			break;
		}
	case u'?':
		{
			ret = RegexParser::T_QUESTION;
			break;
		}
	case u')':
		{
			ret = RegexParser::T_RPAREN;
			break;
		}
	case u'.':
		{
			ret = RegexParser::T_DOT;
			break;
		}
	case u'[':
		{
			ret = RegexParser::T_LBRACKET;
			break;
		}
	case u'^':
		{
			if (this->isSet($RegularExpression::XMLSCHEMA_MODE)) {
				ret = RegexParser::T_CHAR;
			} else {
				ret = RegexParser::T_CARET;
			}
			break;
		}
	case u'$':
		{
			if (this->isSet($RegularExpression::XMLSCHEMA_MODE)) {
				ret = RegexParser::T_CHAR;
			} else {
				ret = RegexParser::T_DOLLAR;
			}
			break;
		}
	case u'(':
		{
			ret = RegexParser::T_LPAREN;
			if (this->offset >= this->regexlen) {
				break;
			}
			if ($nc(this->regex)->charAt(this->offset) != u'?') {
				break;
			}
			int32_t var$1 = ++this->offset;
			if (var$1 >= this->regexlen) {
				$throw($(ex("parser.next.2"_s, this->offset - 1)));
			}
			ch = $nc(this->regex)->charAt(this->offset++);
			switch (ch) {
			case u':':
				{
					ret = RegexParser::T_LPAREN2;
					break;
				}
			case u'=':
				{
					ret = RegexParser::T_LOOKAHEAD;
					break;
				}
			case u'!':
				{
					ret = RegexParser::T_NEGATIVELOOKAHEAD;
					break;
				}
			case u'[':
				{
					ret = RegexParser::T_SET_OPERATIONS;
					break;
				}
			case u'>':
				{
					ret = RegexParser::T_INDEPENDENT;
					break;
				}
			case u'<':
				{
					if (this->offset >= this->regexlen) {
						$throw($(ex("parser.next.2"_s, this->offset - 3)));
					}
					ch = $nc(this->regex)->charAt(this->offset++);
					if (ch == u'=') {
						ret = RegexParser::T_LOOKBEHIND;
					} else if (ch == u'!') {
						ret = RegexParser::T_NEGATIVELOOKBEHIND;
					} else {
						$throw($(ex("parser.next.3"_s, this->offset - 3)));
					}
					break;
				}
			case u'#':
				{
					while (this->offset < this->regexlen) {
						ch = $nc(this->regex)->charAt(this->offset++);
						if (ch == u')') {
							break;
						}
					}
					if (ch != u')') {
						$throw($(ex("parser.next.4"_s, this->offset - 1)));
					}
					ret = RegexParser::T_COMMENT;
					break;
				}
			default:
				{
					if (ch == u'-' || u'a' <= ch && ch <= u'z' || u'A' <= ch && ch <= u'Z') {
						--this->offset;
						ret = RegexParser::T_MODIFIERS;
						break;
					} else if (ch == u'(') {
						ret = RegexParser::T_CONDITION;
						break;
					}
					$throw($(ex("parser.next.2"_s, this->offset - 2)));
				}
			}
			break;
		}
	case u'\\':
		{
			ret = RegexParser::T_BACKSOLIDUS;
			if (this->offset >= this->regexlen) {
				$throw($(ex("parser.next.1"_s, this->offset - 1)));
			}
			this->chardata = $nc(this->regex)->charAt(this->offset++);
			break;
		}
	default:
		{
			ret = RegexParser::T_CHAR;
		}
	}
	this->nexttoken = ret;
}

$Token* RegexParser::parseRegex() {
	$useLocalCurrentObjectStackCache();
	$var($Token, tok, this->parseTerm());
	$var($Token, parent, nullptr);
	while (this->read() == RegexParser::T_OR) {
		this->next();
		if (parent == nullptr) {
			$assign(parent, $Token::createUnion());
			$nc(parent)->addChild(tok);
			$assign(tok, parent);
		}
		$nc(tok)->addChild($(this->parseTerm()));
	}
	return tok;
}

$Token* RegexParser::parseTerm() {
	$useLocalCurrentObjectStackCache();
	int32_t ch = this->read();
	if (ch == RegexParser::T_OR || ch == RegexParser::T_RPAREN || ch == RegexParser::T_EOF) {
		return $Token::createEmpty();
	} else {
		$var($Token, tok, this->parseFactor());
		$var($Token, concat, nullptr);
		while (true) {
			bool var$1 = (ch = this->read()) != RegexParser::T_OR;
			bool var$0 = var$1 && ch != RegexParser::T_RPAREN;
			if (!(var$0 && ch != RegexParser::T_EOF)) {
				break;
			}
			{
				if (concat == nullptr) {
					$assign(concat, $Token::createConcat());
					$nc(concat)->addChild(tok);
					$assign(tok, concat);
				}
				$nc(concat)->addChild($(this->parseFactor()));
			}
		}
		return tok;
	}
}

$Token* RegexParser::processCaret() {
	this->next();
	$init($Token);
	return $Token::token_linebeginning;
}

$Token* RegexParser::processDollar() {
	this->next();
	$init($Token);
	return $Token::token_lineend;
}

$Token* RegexParser::processLookahead() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createLook($Token::LOOKAHEAD, $(this->parseRegex())));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processNegativelookahead() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createLook($Token::NEGATIVELOOKAHEAD, $(this->parseRegex())));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processLookbehind() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createLook($Token::LOOKBEHIND, $(this->parseRegex())));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processNegativelookbehind() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createLook($Token::NEGATIVELOOKBEHIND, $(this->parseRegex())));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processBacksolidus_A() {
	this->next();
	$init($Token);
	return $Token::token_stringbeginning;
}

$Token* RegexParser::processBacksolidus_Z() {
	this->next();
	$init($Token);
	return $Token::token_stringend2;
}

$Token* RegexParser::processBacksolidus_z() {
	this->next();
	$init($Token);
	return $Token::token_stringend;
}

$Token* RegexParser::processBacksolidus_b() {
	this->next();
	$init($Token);
	return $Token::token_wordedge;
}

$Token* RegexParser::processBacksolidus_B() {
	this->next();
	$init($Token);
	return $Token::token_not_wordedge;
}

$Token* RegexParser::processBacksolidus_lt() {
	this->next();
	$init($Token);
	return $Token::token_wordbeginning;
}

$Token* RegexParser::processBacksolidus_gt() {
	this->next();
	$init($Token);
	return $Token::token_wordend;
}

$Token* RegexParser::processStar($Token* tok) {
	this->next();
	if (this->read() == RegexParser::T_QUESTION) {
		this->next();
		return $Token::createNGClosure(tok);
	} else {
		return $Token::createClosure(tok);
	}
}

$Token* RegexParser::processPlus($Token* tok) {
	$useLocalCurrentObjectStackCache();
	this->next();
	if (this->read() == RegexParser::T_QUESTION) {
		this->next();
		return $Token::createConcat(tok, $($Token::createNGClosure(tok)));
	} else {
		return $Token::createConcat(tok, $($Token::createClosure(tok)));
	}
}

$Token* RegexParser::processQuestion($Token* tok) {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, par, $Token::createUnion());
	if (this->read() == RegexParser::T_QUESTION) {
		this->next();
		$nc(par)->addChild($($Token::createEmpty()));
		par->addChild(tok);
	} else {
		$nc(par)->addChild(tok);
		par->addChild($($Token::createEmpty()));
	}
	return par;
}

bool RegexParser::checkQuestion(int32_t off) {
	return off < this->regexlen && $nc(this->regex)->charAt(off) == u'?';
}

$Token* RegexParser::processParen() {
	$useLocalCurrentObjectStackCache();
	this->next();
	int32_t p = this->parenOpened++;
	$var($Token, tok, $Token::createParen($(this->parseRegex()), p));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	++this->parennumber;
	this->next();
	return tok;
}

$Token* RegexParser::processParen2() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createParen($(this->parseRegex()), 0));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processCondition() {
	$useLocalCurrentObjectStackCache();
	if (this->offset + 1 >= this->regexlen) {
		$throw($(ex("parser.factor.4"_s, this->offset)));
	}
	int32_t refno = -1;
	$var($Token, condition, nullptr);
	int32_t ch = $nc(this->regex)->charAt(this->offset);
	if (u'1' <= ch && ch <= u'9') {
		refno = ch - u'0';
		int32_t finalRefno = refno;
		if (this->parennumber <= refno) {
			$throw($(ex("parser.parse.2"_s, this->offset)));
		}
		while (this->offset + 1 < this->regexlen) {
			ch = $nc(this->regex)->charAt(this->offset + 1);
			if (u'0' <= ch && ch <= u'9') {
				refno = (refno * 10) + (ch - u'0');
				if (refno < this->parennumber) {
					finalRefno = refno;
					++this->offset;
				} else {
					break;
				}
			} else {
				break;
			}
		}
		this->hasBackReferences = true;
		if (this->references == nullptr) {
			$set(this, references, $new($ArrayList));
		}
		$nc(this->references)->add($$new($RegexParser$ReferencePosition, finalRefno, this->offset));
		++this->offset;
		if ($nc(this->regex)->charAt(this->offset) != u')') {
			$throw($(ex("parser.factor.1"_s, this->offset)));
		}
		++this->offset;
	} else {
		if (ch == u'?') {
			--this->offset;
		}
		this->next();
		$assign(condition, this->parseFactor());
		switch ($nc(condition)->type) {
		case $Token::LOOKAHEAD:
			{}
		case $Token::NEGATIVELOOKAHEAD:
			{}
		case $Token::LOOKBEHIND:
			{}
		case $Token::NEGATIVELOOKBEHIND:
			{
				break;
			}
		case $Token::ANCHOR:
			{
				if (this->read() != RegexParser::T_RPAREN) {
					$throw($(ex("parser.factor.1"_s, this->offset - 1)));
				}
				break;
			}
		default:
			{
				$throw($(ex("parser.factor.5"_s, this->offset)));
			}
		}
	}
	this->next();
	$var($Token, yesPattern, this->parseRegex());
	$var($Token, noPattern, nullptr);
	if ($nc(yesPattern)->type == $Token::UNION) {
		if (yesPattern->size() != 2) {
			$throw($(ex("parser.factor.6"_s, this->offset)));
		}
		$assign(noPattern, yesPattern->getChild(1));
		$assign(yesPattern, yesPattern->getChild(0));
	}
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return $Token::createCondition(refno, condition, yesPattern, noPattern);
}

$Token* RegexParser::processModifiers() {
	$useLocalCurrentObjectStackCache();
	int32_t add = 0;
	int32_t mask = 0;
	int32_t ch = -1;
	while (this->offset < this->regexlen) {
		ch = $nc(this->regex)->charAt(this->offset);
		int32_t v = $REUtil::getOptionValue(ch);
		if (v == 0) {
			break;
		}
		add |= v;
		++this->offset;
	}
	if (this->offset >= this->regexlen) {
		$throw($(ex("parser.factor.2"_s, this->offset - 1)));
	}
	if (ch == u'-') {
		++this->offset;
		while (this->offset < this->regexlen) {
			ch = $nc(this->regex)->charAt(this->offset);
			int32_t v = $REUtil::getOptionValue(ch);
			if (v == 0) {
				break;
			}
			mask |= v;
			++this->offset;
		}
		if (this->offset >= this->regexlen) {
			$throw($(ex("parser.factor.2"_s, this->offset - 1)));
		}
	}
	$var($Token, tok, nullptr);
	if (ch == u':') {
		++this->offset;
		this->next();
		$assign(tok, $Token::createModifierGroup($(this->parseRegex()), add, mask));
		if (this->read() != RegexParser::T_RPAREN) {
			$throw($(ex("parser.factor.1"_s, this->offset - 1)));
		}
		this->next();
	} else if (ch == u')') {
		++this->offset;
		this->next();
		$assign(tok, $Token::createModifierGroup($(this->parseRegex()), add, mask));
	} else {
		$throw($(ex("parser.factor.3"_s, this->offset)));
	}
	return tok;
}

$Token* RegexParser::processIndependent() {
	$useLocalCurrentObjectStackCache();
	this->next();
	$var($Token, tok, $Token::createLook($Token::INDEPENDENT, $(this->parseRegex())));
	if (this->read() != RegexParser::T_RPAREN) {
		$throw($(ex("parser.factor.1"_s, this->offset - 1)));
	}
	this->next();
	return tok;
}

$Token* RegexParser::processBacksolidus_c() {
	int32_t ch2 = 0;
	bool var$0 = this->offset >= this->regexlen;
	if (var$0 || ((int32_t)((ch2 = $nc(this->regex)->charAt(this->offset++)) & (uint32_t)0x0000FFE0)) != 64) {
		$throw($(ex("parser.atom.1"_s, this->offset - 1)));
	}
	this->next();
	return $Token::createChar(ch2 - 64);
}

$Token* RegexParser::processBacksolidus_C() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* RegexParser::processBacksolidus_i() {
	$var($Token, tok, $Token::createChar(u'i'));
	this->next();
	return tok;
}

$Token* RegexParser::processBacksolidus_I() {
	$throw($(ex("parser.process.1"_s, this->offset)));
	$shouldNotReachHere();
}

$Token* RegexParser::processBacksolidus_g() {
	this->next();
	return $Token::getGraphemePattern();
}

$Token* RegexParser::processBacksolidus_X() {
	this->next();
	return $Token::getCombiningCharacterSequence();
}

$Token* RegexParser::processBackreference() {
	$useLocalCurrentObjectStackCache();
	int32_t refnum = this->chardata - u'0';
	int32_t finalRefnum = refnum;
	if (this->parennumber <= refnum) {
		$throw($(ex("parser.parse.2"_s, this->offset - 2)));
	}
	while (this->offset < this->regexlen) {
		int32_t ch = $nc(this->regex)->charAt(this->offset);
		if (u'0' <= ch && ch <= u'9') {
			refnum = (refnum * 10) + (ch - u'0');
			if (refnum < this->parennumber) {
				++this->offset;
				finalRefnum = refnum;
				this->chardata = ch;
			} else {
				break;
			}
		} else {
			break;
		}
	}
	$var($Token, tok, $Token::createBackReference(finalRefnum));
	this->hasBackReferences = true;
	if (this->references == nullptr) {
		$set(this, references, $new($ArrayList));
	}
	$nc(this->references)->add($$new($RegexParser$ReferencePosition, finalRefnum, this->offset - 2));
	this->next();
	return tok;
}

$Token* RegexParser::parseFactor() {
	$useLocalCurrentObjectStackCache();
	int32_t ch = this->read();
	$var($Token, tok, nullptr);
	switch (ch) {
	case RegexParser::T_CARET:
		{
			return this->processCaret();
		}
	case RegexParser::T_DOLLAR:
		{
			return this->processDollar();
		}
	case RegexParser::T_LOOKAHEAD:
		{
			return this->processLookahead();
		}
	case RegexParser::T_NEGATIVELOOKAHEAD:
		{
			return this->processNegativelookahead();
		}
	case RegexParser::T_LOOKBEHIND:
		{
			return this->processLookbehind();
		}
	case RegexParser::T_NEGATIVELOOKBEHIND:
		{
			return this->processNegativelookbehind();
		}
	case RegexParser::T_COMMENT:
		{
			this->next();
			return $Token::createEmpty();
		}
	case RegexParser::T_BACKSOLIDUS:
		{
			switch (this->chardata) {
			case u'A':
				{
					return this->processBacksolidus_A();
				}
			case u'Z':
				{
					return this->processBacksolidus_Z();
				}
			case u'z':
				{
					return this->processBacksolidus_z();
				}
			case u'b':
				{
					return this->processBacksolidus_b();
				}
			case u'B':
				{
					return this->processBacksolidus_B();
				}
			case u'<':
				{
					return this->processBacksolidus_lt();
				}
			case u'>':
				{
					return this->processBacksolidus_gt();
				}
			}
		}
	}
	$assign(tok, this->parseAtom());
	ch = this->read();
	switch (ch) {
	case RegexParser::T_STAR:
		{
			return this->processStar(tok);
		}
	case RegexParser::T_PLUS:
		{
			return this->processPlus(tok);
		}
	case RegexParser::T_QUESTION:
		{
			return this->processQuestion(tok);
		}
	case RegexParser::T_CHAR:
		{
			if (this->chardata == u'{' && this->offset < this->regexlen) {
				int32_t off = this->offset;
				int32_t min = 0;
				int32_t max = -1;
				if ((ch = $nc(this->regex)->charAt(off++)) >= u'0' && ch <= u'9') {
					min = ch - u'0';
					while (true) {
						bool var$0 = off < this->regexlen;
						if (!(var$0 && (ch = $nc(this->regex)->charAt(off++)) >= u'0' && ch <= u'9')) {
							break;
						}
						{
							min = min * 10 + ch - u'0';
							if (min < 0) {
								$throw($(ex("parser.quantifier.5"_s, this->offset)));
							}
						}
					}
				} else {
					$throw($(ex("parser.quantifier.1"_s, this->offset)));
				}
				max = min;
				if (ch == u',') {
					if (off >= this->regexlen) {
						$throw($(ex("parser.quantifier.3"_s, this->offset)));
					} else if ((ch = $nc(this->regex)->charAt(off++)) >= u'0' && ch <= u'9') {
						max = ch - u'0';
						while (true) {
							bool var$1 = off < this->regexlen;
							if (!(var$1 && (ch = $nc(this->regex)->charAt(off++)) >= u'0' && ch <= u'9')) {
								break;
							}
							{
								max = max * 10 + ch - u'0';
								if (max < 0) {
									$throw($(ex("parser.quantifier.5"_s, this->offset)));
								}
							}
						}
						if (min > max) {
							$throw($(ex("parser.quantifier.4"_s, this->offset)));
						}
					} else {
						max = -1;
					}
				}
				if (ch != u'}') {
					$throw($(ex("parser.quantifier.2"_s, this->offset)));
				}
				if (this->checkQuestion(off)) {
					$assign(tok, $Token::createNGClosure(tok));
					this->offset = off + 1;
				} else {
					$assign(tok, $Token::createClosure(tok));
					this->offset = off;
				}
				$nc(tok)->setMin(min);
				tok->setMax(max);
				this->next();
			}
		}
	}
	return tok;
}

$Token* RegexParser::parseAtom() {
	$useLocalCurrentObjectStackCache();
	int32_t ch = this->read();
	$var($Token, tok, nullptr);
	{
		int32_t high = 0;
		switch (ch) {
		case RegexParser::T_LPAREN:
			{
				return this->processParen();
			}
		case RegexParser::T_LPAREN2:
			{
				return this->processParen2();
			}
		case RegexParser::T_CONDITION:
			{
				return this->processCondition();
			}
		case RegexParser::T_MODIFIERS:
			{
				return this->processModifiers();
			}
		case RegexParser::T_INDEPENDENT:
			{
				return this->processIndependent();
			}
		case RegexParser::T_DOT:
			{
				this->next();
				$init($Token);
				$assign(tok, $Token::token_dot);
				break;
			}
		case RegexParser::T_LBRACKET:
			{
				return this->parseCharacterClass(true);
			}
		case RegexParser::T_SET_OPERATIONS:
			{
				return this->parseSetOperations();
			}
		case RegexParser::T_BACKSOLIDUS:
			{
				{
					int32_t pstart = 0;
					switch (this->chardata) {
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
							$assign(tok, this->getTokenForShorthand(this->chardata));
							this->next();
							return tok;
						}
					case u'e':
						{}
					case u'f':
						{}
					case u'n':
						{}
					case u'r':
						{}
					case u't':
						{}
					case u'u':
						{}
					case u'v':
						{}
					case u'x':
						{
							{
								int32_t ch2 = this->decodeEscaped();
								if (ch2 < 0x00010000) {
									$assign(tok, $Token::createChar(ch2));
								} else {
									$assign(tok, $Token::createString($($REUtil::decomposeToSurrogates(ch2))));
								}
							}
							break;
						}
					case u'c':
						{
							return this->processBacksolidus_c();
						}
					case u'C':
						{
							return this->processBacksolidus_C();
						}
					case u'i':
						{
							return this->processBacksolidus_i();
						}
					case u'I':
						{
							return this->processBacksolidus_I();
						}
					case u'g':
						{
							return this->processBacksolidus_g();
						}
					case u'X':
						{
							return this->processBacksolidus_X();
						}
					case u'1':
						{}
					case u'2':
						{}
					case u'3':
						{}
					case u'4':
						{}
					case u'5':
						{}
					case u'6':
						{}
					case u'7':
						{}
					case u'8':
						{}
					case u'9':
						{
							return this->processBackreference();
						}
					case u'P':
						{}
					case u'p':
						{
							pstart = this->offset;
							$assign(tok, processBacksolidus_pP(this->chardata));
							if (tok == nullptr) {
								$throw($(this->ex("parser.atom.5"_s, pstart)));
							}
							break;
						}
					default:
						{
							$assign(tok, $Token::createChar(this->chardata));
						}
					}
				}
				this->next();
				break;
			}
		case RegexParser::T_CHAR:
			{
				if (this->chardata == u']' || this->chardata == u'{' || this->chardata == u'}') {
					$throw($(this->ex("parser.atom.4"_s, this->offset - 1)));
				}
				$assign(tok, $Token::createChar(this->chardata));
				high = this->chardata;
				this->next();
				bool var$1 = $REUtil::isHighSurrogate(high);
				bool var$0 = var$1 && this->read() == RegexParser::T_CHAR;
				if (var$0 && $REUtil::isLowSurrogate(this->chardata)) {
					$var($chars, sur, $new($chars, 2));
					sur->set(0, (char16_t)high);
					sur->set(1, (char16_t)this->chardata);
					$assign(tok, $Token::createParen($($Token::createString($$new($String, sur))), 0));
					this->next();
				}
				break;
			}
		default:
			{
				$throw($(this->ex("parser.atom.4"_s, this->offset - 1)));
			}
		}
	}
	return tok;
}

$RangeToken* RegexParser::processBacksolidus_pP(int32_t c) {
	$useLocalCurrentObjectStackCache();
	this->next();
	if (this->read() != RegexParser::T_CHAR || this->chardata != u'{') {
		$throw($(this->ex("parser.atom.2"_s, this->offset - 1)));
	}
	bool positive = c == u'p';
	int32_t namestart = this->offset;
	int32_t nameend = $nc(this->regex)->indexOf((int32_t)u'}', namestart);
	if (nameend < 0) {
		$throw($(this->ex("parser.atom.3"_s, this->offset)));
	}
	$var($String, pname, $nc(this->regex)->substring(namestart, nameend));
	this->offset = nameend + 1;
	return $Token::getRange(pname, positive, this->isSet($RegularExpression::XMLSCHEMA_MODE));
}

int32_t RegexParser::processCIinCharacterClass($RangeToken* tok, int32_t c) {
	return this->decodeEscaped();
}

$RangeToken* RegexParser::parseCharacterClass(bool useNrange) {
	$useLocalCurrentObjectStackCache();
	this->setContext(RegexParser::S_INBRACKETS);
	this->next();
	bool nrange = false;
	$var($RangeToken, base, nullptr);
	$var($RangeToken, tok, nullptr);
	if (this->read() == RegexParser::T_CHAR && this->chardata == u'^') {
		nrange = true;
		this->next();
		if (useNrange) {
			$assign(tok, $Token::createNRange());
		} else {
			$assign(base, $Token::createRange());
			$nc(base)->addRange(0, $Token::UTF16_MAX);
			$assign(tok, $Token::createRange());
		}
	} else {
		$assign(tok, $Token::createRange());
	}
	int32_t type = 0;
	bool firstloop = true;
	while ((type = this->read()) != RegexParser::T_EOF) {
		if (type == RegexParser::T_CHAR && this->chardata == u']' && !firstloop) {
			break;
		}
		int32_t c = this->chardata;
		bool end = false;
		if (type == RegexParser::T_BACKSOLIDUS) {
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
				default:
					{
						c = this->decodeEscaped();
					}
				}
			}
		} else if (type == RegexParser::T_POSIX_CHARCLASS_START) {
			int32_t nameend = $nc(this->regex)->indexOf((int32_t)u':', this->offset);
			if (nameend < 0) {
				$throw($(this->ex("parser.cc.1"_s, this->offset)));
			}
			bool positive = true;
			if ($nc(this->regex)->charAt(this->offset) == u'^') {
				++this->offset;
				positive = false;
			}
			$var($String, name, $nc(this->regex)->substring(this->offset, nameend));
			$var($RangeToken, range, $Token::getRange(name, positive, this->isSet($RegularExpression::XMLSCHEMA_MODE)));
			if (range == nullptr) {
				$throw($(this->ex("parser.cc.3"_s, this->offset)));
			}
			$nc(tok)->mergeRanges(range);
			end = true;
			if (nameend + 1 >= this->regexlen || $nc(this->regex)->charAt(nameend + 1) != u']') {
				$throw($(this->ex("parser.cc.1"_s, nameend)));
			}
			this->offset = nameend + 2;
		} else if (type == RegexParser::T_XMLSCHEMA_CC_SUBTRACTION && !firstloop) {
			if (nrange) {
				nrange = false;
				if (useNrange) {
					$assign(tok, $cast($RangeToken, $Token::complementRanges(tok)));
				} else {
					$nc(base)->subtractRanges(tok);
					$assign(tok, base);
				}
			}
			$var($RangeToken, range2, this->parseCharacterClass(false));
			$nc(tok)->subtractRanges(range2);
			if (this->read() != RegexParser::T_CHAR || this->chardata != u']') {
				$throw($(this->ex("parser.cc.5"_s, this->offset)));
			}
			break;
		}
		this->next();
		if (!end) {
			if (this->read() != RegexParser::T_CHAR || this->chardata != u'-') {
				if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
					$nc(tok)->addRange(c, c);
				} else {
					addCaseInsensitiveChar(tok, c);
				}
			} else if (type == RegexParser::T_XMLSCHEMA_CC_SUBTRACTION) {
				$throw($(this->ex("parser.cc.8"_s, this->offset - 1)));
			} else {
				this->next();
				if ((type = this->read()) == RegexParser::T_EOF) {
					$throw($(this->ex("parser.cc.2"_s, this->offset)));
				}
				if (type == RegexParser::T_CHAR && this->chardata == u']') {
					if (!this->isSet($RegularExpression::IGNORE_CASE) || c > 0x0000FFFF) {
						$nc(tok)->addRange(c, c);
					} else {
						addCaseInsensitiveChar(tok, c);
					}
					$nc(tok)->addRange(u'-', u'-');
				} else {
					int32_t rangeend = this->chardata;
					if (type == RegexParser::T_BACKSOLIDUS) {
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
		bool var$0 = this->isSet($RegularExpression::SPECIAL_COMMA);
		if (var$0 && this->read() == RegexParser::T_CHAR && this->chardata == u',') {
			this->next();
		}
		firstloop = false;
	}
	if (this->read() == RegexParser::T_EOF) {
		$throw($(this->ex("parser.cc.2"_s, this->offset)));
	}
	if (!useNrange && nrange) {
		$nc(base)->subtractRanges(tok);
		$assign(tok, base);
	}
	$nc(tok)->sortRanges();
	tok->compactRanges();
	this->setContext(RegexParser::S_NORMAL);
	this->next();
	return tok;
}

$RangeToken* RegexParser::parseSetOperations() {
	$useLocalCurrentObjectStackCache();
	$var($RangeToken, tok, this->parseCharacterClass(false));
	int32_t type = 0;
	while ((type = this->read()) != RegexParser::T_RPAREN) {
		int32_t ch = this->chardata;
		if (type == RegexParser::T_CHAR && (ch == u'-' || ch == u'&') || type == RegexParser::T_PLUS) {
			this->next();
			if (this->read() != RegexParser::T_LBRACKET) {
				$throw($(ex("parser.ope.1"_s, this->offset - 1)));
			}
			$var($RangeToken, t2, this->parseCharacterClass(false));
			if (type == RegexParser::T_PLUS) {
				$nc(tok)->mergeRanges(t2);
			} else if (ch == u'-') {
				$nc(tok)->subtractRanges(t2);
			} else if (ch == u'&') {
				$nc(tok)->intersectRanges(t2);
			} else {
				$throwNew($RuntimeException, "ASSERT"_s);
			}
		} else {
			$throw($(ex("parser.ope.2"_s, this->offset - 1)));
		}
	}
	this->next();
	return tok;
}

$Token* RegexParser::getTokenForShorthand(int32_t ch) {
	$useLocalCurrentObjectStackCache();
	$var($Token, tok, nullptr);
	switch (ch) {
	case u'd':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("Nd"_s, true)) : $Token::token_0to9);
			break;
		}
	case u'D':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("Nd"_s, false)) : $Token::token_not_0to9);
			break;
		}
	case u'w':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("IsWord"_s, true)) : $Token::token_wordchars);
			break;
		}
	case u'W':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("IsWord"_s, false)) : $Token::token_not_wordchars);
			break;
		}
	case u's':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("IsSpace"_s, true)) : $Token::token_spaces);
			break;
		}
	case u'S':
		{
			$init($Token);
			$assign(tok, this->isSet($RegularExpression::USE_UNICODE_CATEGORY) ? static_cast<$Token*>($Token::getRange("IsSpace"_s, false)) : $Token::token_not_spaces);
			break;
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Internal Error: shorthands: \\u"_s, $($Integer::toString(ch, 16))}));
		}
	}
	return tok;
}

int32_t RegexParser::decodeEscaped() {
	$useLocalCurrentObjectStackCache();
	if (this->read() != RegexParser::T_BACKSOLIDUS) {
		$throw($(ex("parser.next.1"_s, this->offset - 1)));
	}
	int32_t c = this->chardata;
	{
		int32_t v1 = 0;
		int32_t uv = 0;
		switch (c) {
		case u'e':
			{
				c = 27;
				break;
			}
		case u'f':
			{
				c = u'\f';
				break;
			}
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
		case u'x':
			{
				this->next();
				if (this->read() != RegexParser::T_CHAR) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				if (this->chardata == u'{') {
					int32_t v1 = 0;
					int32_t uv = 0;
					do {
						this->next();
						if (this->read() != RegexParser::T_CHAR) {
							$throw($(ex("parser.descape.1"_s, this->offset - 1)));
						}
						if ((v1 = hexChar(this->chardata)) < 0) {
							break;
						}
						if (uv > uv * 16) {
							$throw($(ex("parser.descape.2"_s, this->offset - 1)));
						}
						uv = uv * 16 + v1;
					} while (true);
					if (this->chardata != u'}') {
						$throw($(ex("parser.descape.3"_s, this->offset - 1)));
					}
					if (uv > $Token::UTF16_MAX) {
						$throw($(ex("parser.descape.4"_s, this->offset - 1)));
					}
					c = uv;
				} else {
					int32_t v1 = 0;
					bool var$0 = this->read() != RegexParser::T_CHAR;
					if (var$0 || (v1 = hexChar(this->chardata)) < 0) {
						$throw($(ex("parser.descape.1"_s, this->offset - 1)));
					}
					int32_t uv = v1;
					this->next();
					bool var$1 = this->read() != RegexParser::T_CHAR;
					if (var$1 || (v1 = hexChar(this->chardata)) < 0) {
						$throw($(ex("parser.descape.1"_s, this->offset - 1)));
					}
					uv = uv * 16 + v1;
					c = uv;
				}
				break;
			}
		case u'u':
			{
				v1 = 0;
				this->next();
				bool var$2 = this->read() != RegexParser::T_CHAR;
				if (var$2 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = v1;
				this->next();
				bool var$3 = this->read() != RegexParser::T_CHAR;
				if (var$3 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$4 = this->read() != RegexParser::T_CHAR;
				if (var$4 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$5 = this->read() != RegexParser::T_CHAR;
				if (var$5 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				c = uv;
				break;
			}
		case u'v':
			{
				this->next();
				bool var$6 = this->read() != RegexParser::T_CHAR;
				if (var$6 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = v1;
				this->next();
				bool var$7 = this->read() != RegexParser::T_CHAR;
				if (var$7 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$8 = this->read() != RegexParser::T_CHAR;
				if (var$8 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$9 = this->read() != RegexParser::T_CHAR;
				if (var$9 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$10 = this->read() != RegexParser::T_CHAR;
				if (var$10 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				this->next();
				bool var$11 = this->read() != RegexParser::T_CHAR;
				if (var$11 || (v1 = hexChar(this->chardata)) < 0) {
					$throw($(ex("parser.descape.1"_s, this->offset - 1)));
				}
				uv = uv * 16 + v1;
				if (uv > $Token::UTF16_MAX) {
					$throw($(ex("parser.descappe.4"_s, this->offset - 1)));
				}
				c = uv;
				break;
			}
		case u'A':
			{}
		case u'Z':
			{}
		case u'z':
			{
				$throw($(ex("parser.descape.5"_s, this->offset - 2)));
			}
		default:
			{}
		}
	}
	return c;
}

int32_t RegexParser::hexChar(int32_t ch) {
	if (ch < u'0') {
		return -1;
	}
	if (ch > u'f') {
		return -1;
	}
	if (ch <= u'9') {
		return ch - u'0';
	}
	if (ch < u'A') {
		return -1;
	}
	if (ch <= u'F') {
		return ch - u'A' + 10;
	}
	if (ch < u'a') {
		return -1;
	}
	return ch - u'a' + 10;
}

void RegexParser::addCaseInsensitiveChar($RangeToken* tok, int32_t c) {
	$var($ints, caseMap, $CaseInsensitiveMap::get(c));
	$nc(tok)->addRange(c, c);
	if (caseMap != nullptr) {
		for (int32_t i = 0; i < caseMap->length; i += 2) {
			tok->addRange(caseMap->get(i), caseMap->get(i));
		}
	}
}

void RegexParser::addCaseInsensitiveCharRange($RangeToken* tok, int32_t start, int32_t end) {
	$var($ints, caseMap, nullptr);
	int32_t r1 = 0;
	int32_t r2 = 0;
	if (start <= end) {
		r1 = start;
		r2 = end;
	} else {
		r1 = end;
		r2 = start;
	}
	$nc(tok)->addRange(r1, r2);
	for (int32_t ch = r1; ch <= r2; ++ch) {
		$assign(caseMap, $CaseInsensitiveMap::get(ch));
		if (caseMap != nullptr) {
			for (int32_t i = 0; i < caseMap->length; i += 2) {
				tok->addRange(caseMap->get(i), caseMap->get(i));
			}
		}
	}
}

RegexParser::RegexParser() {
}

$Class* RegexParser::load$($String* name, bool initialize) {
	$loadClass(RegexParser, name, initialize, &_RegexParser_ClassInfo_, allocate$RegexParser);
	return class$;
}

$Class* RegexParser::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com