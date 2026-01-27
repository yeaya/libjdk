#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/BMPattern.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Match.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParserForXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ClosureContext.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$Context.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConditionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$FixedStringContainer.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ModifierToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <com/sun/org/apache/xerces/internal/util/IntStack.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Locale.h>
#include <java/util/Stack.h>
#include <jcpp.h>

#undef ANCHOR
#undef BACKREFERENCE
#undef CAPTURE
#undef CARRIAGE_RETURN
#undef CHAR
#undef CLOSURE
#undef COMBINING_SPACING_MARK
#undef CONCAT
#undef CONDITION
#undef CONTROL
#undef DEBUG
#undef DECIMAL_DIGIT_NUMBER
#undef DOT
#undef EMPTY
#undef ENCLOSING_MARK
#undef EXTENDED_COMMENT
#undef FC_TERMINAL
#undef FORMAT
#undef IGNORE_CASE
#undef INDEPENDENT
#undef LETTER_NUMBER
#undef LINE_FEED
#undef LINE_SEPARATOR
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef LOWERCASE_LETTER
#undef MODIFIER
#undef MODIFIERGROUP
#undef MODIFIER_LETTER
#undef MULTIPLE_LINES
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef NONGREEDYCLOSURE
#undef NONGREEDYQUESTION
#undef NON_SPACING_MARK
#undef NRANGE
#undef OTHER_LETTER
#undef OTHER_NUMBER
#undef PARAGRAPH_SEPARATOR
#undef PAREN
#undef PROHIBIT_FIXED_STRING_OPTIMIZATION
#undef PROHIBIT_HEAD_CHARACTER_OPTIMIZATION
#undef QUESTION
#undef RANGE
#undef SINGLE_LINE
#undef SPECIAL_COMMA
#undef STRING
#undef TITLECASE_LETTER
#undef UNICODE_WORD_BOUNDARY
#undef UNION
#undef UPPERCASE_LETTER
#undef USE_UNICODE_CATEGORY
#undef WT_IGNORE
#undef WT_LETTER
#undef WT_OTHER
#undef XMLSCHEMA_MODE

using $BMPattern = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::BMPattern;
using $Match = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match;
using $Op = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op;
using $Op$ChildOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp;
using $Op$ConditionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ConditionOp;
using $Op$UnionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$UnionOp;
using $ParserForXMLSchema = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::ParserForXMLSchema;
using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $RegexParser = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser;
using $RegularExpression$ClosureContext = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ClosureContext;
using $RegularExpression$Context = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$Context;
using $RegularExpression$ExpressionTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $Token$ConditionToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConditionToken;
using $Token$FixedStringContainer = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$FixedStringContainer;
using $Token$ModifierToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ModifierToken;
using $IntStack = ::com::sun::org::apache::xerces::internal::util::IntStack;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Locale = ::java::util::Locale;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RegularExpression_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RegularExpression, serialVersionUID)},
	{"DEBUG", "Z", nullptr, $STATIC | $FINAL, $constField(RegularExpression, DEBUG)},
	{"regex", "Ljava/lang/String;", nullptr, 0, $field(RegularExpression, regex)},
	{"options", "I", nullptr, 0, $field(RegularExpression, options)},
	{"nofparen", "I", nullptr, 0, $field(RegularExpression, nofparen)},
	{"tokentree", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $field(RegularExpression, tokentree)},
	{"hasBackReferences", "Z", nullptr, 0, $field(RegularExpression, hasBackReferences)},
	{"minlength", "I", nullptr, $TRANSIENT, $field(RegularExpression, minlength)},
	{"operations", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $TRANSIENT, $field(RegularExpression, operations)},
	{"numberOfClosures", "I", nullptr, $TRANSIENT, $field(RegularExpression, numberOfClosures)},
	{"context", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$Context;", nullptr, $TRANSIENT, $field(RegularExpression, context)},
	{"firstChar", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $TRANSIENT, $field(RegularExpression, firstChar)},
	{"fixedString", "Ljava/lang/String;", nullptr, $TRANSIENT, $field(RegularExpression, fixedString)},
	{"fixedStringOptions", "I", nullptr, $TRANSIENT, $field(RegularExpression, fixedStringOptions)},
	{"fixedStringTable", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/BMPattern;", nullptr, $TRANSIENT, $field(RegularExpression, fixedStringTable)},
	{"fixedStringOnly", "Z", nullptr, $TRANSIENT, $field(RegularExpression, fixedStringOnly)},
	{"IGNORE_CASE", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, IGNORE_CASE)},
	{"SINGLE_LINE", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, SINGLE_LINE)},
	{"MULTIPLE_LINES", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, MULTIPLE_LINES)},
	{"EXTENDED_COMMENT", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, EXTENDED_COMMENT)},
	{"USE_UNICODE_CATEGORY", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, USE_UNICODE_CATEGORY)},
	{"UNICODE_WORD_BOUNDARY", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, UNICODE_WORD_BOUNDARY)},
	{"PROHIBIT_HEAD_CHARACTER_OPTIMIZATION", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, PROHIBIT_HEAD_CHARACTER_OPTIMIZATION)},
	{"PROHIBIT_FIXED_STRING_OPTIMIZATION", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, PROHIBIT_FIXED_STRING_OPTIMIZATION)},
	{"XMLSCHEMA_MODE", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, XMLSCHEMA_MODE)},
	{"SPECIAL_COMMA", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, SPECIAL_COMMA)},
	{"WT_IGNORE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RegularExpression, WT_IGNORE)},
	{"WT_LETTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RegularExpression, WT_LETTER)},
	{"WT_OTHER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RegularExpression, WT_OTHER)},
	{"LINE_FEED", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, LINE_FEED)},
	{"CARRIAGE_RETURN", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, CARRIAGE_RETURN)},
	{"LINE_SEPARATOR", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, LINE_SEPARATOR)},
	{"PARAGRAPH_SEPARATOR", "I", nullptr, $STATIC | $FINAL, $constField(RegularExpression, PARAGRAPH_SEPARATOR)},
	{}
};

