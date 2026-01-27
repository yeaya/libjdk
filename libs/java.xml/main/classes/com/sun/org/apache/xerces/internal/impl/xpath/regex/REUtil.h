#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_REUtil_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_REUtil_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.REUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CACHESIZE")
#undef CACHESIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class RegularExpression;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class $export REUtil : public ::java::lang::Object {
	$class(REUtil, 0, ::java::lang::Object)
public:
	REUtil();
	void init$();
	static int32_t composeFromSurrogates(int32_t high, int32_t low);
	static $String* createOptionString(int32_t options);
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression* createRegex($String* pattern, $String* options);
	static $String* decomposeToSurrogates(int32_t ch);
	static void dumpString($String* v);
	static int32_t getOptionValue(int32_t ch);
	static bool isHighSurrogate(int32_t ch);
	static bool isLowSurrogate(int32_t ch);
	static void main($StringArray* argv);
	static bool matches($String* regex, $String* target);
	static bool matches($String* regex, $String* options, $String* target);
	static int32_t parseOptions($String* opts);
	static $String* quoteMeta($String* literal);
	static $String* stripExtendedComment($String* regex);
	static $String* substring(::java::text::CharacterIterator* iterator, int32_t begin, int32_t end);
	static const int32_t CACHESIZE = 20;
	static $Array<::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression>* regexCache;
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

#pragma pop_macro("CACHESIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_REUtil_h_