#ifndef _com_sun_org_apache_xerces_internal_dom_DOMImplementationListImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMImplementationListImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMImplementationListImpl
//$ extends org.w3c.dom.DOMImplementationList

#include <org/w3c/dom/DOMImplementationList.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class DOMImplementationListImpl : public ::org::w3c::dom::DOMImplementationList {
	$class(DOMImplementationListImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMImplementationList)
public:
	DOMImplementationListImpl();
	void init$();
	void init$(::java::util::List* params);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::DOMImplementation* item(int32_t index) override;
	::java::util::List* fImplementations = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMImplementationListImpl_h_