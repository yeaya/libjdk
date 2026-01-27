#ifndef _com_sun_org_apache_xerces_internal_util_NamespaceContextWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_NamespaceContextWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.NamespaceContextWrapper
//$ extends javax.xml.namespace.NamespaceContext

#include <javax/xml/namespace/NamespaceContext.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
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
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class NamespaceContextWrapper : public ::javax::xml::namespace$::NamespaceContext {
	$class(NamespaceContextWrapper, $NO_CLASS_INIT, ::javax::xml::namespace$::NamespaceContext)
public:
	NamespaceContextWrapper();
	void init$(::com::sun::org::apache::xerces::internal::util::NamespaceSupport* namespaceContext);
	virtual ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* getNamespaceContext();
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual $String* getPrefix($String* namespaceURI) override;
	virtual ::java::util::Iterator* getPrefixes($String* namespaceURI) override;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_NamespaceContextWrapper_h_