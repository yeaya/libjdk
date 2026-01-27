#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConcatToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConcatToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken
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

class Token$ConcatToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$ConcatToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$ConcatToken();
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* t1, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* t2);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0x78FA25A6724B344D;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child2 = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ConcatToken_h_