$MethodInfo _RegularExpression_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RegularExpression, init$, void, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RegularExpression, init$, void, $String*, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(RegularExpression, init$, void, $String*, $String*, $Locale*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;IZI)V", nullptr, 0, $method(RegularExpression, init$, void, $String*, $Token*, int32_t, bool, int32_t)},
	{"compile", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(RegularExpression, compile, void, $Token*)},
	{"compile", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $PRIVATE, $method(RegularExpression, compile, $Op*, $Token*, $Op*, bool)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, equals, bool, Object$*)},
	{"equals", "(Ljava/lang/String;I)Z", nullptr, 0, $virtualMethod(RegularExpression, equals, bool, $String*, int32_t)},
	{"getNumberOfGroups", "()I", nullptr, $PUBLIC, $virtualMethod(RegularExpression, getNumberOfGroups, int32_t)},
	{"getOptions", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RegularExpression, getOptions, $String*)},
	{"getPattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RegularExpression, getPattern, $String*)},
	{"getPreviousWordType", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget;IIII)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, getPreviousWordType, int32_t, $RegularExpression$ExpressionTarget*, int32_t, int32_t, int32_t, int32_t)},
	{"getWordType", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget;IIII)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, getWordType, int32_t, $RegularExpression$ExpressionTarget*, int32_t, int32_t, int32_t, int32_t)},
	{"getWordType0", "(CI)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, getWordType0, int32_t, char16_t, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(RegularExpression, hashCode, int32_t)},
	{"isEOLChar", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, isEOLChar, bool, int32_t)},
	{"isSet", "(II)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, isSet, bool, int32_t, int32_t)},
	{"isWordChar", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, isWordChar, bool, int32_t)},
	{"match", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$Context;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;III)I", nullptr, $PRIVATE, $method(RegularExpression, match, int32_t, $RegularExpression$Context*, $Op*, int32_t, int32_t, int32_t)},
	{"matchAnchor", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$Context;II)Z", nullptr, 0, $virtualMethod(RegularExpression, matchAnchor, bool, $RegularExpression$ExpressionTarget*, $Op*, $RegularExpression$Context*, int32_t, int32_t)},
	{"matchChar", "(IIZ)Z", nullptr, $PRIVATE, $method(RegularExpression, matchChar, bool, int32_t, int32_t, bool)},
	{"matchIgnoreCase", "(II)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(RegularExpression, matchIgnoreCase, bool, int32_t, int32_t)},
	{"matches", "([C)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $chars*)},
	{"matches", "([CII)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $chars*, int32_t, int32_t)},
	{"matches", "([CLcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $chars*, $Match*)},
	{"matches", "([CIILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $chars*, int32_t, int32_t, $Match*)},
	{"matches", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $String*)},
	{"matches", "(Ljava/lang/String;II)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $String*, int32_t, int32_t)},
	{"matches", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $String*, $Match*)},
	{"matches", "(Ljava/lang/String;IILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $String*, int32_t, int32_t, $Match*)},
	{"matches", "(Ljava/text/CharacterIterator;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $CharacterIterator*)},
	{"matches", "(Ljava/text/CharacterIterator;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Match;)Z", nullptr, $PUBLIC, $virtualMethod(RegularExpression, matches, bool, $CharacterIterator*, $Match*)},
	{"prepare", "()V", nullptr, 0, $virtualMethod(RegularExpression, prepare, void)},
	{"setPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RegularExpression, setPattern, void, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setPattern", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(RegularExpression, setPattern, void, $String*, $Locale*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setPattern", "(Ljava/lang/String;ILjava/util/Locale;)V", nullptr, $PRIVATE, $method(RegularExpression, setPattern, void, $String*, int32_t, $Locale*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setPattern", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RegularExpression, setPattern, void, $String*, $String*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"setPattern", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(RegularExpression, setPattern, void, $String*, $String*, $Locale*), "com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RegularExpression, toString, $String*)},
	{}
};

$InnerClassInfo _RegularExpression_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$Context", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "Context", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ClosureContext", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ClosureContext", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharacterIteratorTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "CharacterIteratorTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharArrayTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "CharArrayTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$StringTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "StringTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RegularExpression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression",
	"java.lang.Object",
	"java.io.Serializable",
	_RegularExpression_FieldInfo_,
	_RegularExpression_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$Context,com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ClosureContext,com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharacterIteratorTarget,com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharArrayTarget,com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$StringTarget,com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget"
};

$Object* allocate$RegularExpression($Class* clazz) {
	return $of($alloc(RegularExpression));
}

void RegularExpression::compile($Token* tok) {
	$synchronized(this) {
		if (this->operations != nullptr) {
			return;
		}
		this->numberOfClosures = 0;
		$set(this, operations, this->compile(tok, nullptr, false));
	}
}

$Op* RegularExpression::compile($Token* tok, $Op* next$renamed, bool reverse) {
	$useLocalCurrentObjectStackCache();
	$var($Op, next, next$renamed);
	$var($Op, ret, nullptr);
	{
		$var($Op$UnionOp, uni, nullptr)
		$var($Token, child, nullptr)
		int32_t min = 0;
		int32_t max = 0;
		$var($Token$ConditionToken, ctok, nullptr)
		int32_t ref = 0;
		$var($Op, condition, nullptr)
		$var($Op, yes, nullptr)
		$var($Op, no, nullptr)
		switch ($nc(tok)->type) {
		case $Token::DOT:
			{
				$assign(ret, $Op::createDot());
				$set($nc(ret), next, next);
				break;
			}
		case $Token::CHAR:
			{
				$assign(ret, $Op::createChar(tok->getChar()));
				$set($nc(ret), next, next);
				break;
			}
		case $Token::ANCHOR:
			{
				$assign(ret, $Op::createAnchor(tok->getChar()));
				$set($nc(ret), next, next);
				break;
			}
		case $Token::RANGE:
			{}
		case $Token::NRANGE:
			{
				$assign(ret, $Op::createRange(tok));
				$set($nc(ret), next, next);
				break;
			}
		case $Token::CONCAT:
			{
				$assign(ret, next);
				if (!reverse) {
					for (int32_t i = tok->size() - 1; i >= 0; --i) {
						$assign(ret, compile($(tok->getChild(i)), ret, false));
					}
				} else {
					for (int32_t i = 0; i < tok->size(); ++i) {
						$assign(ret, compile($(tok->getChild(i)), ret, true));
					}
				}
				break;
			}
		case $Token::UNION:
			{
				$assign(uni, $Op::createUnion(tok->size()));
				for (int32_t i = 0; i < tok->size(); ++i) {
					$nc(uni)->addElement($(compile($(tok->getChild(i)), next, reverse)));
				}
				$assign(ret, uni);
				break;
			}
		case $Token::CLOSURE:
			{}
		case $Token::NONGREEDYCLOSURE:
			{
				$assign(child, tok->getChild(0));
				min = tok->getMin();
				max = tok->getMax();
				if (min >= 0 && min == max) {
					$assign(ret, next);
					for (int32_t i = 0; i < min; ++i) {
						$assign(ret, compile(child, ret, reverse));
					}
					break;
				}
				if (min > 0 && max > 0) {
					max -= min;
				}
				if (max > 0) {
					$assign(ret, next);
					for (int32_t i = 0; i < max; ++i) {
						$var($Op$ChildOp, q, $Op::createQuestion(tok->type == $Token::NONGREEDYCLOSURE));
						$set($nc(q), next, next);
						q->setChild($(compile(child, ret, reverse)));
						$assign(ret, q);
					}
				} else {
					$var($Op$ChildOp, op, nullptr);
					if (tok->type == $Token::NONGREEDYCLOSURE) {
						$assign(op, $Op::createNonGreedyClosure());
					} else {
						$assign(op, $Op::createClosure(this->numberOfClosures++));
					}
					$set($nc(op), next, next);
					op->setChild($(compile(child, op, reverse)));
					$assign(ret, op);
				}
				if (min > 0) {
					for (int32_t i = 0; i < min; ++i) {
						$assign(ret, compile(child, ret, reverse));
					}
				}
				break;
			}
		case $Token::EMPTY:
			{
				$assign(ret, next);
				break;
			}
		case $Token::STRING:
			{
				$assign(ret, $Op::createString($(tok->getString())));
				$set($nc(ret), next, next);
				break;
			}
		case $Token::BACKREFERENCE:
			{
				$assign(ret, $Op::createBackReference(tok->getReferenceNumber()));
				$set($nc(ret), next, next);
				break;
			}
		case $Token::PAREN:
			{
				if (tok->getParenNumber() == 0) {
					$assign(ret, compile($(tok->getChild(0)), next, reverse));
				} else if (reverse) {
					$assign(next, $Op::createCapture(tok->getParenNumber(), next));
					$assign(next, compile($(tok->getChild(0)), next, reverse));
					$assign(ret, $Op::createCapture(-tok->getParenNumber(), next));
				} else {
					$assign(next, $Op::createCapture(-tok->getParenNumber(), next));
					$assign(next, compile($(tok->getChild(0)), next, reverse));
					$assign(ret, $Op::createCapture(tok->getParenNumber(), next));
				}
				break;
			}
		case $Token::LOOKAHEAD:
			{
				$assign(ret, $Op::createLook($Op::LOOKAHEAD, next, $(compile($(tok->getChild(0)), nullptr, false))));
				break;
			}
		case $Token::NEGATIVELOOKAHEAD:
			{
				$assign(ret, $Op::createLook($Op::NEGATIVELOOKAHEAD, next, $(compile($(tok->getChild(0)), nullptr, false))));
				break;
			}
		case $Token::LOOKBEHIND:
			{
				$assign(ret, $Op::createLook($Op::LOOKBEHIND, next, $(compile($(tok->getChild(0)), nullptr, true))));
				break;
			}
		case $Token::NEGATIVELOOKBEHIND:
			{
				$assign(ret, $Op::createLook($Op::NEGATIVELOOKBEHIND, next, $(compile($(tok->getChild(0)), nullptr, true))));
				break;
			}
		case $Token::INDEPENDENT:
			{
				$assign(ret, $Op::createIndependent(next, $(compile($(tok->getChild(0)), nullptr, reverse))));
				break;
			}
		case $Token::MODIFIERGROUP:
			{
				$var($Op, var$0, next);
				$var($Op, var$1, compile($(tok->getChild(0)), nullptr, reverse));
				int32_t var$2 = $nc(($cast($Token$ModifierToken, tok)))->getOptions();
				$assign(ret, $Op::createModifier(var$0, var$1, var$2, ($cast($Token$ModifierToken, tok))->getOptionsMask()));
				break;
			}
		case $Token::CONDITION:
			{
				$assign(ctok, $cast($Token$ConditionToken, tok));
				ref = $nc(ctok)->refNumber;
				$assign(condition, ctok->condition == nullptr ? ($Op*)nullptr : compile(ctok->condition, nullptr, reverse));
				$assign(yes, compile(ctok->yes, next, reverse));
				$assign(no, ctok->no == nullptr ? ($Op*)nullptr : compile(ctok->no, next, reverse));
				$assign(ret, $Op::createCondition(next, ref, condition, yes, no));
				break;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Unknown token type: "_s, $$str(tok->type)}));
			}
		}
	}
	return ret;
}

bool RegularExpression::matches($chars* target) {
	return this->matches(target, 0, $nc(target)->length, ($Match*)nullptr);
}

bool RegularExpression::matches($chars* target, int32_t start, int32_t end) {
	return this->matches(target, start, end, ($Match*)nullptr);
}

bool RegularExpression::matches($chars* target, $Match* match) {
	return this->matches(target, 0, $nc(target)->length, match);
}

bool RegularExpression::matches($chars* target, int32_t start, int32_t end, $Match* match$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Match, match, match$renamed);
	$synchronized(this) {
		if (this->operations == nullptr) {
			this->prepare();
		}
		if (this->context == nullptr) {
			$set(this, context, $new($RegularExpression$Context));
		}
	}
	$var($RegularExpression$Context, con, nullptr);
	$synchronized(this->context) {
		$assign(con, $nc(this->context)->inuse ? $new($RegularExpression$Context) : this->context);
		$nc(con)->reset(target, start, end, this->numberOfClosures);
	}
	if (match != nullptr) {
		match->setNumberOfGroups(this->nofparen);
		match->setSource(target);
	} else if (this->hasBackReferences) {
		$assign(match, $new($Match));
		match->setNumberOfGroups(this->nofparen);
	}
	$set($nc(con), match, match);
	if (RegularExpression::isSet(this->options, RegularExpression::XMLSCHEMA_MODE)) {
		int32_t matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		if (matchEnd == con->limit) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, con->start);
				$nc(con->match)->setEnd(0, matchEnd);
			}
			con->setInUse(false);
			return true;
		}
		return false;
	}
	if (this->fixedStringOnly) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o >= 0) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, o);
				$nc(con->match)->setEnd(0, o + $nc(this->fixedString)->length());
			}
			con->setInUse(false);
			return true;
		}
		con->setInUse(false);
		return false;
	}
	if (this->fixedString != nullptr) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o < 0) {
			con->setInUse(false);
			return false;
		}
	}
	int32_t limit = con->limit - this->minlength;
	int32_t matchStart = 0;
	int32_t matchEnd = -1;
	if (this->operations != nullptr && $nc(this->operations)->type == $Op::CLOSURE && $nc($($nc(this->operations)->getChild()))->type == $Op::DOT) {
		if (isSet(this->options, RegularExpression::SINGLE_LINE)) {
			matchStart = con->start;
			matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		} else {
			bool previousIsEOL = true;
			for (matchStart = con->start; matchStart <= limit; ++matchStart) {
				int32_t ch = $nc(target)->get(matchStart);
				if (isEOLChar(ch)) {
					previousIsEOL = true;
				} else {
					if (previousIsEOL) {
						if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
							break;
						}
					}
					previousIsEOL = false;
				}
			}
		}
	} else if (this->firstChar != nullptr) {
		$var($RangeToken, range, this->firstChar);
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			int32_t ch = $nc(target)->get(matchStart);
			if ($REUtil::isHighSurrogate(ch) && matchStart + 1 < con->limit) {
				ch = $REUtil::composeFromSurrogates(ch, target->get(matchStart + 1));
			}
			if (!$nc(range)->match(ch)) {
				continue;
			}
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	} else {
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	}
	if (matchEnd >= 0) {
		if (con->match != nullptr) {
			$nc(con->match)->setBeginning(0, matchStart);
			$nc(con->match)->setEnd(0, matchEnd);
		}
		con->setInUse(false);
		return true;
	} else {
		con->setInUse(false);
		return false;
	}
}

