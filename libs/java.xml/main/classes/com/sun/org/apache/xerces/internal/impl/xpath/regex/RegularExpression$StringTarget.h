#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$StringTarget_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$StringTarget_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$StringTarget
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class RegularExpression$StringTarget : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget {
	$class(RegularExpression$StringTarget, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget)
public:
	RegularExpression$StringTarget();
	void init$($String* target);
	virtual char16_t charAt(int32_t index) override;
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) override;
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) override;
	void resetTarget($String* target);
	$String* target = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$StringTarget_h_