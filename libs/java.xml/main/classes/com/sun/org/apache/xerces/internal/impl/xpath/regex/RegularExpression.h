#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CARRIAGE_RETURN")
#undef CARRIAGE_RETURN
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("EXTENDED_COMMENT")
#undef EXTENDED_COMMENT
#pragma push_macro("IGNORE_CASE")
#undef IGNORE_CASE
#pragma push_macro("LINE_FEED")
#undef LINE_FEED
#pragma push_macro("LINE_SEPARATOR")
#undef LINE_SEPARATOR
#pragma push_macro("MULTIPLE_LINES")
#undef MULTIPLE_LINES
#pragma push_macro("PARAGRAPH_SEPARATOR")
#undef PARAGRAPH_SEPARATOR
#pragma push_macro("PROHIBIT_FIXED_STRING_OPTIMIZATION")
#undef PROHIBIT_FIXED_STRING_OPTIMIZATION
#pragma push_macro("PROHIBIT_HEAD_CHARACTER_OPTIMIZATION")
#undef PROHIBIT_HEAD_CHARACTER_OPTIMIZATION
#pragma push_macro("SINGLE_LINE")
#undef SINGLE_LINE
#pragma push_macro("SPECIAL_COMMA")
#undef SPECIAL_COMMA
#pragma push_macro("UNICODE_WORD_BOUNDARY")
#undef UNICODE_WORD_BOUNDARY
#pragma push_macro("USE_UNICODE_CATEGORY")
#undef USE_UNICODE_CATEGORY
#pragma push_macro("WT_IGNORE")
#undef WT_IGNORE
#pragma push_macro("WT_LETTER")
#undef WT_LETTER
#pragma push_macro("WT_OTHER")
#undef WT_OTHER
#pragma push_macro("XMLSCHEMA_MODE")
#undef XMLSCHEMA_MODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class BMPattern;
									class Match;
									class Op;
									class RangeToken;
									class RegularExpression$Context;
									class RegularExpression$ExpressionTarget;
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
	namespace text {
		class CharacterIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
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

class RegularExpression : public ::java::io::Serializable {
	$class(RegularExpression, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	RegularExpression();
	void init$($String* regex);
	void init$($String* regex, $String* options);
	void init$($String* regex, $String* options, ::java::util::Locale* locale);
	void init$($String* regex, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok, int32_t parens, bool hasBackReferences, int32_t options);
	void compile(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* compile(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* next, bool reverse);
	virtual bool equals(Object$* obj) override;
	virtual bool equals($String* pattern, int32_t options);
	virtual int32_t getNumberOfGroups();
	virtual $String* getOptions();
	virtual $String* getPattern();
	static int32_t getPreviousWordType(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget* target, int32_t begin, int32_t end, int32_t offset, int32_t opts);
	static int32_t getWordType(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget* target, int32_t begin, int32_t end, int32_t offset, int32_t opts);
	static int32_t getWordType0(char16_t ch, int32_t opts);
	virtual int32_t hashCode() override;
	static bool isEOLChar(int32_t ch);
	static bool isSet(int32_t options, int32_t flag);
	static bool isWordChar(int32_t ch);
	int32_t match(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$Context* con, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* op, int32_t offset, int32_t dx, int32_t opts);
	virtual bool matchAnchor(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget* target, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* op, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$Context* con, int32_t offset, int32_t opts);
	bool matchChar(int32_t ch, int32_t other, bool ignoreCase);
	static bool matchIgnoreCase(int32_t chardata, int32_t ch);
	virtual bool matches($chars* target);
	virtual bool matches($chars* target, int32_t start, int32_t end);
	virtual bool matches($chars* target, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match);
	virtual bool matches($chars* target, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match);
	virtual bool matches($String* target);
	virtual bool matches($String* target, int32_t start, int32_t end);
	virtual bool matches($String* target, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match);
	virtual bool matches($String* target, int32_t start, int32_t end, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match);
	virtual bool matches(::java::text::CharacterIterator* target);
	virtual bool matches(::java::text::CharacterIterator* target, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match);
	virtual void prepare();
	virtual void setPattern($String* newPattern);
	virtual void setPattern($String* newPattern, ::java::util::Locale* locale);
	void setPattern($String* newPattern, int32_t options, ::java::util::Locale* locale);
	virtual void setPattern($String* newPattern, $String* options);
	virtual void setPattern($String* newPattern, $String* options, ::java::util::Locale* locale);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x56A1D011FD4E4BC1;
	static const bool DEBUG = false;
	$String* regex = nullptr;
	int32_t options = 0;
	int32_t nofparen = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tokentree = nullptr;
	bool hasBackReferences = false;
	int32_t minlength = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* operations = nullptr;
	int32_t numberOfClosures = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$Context* context = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* firstChar = nullptr;
	$String* fixedString = nullptr;
	int32_t fixedStringOptions = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::BMPattern* fixedStringTable = nullptr;
	bool fixedStringOnly = false;
	static const int32_t IGNORE_CASE = 2; // 1 << 1
	static const int32_t SINGLE_LINE = 4; // 1 << 2
	static const int32_t MULTIPLE_LINES = 8; // 1 << 3
	static const int32_t EXTENDED_COMMENT = 16; // 1 << 4
	static const int32_t USE_UNICODE_CATEGORY = 32; // 1 << 5
	static const int32_t UNICODE_WORD_BOUNDARY = 64; // 1 << 6
	static const int32_t PROHIBIT_HEAD_CHARACTER_OPTIMIZATION = 128; // 1 << 7
	static const int32_t PROHIBIT_FIXED_STRING_OPTIMIZATION = 256; // 1 << 8
	static const int32_t XMLSCHEMA_MODE = 512; // 1 << 9
	static const int32_t SPECIAL_COMMA = 1024; // 1 << 10
	static const int32_t WT_IGNORE = 0;
	static const int32_t WT_LETTER = 1;
	static const int32_t WT_OTHER = 2;
	static const int32_t LINE_FEED = 10;
	static const int32_t CARRIAGE_RETURN = 13;
	static const int32_t LINE_SEPARATOR = 8232;
	static const int32_t PARAGRAPH_SEPARATOR = 8233;
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

#pragma pop_macro("CARRIAGE_RETURN")
#pragma pop_macro("DEBUG")
#pragma pop_macro("EXTENDED_COMMENT")
#pragma pop_macro("IGNORE_CASE")
#pragma pop_macro("LINE_FEED")
#pragma pop_macro("LINE_SEPARATOR")
#pragma pop_macro("MULTIPLE_LINES")
#pragma pop_macro("PARAGRAPH_SEPARATOR")
#pragma pop_macro("PROHIBIT_FIXED_STRING_OPTIMIZATION")
#pragma pop_macro("PROHIBIT_HEAD_CHARACTER_OPTIMIZATION")
#pragma pop_macro("SINGLE_LINE")
#pragma pop_macro("SPECIAL_COMMA")
#pragma pop_macro("UNICODE_WORD_BOUNDARY")
#pragma pop_macro("USE_UNICODE_CATEGORY")
#pragma pop_macro("WT_IGNORE")
#pragma pop_macro("WT_LETTER")
#pragma pop_macro("WT_OTHER")
#pragma pop_macro("XMLSCHEMA_MODE")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression_h_