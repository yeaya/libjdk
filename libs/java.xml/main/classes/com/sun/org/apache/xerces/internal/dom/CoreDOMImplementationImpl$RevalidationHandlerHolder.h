#ifndef _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$RevalidationHandlerHolder_h_
#define _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$RevalidationHandlerHolder_h_
//$ class com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class RevalidationHandler;
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
						namespace dom {

class CoreDOMImplementationImpl$RevalidationHandlerHolder : public ::java::lang::Object {
	$class(CoreDOMImplementationImpl$RevalidationHandlerHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CoreDOMImplementationImpl$RevalidationHandlerHolder();
	void init$(::com::sun::org::apache::xerces::internal::impl::RevalidationHandler* handler);
	::com::sun::org::apache::xerces::internal::impl::RevalidationHandler* handler = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$RevalidationHandlerHolder_h_