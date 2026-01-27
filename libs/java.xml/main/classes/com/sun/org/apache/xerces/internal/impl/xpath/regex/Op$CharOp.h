#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$CharOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$CharOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp
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

class Op$CharOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$CharOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$CharOp();
	void init$(int32_t type, int32_t data);
	virtual int32_t getData() override;
	int32_t charData = 0;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$CharOp_h_