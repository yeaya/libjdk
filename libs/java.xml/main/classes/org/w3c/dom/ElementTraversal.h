#ifndef _org_w3c_dom_ElementTraversal_h_
#define _org_w3c_dom_ElementTraversal_h_
//$ interface org.w3c.dom.ElementTraversal
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export ElementTraversal : public ::java::lang::Object {
	$interface(ElementTraversal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getChildElementCount() {return 0;}
	virtual ::org::w3c::dom::Element* getFirstElementChild() {return nullptr;}
	virtual ::org::w3c::dom::Element* getLastElementChild() {return nullptr;}
	virtual ::org::w3c::dom::Element* getNextElementSibling() {return nullptr;}
	virtual ::org::w3c::dom::Element* getPreviousElementSibling() {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ElementTraversal_h_