bool RegularExpression::matches($String* target) {
	return this->matches(target, 0, $nc(target)->length(), ($Match*)nullptr);
}

bool RegularExpression::matches($String* target, int32_t start, int32_t end) {
	return this->matches(target, start, end, ($Match*)nullptr);
}

bool RegularExpression::matches($String* target, $Match* match) {
	return this->matches(target, 0, $nc(target)->length(), match);
}

bool RegularExpression::matches($String* target, int32_t start, int32_t end, $Match* match$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Match, match, match$renamed);
	$synchronized(this) {
		if (this->operations == nullptr) {
			this->prepare();
		}
		if (this->context == nullptr) {
			$set(this, context, $new($RegularExpression$Context));
		}
	}
	$var($RegularExpression$Context, con, nullptr);
	$synchronized(this->context) {
		$assign(con, $nc(this->context)->inuse ? $new($RegularExpression$Context) : this->context);
		$nc(con)->reset(target, start, end, this->numberOfClosures);
	}
	if (match != nullptr) {
		match->setNumberOfGroups(this->nofparen);
		match->setSource(target);
	} else if (this->hasBackReferences) {
		$assign(match, $new($Match));
		match->setNumberOfGroups(this->nofparen);
	}
	$set($nc(con), match, match);
	if (RegularExpression::isSet(this->options, RegularExpression::XMLSCHEMA_MODE)) {
		int32_t matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		if (matchEnd == con->limit) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, con->start);
				$nc(con->match)->setEnd(0, matchEnd);
			}
			con->setInUse(false);
			return true;
		}
		return false;
	}
	if (this->fixedStringOnly) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o >= 0) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, o);
				$nc(con->match)->setEnd(0, o + $nc(this->fixedString)->length());
			}
			con->setInUse(false);
			return true;
		}
		con->setInUse(false);
		return false;
	}
	if (this->fixedString != nullptr) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o < 0) {
			con->setInUse(false);
			return false;
		}
	}
	int32_t limit = con->limit - this->minlength;
	int32_t matchStart = 0;
	int32_t matchEnd = -1;
	if (this->operations != nullptr && $nc(this->operations)->type == $Op::CLOSURE && $nc($($nc(this->operations)->getChild()))->type == $Op::DOT) {
		if (isSet(this->options, RegularExpression::SINGLE_LINE)) {
			matchStart = con->start;
			matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		} else {
			bool previousIsEOL = true;
			for (matchStart = con->start; matchStart <= limit; ++matchStart) {
				int32_t ch = $nc(target)->charAt(matchStart);
				if (isEOLChar(ch)) {
					previousIsEOL = true;
				} else {
					if (previousIsEOL) {
						if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
							break;
						}
					}
					previousIsEOL = false;
				}
			}
		}
	} else if (this->firstChar != nullptr) {
		$var($RangeToken, range, this->firstChar);
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			int32_t ch = $nc(target)->charAt(matchStart);
			if ($REUtil::isHighSurrogate(ch) && matchStart + 1 < con->limit) {
				ch = $REUtil::composeFromSurrogates(ch, target->charAt(matchStart + 1));
			}
			if (!$nc(range)->match(ch)) {
				continue;
			}
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	} else {
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	}
	if (matchEnd >= 0) {
		if (con->match != nullptr) {
			$nc(con->match)->setBeginning(0, matchStart);
			$nc(con->match)->setEnd(0, matchEnd);
		}
		con->setInUse(false);
		return true;
	} else {
		con->setInUse(false);
		return false;
	}
}

int32_t RegularExpression::match($RegularExpression$Context* con, $Op* op$renamed, int32_t offset, int32_t dx, int32_t opts) {
	$useLocalCurrentObjectStackCache();
	$var($Op, op, op$renamed);
	$var($RegularExpression$ExpressionTarget, target, $nc(con)->target);
	$var($Stack, opStack, $new($Stack));
	$var($IntStack, dataStack, $new($IntStack));
	bool isSetIgnoreCase = isSet(opts, RegularExpression::IGNORE_CASE);
	int32_t retValue = -1;
	bool returned = false;
	for (;;) {
		if (op == nullptr || offset > con->limit || offset < con->start) {
			if (op == nullptr) {
				retValue = isSet(opts, RegularExpression::XMLSCHEMA_MODE) && offset != con->limit ? -1 : offset;
			} else {
				retValue = -1;
			}
			returned = true;
		} else {
			retValue = -1;
			switch ($nc(op)->type) {
			case $Op::CHAR:
				{
					{
						int32_t o1 = (dx > 0) ? offset : offset - 1;
						bool var$0 = o1 >= con->limit || o1 < 0;
						if (!var$0) {
							int32_t var$1 = op->getData();
							var$0 = !matchChar(var$1, $nc(target)->charAt(o1), isSetIgnoreCase);
						}
						if (var$0) {
							returned = true;
							break;
						}
						offset += dx;
						$assign(op, op->next);
					}
					break;
				}
			case $Op::DOT:
				{
					{
						int32_t o1 = (dx > 0) ? offset : offset - 1;
						if (o1 >= con->limit || o1 < 0) {
							returned = true;
							break;
						}
						if (isSet(opts, RegularExpression::SINGLE_LINE)) {
							if ($REUtil::isHighSurrogate($nc(target)->charAt(o1)) && o1 + dx >= 0 && o1 + dx < con->limit) {
								o1 += dx;
							}
						} else {
							int32_t ch = $nc(target)->charAt(o1);
							if ($REUtil::isHighSurrogate(ch) && o1 + dx >= 0 && o1 + dx < con->limit) {
								o1 += dx;
								ch = $REUtil::composeFromSurrogates(ch, target->charAt(o1));
							}
							if (isEOLChar(ch)) {
								returned = true;
								break;
							}
						}
						offset = (dx > 0) ? o1 + 1 : o1;
						$assign(op, op->next);
					}
					break;
				}
			case $Op::RANGE:
				{}
			case $Op::NRANGE:
				{
					{
						int32_t o1 = (dx > 0) ? offset : offset - 1;
						if (o1 >= con->limit || o1 < 0) {
							returned = true;
							break;
						}
						int32_t ch = $nc(target)->charAt(offset);
						if ($REUtil::isHighSurrogate(ch) && o1 + dx < con->limit && o1 + dx >= 0) {
							o1 += dx;
							ch = $REUtil::composeFromSurrogates(ch, target->charAt(o1));
						}
						$var($RangeToken, tok, op->getToken());
						if (!$nc(tok)->match(ch)) {
							returned = true;
							break;
						}
						offset = (dx > 0) ? o1 + 1 : o1;
						$assign(op, op->next);
					}
					break;
				}
			case $Op::ANCHOR:
				{
					{
						if (!matchAnchor(target, op, con, offset, opts)) {
							returned = true;
							break;
						}
						$assign(op, op->next);
					}
					break;
				}
			case $Op::BACKREFERENCE:
				{
					{
						int32_t refno = op->getData();
						if (refno <= 0 || refno >= this->nofparen) {
							$throwNew($RuntimeException, $$str({"Internal Error: Reference number must be more than zero: "_s, $$str(refno)}));
						}
						bool var$2 = $nc(con->match)->getBeginning(refno) < 0;
						if (var$2 || $nc(con->match)->getEnd(refno) < 0) {
							returned = true;
							break;
						}
						int32_t o2 = $nc(con->match)->getBeginning(refno);
						int32_t literallen = $nc(con->match)->getEnd(refno) - o2;
						if (dx > 0) {
							if (!$nc(target)->regionMatches(isSetIgnoreCase, offset, con->limit, o2, literallen)) {
								returned = true;
								break;
							}
							offset += literallen;
						} else {
							if (!$nc(target)->regionMatches(isSetIgnoreCase, offset - literallen, con->limit, o2, literallen)) {
								returned = true;
								break;
							}
							offset -= literallen;
						}
						$assign(op, op->next);
					}
					break;
				}
			case $Op::STRING:
				{
					{
						$var($String, literal, op->getString());
						int32_t literallen = $nc(literal)->length();
						if (dx > 0) {
							if (!$nc(target)->regionMatches(isSetIgnoreCase, offset, con->limit, literal, literallen)) {
								returned = true;
								break;
							}
							offset += literallen;
						} else {
							if (!$nc(target)->regionMatches(isSetIgnoreCase, offset - literallen, con->limit, literal, literallen)) {
								returned = true;
								break;
							}
							offset -= literallen;
						}
						$assign(op, op->next);
					}
					break;
				}
			case $Op::CLOSURE:
				{
					{
						int32_t id = op->getData();
						if ($nc($nc(con->closureContexts)->get(id))->contains(offset)) {
							returned = true;
							break;
						}
						$nc($nc(con->closureContexts)->get(id))->addOffset(offset);
					}
				}
			case $Op::QUESTION:
				{
					{
						opStack->push(op);
						dataStack->push(offset);
						$assign(op, op->getChild());
					}
					break;
				}
			case $Op::NONGREEDYCLOSURE:
				{}
			case $Op::NONGREEDYQUESTION:
				{
					{
						opStack->push(op);
						dataStack->push(offset);
						$assign(op, op->next);
					}
					break;
				}
			case $Op::UNION:
				{
					if (op->size() == 0) {
						returned = true;
					} else {
						opStack->push(op);
						dataStack->push(0);
						dataStack->push(offset);
						$assign(op, op->elementAt(0));
					}
					break;
				}
			case $Op::CAPTURE:
				{
					{
						int32_t refno = op->getData();
						if (con->match != nullptr) {
							if (refno > 0) {
								dataStack->push($nc(con->match)->getBeginning(refno));
								$nc(con->match)->setBeginning(refno, offset);
							} else {
								int32_t index = -refno;
								dataStack->push($nc(con->match)->getEnd(index));
								$nc(con->match)->setEnd(index, offset);
							}
							opStack->push(op);
							dataStack->push(offset);
						}
						$assign(op, op->next);
					}
					break;
				}
			case $Op::LOOKAHEAD:
				{}
			case $Op::NEGATIVELOOKAHEAD:
				{}
			case $Op::LOOKBEHIND:
				{}
			case $Op::NEGATIVELOOKBEHIND:
				{
					{
						opStack->push(op);
						dataStack->push(dx);
						dataStack->push(offset);
						dx = (op->type == $Op::LOOKAHEAD || op->type == $Op::NEGATIVELOOKAHEAD) ? 1 : -1;
						$assign(op, op->getChild());
					}
					break;
				}
			case $Op::INDEPENDENT:
				{
					{
						opStack->push(op);
						dataStack->push(offset);
						$assign(op, op->getChild());
					}
					break;
				}
			case $Op::MODIFIER:
				{
					{
						int32_t localopts = opts;
						localopts |= op->getData();
						localopts &= (uint32_t)~op->getData2();
						opStack->push(op);
						dataStack->push(opts);
						dataStack->push(offset);
						opts = localopts;
						$assign(op, op->getChild());
					}
					break;
				}
			case $Op::CONDITION:
				{
					{
						$var($Op$ConditionOp, cop, $cast($Op$ConditionOp, op));
						if (cop->refNumber > 0) {
							if (cop->refNumber >= this->nofparen) {
								$throwNew($RuntimeException, $$str({"Internal Error: Reference number must be more than zero: "_s, $$str(cop->refNumber)}));
							}
							bool var$3 = $nc(con->match)->getBeginning(cop->refNumber) >= 0;
							if (var$3 && $nc(con->match)->getEnd(cop->refNumber) >= 0) {
								$assign(op, cop->yes);
							} else if (cop->no != nullptr) {
								$assign(op, cop->no);
							} else {
								$assign(op, cop->next);
							}
						} else {
							opStack->push(op);
							dataStack->push(offset);
							$assign(op, cop->condition);
						}
					}
					break;
				}
			default:
				{
					$throwNew($RuntimeException, $$str({"Unknown operation type: "_s, $$str(op->type)}));
				}
			}
		}
		while (returned) {
			if (opStack->isEmpty()) {
				return retValue;
			}
			$assign(op, $cast($Op, opStack->pop()));
			offset = dataStack->pop();
			{
				int32_t refno = 0;
				int32_t saved = 0;
				switch ($nc(op)->type) {
				case $Op::CLOSURE:
					{}
				case $Op::QUESTION:
					{
						if (retValue < 0) {
							$assign(op, op->next);
							returned = false;
						}
						break;
					}
				case $Op::NONGREEDYCLOSURE:
					{}
				case $Op::NONGREEDYQUESTION:
					{
						if (retValue < 0) {
							$assign(op, op->getChild());
							returned = false;
						}
						break;
					}
				case $Op::UNION:
					{
						{
							int32_t unionIndex = dataStack->pop();
							if (retValue < 0) {
								if (++unionIndex < op->size()) {
									opStack->push(op);
									dataStack->push(unionIndex);
									dataStack->push(offset);
									$assign(op, op->elementAt(unionIndex));
									returned = false;
								} else {
									retValue = -1;
								}
							}
						}
						break;
					}
				case $Op::CAPTURE:
					{
						refno = op->getData();
						saved = dataStack->pop();
						if (retValue < 0) {
							if (refno > 0) {
								$nc(con->match)->setBeginning(refno, saved);
							} else {
								$nc(con->match)->setEnd(-refno, saved);
							}
						}
						break;
					}
				case $Op::LOOKAHEAD:
					{}
				case $Op::LOOKBEHIND:
					{
						{
							dx = dataStack->pop();
							if (0 <= retValue) {
								$assign(op, op->next);
								returned = false;
							}
							retValue = -1;
						}
						break;
					}
				case $Op::NEGATIVELOOKAHEAD:
					{}
				case $Op::NEGATIVELOOKBEHIND:
					{
						{
							dx = dataStack->pop();
							if (0 > retValue) {
								$assign(op, op->next);
								returned = false;
							}
							retValue = -1;
						}
						break;
					}
				case $Op::MODIFIER:
					{
						opts = dataStack->pop();
					}
				case $Op::INDEPENDENT:
					{
						if (retValue >= 0) {
							offset = retValue;
							$assign(op, op->next);
							returned = false;
						}
						break;
					}
				case $Op::CONDITION:
					{
						{
							$var($Op$ConditionOp, cop, $cast($Op$ConditionOp, op));
							if (0 <= retValue) {
								$assign(op, cop->yes);
							} else if (cop->no != nullptr) {
								$assign(op, cop->no);
							} else {
								$assign(op, cop->next);
							}
						}
						returned = false;
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
}

bool RegularExpression::matchChar(int32_t ch, int32_t other, bool ignoreCase) {
	return (ignoreCase) ? matchIgnoreCase(ch, other) : ch == other;
}

bool RegularExpression::matchAnchor($RegularExpression$ExpressionTarget* target, $Op* op, $RegularExpression$Context* con, int32_t offset, int32_t opts) {
	bool go = false;
	switch ($nc(op)->getData()) {
	case u'^':
		{
			if (isSet(opts, RegularExpression::MULTIPLE_LINES)) {
				if (!(offset == $nc(con)->start || offset > $nc(con)->start && offset < con->limit && isEOLChar($nc(target)->charAt(offset - 1)))) {
					return false;
				}
			} else if (offset != $nc(con)->start) {
				return false;
			}
			break;
		}
	case u'@':
		{
			if (!(offset == $nc(con)->start || offset > $nc(con)->start && isEOLChar($nc(target)->charAt(offset - 1)))) {
				return false;
			}
			break;
		}
	case u'$':
		{
			if (isSet(opts, RegularExpression::MULTIPLE_LINES)) {
				if (!(offset == $nc(con)->limit || offset < $nc(con)->limit && isEOLChar($nc(target)->charAt(offset)))) {
					return false;
				}
			} else {
				bool var$2 = offset == $nc(con)->limit || offset + 1 == $nc(con)->limit && isEOLChar($nc(target)->charAt(offset));
				if (!var$2) {
					bool var$3 = offset + 2 == $nc(con)->limit && $nc(target)->charAt(offset) == RegularExpression::CARRIAGE_RETURN;
					var$2 = var$3 && target->charAt(offset + 1) == RegularExpression::LINE_FEED;
				}
				if (!(var$2)) {
					return false;
				}
			}
			break;
		}
	case u'A':
		{
			if (offset != $nc(con)->start) {
				return false;
			}
			break;
		}
	case u'Z':
		{
			bool var$4 = offset == $nc(con)->limit || offset + 1 == $nc(con)->limit && isEOLChar($nc(target)->charAt(offset));
			if (!var$4) {
				bool var$5 = offset + 2 == $nc(con)->limit && $nc(target)->charAt(offset) == RegularExpression::CARRIAGE_RETURN;
				var$4 = var$5 && target->charAt(offset + 1) == RegularExpression::LINE_FEED;
			}
			if (!(var$4)) {
				return false;
			}
			break;
		}
	case u'z':
		{
			if (offset != $nc(con)->limit) {
				return false;
			}
			break;
		}
	case u'b':
		{
			if ($nc(con)->length == 0) {
				return false;
			}
			{
				int32_t after = getWordType(target, $nc(con)->start, con->limit, offset, opts);
				if (after == RegularExpression::WT_IGNORE) {
					return false;
				}
				int32_t before = getPreviousWordType(target, $nc(con)->start, con->limit, offset, opts);
				if (after == before) {
					return false;
				}
			}
			break;
		}
	case u'B':
		{
			if ($nc(con)->length == 0) {
				go = true;
			} else {
				int32_t after = getWordType(target, con->start, con->limit, offset, opts);
				go = after == RegularExpression::WT_IGNORE || after == getPreviousWordType(target, con->start, con->limit, offset, opts);
			}
			if (!go) {
				return false;
			}
			break;
		}
	case u'<':
		{
			if ($nc(con)->length == 0 || offset == $nc(con)->limit) {
				return false;
			}
			bool var$6 = getWordType(target, $nc(con)->start, con->limit, offset, opts) != RegularExpression::WT_LETTER;
			if (var$6 || getPreviousWordType(target, $nc(con)->start, con->limit, offset, opts) != RegularExpression::WT_OTHER) {
				return false;
			}
			break;
		}
	case u'>':
		{
			if ($nc(con)->length == 0 || offset == $nc(con)->start) {
				return false;
			}
			bool var$7 = getWordType(target, $nc(con)->start, con->limit, offset, opts) != RegularExpression::WT_OTHER;
			if (var$7 || getPreviousWordType(target, $nc(con)->start, con->limit, offset, opts) != RegularExpression::WT_LETTER) {
				return false;
			}
			break;
		}
	}
	return true;
}

int32_t RegularExpression::getPreviousWordType($RegularExpression$ExpressionTarget* target, int32_t begin, int32_t end, int32_t offset, int32_t opts) {
	$init(RegularExpression);
	int32_t ret = getWordType(target, begin, end, --offset, opts);
	while (ret == RegularExpression::WT_IGNORE) {
		ret = getWordType(target, begin, end, --offset, opts);
	}
	return ret;
}

int32_t RegularExpression::getWordType($RegularExpression$ExpressionTarget* target, int32_t begin, int32_t end, int32_t offset, int32_t opts) {
	$init(RegularExpression);
	if (offset < begin || offset >= end) {
		return RegularExpression::WT_OTHER;
	}
	return getWordType0($nc(target)->charAt(offset), opts);
}

bool RegularExpression::matches($CharacterIterator* target) {
	return this->matches(target, ($Match*)nullptr);
}

bool RegularExpression::matches($CharacterIterator* target, $Match* match$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Match, match, match$renamed);
	int32_t start = $nc(target)->getBeginIndex();
	int32_t end = target->getEndIndex();
	$synchronized(this) {
		if (this->operations == nullptr) {
			this->prepare();
		}
		if (this->context == nullptr) {
			$set(this, context, $new($RegularExpression$Context));
		}
	}
	$var($RegularExpression$Context, con, nullptr);
	$synchronized(this->context) {
		$assign(con, $nc(this->context)->inuse ? $new($RegularExpression$Context) : this->context);
		$nc(con)->reset(target, start, end, this->numberOfClosures);
	}
	if (match != nullptr) {
		match->setNumberOfGroups(this->nofparen);
		match->setSource(target);
	} else if (this->hasBackReferences) {
		$assign(match, $new($Match));
		match->setNumberOfGroups(this->nofparen);
	}
	$set($nc(con), match, match);
	if (RegularExpression::isSet(this->options, RegularExpression::XMLSCHEMA_MODE)) {
		int32_t matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		if (matchEnd == con->limit) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, con->start);
				$nc(con->match)->setEnd(0, matchEnd);
			}
			con->setInUse(false);
			return true;
		}
		return false;
	}
	if (this->fixedStringOnly) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o >= 0) {
			if (con->match != nullptr) {
				$nc(con->match)->setBeginning(0, o);
				$nc(con->match)->setEnd(0, o + $nc(this->fixedString)->length());
			}
			con->setInUse(false);
			return true;
		}
		con->setInUse(false);
		return false;
	}
	if (this->fixedString != nullptr) {
		int32_t o = $nc(this->fixedStringTable)->matches(target, con->start, con->limit);
		if (o < 0) {
			con->setInUse(false);
			return false;
		}
	}
	int32_t limit = con->limit - this->minlength;
	int32_t matchStart = 0;
	int32_t matchEnd = -1;
	if (this->operations != nullptr && $nc(this->operations)->type == $Op::CLOSURE && $nc($($nc(this->operations)->getChild()))->type == $Op::DOT) {
		if (isSet(this->options, RegularExpression::SINGLE_LINE)) {
			matchStart = con->start;
			matchEnd = this->match(con, this->operations, con->start, 1, this->options);
		} else {
			bool previousIsEOL = true;
			for (matchStart = con->start; matchStart <= limit; ++matchStart) {
				int32_t ch = target->setIndex(matchStart);
				if (isEOLChar(ch)) {
					previousIsEOL = true;
				} else {
					if (previousIsEOL) {
						if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
							break;
						}
					}
					previousIsEOL = false;
				}
			}
		}
	} else if (this->firstChar != nullptr) {
		$var($RangeToken, range, this->firstChar);
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			int32_t ch = target->setIndex(matchStart);
			if ($REUtil::isHighSurrogate(ch) && matchStart + 1 < con->limit) {
				ch = $REUtil::composeFromSurrogates(ch, target->setIndex(matchStart + 1));
			}
			if (!$nc(range)->match(ch)) {
				continue;
			}
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	} else {
		for (matchStart = con->start; matchStart <= limit; ++matchStart) {
			if (0 <= (matchEnd = this->match(con, this->operations, matchStart, 1, this->options))) {
				break;
			}
		}
	}
	if (matchEnd >= 0) {
		if (con->match != nullptr) {
			$nc(con->match)->setBeginning(0, matchStart);
			$nc(con->match)->setEnd(0, matchEnd);
		}
		con->setInUse(false);
		return true;
	} else {
		con->setInUse(false);
		return false;
	}
}

