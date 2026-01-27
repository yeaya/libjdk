#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ANCHOR")
#undef ANCHOR
#pragma push_macro("BACKREFERENCE")
#undef BACKREFERENCE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CHAR_FINAL_QUOTE")
#undef CHAR_FINAL_QUOTE
#pragma push_macro("CHAR_INIT_QUOTE")
#undef CHAR_INIT_QUOTE
#pragma push_macro("CHAR_LETTER")
#undef CHAR_LETTER
#pragma push_macro("CHAR_MARK")
#undef CHAR_MARK
#pragma push_macro("CHAR_NUMBER")
#undef CHAR_NUMBER
#pragma push_macro("CHAR_OTHER")
#undef CHAR_OTHER
#pragma push_macro("CHAR_PUNCTUATION")
#undef CHAR_PUNCTUATION
#pragma push_macro("CHAR_SEPARATOR")
#undef CHAR_SEPARATOR
#pragma push_macro("CHAR_SYMBOL")
#undef CHAR_SYMBOL
#pragma push_macro("CLOSURE")
#undef CLOSURE
#pragma push_macro("CONCAT")
#undef CONCAT
#pragma push_macro("CONDITION")
#undef CONDITION
#pragma push_macro("COUNTTOKENS")
#undef COUNTTOKENS
#pragma push_macro("DOT")
#undef DOT
#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("FC_ANY")
#undef FC_ANY
#pragma push_macro("FC_CONTINUE")
#undef FC_CONTINUE
#pragma push_macro("FC_TERMINAL")
#undef FC_TERMINAL
#pragma push_macro("INDEPENDENT")
#undef INDEPENDENT
#pragma push_macro("LOOKAHEAD")
#undef LOOKAHEAD
#pragma push_macro("LOOKBEHIND")
#undef LOOKBEHIND
#pragma push_macro("MODIFIERGROUP")
#undef MODIFIERGROUP
#pragma push_macro("NEGATIVELOOKAHEAD")
#undef NEGATIVELOOKAHEAD
#pragma push_macro("NEGATIVELOOKBEHIND")
#undef NEGATIVELOOKBEHIND
#pragma push_macro("NONBMP_BLOCK_START")
#undef NONBMP_BLOCK_START
#pragma push_macro("NONGREEDYCLOSURE")
#undef NONGREEDYCLOSURE
#pragma push_macro("NRANGE")
#undef NRANGE
#pragma push_macro("PAREN")
#undef PAREN
#pragma push_macro("RANGE")
#undef RANGE
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("UNION")
#undef UNION
#pragma push_macro("UTF16_MAX")
#undef UTF16_MAX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class RangeToken;
									class Token$CharToken;
									class Token$ClosureToken;
									class Token$ConcatToken;
									class Token$ConditionToken;
									class Token$FixedStringContainer;
									class Token$ModifierToken;
									class Token$ParenToken;
									class Token$StringToken;
									class Token$UnionToken;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class Token : public ::java::io::Serializable {
	$class(Token, 0, ::java::io::Serializable)
public:
	Token();
	void init$(int32_t type);
	virtual void addChild(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual void addRange(int32_t start, int32_t end);
	int32_t analyzeFirstCharacter(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* result, int32_t options);
	virtual void compactRanges();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* complementRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$CharToken* createAnchor(int32_t ch);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$StringToken* createBackReference(int32_t refno);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$CharToken* createChar(int32_t ch);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ClosureToken* createClosure(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConcatToken* createConcat(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok1, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok2);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$UnionToken* createConcat();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ConditionToken* createCondition(int32_t refno, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* condition, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* yespat, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* nopat);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* createEmpty();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ParenToken* createLook(int32_t type, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ModifierToken* createModifierGroup(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child, int32_t add, int32_t mask);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ClosureToken* createNGClosure(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* createNRange();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$ParenToken* createParen(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child, int32_t pnumber);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* createRange();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$StringToken* createString($String* str);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$UnionToken* createUnion();
	void findFixedString(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token$FixedStringContainer* container, int32_t options);
	virtual int32_t getChar();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getCombiningCharacterSequence();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getGraphemePattern();
	virtual int32_t getMax();
	int32_t getMaxLength();
	virtual int32_t getMin();
	int32_t getMinLength();
	virtual int32_t getParenNumber();
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getRange($String* name, bool positive);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getRange($String* name, bool positive, bool xs);
	virtual int32_t getReferenceNumber();
	virtual $String* getString();
	virtual void intersectRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static bool isRegisterNonXS($String* name);
	static bool isSet(int32_t options, int32_t flag);
	bool isShorterThan(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual bool match(int32_t ch);
	virtual void mergeRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	static void registerNonXS($String* name);
	static void setAlias(::java::util::Map* tmpCat, ::java::util::Map* tmpCat2, $String* newName, $String* name, bool positive);
	virtual void setMax(int32_t max);
	virtual void setMin(int32_t min);
	virtual int32_t size();
	virtual void sortRanges();
	virtual void subtractRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual $String* toString() override;
	virtual $String* toString(int32_t options);
	static const int64_t serialVersionUID = (int64_t)0x75C0B0B811D26879;
	static const bool COUNTTOKENS = true;
	static int32_t tokens;
	static const int32_t CHAR = 0;
	static const int32_t DOT = 11;
	static const int32_t CONCAT = 1;
	static const int32_t UNION = 2;
	static const int32_t CLOSURE = 3;
	static const int32_t RANGE = 4;
	static const int32_t NRANGE = 5;
	static const int32_t PAREN = 6;
	static const int32_t EMPTY = 7;
	static const int32_t ANCHOR = 8;
	static const int32_t NONGREEDYCLOSURE = 9;
	static const int32_t STRING = 10;
	static const int32_t BACKREFERENCE = 12;
	static const int32_t LOOKAHEAD = 20;
	static const int32_t NEGATIVELOOKAHEAD = 21;
	static const int32_t LOOKBEHIND = 22;
	static const int32_t NEGATIVELOOKBEHIND = 23;
	static const int32_t INDEPENDENT = 24;
	static const int32_t MODIFIERGROUP = 25;
	static const int32_t CONDITION = 26;
	static const int32_t UTF16_MAX = 0x0010FFFF;
	int32_t type = 0;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_dot;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_0to9;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_wordchars;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_not_0to9;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_not_wordchars;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_spaces;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_not_spaces;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_empty;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_linebeginning;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_linebeginning2;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_lineend;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_stringbeginning;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_stringend;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_stringend2;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_wordedge;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_not_wordedge;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_wordbeginning;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_wordend;
	static const int32_t FC_CONTINUE = 0;
	static const int32_t FC_TERMINAL = 1;
	static const int32_t FC_ANY = 2;
	static $volatile(::java::util::Map*) categories;
	static $volatile(::java::util::Map*) categories2;
	static $Object* lock;
	static $StringArray* categoryNames;
	static const int32_t CHAR_INIT_QUOTE = 29;
	static const int32_t CHAR_FINAL_QUOTE = 30;
	static const int32_t CHAR_LETTER = 31;
	static const int32_t CHAR_MARK = 32;
	static const int32_t CHAR_NUMBER = 33;
	static const int32_t CHAR_SEPARATOR = 34;
	static const int32_t CHAR_OTHER = 35;
	static const int32_t CHAR_PUNCTUATION = 36;
	static const int32_t CHAR_SYMBOL = 37;
	static $StringArray* blockNames;
	static $String* blockRanges;
	static $ints* nonBMPBlockRanges;
	static const int32_t NONBMP_BLOCK_START = 84;
	static ::java::util::Set* nonxs;
	static $String* viramaString;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_grapheme;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token_ccs;
};

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANCHOR")
#pragma pop_macro("BACKREFERENCE")
#pragma pop_macro("CHAR")
#pragma pop_macro("CHAR_FINAL_QUOTE")
#pragma pop_macro("CHAR_INIT_QUOTE")
#pragma pop_macro("CHAR_LETTER")
#pragma pop_macro("CHAR_MARK")
#pragma pop_macro("CHAR_NUMBER")
#pragma pop_macro("CHAR_OTHER")
#pragma pop_macro("CHAR_PUNCTUATION")
#pragma pop_macro("CHAR_SEPARATOR")
#pragma pop_macro("CHAR_SYMBOL")
#pragma pop_macro("CLOSURE")
#pragma pop_macro("CONCAT")
#pragma pop_macro("CONDITION")
#pragma pop_macro("COUNTTOKENS")
#pragma pop_macro("DOT")
#pragma pop_macro("EMPTY")
#pragma pop_macro("FC_ANY")
#pragma pop_macro("FC_CONTINUE")
#pragma pop_macro("FC_TERMINAL")
#pragma pop_macro("INDEPENDENT")
#pragma pop_macro("LOOKAHEAD")
#pragma pop_macro("LOOKBEHIND")
#pragma pop_macro("MODIFIERGROUP")
#pragma pop_macro("NEGATIVELOOKAHEAD")
#pragma pop_macro("NEGATIVELOOKBEHIND")
#pragma pop_macro("NONBMP_BLOCK_START")
#pragma pop_macro("NONGREEDYCLOSURE")
#pragma pop_macro("NRANGE")
#pragma pop_macro("PAREN")
#pragma pop_macro("RANGE")
#pragma pop_macro("STRING")
#pragma pop_macro("UNION")
#pragma pop_macro("UTF16_MAX")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token_h_