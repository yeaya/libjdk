#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$CharacterIteratorTarget_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$CharacterIteratorTarget_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharacterIteratorTarget
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>

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

class RegularExpression$CharacterIteratorTarget : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget {
	$class(RegularExpression$CharacterIteratorTarget, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget)
public:
	RegularExpression$CharacterIteratorTarget();
	void init$(::java::text::CharacterIterator* target);
	virtual char16_t charAt(int32_t index) override;
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) override;
	bool regionMatches(int32_t offset, int32_t limit, $String* part, int32_t partlen);
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) override;
	bool regionMatches(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen);
	bool regionMatchesIgnoreCase(int32_t offset, int32_t limit, $String* part, int32_t partlen);
	bool regionMatchesIgnoreCase(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen);
	void resetTarget(::java::text::CharacterIterator* target);
	::java::text::CharacterIterator* target = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$CharacterIteratorTarget_h_