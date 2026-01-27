#ifndef _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$XPath_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$XPath_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.identity.Field$XPath
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

class Field$XPath : public ::com::sun::org::apache::xerces::internal::impl::xpath::XPath {
	$class(Field$XPath, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath)
public:
	Field$XPath();
	void init$($String* xpath, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	static $String* fixupXPath($String* xpath);
	static $String* fixupXPath2($String* xpath, int32_t offset, int32_t end);
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_identity_Field$XPath_h_