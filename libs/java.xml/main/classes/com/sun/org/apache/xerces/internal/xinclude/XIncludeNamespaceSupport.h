#ifndef _com_sun_org_apache_xerces_internal_xinclude_XIncludeNamespaceSupport_h_
#define _com_sun_org_apache_xerces_internal_xinclude_XIncludeNamespaceSupport_h_
//$ class com.sun.org.apache.xerces.internal.xinclude.XIncludeNamespaceSupport
//$ extends com.sun.org.apache.xerces.internal.xinclude.MultipleScopeNamespaceSupport

#include <com/sun/org/apache/xerces/internal/xinclude/MultipleScopeNamespaceSupport.h>
#include <java/lang/Array.h>

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
						namespace xinclude {

class XIncludeNamespaceSupport : public ::com::sun::org::apache::xerces::internal::xinclude::MultipleScopeNamespaceSupport {
	$class(XIncludeNamespaceSupport, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xinclude::MultipleScopeNamespaceSupport)
public:
	XIncludeNamespaceSupport();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	virtual $String* getURIFromIncludeParent($String* prefix);
	virtual void pushContext() override;
	virtual void setContextInvalid();
	$booleans* fValidContext = nullptr;
};

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xinclude_XIncludeNamespaceSupport_h_