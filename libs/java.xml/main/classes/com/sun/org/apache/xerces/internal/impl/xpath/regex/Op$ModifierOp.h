#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ModifierOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ModifierOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class Op$ModifierOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp {
	$class(Op$ModifierOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp)
public:
	Op$ModifierOp();
	void init$(int32_t type, int32_t v1, int32_t v2);
	virtual int32_t getData() override;
	virtual int32_t getData2() override;
	int32_t v1 = 0;
	int32_t v2 = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ModifierOp_h_