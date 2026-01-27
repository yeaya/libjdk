#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("S_INBRACKETS")
#undef S_INBRACKETS
#pragma push_macro("S_INXBRACKETS")
#undef S_INXBRACKETS
#pragma push_macro("S_NORMAL")
#undef S_NORMAL
#pragma push_macro("T_BACKSOLIDUS")
#undef T_BACKSOLIDUS
#pragma push_macro("T_CARET")
#undef T_CARET
#pragma push_macro("T_CHAR")
#undef T_CHAR
#pragma push_macro("T_COMMENT")
#undef T_COMMENT
#pragma push_macro("T_CONDITION")
#undef T_CONDITION
#pragma push_macro("T_DOLLAR")
#undef T_DOLLAR
#pragma push_macro("T_DOT")
#undef T_DOT
#pragma push_macro("T_EOF")
#undef T_EOF
#pragma push_macro("T_INDEPENDENT")
#undef T_INDEPENDENT
#pragma push_macro("T_LBRACKET")
#undef T_LBRACKET
#pragma push_macro("T_LOOKAHEAD")
#undef T_LOOKAHEAD
#pragma push_macro("T_LOOKBEHIND")
#undef T_LOOKBEHIND
#pragma push_macro("T_LPAREN")
#undef T_LPAREN
#pragma push_macro("T_LPAREN2")
#undef T_LPAREN2
#pragma push_macro("T_MODIFIERS")
#undef T_MODIFIERS
#pragma push_macro("T_NEGATIVELOOKAHEAD")
#undef T_NEGATIVELOOKAHEAD
#pragma push_macro("T_NEGATIVELOOKBEHIND")
#undef T_NEGATIVELOOKBEHIND
#pragma push_macro("T_OR")
#undef T_OR
#pragma push_macro("T_PLUS")
#undef T_PLUS
#pragma push_macro("T_POSIX_CHARCLASS_START")
#undef T_POSIX_CHARCLASS_START
#pragma push_macro("T_QUESTION")
#undef T_QUESTION
#pragma push_macro("T_RPAREN")
#undef T_RPAREN
#pragma push_macro("T_SET_OPERATIONS")
#undef T_SET_OPERATIONS
#pragma push_macro("T_STAR")
#undef T_STAR
#pragma push_macro("T_XMLSCHEMA_CC_SUBTRACTION")
#undef T_XMLSCHEMA_CC_SUBTRACTION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class ParseException;
									class RangeToken;
									class Token;
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
		class ArrayList;
		class Locale;
		class ResourceBundle;
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

class RegexParser : public ::java::lang::Object {
	$class(RegexParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegexParser();
	void init$();
	void init$(::java::util::Locale* locale);
	static void addCaseInsensitiveChar(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* tok, int32_t c);
	static void addCaseInsensitiveCharRange(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* tok, int32_t start, int32_t end);
	virtual bool checkQuestion(int32_t off);
	virtual int32_t decodeEscaped();
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::ParseException* ex($String* key, int32_t loc);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getTokenForShorthand(int32_t ch);
	static int32_t hexChar(int32_t ch);
	bool isSet(int32_t flag);
	void next();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* parse($String* regex, int32_t options);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* parseAtom();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* parseCharacterClass(bool useNrange);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* parseFactor();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* parseRegex();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* parseSetOperations();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* parseTerm();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBackreference();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_A();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_B();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_C();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_I();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_X();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_Z();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_b();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_c();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_g();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_gt();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_i();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_lt();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* processBacksolidus_pP(int32_t c);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_z();
	virtual int32_t processCIinCharacterClass(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* tok, int32_t c);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processCaret();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processCondition();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processDollar();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processIndependent();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processLookahead();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processLookbehind();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processModifiers();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processNegativelookahead();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processNegativelookbehind();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processParen();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processParen2();
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processPlus(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processQuestion(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processStar(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	int32_t read();
	void setContext(int32_t con);
	virtual void setLocale(::java::util::Locale* locale);
	static const int32_t T_CHAR = 0;
	static const int32_t T_EOF = 1;
	static const int32_t T_OR = 2;
	static const int32_t T_STAR = 3;
	static const int32_t T_PLUS = 4;
	static const int32_t T_QUESTION = 5;
	static const int32_t T_LPAREN = 6;
	static const int32_t T_RPAREN = 7;
	static const int32_t T_DOT = 8;
	static const int32_t T_LBRACKET = 9;
	static const int32_t T_BACKSOLIDUS = 10;
	static const int32_t T_CARET = 11;
	static const int32_t T_DOLLAR = 12;
	static const int32_t T_LPAREN2 = 13;
	static const int32_t T_LOOKAHEAD = 14;
	static const int32_t T_NEGATIVELOOKAHEAD = 15;
	static const int32_t T_LOOKBEHIND = 16;
	static const int32_t T_NEGATIVELOOKBEHIND = 17;
	static const int32_t T_INDEPENDENT = 18;
	static const int32_t T_SET_OPERATIONS = 19;
	static const int32_t T_POSIX_CHARCLASS_START = 20;
	static const int32_t T_COMMENT = 21;
	static const int32_t T_MODIFIERS = 22;
	static const int32_t T_CONDITION = 23;
	static const int32_t T_XMLSCHEMA_CC_SUBTRACTION = 24;
	int32_t offset = 0;
	$String* regex = nullptr;
	int32_t regexlen = 0;
	int32_t options = 0;
	::java::util::ResourceBundle* resources = nullptr;
	int32_t chardata = 0;
	int32_t nexttoken = 0;
	static const int32_t S_NORMAL = 0;
	static const int32_t S_INBRACKETS = 1;
	static const int32_t S_INXBRACKETS = 2;
	int32_t context = 0;
	int32_t parenOpened = 0;
	int32_t parennumber = 0;
	bool hasBackReferences = false;
	::java::util::ArrayList* references = nullptr;
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

#pragma pop_macro("S_INBRACKETS")
#pragma pop_macro("S_INXBRACKETS")
#pragma pop_macro("S_NORMAL")
#pragma pop_macro("T_BACKSOLIDUS")
#pragma pop_macro("T_CARET")
#pragma pop_macro("T_CHAR")
#pragma pop_macro("T_COMMENT")
#pragma pop_macro("T_CONDITION")
#pragma pop_macro("T_DOLLAR")
#pragma pop_macro("T_DOT")
#pragma pop_macro("T_EOF")
#pragma pop_macro("T_INDEPENDENT")
#pragma pop_macro("T_LBRACKET")
#pragma pop_macro("T_LOOKAHEAD")
#pragma pop_macro("T_LOOKBEHIND")
#pragma pop_macro("T_LPAREN")
#pragma pop_macro("T_LPAREN2")
#pragma pop_macro("T_MODIFIERS")
#pragma pop_macro("T_NEGATIVELOOKAHEAD")
#pragma pop_macro("T_NEGATIVELOOKBEHIND")
#pragma pop_macro("T_OR")
#pragma pop_macro("T_PLUS")
#pragma pop_macro("T_POSIX_CHARCLASS_START")
#pragma pop_macro("T_QUESTION")
#pragma pop_macro("T_RPAREN")
#pragma pop_macro("T_SET_OPERATIONS")
#pragma pop_macro("T_STAR")
#pragma pop_macro("T_XMLSCHEMA_CC_SUBTRACTION")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser_h_