#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$StringToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$StringToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$StringToken
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Token

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class Token$StringToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$StringToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$StringToken();
	void init$(int32_t type, $String* str, int32_t n);
	virtual int32_t getReferenceNumber() override;
	virtual $String* getString() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0xBFF679B6528D2414;
	$String* string = nullptr;
	int32_t refNumber = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$StringToken_h_