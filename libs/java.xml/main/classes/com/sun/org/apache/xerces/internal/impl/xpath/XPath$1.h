#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$1_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$1
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath;
								class XPath$Tokens;
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
						namespace util {
							class SymbolTable;
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

class XPath$1 : public ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Scanner {
	$class(XPath$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Scanner)
public:
	XPath$1();
	void init$(::com::sun::org::apache::xerces::internal::impl::xpath::XPath* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens* tokens, int32_t token) override;
	::com::sun::org::apache::xerces::internal::impl::xpath::XPath* this$0 = nullptr;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$1_h_