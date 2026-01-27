#ifndef _org_w3c_dom_NamedNodeMap_h_
#define _org_w3c_dom_NamedNodeMap_h_
//$ interface org.w3c.dom.NamedNodeMap
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

class $export NamedNodeMap : public ::java::lang::Object {
	$interface(NamedNodeMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::org::w3c::dom::Node* getNamedItem($String* name) {return nullptr;}
	virtual ::org::w3c::dom::Node* getNamedItemNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::Node* item(int32_t index) {return nullptr;}
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) {return nullptr;}
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* arg) {return nullptr;}
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) {return nullptr;}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_NamedNodeMap_h_