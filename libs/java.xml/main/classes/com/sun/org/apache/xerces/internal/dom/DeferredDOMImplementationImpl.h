#ifndef _com_sun_org_apache_xerces_internal_dom_DeferredDOMImplementationImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DeferredDOMImplementationImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DeferredDOMImplementationImpl
//$ extends com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl

#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
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

class DeferredDOMImplementationImpl : public ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl {
	$class(DeferredDOMImplementationImpl, 0, ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl)
public:
	DeferredDOMImplementationImpl();
	using ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl::createDocument;
	void init$();
	static ::org::w3c::dom::DOMImplementation* getDOMImplementation();
	static ::com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl* singleton;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DeferredDOMImplementationImpl_h_