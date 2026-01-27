#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$RangeOp_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$RangeOp_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp
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
									class RangeToken;
									class Token;
								}
							}
						}
					}
				}
			}
		}
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

class Op$RangeOp : public ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op {
	$class(Op$RangeOp, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op)
public:
	Op$RangeOp();
	void init$(int32_t type, ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken* getToken() override;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token* tok = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Op$RangeOp_h_