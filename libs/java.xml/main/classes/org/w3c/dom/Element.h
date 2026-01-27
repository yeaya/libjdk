#ifndef _org_w3c_dom_Element_h_
#define _org_w3c_dom_Element_h_
//$ interface org.w3c.dom.Element
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class NodeList;
			class TypeInfo;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export Element : public ::org::w3c::dom::Node {
	$interface(Element, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual $String* getAttribute($String* name) {return nullptr;}
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) {return nullptr;}
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* name) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() {return nullptr;}
	virtual $String* getTagName() {return nullptr;}
	virtual bool hasAttribute($String* name) {return false;}
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) {return false;}
	virtual void removeAttribute($String* name) {}
	virtual void removeAttributeNS($String* namespaceURI, $String* localName) {}
	virtual ::org::w3c::dom::Attr* removeAttributeNode(::org::w3c::dom::Attr* oldAttr) {return nullptr;}
	virtual void setAttribute($String* name, $String* value) {}
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {}
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) {return nullptr;}
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) {return nullptr;}
	virtual void setIdAttribute($String* name, bool isId) {}
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool isId) {}
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* idAttr, bool isId) {}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_Element_h_