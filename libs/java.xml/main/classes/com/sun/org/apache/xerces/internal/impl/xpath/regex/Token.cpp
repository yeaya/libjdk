#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConditionToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$FixedStringContainer.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ModifierToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ANCHOR
#undef BACKREFERENCE
#undef CHAR
#undef CHAR_FINAL_QUOTE
#undef CHAR_INIT_QUOTE
#undef CHAR_LETTER
#undef CHAR_MARK
#undef CHAR_NUMBER
#undef CHAR_OTHER
#undef CHAR_PUNCTUATION
#undef CHAR_SEPARATOR
#undef CHAR_SYMBOL
#undef CLOSURE
#undef COMBINING_SPACING_MARK
#undef CONCAT
#undef CONDITION
#undef CONNECTOR_PUNCTUATION
#undef CONTROL
#undef COUNTTOKENS
#undef CURRENCY_SYMBOL
#undef DASH_PUNCTUATION
#undef DECIMAL_DIGIT_NUMBER
#undef DOT
#undef EMPTY
#undef ENCLOSING_MARK
#undef END_PUNCTUATION
#undef FC_ANY
#undef FC_CONTINUE
#undef FC_TERMINAL
#undef FORMAT
#undef IGNORE_CASE
#undef INDEPENDENT
#undef LETTER_NUMBER
#undef LINE_SEPARATOR
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef LOWERCASE_LETTER
#undef MATH_SYMBOL
#undef MODIFIERGROUP
#undef MODIFIER_LETTER
#undef MODIFIER_SYMBOL
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef NONBMP_BLOCK_START
#undef NONGREEDYCLOSURE
#undef NON_SPACING_MARK
#undef NRANGE
#undef OTHER_LETTER
#undef OTHER_NUMBER
#undef OTHER_PUNCTUATION
#undef OTHER_SYMBOL
#undef PARAGRAPH_SEPARATOR
#undef PAREN
#undef PRIVATE_USE
#undef RANGE
#undef SPACE_SEPARATOR
#undef START_PUNCTUATION
#undef STRING
#undef SURROGATE
#undef TITLECASE_LETTER
#undef UNASSIGNED
#undef UNION
#undef UPPERCASE_LETTER
#undef UTF16_MAX

using $TokenArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token>;
using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $RegularExpression = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression;
using $Token$CharToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$CharToken;
using $Token$ClosureToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ClosureToken;
using $Token$ConcatToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConcatToken;
using $Token$ConditionToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConditionToken;
using $Token$FixedStringContainer = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$FixedStringContainer;
using $Token$ModifierToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ModifierToken;
using $Token$ParenToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ParenToken;
using $Token$StringToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$StringToken;
using $Token$UnionToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$UnionToken;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _Token_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token, serialVersionUID)},
	{"COUNTTOKENS", "Z", nullptr, $STATIC | $FINAL, $constField(Token, COUNTTOKENS)},
	{"tokens", "I", nullptr, $STATIC, $staticField(Token, tokens)},
	{"CHAR", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR)},
	{"DOT", "I", nullptr, $STATIC | $FINAL, $constField(Token, DOT)},
	{"CONCAT", "I", nullptr, $STATIC | $FINAL, $constField(Token, CONCAT)},
	{"UNION", "I", nullptr, $STATIC | $FINAL, $constField(Token, UNION)},
	{"CLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Token, CLOSURE)},
	{"RANGE", "I", nullptr, $STATIC | $FINAL, $constField(Token, RANGE)},
	{"NRANGE", "I", nullptr, $STATIC | $FINAL, $constField(Token, NRANGE)},
	{"PAREN", "I", nullptr, $STATIC | $FINAL, $constField(Token, PAREN)},
	{"EMPTY", "I", nullptr, $STATIC | $FINAL, $constField(Token, EMPTY)},
	{"ANCHOR", "I", nullptr, $STATIC | $FINAL, $constField(Token, ANCHOR)},
	{"NONGREEDYCLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Token, NONGREEDYCLOSURE)},
	{"STRING", "I", nullptr, $STATIC | $FINAL, $constField(Token, STRING)},
	{"BACKREFERENCE", "I", nullptr, $STATIC | $FINAL, $constField(Token, BACKREFERENCE)},
	{"LOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Token, LOOKAHEAD)},
	{"NEGATIVELOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Token, NEGATIVELOOKAHEAD)},
	{"LOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Token, LOOKBEHIND)},
	{"NEGATIVELOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Token, NEGATIVELOOKBEHIND)},
	{"INDEPENDENT", "I", nullptr, $STATIC | $FINAL, $constField(Token, INDEPENDENT)},
	{"MODIFIERGROUP", "I", nullptr, $STATIC | $FINAL, $constField(Token, MODIFIERGROUP)},
	{"CONDITION", "I", nullptr, $STATIC | $FINAL, $constField(Token, CONDITION)},
	{"UTF16_MAX", "I", nullptr, $STATIC | $FINAL, $constField(Token, UTF16_MAX)},
	{"type", "I", nullptr, $FINAL, $field(Token, type)},
	{"token_dot", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_dot)},
	{"token_0to9", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_0to9)},
	{"token_wordchars", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_wordchars)},
	{"token_not_0to9", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_not_0to9)},
	{"token_not_wordchars", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_not_wordchars)},
	{"token_spaces", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_spaces)},
	{"token_not_spaces", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_not_spaces)},
	{"token_empty", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_empty)},
	{"token_linebeginning", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_linebeginning)},
	{"token_linebeginning2", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_linebeginning2)},
	{"token_lineend", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_lineend)},
	{"token_stringbeginning", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_stringbeginning)},
	{"token_stringend", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_stringend)},
	{"token_stringend2", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_stringend2)},
	{"token_wordedge", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_wordedge)},
	{"token_not_wordedge", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_not_wordedge)},
	{"token_wordbeginning", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_wordbeginning)},
	{"token_wordend", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticField(Token, token_wordend)},
	{"FC_CONTINUE", "I", nullptr, $STATIC | $FINAL, $constField(Token, FC_CONTINUE)},
	{"FC_TERMINAL", "I", nullptr, $STATIC | $FINAL, $constField(Token, FC_TERMINAL)},
	{"FC_ANY", "I", nullptr, $STATIC | $FINAL, $constField(Token, FC_ANY)},
	{"categories", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(Token, categories)},
	{"categories2", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(Token, categories2)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Token, lock)},
	{"categoryNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Token, categoryNames)},
	{"CHAR_INIT_QUOTE", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_INIT_QUOTE)},
	{"CHAR_FINAL_QUOTE", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_FINAL_QUOTE)},
	{"CHAR_LETTER", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_LETTER)},
	{"CHAR_MARK", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_MARK)},
	{"CHAR_NUMBER", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_NUMBER)},
	{"CHAR_SEPARATOR", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_SEPARATOR)},
	{"CHAR_OTHER", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_OTHER)},
	{"CHAR_PUNCTUATION", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_PUNCTUATION)},
	{"CHAR_SYMBOL", "I", nullptr, $STATIC | $FINAL, $constField(Token, CHAR_SYMBOL)},
	{"blockNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Token, blockNames)},
	{"blockRanges", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Token, blockRanges)},
	{"nonBMPBlockRanges", "[I", nullptr, $STATIC | $FINAL, $staticField(Token, nonBMPBlockRanges)},
	{"NONBMP_BLOCK_START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token, NONBMP_BLOCK_START)},
	{"nonxs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(Token, nonxs)},
	{"viramaString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Token, viramaString)},
	{"token_grapheme", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $PRIVATE | $STATIC, $staticField(Token, token_grapheme)},
	{"token_ccs", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $PRIVATE | $STATIC, $staticField(Token, token_ccs)},
	{}
};

$MethodInfo _Token_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(Token, init$, void, int32_t)},
	{"addChild", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $virtualMethod(Token, addChild, void, Token*)},
	{"addRange", "(II)V", nullptr, $PROTECTED, $virtualMethod(Token, addRange, void, int32_t, int32_t)},
	{"analyzeFirstCharacter", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;I)I", nullptr, $FINAL, $method(Token, analyzeFirstCharacter, int32_t, $RangeToken*, int32_t)},
	{"compactRanges", "()V", nullptr, $PROTECTED, $virtualMethod(Token, compactRanges, void)},
	{"complementRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticMethod(Token, complementRanges, Token*, Token*)},
	{"createAnchor", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken;", nullptr, $PRIVATE | $STATIC, $staticMethod(Token, createAnchor, $Token$CharToken*, int32_t)},
	{"createBackReference", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken;", nullptr, $STATIC, $staticMethod(Token, createBackReference, $Token$StringToken*, int32_t)},
	{"createChar", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken;", nullptr, $STATIC, $staticMethod(Token, createChar, $Token$CharToken*, int32_t)},
	{"createClosure", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken;", nullptr, $STATIC, $staticMethod(Token, createClosure, $Token$ClosureToken*, Token*)},
	{"createConcat", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken;", nullptr, $STATIC, $staticMethod(Token, createConcat, $Token$ConcatToken*, Token*, Token*)},
	{"createConcat", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken;", nullptr, $STATIC, $staticMethod(Token, createConcat, $Token$UnionToken*)},
	{"createCondition", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConditionToken;", nullptr, $STATIC, $staticMethod(Token, createCondition, $Token$ConditionToken*, int32_t, Token*, Token*, Token*)},
	{"createEmpty", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC, $staticMethod(Token, createEmpty, Token*)},
	{"createLook", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken;", nullptr, $STATIC, $staticMethod(Token, createLook, $Token$ParenToken*, int32_t, Token*)},
	{"createModifierGroup", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;II)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ModifierToken;", nullptr, $STATIC, $staticMethod(Token, createModifierGroup, $Token$ModifierToken*, Token*, int32_t, int32_t)},
	{"createNGClosure", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken;", nullptr, $STATIC, $staticMethod(Token, createNGClosure, $Token$ClosureToken*, Token*)},
	{"createNRange", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $STATIC, $staticMethod(Token, createNRange, $RangeToken*)},
	{"createParen", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken;", nullptr, $STATIC, $staticMethod(Token, createParen, $Token$ParenToken*, Token*, int32_t)},
	{"createRange", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $STATIC, $staticMethod(Token, createRange, $RangeToken*)},
	{"createString", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken;", nullptr, $STATIC, $staticMethod(Token, createString, $Token$StringToken*, $String*)},
	{"createUnion", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$UnionToken;", nullptr, $STATIC, $staticMethod(Token, createUnion, $Token$UnionToken*)},
	{"findFixedString", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token$FixedStringContainer;I)V", nullptr, $FINAL, $method(Token, findFixedString, void, $Token$FixedStringContainer*, int32_t)},
	{"getChar", "()I", nullptr, 0, $virtualMethod(Token, getChar, int32_t)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token, getChild, Token*, int32_t)},
	{"getCombiningCharacterSequence", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(Token, getCombiningCharacterSequence, Token*)},
	{"getGraphemePattern", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(Token, getGraphemePattern, Token*)},
	{"getMax", "()I", nullptr, 0, $virtualMethod(Token, getMax, int32_t)},
	{"getMaxLength", "()I", nullptr, $FINAL, $method(Token, getMaxLength, int32_t)},
	{"getMin", "()I", nullptr, 0, $virtualMethod(Token, getMin, int32_t)},
	{"getMinLength", "()I", nullptr, $FINAL, $method(Token, getMinLength, int32_t)},
	{"getParenNumber", "()I", nullptr, 0, $virtualMethod(Token, getParenNumber, int32_t)},
	{"getRange", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED | $STATIC, $staticMethod(Token, getRange, $RangeToken*, $String*, bool)},
	{"getRange", "(Ljava/lang/String;ZZ)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, $PROTECTED | $STATIC, $staticMethod(Token, getRange, $RangeToken*, $String*, bool, bool)},
	{"getReferenceNumber", "()I", nullptr, 0, $virtualMethod(Token, getReferenceNumber, int32_t)},
	{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Token, getString, $String*)},
	{"intersectRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(Token, intersectRanges, void, Token*)},
	{"isRegisterNonXS", "(Ljava/lang/String;)Z", nullptr, $PROTECTED | $STATIC, $staticMethod(Token, isRegisterNonXS, bool, $String*)},
	{"isSet", "(II)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(Token, isSet, bool, int32_t, int32_t)},
	{"isShorterThan", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Z", nullptr, $PRIVATE | $FINAL, $method(Token, isShorterThan, bool, Token*)},
	{"match", "(I)Z", nullptr, 0, $virtualMethod(Token, match, bool, int32_t)},
	{"mergeRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(Token, mergeRanges, void, Token*)},
	{"registerNonXS", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(Token, registerNonXS, void, $String*)},
	{"setAlias", "(Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;Z)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;>;Ljava/lang/String;Ljava/lang/String;Z)V", $PRIVATE | $STATIC, $staticMethod(Token, setAlias, void, $Map*, $Map*, $String*, $String*, bool)},
	{"setMax", "(I)V", nullptr, 0, $virtualMethod(Token, setMax, void, int32_t)},
	{"setMin", "(I)V", nullptr, 0, $virtualMethod(Token, setMin, void, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token, size, int32_t)},
	{"sortRanges", "()V", nullptr, $PROTECTED, $virtualMethod(Token, sortRanges, void)},
	{"subtractRanges", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, $PROTECTED, $virtualMethod(Token, subtractRanges, void, Token*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token, toString, $String*)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "UnionToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ModifierToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConditionToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ConditionToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ParenToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ParenToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ClosureToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "CharToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ConcatToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$StringToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "StringToken", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "FixedStringContainer", $STATIC},
	{}
};

$ClassInfo _Token_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	"java.lang.Object",
	"java.io.Serializable",
	_Token_FieldInfo_,
	_Token_MethodInfo_,
	nullptr,
	nullptr,
	_Token_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConditionToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ParenToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$StringToken,com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer"
};

$Object* allocate$Token($Class* clazz) {
	return $of($alloc(Token));
}

int32_t Token::tokens = 0;
Token* Token::token_dot = nullptr;
Token* Token::token_0to9 = nullptr;
Token* Token::token_wordchars = nullptr;
Token* Token::token_not_0to9 = nullptr;
Token* Token::token_not_wordchars = nullptr;
Token* Token::token_spaces = nullptr;
Token* Token::token_not_spaces = nullptr;
Token* Token::token_empty = nullptr;
Token* Token::token_linebeginning = nullptr;
Token* Token::token_linebeginning2 = nullptr;
Token* Token::token_lineend = nullptr;
Token* Token::token_stringbeginning = nullptr;
Token* Token::token_stringend = nullptr;
Token* Token::token_stringend2 = nullptr;
Token* Token::token_wordedge = nullptr;
Token* Token::token_not_wordedge = nullptr;
Token* Token::token_wordbeginning = nullptr;
Token* Token::token_wordend = nullptr;
$volatile($Map*) Token::categories = nullptr;
$volatile($Map*) Token::categories2 = nullptr;
$Object* Token::lock = nullptr;
$StringArray* Token::categoryNames = nullptr;
$StringArray* Token::blockNames = nullptr;
$String* Token::blockRanges = nullptr;
$ints* Token::nonBMPBlockRanges = nullptr;
$Set* Token::nonxs = nullptr;
$String* Token::viramaString = nullptr;
Token* Token::token_grapheme = nullptr;
Token* Token::token_ccs = nullptr;

$Token$ParenToken* Token::createLook(int32_t type, Token* child) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ParenToken, type, child, 0);
}

$Token$ParenToken* Token::createParen(Token* child, int32_t pnumber) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ParenToken, Token::PAREN, child, pnumber);
}

$Token$ClosureToken* Token::createClosure(Token* tok) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ClosureToken, Token::CLOSURE, tok);
}

$Token$ClosureToken* Token::createNGClosure(Token* tok) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ClosureToken, Token::NONGREEDYCLOSURE, tok);
}

$Token$ConcatToken* Token::createConcat(Token* tok1, Token* tok2) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ConcatToken, tok1, tok2);
}

$Token$UnionToken* Token::createConcat() {
	$init(Token);
	++Token::tokens;
	return $new($Token$UnionToken, Token::CONCAT);
}

$Token$UnionToken* Token::createUnion() {
	$init(Token);
	++Token::tokens;
	return $new($Token$UnionToken, Token::UNION);
}

Token* Token::createEmpty() {
	$init(Token);
	return Token::token_empty;
}

$RangeToken* Token::createRange() {
	$init(Token);
	++Token::tokens;
	return $new($RangeToken, Token::RANGE);
}

$RangeToken* Token::createNRange() {
	$init(Token);
	++Token::tokens;
	return $new($RangeToken, Token::NRANGE);
}

$Token$CharToken* Token::createChar(int32_t ch) {
	$init(Token);
	++Token::tokens;
	return $new($Token$CharToken, Token::CHAR, ch);
}

$Token$CharToken* Token::createAnchor(int32_t ch) {
	$init(Token);
	++Token::tokens;
	return $new($Token$CharToken, Token::ANCHOR, ch);
}

$Token$StringToken* Token::createBackReference(int32_t refno) {
	$init(Token);
	++Token::tokens;
	return $new($Token$StringToken, Token::BACKREFERENCE, nullptr, refno);
}

$Token$StringToken* Token::createString($String* str) {
	$init(Token);
	++Token::tokens;
	return $new($Token$StringToken, Token::STRING, str, 0);
}

$Token$ModifierToken* Token::createModifierGroup(Token* child, int32_t add, int32_t mask) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ModifierToken, child, add, mask);
}

$Token$ConditionToken* Token::createCondition(int32_t refno, Token* condition, Token* yespat, Token* nopat) {
	$init(Token);
	++Token::tokens;
	return $new($Token$ConditionToken, refno, condition, yespat, nopat);
}

void Token::init$(int32_t type) {
	this->type = type;
}

int32_t Token::size() {
	return 0;
}

Token* Token::getChild(int32_t index) {
	return nullptr;
}

void Token::addChild(Token* tok) {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::addRange(int32_t start, int32_t end) {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::sortRanges() {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::compactRanges() {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::mergeRanges(Token* tok) {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::subtractRanges(Token* tok) {
	$throwNew($RuntimeException, "Not supported."_s);
}

void Token::intersectRanges(Token* tok) {
	$throwNew($RuntimeException, "Not supported."_s);
}

Token* Token::complementRanges(Token* tok) {
	$init(Token);
	return $RangeToken::complementRanges(tok);
}

void Token::setMin(int32_t min) {
}

void Token::setMax(int32_t max) {
}

int32_t Token::getMin() {
	return -1;
}

int32_t Token::getMax() {
	return -1;
}

int32_t Token::getReferenceNumber() {
	return 0;
}

$String* Token::getString() {
	return nullptr;
}

int32_t Token::getParenNumber() {
	return 0;
}

int32_t Token::getChar() {
	return -1;
}

$String* Token::toString() {
	return this->toString(0);
}

$String* Token::toString(int32_t options) {
	return this->type == Token::DOT ? "."_s : ""_s;
}

int32_t Token::getMinLength() {
	$useLocalCurrentObjectStackCache();
	{
		int32_t sum = 0;
		int32_t ret = 0;
		switch (this->type) {
		case Token::CONCAT:
			{
				sum = 0;
				for (int32_t i = 0; i < this->size(); ++i) {
					sum += $nc($(this->getChild(i)))->getMinLength();
				}
				return sum;
			}
		case Token::CONDITION:
			{}
		case Token::UNION:
			{
				if (this->size() == 0) {
					return 0;
				}
				ret = $nc($(this->getChild(0)))->getMinLength();
				for (int32_t i = 1; i < this->size(); ++i) {
					int32_t min = $nc($(this->getChild(i)))->getMinLength();
					if (min < ret) {
						ret = min;
					}
				}
				return ret;
			}
		case Token::CLOSURE:
			{}
		case Token::NONGREEDYCLOSURE:
			{
				if (this->getMin() >= 0) {
					int32_t var$0 = this->getMin();
					return var$0 * $nc($(this->getChild(0)))->getMinLength();
				}
				return 0;
			}
		case Token::EMPTY:
			{}
		case Token::ANCHOR:
			{
				return 0;
			}
		case Token::DOT:
			{}
		case Token::CHAR:
			{}
		case Token::RANGE:
			{}
		case Token::NRANGE:
			{
				return 1;
			}
		case Token::INDEPENDENT:
			{}
		case Token::PAREN:
			{}
		case Token::MODIFIERGROUP:
			{
				return $nc($(this->getChild(0)))->getMinLength();
			}
		case Token::BACKREFERENCE:
			{
				return 0;
			}
		case Token::STRING:
			{
				return $nc($(this->getString()))->length();
			}
		case Token::LOOKAHEAD:
			{}
		case Token::NEGATIVELOOKAHEAD:
			{}
		case Token::LOOKBEHIND:
			{}
		case Token::NEGATIVELOOKBEHIND:
			{
				return 0;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Token#getMinLength(): Invalid Type: "_s, $$str(this->type)}));
			}
		}
	}
}

int32_t Token::getMaxLength() {
	$useLocalCurrentObjectStackCache();
	{
		int32_t sum = 0;
		int32_t ret = 0;
		switch (this->type) {
		case Token::CONCAT:
			{
				sum = 0;
				for (int32_t i = 0; i < this->size(); ++i) {
					int32_t d = $nc($(this->getChild(i)))->getMaxLength();
					if (d < 0) {
						return -1;
					}
					sum += d;
				}
				return sum;
			}
		case Token::CONDITION:
			{}
		case Token::UNION:
			{
				if (this->size() == 0) {
					return 0;
				}
				ret = $nc($(this->getChild(0)))->getMaxLength();
				for (int32_t i = 1; ret >= 0 && i < this->size(); ++i) {
					int32_t max = $nc($(this->getChild(i)))->getMaxLength();
					if (max < 0) {
						ret = -1;
						break;
					}
					if (max > ret) {
						ret = max;
					}
				}
				return ret;
			}
		case Token::CLOSURE:
			{}
		case Token::NONGREEDYCLOSURE:
			{
				if (this->getMax() >= 0) {
					int32_t var$0 = this->getMax();
					return var$0 * $nc($(this->getChild(0)))->getMaxLength();
				}
				return -1;
			}
		case Token::EMPTY:
			{}
		case Token::ANCHOR:
			{
				return 0;
			}
		case Token::CHAR:
			{
				return 1;
			}
		case Token::DOT:
			{}
		case Token::RANGE:
			{}
		case Token::NRANGE:
			{
				return 2;
			}
		case Token::INDEPENDENT:
			{}
		case Token::PAREN:
			{}
		case Token::MODIFIERGROUP:
			{
				return $nc($(this->getChild(0)))->getMaxLength();
			}
		case Token::BACKREFERENCE:
			{
				return -1;
			}
		case Token::STRING:
			{
				return $nc($(this->getString()))->length();
			}
		case Token::LOOKAHEAD:
			{}
		case Token::NEGATIVELOOKAHEAD:
			{}
		case Token::LOOKBEHIND:
			{}
		case Token::NEGATIVELOOKBEHIND:
			{
				return 0;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Token#getMaxLength(): Invalid Type: "_s, $$str(this->type)}));
			}
		}
	}
}

bool Token::isSet(int32_t options, int32_t flag) {
	$init(Token);
	return ((int32_t)(options & (uint32_t)flag)) == flag;
}

int32_t Token::analyzeFirstCharacter($RangeToken* result, int32_t options) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t ret = 0;
		int32_t ret2 = 0;
		bool hasEmpty = false;
		int32_t ret3 = 0;
		int32_t ret4 = 0;
		int32_t ch = 0;
		int32_t cha = 0;
		int32_t ch2 = 0;
		switch (this->type) {
		case Token::CONCAT:
			{
				ret = Token::FC_CONTINUE;
				for (int32_t i = 0; i < this->size(); ++i) {
					if ((ret = $nc($(this->getChild(i)))->analyzeFirstCharacter(result, options)) != Token::FC_CONTINUE) {
						break;
					}
				}
				return ret;
			}
		case Token::UNION:
			{
				if (this->size() == 0) {
					return Token::FC_CONTINUE;
				}
				ret2 = Token::FC_CONTINUE;
				hasEmpty = false;
				for (int32_t i = 0; i < this->size(); ++i) {
					ret2 = $nc($(this->getChild(i)))->analyzeFirstCharacter(result, options);
					if (ret2 == Token::FC_ANY) {
						break;
					} else if (ret2 == Token::FC_CONTINUE) {
						hasEmpty = true;
					}
				}
				return hasEmpty ? Token::FC_CONTINUE : ret2;
			}
		case Token::CONDITION:
			{
				ret3 = $nc($(this->getChild(0)))->analyzeFirstCharacter(result, options);
				if (this->size() == 1) {
					return Token::FC_CONTINUE;
				}
				if (ret3 == Token::FC_ANY) {
					return ret3;
				}
				ret4 = $nc($(this->getChild(1)))->analyzeFirstCharacter(result, options);
				if (ret4 == Token::FC_ANY) {
					return ret4;
				}
				return ret3 == Token::FC_CONTINUE || ret4 == Token::FC_CONTINUE ? Token::FC_CONTINUE : Token::FC_TERMINAL;
			}
		case Token::CLOSURE:
			{}
		case Token::NONGREEDYCLOSURE:
			{
				$nc($(this->getChild(0)))->analyzeFirstCharacter(result, options);
				return Token::FC_CONTINUE;
			}
		case Token::EMPTY:
			{}
		case Token::ANCHOR:
			{
				return Token::FC_CONTINUE;
			}
		case Token::CHAR:
			{
				ch = this->getChar();
				$nc(result)->addRange(ch, ch);
				if (ch < 0x00010000 && isSet(options, $RegularExpression::IGNORE_CASE)) {
					ch = $Character::toUpperCase((char16_t)ch);
					$nc(result)->addRange(ch, ch);
					ch = $Character::toLowerCase((char16_t)ch);
					result->addRange(ch, ch);
				}
				return Token::FC_TERMINAL;
			}
		case Token::DOT:
			{
				return Token::FC_ANY;
			}
		case Token::RANGE:
			{
				$nc(result)->mergeRanges(this);
				return Token::FC_TERMINAL;
			}
		case Token::NRANGE:
			{
				$nc(result)->mergeRanges($(Token::complementRanges(this)));
				return Token::FC_TERMINAL;
			}
		case Token::INDEPENDENT:
			{}
		case Token::PAREN:
			{
				return $nc($(this->getChild(0)))->analyzeFirstCharacter(result, options);
			}
		case Token::MODIFIERGROUP:
			{
				options |= $nc(($cast($Token$ModifierToken, this)))->getOptions();
				options &= (uint32_t)~$nc(($cast($Token$ModifierToken, this)))->getOptionsMask();
				return $nc($(this->getChild(0)))->analyzeFirstCharacter(result, options);
			}
		case Token::BACKREFERENCE:
			{
				$nc(result)->addRange(0, Token::UTF16_MAX);
				return Token::FC_ANY;
			}
		case Token::STRING:
			{
				cha = $nc($(this->getString()))->charAt(0);
				bool var$1 = $REUtil::isHighSurrogate(cha);
				bool var$0 = var$1 && $nc($(this->getString()))->length() >= 2;
				if (var$0 && $REUtil::isLowSurrogate((ch2 = $nc($(this->getString()))->charAt(1)))) {
					cha = $REUtil::composeFromSurrogates(cha, ch2);
				}
				$nc(result)->addRange(cha, cha);
				if (cha < 0x00010000 && isSet(options, $RegularExpression::IGNORE_CASE)) {
					cha = $Character::toUpperCase((char16_t)cha);
					$nc(result)->addRange(cha, cha);
					cha = $Character::toLowerCase((char16_t)cha);
					result->addRange(cha, cha);
				}
				return Token::FC_TERMINAL;
			}
		case Token::LOOKAHEAD:
			{}
		case Token::NEGATIVELOOKAHEAD:
			{}
		case Token::LOOKBEHIND:
			{}
		case Token::NEGATIVELOOKBEHIND:
			{
				return Token::FC_CONTINUE;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Token#analyzeHeadCharacter(): Invalid Type: "_s, $$str(this->type)}));
			}
		}
	}
}

bool Token::isShorterThan(Token* tok) {
	$useLocalCurrentObjectStackCache();
	if (tok == nullptr) {
		return false;
	}
	int32_t mylength = 0;
	if (this->type == Token::STRING) {
		mylength = $nc($(this->getString()))->length();
	} else {
		$throwNew($RuntimeException, $$str({"Internal Error: Illegal type: "_s, $$str(this->type)}));
	}
	int32_t otherlength = 0;
	if ($nc(tok)->type == Token::STRING) {
		otherlength = $nc($(tok->getString()))->length();
	} else {
		$throwNew($RuntimeException, $$str({"Internal Error: Illegal type: "_s, $$str(tok->type)}));
	}
	return mylength < otherlength;
}

void Token::findFixedString($Token$FixedStringContainer* container, int32_t options) {
	$useLocalCurrentObjectStackCache();
	{
		$var(Token, prevToken, nullptr)
		int32_t prevOptions = 0;
		switch (this->type) {
		case Token::CONCAT:
			{
				$assign(prevToken, nullptr);
				prevOptions = 0;
				for (int32_t i = 0; i < this->size(); ++i) {
					$nc($(this->getChild(i)))->findFixedString(container, options);
					if (prevToken == nullptr || $nc(prevToken)->isShorterThan($nc(container)->token)) {
						$assign(prevToken, $nc(container)->token);
						prevOptions = container->options;
					}
				}
				$set($nc(container), token, prevToken);
				$nc(container)->options = prevOptions;
				return;
			}
		case Token::UNION:
			{}
		case Token::CLOSURE:
			{}
		case Token::NONGREEDYCLOSURE:
			{}
		case Token::EMPTY:
			{}
		case Token::ANCHOR:
			{}
		case Token::RANGE:
			{}
		case Token::DOT:
			{}
		case Token::NRANGE:
			{}
		case Token::BACKREFERENCE:
			{}
		case Token::LOOKAHEAD:
			{}
		case Token::NEGATIVELOOKAHEAD:
			{}
		case Token::LOOKBEHIND:
			{}
		case Token::NEGATIVELOOKBEHIND:
			{}
		case Token::CONDITION:
			{
				$set($nc(container), token, nullptr);
				return;
			}
		case Token::CHAR:
			{
				$set($nc(container), token, nullptr);
				return;
			}
		case Token::STRING:
			{
				$set($nc(container), token, this);
				$nc(container)->options = options;
				return;
			}
		case Token::INDEPENDENT:
			{}
		case Token::PAREN:
			{
				$nc($(this->getChild(0)))->findFixedString(container, options);
				return;
			}
		case Token::MODIFIERGROUP:
			{
				options |= $nc(($cast($Token$ModifierToken, this)))->getOptions();
				options &= (uint32_t)~$nc(($cast($Token$ModifierToken, this)))->getOptionsMask();
				$nc($(this->getChild(0)))->findFixedString(container, options);
				return;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Token#findFixedString(): Invalid Type: "_s, $$str(this->type)}));
			}
		}
	}
}

bool Token::match(int32_t ch) {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"NFAArrow#match(): Internal error: "_s, $$str(this->type)}));
	$shouldNotReachHere();
}

$RangeToken* Token::getRange($String* name, bool positive) {
	$init(Token);
	$useLocalCurrentObjectStackCache();
	$var($Map, localCat, Token::categories);
	if (localCat == nullptr) {
		$synchronized(Token::lock) {
			$assign(localCat, Token::categories);
			if (localCat == nullptr) {
				$var($Map, tmpCat, $new($HashMap));
				$var($Map, tmpCat2, $new($HashMap));
				$var($TokenArray, ranges, $new($TokenArray, $nc(Token::categoryNames)->length));
				for (int32_t i = 0; i < ranges->length; ++i) {
					ranges->set(i, $(Token::createRange()));
				}
				int32_t type = 0;
				for (int32_t i = 0; i < 0x00010000; ++i) {
					type = $Character::getType((char16_t)i);
					if (type == $Character::START_PUNCTUATION || type == $Character::END_PUNCTUATION) {
						if (i == 171 || i == 8216 || i == 8219 || i == 8220 || i == 8223 || i == 8249) {
							type = Token::CHAR_INIT_QUOTE;
						}
						if (i == 187 || i == 8217 || i == 8221 || i == 8250) {
							type = Token::CHAR_FINAL_QUOTE;
						}
					}
					$nc(ranges->get(type))->addRange(i, i);
					switch (type) {
					case $Character::UPPERCASE_LETTER:
						{}
					case $Character::LOWERCASE_LETTER:
						{}
					case $Character::TITLECASE_LETTER:
						{}
					case $Character::MODIFIER_LETTER:
						{}
					case $Character::OTHER_LETTER:
						{
							type = Token::CHAR_LETTER;
							break;
						}
					case $Character::NON_SPACING_MARK:
						{}
					case $Character::COMBINING_SPACING_MARK:
						{}
					case $Character::ENCLOSING_MARK:
						{
							type = Token::CHAR_MARK;
							break;
						}
					case $Character::DECIMAL_DIGIT_NUMBER:
						{}
					case $Character::LETTER_NUMBER:
						{}
					case $Character::OTHER_NUMBER:
						{
							type = Token::CHAR_NUMBER;
							break;
						}
					case $Character::SPACE_SEPARATOR:
						{}
					case $Character::LINE_SEPARATOR:
						{}
					case $Character::PARAGRAPH_SEPARATOR:
						{
							type = Token::CHAR_SEPARATOR;
							break;
						}
					case $Character::CONTROL:
						{}
					case $Character::FORMAT:
						{}
					case $Character::SURROGATE:
						{}
					case $Character::PRIVATE_USE:
						{}
					case $Character::UNASSIGNED:
						{
							type = Token::CHAR_OTHER;
							break;
						}
					case $Character::CONNECTOR_PUNCTUATION:
						{}
					case $Character::DASH_PUNCTUATION:
						{}
					case $Character::START_PUNCTUATION:
						{}
					case $Character::END_PUNCTUATION:
						{}
					case Token::CHAR_INIT_QUOTE:
						{}
					case Token::CHAR_FINAL_QUOTE:
						{}
					case $Character::OTHER_PUNCTUATION:
						{
							type = Token::CHAR_PUNCTUATION;
							break;
						}
					case $Character::MATH_SYMBOL:
						{}
					case $Character::CURRENCY_SYMBOL:
						{}
					case $Character::MODIFIER_SYMBOL:
						{}
					case $Character::OTHER_SYMBOL:
						{
							type = Token::CHAR_SYMBOL;
							break;
						}
					default:
						{
							$throwNew($RuntimeException, $$str({"org.apache.xerces.utils.regex.Token#getRange(): Unknown Unicode category: "_s, $$str(type)}));
						}
					}
					$nc(ranges->get(type))->addRange(i, i);
				}
				$nc(ranges->get($Character::UNASSIGNED))->addRange(0x00010000, Token::UTF16_MAX);
				for (int32_t i = 0; i < ranges->length; ++i) {
					if ($nc(Token::categoryNames)->get(i) != nullptr) {
						if (i == $Character::UNASSIGNED) {
							$nc(ranges->get(i))->addRange(0x00010000, Token::UTF16_MAX);
						}
						tmpCat->put($nc(Token::categoryNames)->get(i), ranges->get(i));
						tmpCat2->put($nc(Token::categoryNames)->get(i), $(Token::complementRanges(ranges->get(i))));
					}
				}
				$var($StringBuilder, buffer, $new($StringBuilder, 50));
				for (int32_t i = 0; i < $nc(Token::blockNames)->length; ++i) {
					$var(Token, r1, Token::createRange());
					int32_t location = 0;
					if (i < Token::NONBMP_BLOCK_START) {
						location = i * 2;
						int32_t rstart = $nc(Token::blockRanges)->charAt(location);
						int32_t rend = $nc(Token::blockRanges)->charAt(location + 1);
						$nc(r1)->addRange(rstart, rend);
					} else {
						location = (i - Token::NONBMP_BLOCK_START) * 2;
						$nc(r1)->addRange($nc(Token::nonBMPBlockRanges)->get(location), $nc(Token::nonBMPBlockRanges)->get(location + 1));
					}
					$var($String, n, $nc(Token::blockNames)->get(i));
					if ($nc(n)->equals("Specials"_s)) {
						$nc(r1)->addRange(0x0000FFF0, 0x0000FFFD);
					}
					if ($nc(n)->equals("Private Use"_s)) {
						$nc(r1)->addRange(0x000F0000, 0x000FFFFD);
						r1->addRange(0x00100000, 0x0010FFFD);
					}
					tmpCat->put(n, r1);
					tmpCat2->put(n, $(Token::complementRanges(r1)));
					buffer->setLength(0);
					buffer->append("Is"_s);
					if ($nc(n)->indexOf((int32_t)u' ') >= 0) {
						for (int32_t ci = 0; ci < n->length(); ++ci) {
							if (n->charAt(ci) != u' ') {
								buffer->append(n->charAt(ci));
							}
						}
					} else {
						buffer->append(n);
					}
					Token::setAlias(tmpCat, tmpCat2, $(buffer->toString()), n, true);
				}
				Token::setAlias(tmpCat, tmpCat2, "ASSIGNED"_s, "Cn"_s, false);
				Token::setAlias(tmpCat, tmpCat2, "UNASSIGNED"_s, "Cn"_s, true);
				$var(Token, all, Token::createRange());
				$nc(all)->addRange(0, Token::UTF16_MAX);
				tmpCat->put("ALL"_s, all);
				tmpCat2->put("ALL"_s, $(Token::complementRanges(all)));
				Token::registerNonXS("ASSIGNED"_s);
				Token::registerNonXS("UNASSIGNED"_s);
				Token::registerNonXS("ALL"_s);
				$var(Token, isalpha, Token::createRange());
				$nc(isalpha)->mergeRanges(ranges->get($Character::UPPERCASE_LETTER));
				isalpha->mergeRanges(ranges->get($Character::LOWERCASE_LETTER));
				isalpha->mergeRanges(ranges->get($Character::OTHER_LETTER));
				tmpCat->put("IsAlpha"_s, isalpha);
				tmpCat2->put("IsAlpha"_s, $(Token::complementRanges(isalpha)));
				Token::registerNonXS("IsAlpha"_s);
				$var(Token, isalnum, Token::createRange());
				$nc(isalnum)->mergeRanges(isalpha);
				isalnum->mergeRanges(ranges->get($Character::DECIMAL_DIGIT_NUMBER));
				tmpCat->put("IsAlnum"_s, isalnum);
				tmpCat2->put("IsAlnum"_s, $(Token::complementRanges(isalnum)));
				Token::registerNonXS("IsAlnum"_s);
				$var(Token, isspace, Token::createRange());
				$nc(isspace)->mergeRanges(Token::token_spaces);
				isspace->mergeRanges(ranges->get(Token::CHAR_SEPARATOR));
				tmpCat->put("IsSpace"_s, isspace);
				tmpCat2->put("IsSpace"_s, $(Token::complementRanges(isspace)));
				Token::registerNonXS("IsSpace"_s);
				$var(Token, isword, Token::createRange());
				$nc(isword)->mergeRanges(isalnum);
				isword->addRange(u'_', u'_');
				tmpCat->put("IsWord"_s, isword);
				tmpCat2->put("IsWord"_s, $(Token::complementRanges(isword)));
				Token::registerNonXS("IsWord"_s);
				$var(Token, isascii, Token::createRange());
				$nc(isascii)->addRange(0, 127);
				tmpCat->put("IsASCII"_s, isascii);
				tmpCat2->put("IsASCII"_s, $(Token::complementRanges(isascii)));
				Token::registerNonXS("IsASCII"_s);
				$var(Token, isnotgraph, Token::createRange());
				$nc(isnotgraph)->mergeRanges(ranges->get(Token::CHAR_OTHER));
				isnotgraph->addRange(u' ', u' ');
				tmpCat->put("IsGraph"_s, $(Token::complementRanges(isnotgraph)));
				tmpCat2->put("IsGraph"_s, isnotgraph);
				Token::registerNonXS("IsGraph"_s);
				$var(Token, isxdigit, Token::createRange());
				$nc(isxdigit)->addRange(u'0', u'9');
				isxdigit->addRange(u'A', u'F');
				isxdigit->addRange(u'a', u'f');
				tmpCat->put("IsXDigit"_s, $(Token::complementRanges(isxdigit)));
				tmpCat2->put("IsXDigit"_s, isxdigit);
				Token::registerNonXS("IsXDigit"_s);
				Token::setAlias(tmpCat, tmpCat2, "IsDigit"_s, "Nd"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "IsUpper"_s, "Lu"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "IsLower"_s, "Ll"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "IsCntrl"_s, "C"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "IsPrint"_s, "C"_s, false);
				Token::setAlias(tmpCat, tmpCat2, "IsPunct"_s, "P"_s, true);
				Token::registerNonXS("IsDigit"_s);
				Token::registerNonXS("IsUpper"_s);
				Token::registerNonXS("IsLower"_s);
				Token::registerNonXS("IsCntrl"_s);
				Token::registerNonXS("IsPrint"_s);
				Token::registerNonXS("IsPunct"_s);
				Token::setAlias(tmpCat, tmpCat2, "alpha"_s, "IsAlpha"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "alnum"_s, "IsAlnum"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "ascii"_s, "IsASCII"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "cntrl"_s, "IsCntrl"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "digit"_s, "IsDigit"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "graph"_s, "IsGraph"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "lower"_s, "IsLower"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "print"_s, "IsPrint"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "punct"_s, "IsPunct"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "space"_s, "IsSpace"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "upper"_s, "IsUpper"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "word"_s, "IsWord"_s, true);
				Token::setAlias(tmpCat, tmpCat2, "xdigit"_s, "IsXDigit"_s, true);
				Token::registerNonXS("alpha"_s);
				Token::registerNonXS("alnum"_s);
				Token::registerNonXS("ascii"_s);
				Token::registerNonXS("cntrl"_s);
				Token::registerNonXS("digit"_s);
				Token::registerNonXS("graph"_s);
				Token::registerNonXS("lower"_s);
				Token::registerNonXS("print"_s);
				Token::registerNonXS("punct"_s);
				Token::registerNonXS("space"_s);
				Token::registerNonXS("upper"_s);
				Token::registerNonXS("word"_s);
				Token::registerNonXS("xdigit"_s);
				$assignStatic(Token::categories, ($assign(localCat, $Collections::unmodifiableMap(tmpCat))));
				$assignStatic(Token::categories2, $Collections::unmodifiableMap(tmpCat2));
			}
		}
	}
	return positive ? $cast($RangeToken, $nc(localCat)->get(name)) : $cast($RangeToken, $nc(Token::categories2)->get(name));
}

$RangeToken* Token::getRange($String* name, bool positive, bool xs) {
	$init(Token);
	$var($RangeToken, range, Token::getRange(name, positive));
	if (xs && range != nullptr && Token::isRegisterNonXS(name)) {
		$assign(range, nullptr);
	}
	return range;
}

void Token::registerNonXS($String* name) {
	$init(Token);
	$nc(Token::nonxs)->add(name);
}

bool Token::isRegisterNonXS($String* name) {
	$init(Token);
	return $nc(Token::nonxs)->contains(name);
}

void Token::setAlias($Map* tmpCat, $Map* tmpCat2, $String* newName, $String* name, bool positive) {
	$init(Token);
	$useLocalCurrentObjectStackCache();
	$var(Token, t1, $cast(Token, $nc(tmpCat)->get(name)));
	$var(Token, t2, $cast(Token, $nc(tmpCat2)->get(name)));
	if (positive) {
		tmpCat->put(newName, t1);
		tmpCat2->put(newName, t2);
	} else {
		tmpCat2->put(newName, t1);
		tmpCat->put(newName, t2);
	}
}

Token* Token::getGraphemePattern() {
	$load(Token);
	$synchronized(class$) {
		$init(Token);
		$useLocalCurrentObjectStackCache();
		if (Token::token_grapheme != nullptr) {
			return Token::token_grapheme;
		}
		$var(Token, base_char, Token::createRange());
		$nc(base_char)->mergeRanges($(Token::getRange("ASSIGNED"_s, true)));
		base_char->subtractRanges($(Token::getRange("M"_s, true)));
		base_char->subtractRanges($(Token::getRange("C"_s, true)));
		$var(Token, virama, Token::createRange());
		for (int32_t i = 0; i < $nc(Token::viramaString)->length(); ++i) {
			$nc(virama)->addRange(i, i);
		}
		$var(Token, combiner_wo_virama, Token::createRange());
		$nc(combiner_wo_virama)->mergeRanges($(Token::getRange("M"_s, true)));
		combiner_wo_virama->addRange(4448, 4607);
		combiner_wo_virama->addRange(0x0000FF9E, 0x0000FF9F);
		$var(Token, left, Token::createUnion());
		$nc(left)->addChild(base_char);
		left->addChild(Token::token_empty);
		$var(Token, foo, Token::createUnion());
		$nc(foo)->addChild($(Token::createConcat(virama, $(Token::getRange("L"_s, true)))));
		foo->addChild(combiner_wo_virama);
		$assign(foo, Token::createClosure(foo));
		$assign(foo, Token::createConcat(left, foo));
		$assignStatic(Token::token_grapheme, foo);
		return Token::token_grapheme;
	}
}

Token* Token::getCombiningCharacterSequence() {
	$load(Token);
	$synchronized(class$) {
		$init(Token);
		$useLocalCurrentObjectStackCache();
		if (Token::token_ccs != nullptr) {
			return Token::token_ccs;
		}
		$var(Token, foo, Token::createClosure($(Token::getRange("M"_s, true))));
		$assign(foo, Token::createConcat($(Token::getRange("M"_s, false)), foo));
		$assignStatic(Token::token_ccs, foo);
		return Token::token_ccs;
	}
}

void clinit$Token($Class* class$) {
	$assignStatic(Token::blockRanges, $cstr({'\0', 0x7F, 0x80, 0xFF, 0x100, 0x17F, 0x180, 0x24F, 0x250, 0x2AF, 0x2B0, 0x2FF, 0x300, 0x36F, 0x370, 0x3FF, 0x400, 0x4FF, 0x530, 0x58F, 0x590, 0x5FF, 0x600, 0x6FF, 0x700, 0x74F, 0x780, 0x7BF, 0x900, 0x97F, 0x980, 0x9FF, 0xA00, 0xA7F, 0xA80, 0xAFF, 0xB00, 0xB7F, 0xB80, 0xBFF, 0xC00, 0xC7F, 0xC80, 0xCFF, 0xD00, 0xD7F, 0xD80, 0xDFF, 0xE00, 0xE7F, 0xE80, 0xEFF, 0xF00, 0xFFF, 0x1000, 0x109F, 0x10A0, 0x10FF, 0x1100, 0x11FF, 0x1200, 0x137F, 0x13A0, 0x13FF, 0x1400, 0x167F, 0x1680, 0x169F, 0x16A0, 0x16FF, 0x1780, 0x17FF, 0x1800, 0x18AF, 0x1E00, 0x1EFF, 0x1F00, 0x1FFF, 0x2000, 0x206F, 0x2070, 0x209F, 0x20A0, 0x20CF, 0x20D0, 0x20FF, 0x2100, 0x214F, 0x2150, 0x218F, 0x2190, 0x21FF, 0x2200, 0x22FF, 0x2300, 0x23FF, 0x2400, 0x243F, 0x2440, 0x245F, 0x2460, 0x24FF, 0x2500, 0x257F, 0x2580, 0x259F, 0x25A0, 0x25FF, 0x2600, 0x26FF, 0x2700, 0x27BF, 0x2800, 0x28FF, 0x2E80, 0x2EFF, 0x2F00, 0x2FDF, 0x2FF0, 0x2FFF, 0x3000, 0x303F, 0x3040, 0x309F, 0x30A0, 0x30FF, 0x3100, 0x312F, 0x3130, 0x318F, 0x3190, 0x319F, 0x31A0, 0x31BF, 0x3200, 0x32FF, 0x3300, 0x33FF, 0x3400, 0x4DB5, 0x4E00, 0x9FFF, 0xA000, 0xA48F, 0xA490, 0xA4CF, 0xAC00, 0xD7A3, 0xE000, 0xF8FF, 0xF900, 0xFAFF, 0xFB00, 0xFB4F, 0xFB50, 0xFDFF, 0xFE20, 0xFE2F, 0xFE30, 0xFE4F, 0xFE50, 0xFE6F, 0xFE70, 0xFEFE, 0xFEFF, 0xFEFF, 0xFF00, 0xFFEF}));
	$assignStatic(Token::viramaString, u"्্੍્୍்్್്ฺ྄"_s);
	Token::tokens = 0;
	{
		$assignStatic(Token::token_empty, $new(Token, Token::EMPTY));
		$assignStatic(Token::token_linebeginning, Token::createAnchor(u'^'));
		$assignStatic(Token::token_linebeginning2, Token::createAnchor(u'@'));
		$assignStatic(Token::token_lineend, Token::createAnchor(u'$'));
		$assignStatic(Token::token_stringbeginning, Token::createAnchor(u'A'));
		$assignStatic(Token::token_stringend, Token::createAnchor(u'z'));
		$assignStatic(Token::token_stringend2, Token::createAnchor(u'Z'));
		$assignStatic(Token::token_wordedge, Token::createAnchor(u'b'));
		$assignStatic(Token::token_not_wordedge, Token::createAnchor(u'B'));
		$assignStatic(Token::token_wordbeginning, Token::createAnchor(u'<'));
		$assignStatic(Token::token_wordend, Token::createAnchor(u'>'));
		$assignStatic(Token::token_dot, $new(Token, Token::DOT));
		$assignStatic(Token::token_0to9, Token::createRange());
		$nc(Token::token_0to9)->addRange(u'0', u'9');
		$assignStatic(Token::token_wordchars, Token::createRange());
		$nc(Token::token_wordchars)->addRange(u'0', u'9');
		$nc(Token::token_wordchars)->addRange(u'A', u'Z');
		$nc(Token::token_wordchars)->addRange(u'_', u'_');
		$nc(Token::token_wordchars)->addRange(u'a', u'z');
		$assignStatic(Token::token_spaces, Token::createRange());
		$nc(Token::token_spaces)->addRange(u'\t', u'\t');
		$nc(Token::token_spaces)->addRange(u'\n', u'\n');
		$nc(Token::token_spaces)->addRange(u'\f', u'\f');
		$nc(Token::token_spaces)->addRange(u'\r', u'\r');
		$nc(Token::token_spaces)->addRange(u' ', u' ');
		$assignStatic(Token::token_not_0to9, Token::complementRanges(Token::token_0to9));
		$assignStatic(Token::token_not_wordchars, Token::complementRanges(Token::token_wordchars));
		$assignStatic(Token::token_not_spaces, Token::complementRanges(Token::token_spaces));
	}
	$assignStatic(Token::categories, nullptr);
	$assignStatic(Token::categories2, nullptr);
	$assignStatic(Token::lock, $new($Object));
	$assignStatic(Token::categoryNames, $new($StringArray, {
		"Cn"_s,
		"Lu"_s,
		"Ll"_s,
		"Lt"_s,
		"Lm"_s,
		"Lo"_s,
		"Mn"_s,
		"Me"_s,
		"Mc"_s,
		"Nd"_s,
		"Nl"_s,
		"No"_s,
		"Zs"_s,
		"Zl"_s,
		"Zp"_s,
		"Cc"_s,
		"Cf"_s,
		($String*)nullptr,
		"Co"_s,
		"Cs"_s,
		"Pd"_s,
		"Ps"_s,
		"Pe"_s,
		"Pc"_s,
		"Po"_s,
		"Sm"_s,
		"Sc"_s,
		"Sk"_s,
		"So"_s,
		"Pi"_s,
		"Pf"_s,
		"L"_s,
		"M"_s,
		"N"_s,
		"Z"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$assignStatic(Token::blockNames, $new($StringArray, {
		"Basic Latin"_s,
		"Latin-1 Supplement"_s,
		"Latin Extended-A"_s,
		"Latin Extended-B"_s,
		"IPA Extensions"_s,
		"Spacing Modifier Letters"_s,
		"Combining Diacritical Marks"_s,
		"Greek"_s,
		"Cyrillic"_s,
		"Armenian"_s,
		"Hebrew"_s,
		"Arabic"_s,
		"Syriac"_s,
		"Thaana"_s,
		"Devanagari"_s,
		"Bengali"_s,
		"Gurmukhi"_s,
		"Gujarati"_s,
		"Oriya"_s,
		"Tamil"_s,
		"Telugu"_s,
		"Kannada"_s,
		"Malayalam"_s,
		"Sinhala"_s,
		"Thai"_s,
		"Lao"_s,
		"Tibetan"_s,
		"Myanmar"_s,
		"Georgian"_s,
		"Hangul Jamo"_s,
		"Ethiopic"_s,
		"Cherokee"_s,
		"Unified Canadian Aboriginal Syllabics"_s,
		"Ogham"_s,
		"Runic"_s,
		"Khmer"_s,
		"Mongolian"_s,
		"Latin Extended Additional"_s,
		"Greek Extended"_s,
		"General Punctuation"_s,
		"Superscripts and Subscripts"_s,
		"Currency Symbols"_s,
		"Combining Marks for Symbols"_s,
		"Letterlike Symbols"_s,
		"Number Forms"_s,
		"Arrows"_s,
		"Mathematical Operators"_s,
		"Miscellaneous Technical"_s,
		"Control Pictures"_s,
		"Optical Character Recognition"_s,
		"Enclosed Alphanumerics"_s,
		"Box Drawing"_s,
		"Block Elements"_s,
		"Geometric Shapes"_s,
		"Miscellaneous Symbols"_s,
		"Dingbats"_s,
		"Braille Patterns"_s,
		"CJK Radicals Supplement"_s,
		"Kangxi Radicals"_s,
		"Ideographic Description Characters"_s,
		"CJK Symbols and Punctuation"_s,
		"Hiragana"_s,
		"Katakana"_s,
		"Bopomofo"_s,
		"Hangul Compatibility Jamo"_s,
		"Kanbun"_s,
		"Bopomofo Extended"_s,
		"Enclosed CJK Letters and Months"_s,
		"CJK Compatibility"_s,
		"CJK Unified Ideographs Extension A"_s,
		"CJK Unified Ideographs"_s,
		"Yi Syllables"_s,
		"Yi Radicals"_s,
		"Hangul Syllables"_s,
		"Private Use"_s,
		"CJK Compatibility Ideographs"_s,
		"Alphabetic Presentation Forms"_s,
		"Arabic Presentation Forms-A"_s,
		"Combining Half Marks"_s,
		"CJK Compatibility Forms"_s,
		"Small Form Variants"_s,
		"Arabic Presentation Forms-B"_s,
		"Specials"_s,
		"Halfwidth and Fullwidth Forms"_s,
		"Old Italic"_s,
		"Gothic"_s,
		"Deseret"_s,
		"Byzantine Musical Symbols"_s,
		"Musical Symbols"_s,
		"Mathematical Alphanumeric Symbols"_s,
		"CJK Unified Ideographs Extension B"_s,
		"CJK Compatibility Ideographs Supplement"_s,
		"Tags"_s
	}));
	$assignStatic(Token::nonBMPBlockRanges, $new($ints, {
		0x00010300,
		0x0001032F,
		0x00010330,
		0x0001034F,
		0x00010400,
		0x0001044F,
		0x0001D000,
		0x0001D0FF,
		0x0001D100,
		0x0001D1FF,
		0x0001D400,
		0x0001D7FF,
		0x00020000,
		0x0002A6D6,
		0x0002F800,
		0x0002FA1F,
		0x000E0000,
		0x000E007F
	}));
	$assignStatic(Token::nonxs, $Collections::synchronizedSet($$new($HashSet)));
	$assignStatic(Token::token_grapheme, nullptr);
	$assignStatic(Token::token_ccs, nullptr);
}

Token::Token() {
}

$Class* Token::load$($String* name, bool initialize) {
	$loadClass(Token, name, initialize, &_Token_ClassInfo_, clinit$Token, allocate$Token);
	return class$;
}

$Class* Token::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com