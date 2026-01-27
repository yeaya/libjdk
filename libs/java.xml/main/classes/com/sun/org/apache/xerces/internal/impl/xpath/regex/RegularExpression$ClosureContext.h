#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ClosureContext_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ClosureContext_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ClosureContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class RegularExpression$ClosureContext : public ::java::lang::Object {
	$class(RegularExpression$ClosureContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegularExpression$ClosureContext();
	void init$();
	void addOffset(int32_t offset);
	bool contains(int32_t offset);
	$ints* expandOffsets();
	void reset();
	$ints* offsets = nullptr;
	int32_t currentIndex = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$ClosureContext_h_