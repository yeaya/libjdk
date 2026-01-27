#ifndef _org_w3c_dom_NodeList_h_
#define _org_w3c_dom_NodeList_h_
//$ interface org.w3c.dom.NodeList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export NodeList : public ::java::lang::Object {
	$interface(NodeList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::org::w3c::dom::Node* item(int32_t index) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_NodeList_h_