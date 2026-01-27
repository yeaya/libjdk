#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ModifierToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ModifierToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken
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

class Token$ModifierToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$ModifierToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$ModifierToken();
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok, int32_t add, int32_t mask);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	virtual int32_t getOptions();
	virtual int32_t getOptionsMask();
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0x8182A94A32FAF79C;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child = nullptr;
	int32_t add = 0;
	int32_t mask = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ModifierToken_h_