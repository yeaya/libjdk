#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$UnionOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$UnionOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.regex.Op

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>

namespace java {
	namespace util {
		class ArrayList;
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

class Op$UnionOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$UnionOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$UnionOp();
	void init$(int32_t type, int32_t size);
	virtual void addElement(::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* op);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op* elementAt(int32_t index) override;
	virtual int32_t size() override;
	::java::util::ArrayList* branches = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$UnionOp_h_