#ifndef _com_sun_org_apache_xerces_internal_dom_DOMImplementationSourceImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMImplementationSourceImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMImplementationSourceImpl
//$ extends org.w3c.dom.DOMImplementationSource

#include <org/w3c/dom/DOMImplementationSource.h>

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

class DOMImplementationSourceImpl : public ::org::w3c::dom::DOMImplementationSource {
	$class(DOMImplementationSourceImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMImplementationSource)
public:
	DOMImplementationSourceImpl();
	void init$();
	virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation($String* features) override;
	virtual ::org::w3c::dom::DOMImplementationList* getDOMImplementationList($String* features) override;
	virtual bool testImpl(::org::w3c::dom::DOMImplementation* impl, $String* features);
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMImplementationSourceImpl_h_