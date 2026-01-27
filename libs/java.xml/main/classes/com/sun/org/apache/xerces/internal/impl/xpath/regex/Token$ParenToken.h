#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ParenToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ParenToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ParenToken
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

class Token$ParenToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$ParenToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$ParenToken();
	void init$(int32_t type, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok, int32_t paren);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	virtual int32_t getParenNumber() override;
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0xAD97EF12C19CB308;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child = nullptr;
	int32_t parennumber = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ParenToken_h_