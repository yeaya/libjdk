#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConditionToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConditionToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConditionToken
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

class Token$ConditionToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$ConditionToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$ConditionToken();
	void init$(int32_t refno, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* cond, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* yespat, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* nopat);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0x3C6BAE73F94A736B;
	int32_t refNumber = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* condition = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* yes = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* no = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConditionToken_h_