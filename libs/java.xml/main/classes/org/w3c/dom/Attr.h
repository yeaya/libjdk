#ifndef _org_w3c_dom_Attr_h_
#define _org_w3c_dom_Attr_h_
//$ interface org.w3c.dom.Attr
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
			class TypeInfo;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export Attr : public ::org::w3c::dom::Node {
	$interface(Attr, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual $String* getName() {return nullptr;}
	virtual ::org::w3c::dom::Element* getOwnerElement() {return nullptr;}
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() {return nullptr;}
	virtual bool getSpecified() {return false;}
	virtual $String* getValue() {return nullptr;}
	virtual bool isId() {return false;}
	virtual void setValue($String* value) {}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_Attr_h_