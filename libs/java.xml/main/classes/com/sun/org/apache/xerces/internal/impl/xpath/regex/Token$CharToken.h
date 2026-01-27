#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$CharToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$CharToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken
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

class Token$CharToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$CharToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$CharToken();
	void init$(int32_t type, int32_t ch);
	virtual int32_t getChar() override;
	virtual bool match(int32_t ch) override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0xC3046827CB8156E3;
	int32_t chardata = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$CharToken_h_