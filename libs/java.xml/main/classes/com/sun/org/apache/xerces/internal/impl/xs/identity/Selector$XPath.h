#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$XPath_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$XPath_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$XPath
//$ extends com.sun.org.apache.xerces.internal.impl.xpath.XPath

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>

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
						namespace xni {
							class NamespaceContext;
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
							namespace xs {
								namespace identity {

class Selector$XPath : public ::com::sun::org::apache::xerces::internal::impl::xpath::XPath {
	$class(Selector$XPath, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath)
public:
	Selector$XPath();
	void init$($String* xpath, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	static $String* normalize($String* xpath);
};

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Selector$XPath_h_