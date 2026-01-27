#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ConditionOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ConditionOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp
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

class Op$ConditionOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$ConditionOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$ConditionOp();
	void init$(int32_t type, int32_t refno, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* conditionflow, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* yesflow, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* noflow);
	int32_t refNumber = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* condition = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* yes = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* no = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ConditionOp_h_