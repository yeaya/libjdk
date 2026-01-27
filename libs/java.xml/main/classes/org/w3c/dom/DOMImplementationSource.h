#ifndef _org_w3c_dom_DOMImplementationSource_h_
#define _org_w3c_dom_DOMImplementationSource_h_
//$ interface org.w3c.dom.DOMImplementationSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class DOMImplementationList;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export DOMImplementationSource : public ::java::lang::Object {
	$interface(DOMImplementationSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation($String* features) {return nullptr;}
	virtual ::org::w3c::dom::DOMImplementationList* getDOMImplementationList($String* features) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMImplementationSource_h_