#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$UnionToken_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$UnionToken_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$UnionToken
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Token

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
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

class Token$UnionToken : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token {
	$class(Token$UnionToken, 0, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token)
public:
	Token$UnionToken();
	void init$(int32_t type);
	virtual void addChild(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* getChild(int32_t index) override;
	static void lambda$toString$0(::java::lang::StringBuilder* sb, int32_t options, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* children1);
	void readObject(::java::io::ObjectInputStream* in);
	virtual int32_t size() override;
	using ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token::toString;
	virtual $String* toString(int32_t options) override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0xDC59A20A9BE23B3B;
	::java::util::List* children = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Token$UnionToken_h_