#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser$ReferencePosition_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser$ReferencePosition_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser$ReferencePosition
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

class RegexParser$ReferencePosition : public ::java::lang::Object {
	$class(RegexParser$ReferencePosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegexParser$ReferencePosition();
	void init$(int32_t n, int32_t pos);
	int32_t refNumber = 0;
	int32_t position = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegexParser$ReferencePosition_h_