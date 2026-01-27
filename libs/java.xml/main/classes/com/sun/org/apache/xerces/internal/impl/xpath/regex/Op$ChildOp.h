#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ChildOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ChildOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp
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

class Op$ChildOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$ChildOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$ChildOp();
	void init$(int32_t type);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* getChild() override;
	virtual void setChild(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* child);
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* child = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$ChildOp_h_