void RegularExpression::prepare() {
	$useLocalCurrentObjectStackCache();
	this->compile(this->tokentree);
	this->minlength = $nc(this->tokentree)->getMinLength();
	$set(this, firstChar, nullptr);
	bool var$0 = !isSet(this->options, RegularExpression::PROHIBIT_HEAD_CHARACTER_OPTIMIZATION);
	if (var$0 && !isSet(this->options, RegularExpression::XMLSCHEMA_MODE)) {
		$var($RangeToken, firstChar, $Token::createRange());
		int32_t fresult = $nc(this->tokentree)->analyzeFirstCharacter(firstChar, this->options);
		if (fresult == $Token::FC_TERMINAL) {
			$nc(firstChar)->compactRanges();
			$set(this, firstChar, firstChar);
		}
	}
	if (this->operations != nullptr && ($nc(this->operations)->type == $Op::STRING || $nc(this->operations)->type == $Op::CHAR) && $nc(this->operations)->next == nullptr) {
		this->fixedStringOnly = true;
		if ($nc(this->operations)->type == $Op::STRING) {
			$set(this, fixedString, $nc(this->operations)->getString());
		} else if ($nc(this->operations)->getData() >= 0x00010000) {
			$set(this, fixedString, $REUtil::decomposeToSurrogates($nc(this->operations)->getData()));
		} else {
			$var($chars, ac, $new($chars, 1));
			ac->set(0, (char16_t)$nc(this->operations)->getData());
			$set(this, fixedString, $new($String, ac));
		}
		this->fixedStringOptions = this->options;
		$set(this, fixedStringTable, $new($BMPattern, this->fixedString, 256, isSet(this->fixedStringOptions, RegularExpression::IGNORE_CASE)));
	} else {
		bool var$2 = !isSet(this->options, RegularExpression::PROHIBIT_FIXED_STRING_OPTIMIZATION);
		if (var$2 && !isSet(this->options, RegularExpression::XMLSCHEMA_MODE)) {
			$var($Token$FixedStringContainer, container, $new($Token$FixedStringContainer));
			$nc(this->tokentree)->findFixedString(container, this->options);
			$set(this, fixedString, container->token == nullptr ? ($String*)nullptr : $nc(container->token)->getString());
			this->fixedStringOptions = container->options;
			if (this->fixedString != nullptr && $nc(this->fixedString)->length() < 2) {
				$set(this, fixedString, nullptr);
			}
			if (this->fixedString != nullptr) {
				$set(this, fixedStringTable, $new($BMPattern, this->fixedString, 256, isSet(this->fixedStringOptions, RegularExpression::IGNORE_CASE)));
			}
		}
	}
}

