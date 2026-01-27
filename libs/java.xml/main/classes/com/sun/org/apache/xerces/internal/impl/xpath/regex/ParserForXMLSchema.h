#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParserForXMLSchema_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParserForXMLSchema_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.ParserForXMLSchema
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>
#include <java/lang/Array.h>

#pragma push_macro("DIGITS_INTS")
#undef DIGITS_INTS
#pragma push_macro("LETTERS")
#undef LETTERS
#pragma push_macro("LETTERS_INT")
#undef LETTERS_INT
#pragma push_macro("NAMECHARS")
#undef NAMECHARS
#pragma push_macro("SPACES")
#undef SPACES

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
		class Locale;
		class Map;
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

class ParserForXMLSchema : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser {
	$class(ParserForXMLSchema, 0, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegexParser)
public:
	ParserForXMLSchema();
	void init$();
	void init$(::java::util::Locale* locale);
	virtual bool checkQuestion(int32_t off) override;
	virtual int32_t decodeEscaped() override;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getRange($String* name, bool positive);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getTokenForShorthand(int32_t ch) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* parseCharacterClass(bool useNrange) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* parseSetOperations() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBackreference() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_A() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_B() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_C() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_I() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_X() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_Z() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_b() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_c() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_g() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_gt() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_i() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_lt() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processBacksolidus_z() override;
	virtual int32_t processCIinCharacterClass(::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* tok, int32_t c) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processCaret() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processCondition() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processDollar() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processIndependent() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processLookahead() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processLookbehind() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processModifiers() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processNegativelookahead() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processNegativelookbehind() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processParen() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processParen2() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processPlus(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processQuestion(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* processStar(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok) override;
	static void setupRange(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* range, $String* src);
	static void setupRange(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* range, $ints* src);
	static ::java::util::Map* ranges;
	static ::java::util::Map* ranges2;
	static $String* SPACES;
	static $String* NAMECHARS;
	static $String* LETTERS;
	static $ints* LETTERS_INT;
	static $ints* DIGITS_INTS;
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

#pragma pop_macro("DIGITS_INTS")
#pragma pop_macro("LETTERS")
#pragma pop_macro("LETTERS_INT")
#pragma pop_macro("NAMECHARS")
#pragma pop_macro("SPACES")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_ParserForXMLSchema_h_