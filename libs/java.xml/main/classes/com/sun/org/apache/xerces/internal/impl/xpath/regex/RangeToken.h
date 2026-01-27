#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RangeToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RangeToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RangeToken
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Token

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/lang/Array.h>

#pragma push_macro("MAPSIZE")
#undef MAPSIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class RangeToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(RangeToken, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	RangeToken();
	void init$(int32_t type);
	virtual void addRange(int32_t start, int32_t end) override;
	virtual void compactRanges() override;
	static ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* complementRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token);
	void createMap();
	void dumpRanges();
	static $String* escapeCharInCharClass(int32_t ch);
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getCaseInsensitiveToken();
	virtual void intersectRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token) override;
	bool isCompacted();
	bool isSorted();
	virtual bool match(int32_t ch) override;
	virtual void mergeRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token) override;
	void setCompacted();
	void setSorted(bool sort);
	virtual void sortRanges() override;
	virtual void subtractRanges(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* token) override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	static const int64_t serialVersionUID = (int64_t)0x2D35353339383331;
	$ints* ranges = nullptr;
	bool sorted = false;
	bool compacted = false;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* icaseCache = nullptr;
	$ints* map = nullptr;
	int32_t nonMapIndex = 0;
	static const int32_t MAPSIZE = 256;
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

#pragma pop_macro("MAPSIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RangeToken_h_