bool RegularExpression::isSet(int32_t options, int32_t flag) {
	$init(RegularExpression);
	return ((int32_t)(options & (uint32_t)flag)) == flag;
}

void RegularExpression::init$($String* regex) {
	RegularExpression::init$(regex, nullptr);
}

void RegularExpression::init$($String* regex, $String* options) {
	this->hasBackReferences = false;
	$set(this, operations, nullptr);
	$set(this, context, nullptr);
	$set(this, firstChar, nullptr);
	$set(this, fixedString, nullptr);
	$set(this, fixedStringTable, nullptr);
	this->fixedStringOnly = false;
	this->setPattern(regex, options);
}

void RegularExpression::init$($String* regex, $String* options, $Locale* locale) {
	this->hasBackReferences = false;
	$set(this, operations, nullptr);
	$set(this, context, nullptr);
	$set(this, firstChar, nullptr);
	$set(this, fixedString, nullptr);
	$set(this, fixedStringTable, nullptr);
	this->fixedStringOnly = false;
	this->setPattern(regex, options, locale);
}

void RegularExpression::init$($String* regex, $Token* tok, int32_t parens, bool hasBackReferences, int32_t options) {
	this->hasBackReferences = false;
	$set(this, operations, nullptr);
	$set(this, context, nullptr);
	$set(this, firstChar, nullptr);
	$set(this, fixedString, nullptr);
	$set(this, fixedStringTable, nullptr);
	this->fixedStringOnly = false;
	$set(this, regex, regex);
	$set(this, tokentree, tok);
	this->nofparen = parens;
	this->options = options;
	this->hasBackReferences = hasBackReferences;
}

