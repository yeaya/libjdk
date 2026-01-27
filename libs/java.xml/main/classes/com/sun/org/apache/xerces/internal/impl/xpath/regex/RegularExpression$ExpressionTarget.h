#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ExpressionTarget_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ExpressionTarget_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class RegularExpression$ExpressionTarget : public ::java::lang::Object {
	$class(RegularExpression$ExpressionTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegularExpression$ExpressionTarget();
	void init$();
	virtual char16_t charAt(int32_t index) {return 0;}
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) {return false;}
	virtual bool regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {return false;}
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ExpressionTarget_h_