#ifndef _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter$1_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1
//$ extends com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy

#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLErrorReporter;
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
							namespace parser {
								class XMLErrorHandler;
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

class XMLErrorReporter$1 : public ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy {
	$class(XMLErrorReporter$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy)
public:
	XMLErrorReporter$1();
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* this$0);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* this$0 = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLErrorReporter$1_h_