void RegularExpression::setPattern($String* newPattern) {
	this->setPattern(newPattern, $($Locale::getDefault()));
}

void RegularExpression::setPattern($String* newPattern, $Locale* locale) {
	this->setPattern(newPattern, this->options, locale);
}

void RegularExpression::setPattern($String* newPattern, int32_t options, $Locale* locale) {
	$set(this, regex, newPattern);
	this->options = options;
	$var($RegexParser, rp, RegularExpression::isSet(this->options, RegularExpression::XMLSCHEMA_MODE) ? static_cast<$RegexParser*>($new($ParserForXMLSchema, locale)) : $new($RegexParser, locale));
	$set(this, tokentree, $nc(rp)->parse(this->regex, this->options));
	this->nofparen = rp->parennumber;
	this->hasBackReferences = rp->hasBackReferences;
	$set(this, operations, nullptr);
	$set(this, context, nullptr);
}

void RegularExpression::setPattern($String* newPattern, $String* options) {
	this->setPattern(newPattern, options, $($Locale::getDefault()));
}

void RegularExpression::setPattern($String* newPattern, $String* options, $Locale* locale) {
	this->setPattern(newPattern, $REUtil::parseOptions(options), locale);
}

$String* RegularExpression::getPattern() {
	return this->regex;
}

