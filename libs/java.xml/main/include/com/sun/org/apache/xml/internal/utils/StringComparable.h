#ifndef _com_sun_org_apache_xml_internal_utils_StringComparable_h_
#define _com_sun_org_apache_xml_internal_utils_StringComparable_h_
//$ class com.sun.org.apache.xml.internal.utils.StringComparable
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

#pragma push_macro("LOWER_CASE")
#undef LOWER_CASE
#pragma push_macro("UNKNOWN_CASE")
#undef UNKNOWN_CASE
#pragma push_macro("UPPER_CASE")
#undef UPPER_CASE

namespace java {
	namespace text {
		class Collator;
		class RuleBasedCollator;
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
				namespace xml {
					namespace internal {
						namespace utils {

class $import StringComparable : public ::java::lang::Comparable {
	$class(StringComparable, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	StringComparable();
	void init$($String* text, ::java::util::Locale* locale, ::java::text::Collator* collator, $String* caseOrder);
	virtual int32_t compareTo(::com::sun::org::apache::xml::internal::utils::StringComparable* o);
	virtual int32_t compareTo(Object$* o) override;
	int32_t getCaseDiff($String* text, $String* pattern);
	static ::java::lang::Comparable* getComparator($String* text, ::java::util::Locale* locale, ::java::text::Collator* collator, $String* caseOrder);
	int32_t getElement(int32_t maxStrengthElement);
	$ints* getFirstCaseDiff($String* text, $String* pattern, ::java::util::Locale* locale);
	static int32_t getMask(int32_t strength);
	virtual $String* toString() override;
	static const int32_t UNKNOWN_CASE = (-1);
	static const int32_t UPPER_CASE = 1;
	static const int32_t LOWER_CASE = 2;
	$String* m_text = nullptr;
	::java::util::Locale* m_locale = nullptr;
	::java::text::RuleBasedCollator* m_collator = nullptr;
	$String* m_caseOrder = nullptr;
	int32_t m_mask = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOWER_CASE")
#pragma pop_macro("UNKNOWN_CASE")
#pragma pop_macro("UPPER_CASE")

#endif // _com_sun_org_apache_xml_internal_utils_StringComparable_h_