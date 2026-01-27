#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ClosureToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ClosureToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken
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

class Token$ClosureToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$ClosureToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$ClosureToken();
	void init$(int32_t type, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	virtual int32_t getMax() override;
	virtual int32_t getMin() override;
	virtual void setMax(int32_t max) override;
	virtual void setMin(int32_t min) override;
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0x122A670924C7E68C;
	int32_t min = 0;
	int32_t max = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* child = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$ClosureToken_h_