$String* RegularExpression::toString() {
	return $nc(this->tokentree)->toString(this->options);
}

$String* RegularExpression::getOptions() {
	return $REUtil::createOptionString(this->options);
}

bool RegularExpression::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if (!($instanceOf(RegularExpression, obj))) {
		return false;
	}
	$var(RegularExpression, r, $cast(RegularExpression, obj));
	return $nc(this->regex)->equals($nc(r)->regex) && this->options == $nc(r)->options;
}

bool RegularExpression::equals($String* pattern, int32_t options) {
	return $nc(this->regex)->equals(pattern) && this->options == options;
}

int32_t RegularExpression::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $nc(($$str({this->regex, "/"_s, $(this->getOptions())})))->hashCode();
}

int32_t RegularExpression::getNumberOfGroups() {
	return this->nofparen;
}

int32_t RegularExpression::getWordType0(char16_t ch, int32_t opts) {
	$init(RegularExpression);
	if (!isSet(opts, RegularExpression::UNICODE_WORD_BOUNDARY)) {
		if (isSet(opts, RegularExpression::USE_UNICODE_CATEGORY)) {
			return ($nc($($Token::getRange("IsWord"_s, true)))->match(ch)) ? RegularExpression::WT_LETTER : RegularExpression::WT_OTHER;
		}
		return isWordChar(ch) ? RegularExpression::WT_LETTER : RegularExpression::WT_OTHER;
	}
	switch ($Character::getType(ch)) {
	case $Character::UPPERCASE_LETTER:
		{}
	case $Character::LOWERCASE_LETTER:
		{}
	case $Character::TITLECASE_LETTER:
		{}
	case $Character::MODIFIER_LETTER:
		{}
	case $Character::OTHER_LETTER:
		{}
	case $Character::LETTER_NUMBER:
		{}
	case $Character::DECIMAL_DIGIT_NUMBER:
		{}
	case $Character::OTHER_NUMBER:
		{}
	case $Character::COMBINING_SPACING_MARK:
		{
			return RegularExpression::WT_LETTER;
		}
	case $Character::FORMAT:
		{}
	case $Character::NON_SPACING_MARK:
		{}
	case $Character::ENCLOSING_MARK:
		{
			return RegularExpression::WT_IGNORE;
		}
	case $Character::CONTROL:
		{
			switch (ch) {
			case u'\t':
				{}
			case u'\n':
				{}
			case (char16_t)0xB:
				{}
			case u'\f':
				{}
			case u'\r':
				{
					return RegularExpression::WT_OTHER;
				}
			default:
				{
					return RegularExpression::WT_IGNORE;
				}
			}
		}
	default:
		{
			return RegularExpression::WT_OTHER;
		}
	}
}

bool RegularExpression::isEOLChar(int32_t ch) {
	$init(RegularExpression);
	return ch == RegularExpression::LINE_FEED || ch == RegularExpression::CARRIAGE_RETURN || ch == RegularExpression::LINE_SEPARATOR || ch == RegularExpression::PARAGRAPH_SEPARATOR;
}

bool RegularExpression::isWordChar(int32_t ch) {
	$init(RegularExpression);
	if (ch == u'_') {
		return true;
	}
	if (ch < u'0') {
		return false;
	}
	if (ch > u'z') {
		return false;
	}
	if (ch <= u'9') {
		return true;
	}
	if (ch < u'A') {
		return false;
	}
	if (ch <= u'Z') {
		return true;
	}
	if (ch < u'a') {
		return false;
	}
	return true;
}

bool RegularExpression::matchIgnoreCase(int32_t chardata, int32_t ch) {
	$init(RegularExpression);
	if (chardata == ch) {
		return true;
	}
	if (chardata > 0x0000FFFF || ch > 0x0000FFFF) {
		return false;
	}
	char16_t uch1 = $Character::toUpperCase((char16_t)chardata);
	char16_t uch2 = $Character::toUpperCase((char16_t)ch);
	if (uch1 == uch2) {
		return true;
	}
	char16_t var$0 = $Character::toLowerCase(uch1);
	return var$0 == $Character::toLowerCase(uch2);
}

RegularExpression::RegularExpression() {
}

$Class* RegularExpression::load$($String* name, bool initialize) {
	$loadClass(RegularExpression, name, initialize, &_RegularExpression_ClassInfo_, allocate$RegularExpression);
	return class$;
}

$Class* RegularExpression::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com