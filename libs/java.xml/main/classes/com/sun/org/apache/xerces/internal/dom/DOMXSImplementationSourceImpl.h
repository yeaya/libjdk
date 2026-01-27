#ifndef _com_sun_org_apache_xerces_internal_dom_DOMXSImplementationSourceImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMXSImplementationSourceImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMXSImplementationSourceImpl
//$ extends com.sun.org.apache.xerces.internal.dom.DOMImplementationSourceImpl

#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationSourceImpl.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class DOMImplementationList;
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

class DOMXSImplementationSourceImpl : public ::com::sun::org::apache::xerces::internal::dom::DOMImplementationSourceImpl {
	$class(DOMXSImplementationSourceImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::DOMImplementationSourceImpl)
public:
	DOMXSImplementationSourceImpl();
	void init$();
	virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation($String* features) override;
	virtual ::org::w3c::dom::DOMImplementationList* getDOMImplementationList($String* features) override;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMXSImplementationSourceImpl_h_