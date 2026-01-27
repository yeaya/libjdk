#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$StringOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$StringOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Op

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class Op$StringOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$StringOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$StringOp();
	void init$(int32_t type, $String* literal);
	virtual $String* getString() override;
	$String* string = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$StringOp_h_