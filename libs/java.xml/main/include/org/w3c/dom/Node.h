#ifndef _org_w3c_dom_Node_h_
#define _org_w3c_dom_Node_h_
//$ interface org.w3c.dom.Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTRIBUTE_NODE")
#undef ATTRIBUTE_NODE
#pragma push_macro("CDATA_SECTION_NODE")
#undef CDATA_SECTION_NODE
#pragma push_macro("COMMENT_NODE")
#undef COMMENT_NODE
#pragma push_macro("DOCUMENT_FRAGMENT_NODE")
#undef DOCUMENT_FRAGMENT_NODE
#pragma push_macro("DOCUMENT_NODE")
#undef DOCUMENT_NODE
#pragma push_macro("DOCUMENT_POSITION_CONTAINED_BY")
#undef DOCUMENT_POSITION_CONTAINED_BY
#pragma push_macro("DOCUMENT_POSITION_CONTAINS")
#undef DOCUMENT_POSITION_CONTAINS
#pragma push_macro("DOCUMENT_POSITION_DISCONNECTED")
#undef DOCUMENT_POSITION_DISCONNECTED
#pragma push_macro("DOCUMENT_POSITION_FOLLOWING")
#undef DOCUMENT_POSITION_FOLLOWING
#pragma push_macro("DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC")
#undef DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC
#pragma push_macro("DOCUMENT_POSITION_PRECEDING")
#undef DOCUMENT_POSITION_PRECEDING
#pragma push_macro("DOCUMENT_TYPE_NODE")
#undef DOCUMENT_TYPE_NODE
#pragma push_macro("ELEMENT_NODE")
#undef ELEMENT_NODE
#pragma push_macro("ENTITY_NODE")
#undef ENTITY_NODE
#pragma push_macro("ENTITY_REFERENCE_NODE")
#undef ENTITY_REFERENCE_NODE
#pragma push_macro("NOTATION_NODE")
#undef NOTATION_NODE
#pragma push_macro("PROCESSING_INSTRUCTION_NODE")
#undef PROCESSING_INSTRUCTION_NODE
#pragma push_macro("TEXT_NODE")
#undef TEXT_NODE

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class NamedNodeMap;
			class NodeList;
			class UserDataHandler;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import Node : public ::java::lang::Object {
	$interface(Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) {return nullptr;}
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) {return nullptr;}
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) {return 0;}
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() {return nullptr;}
	virtual $String* getBaseURI() {return nullptr;}
	virtual ::org::w3c::dom::NodeList* getChildNodes() {return nullptr;}
	virtual $Object* getFeature($String* feature, $String* version) {return nullptr;}
	virtual ::org::w3c::dom::Node* getFirstChild() {return nullptr;}
	virtual ::org::w3c::dom::Node* getLastChild() {return nullptr;}
	virtual $String* getLocalName() {return nullptr;}
	virtual $String* getNamespaceURI() {return nullptr;}
	virtual ::org::w3c::dom::Node* getNextSibling() {return nullptr;}
	virtual $String* getNodeName() {return nullptr;}
	virtual int16_t getNodeType() {return 0;}
	virtual $String* getNodeValue() {return nullptr;}
	virtual ::org::w3c::dom::Document* getOwnerDocument() {return nullptr;}
	virtual ::org::w3c::dom::Node* getParentNode() {return nullptr;}
	virtual $String* getPrefix() {return nullptr;}
	virtual ::org::w3c::dom::Node* getPreviousSibling() {return nullptr;}
	virtual $String* getTextContent() {return nullptr;}
	virtual $Object* getUserData($String* key) {return nullptr;}
	virtual bool hasAttributes() {return false;}
	virtual bool hasChildNodes() {return false;}
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) {return nullptr;}
	virtual bool isDefaultNamespace($String* namespaceURI) {return false;}
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) {return false;}
	virtual bool isSameNode(::org::w3c::dom::Node* other) {return false;}
	virtual bool isSupported($String* feature, $String* version) {return false;}
	virtual $String* lookupNamespaceURI($String* prefix) {return nullptr;}
	virtual $String* lookupPrefix($String* namespaceURI) {return nullptr;}
	virtual void normalize() {}
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) {return nullptr;}
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) {return nullptr;}
	virtual void setNodeValue($String* nodeValue) {}
	virtual void setPrefix($String* prefix) {}
	virtual void setTextContent($String* textContent) {}
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) {return nullptr;}
	static const int16_t ELEMENT_NODE = 1;
	static const int16_t ATTRIBUTE_NODE = 2;
	static const int16_t TEXT_NODE = 3;
	static const int16_t CDATA_SECTION_NODE = 4;
	static const int16_t ENTITY_REFERENCE_NODE = 5;
	static const int16_t ENTITY_NODE = 6;
	static const int16_t PROCESSING_INSTRUCTION_NODE = 7;
	static const int16_t COMMENT_NODE = 8;
	static const int16_t DOCUMENT_NODE = 9;
	static const int16_t DOCUMENT_TYPE_NODE = 10;
	static const int16_t DOCUMENT_FRAGMENT_NODE = 11;
	static const int16_t NOTATION_NODE = 12;
	static const int16_t DOCUMENT_POSITION_DISCONNECTED = 1;
	static const int16_t DOCUMENT_POSITION_PRECEDING = 2;
	static const int16_t DOCUMENT_POSITION_FOLLOWING = 4;
	static const int16_t DOCUMENT_POSITION_CONTAINS = 8;
	static const int16_t DOCUMENT_POSITION_CONTAINED_BY = 16;
	static const int16_t DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC = 32;
};

		} // dom
	} // w3c
} // org

#pragma pop_macro("ATTRIBUTE_NODE")
#pragma pop_macro("CDATA_SECTION_NODE")
#pragma pop_macro("COMMENT_NODE")
#pragma pop_macro("DOCUMENT_FRAGMENT_NODE")
#pragma pop_macro("DOCUMENT_NODE")
#pragma pop_macro("DOCUMENT_POSITION_CONTAINED_BY")
#pragma pop_macro("DOCUMENT_POSITION_CONTAINS")
#pragma pop_macro("DOCUMENT_POSITION_DISCONNECTED")
#pragma pop_macro("DOCUMENT_POSITION_FOLLOWING")
#pragma pop_macro("DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC")
#pragma pop_macro("DOCUMENT_POSITION_PRECEDING")
#pragma pop_macro("DOCUMENT_TYPE_NODE")
#pragma pop_macro("ELEMENT_NODE")
#pragma pop_macro("ENTITY_NODE")
#pragma pop_macro("ENTITY_REFERENCE_NODE")
#pragma pop_macro("NOTATION_NODE")
#pragma pop_macro("PROCESSING_INSTRUCTION_NODE")
#pragma pop_macro("TEXT_NODE")

#endif // _org_w3c_dom_Node_h_