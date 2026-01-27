#ifndef _org_w3c_dom_DOMImplementationList_h_
#define _org_w3c_dom_DOMImplementationList_h_
//$ interface org.w3c.dom.DOMImplementationList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import DOMImplementationList : public ::java::lang::Object {
	$interface(DOMImplementationList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::org::w3c::dom::DOMImplementation* item(int32_t index) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_DOMImplementationList_h_