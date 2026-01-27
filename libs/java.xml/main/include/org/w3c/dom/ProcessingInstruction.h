#ifndef _org_w3c_dom_ProcessingInstruction_h_
#define _org_w3c_dom_ProcessingInstruction_h_
//$ interface org.w3c.dom.ProcessingInstruction
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {

class $import ProcessingInstruction : public ::org::w3c::dom::Node {
	$interface(ProcessingInstruction, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual $String* getData() {return nullptr;}
	virtual $String* getTarget() {return nullptr;}
	virtual void setData($String* data) {}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ProcessingInstruction_h_