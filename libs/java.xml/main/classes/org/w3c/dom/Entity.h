#ifndef _org_w3c_dom_Entity_h_
#define _org_w3c_dom_Entity_h_
//$ interface org.w3c.dom.Entity
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {

class $export Entity : public ::org::w3c::dom::Node {
	$interface(Entity, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual $String* getInputEncoding() {return nullptr;}
	virtual $String* getNotationName() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
	virtual $String* getXmlEncoding() {return nullptr;}
	virtual $String* getXmlVersion() {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_Entity_h_