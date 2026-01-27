#ifndef _com_sun_org_apache_xerces_internal_dom_NodeImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_NodeImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.NodeImpl
//$ extends org.w3c.dom.Node
//$ implements org.w3c.dom.NodeList,org.w3c.dom.events.EventTarget,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/events/EventTarget.h>

#pragma push_macro("ELEMENT_DEFINITION_NODE")
#undef ELEMENT_DEFINITION_NODE
#pragma push_macro("FIRSTCHILD")
#undef FIRSTCHILD
#pragma push_macro("HASSTRING")
#undef HASSTRING
#pragma push_macro("ID")
#undef ID
#pragma push_macro("IGNORABLEWS")
#undef IGNORABLEWS
#pragma push_macro("NORMALIZED")
#undef NORMALIZED
#pragma push_macro("OWNED")
#undef OWNED
#pragma push_macro("READONLY")
#undef READONLY
#pragma push_macro("SPECIFIED")
#undef SPECIFIED
#pragma push_macro("SYNCCHILDREN")
#undef SYNCCHILDREN
#pragma push_macro("SYNCDATA")
#undef SYNCDATA
#pragma push_macro("TREE_POSITION_ANCESTOR")
#undef TREE_POSITION_ANCESTOR
#pragma push_macro("TREE_POSITION_DESCENDANT")
#undef TREE_POSITION_DESCENDANT
#pragma push_macro("TREE_POSITION_DISCONNECTED")
#undef TREE_POSITION_DISCONNECTED
#pragma push_macro("TREE_POSITION_EQUIVALENT")
#undef TREE_POSITION_EQUIVALENT
#pragma push_macro("TREE_POSITION_FOLLOWING")
#undef TREE_POSITION_FOLLOWING
#pragma push_macro("TREE_POSITION_PRECEDING")
#undef TREE_POSITION_PRECEDING
#pragma push_macro("TREE_POSITION_SAME_NODE")
#undef TREE_POSITION_SAME_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class ChildNode;
							class CoreDocumentImpl;
							class ElementImpl;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class NamedNodeMap;
			class UserDataHandler;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class Event;
				class EventListener;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class NodeImpl : public ::org::w3c::dom::Node, public ::org::w3c::dom::NodeList, public ::org::w3c::dom::events::EventTarget, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(NodeImpl, $NO_CLASS_INIT, ::org::w3c::dom::Node, ::org::w3c::dom::NodeList, ::org::w3c::dom::events::EventTarget, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	NodeImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getNodeName() override {return nullptr;}
	virtual int16_t getNodeType() override {return 0;}
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument);
	void init$();
	virtual void addEventListener($String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) override;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual void changed();
	virtual int32_t changes();
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual int16_t compareTreePosition(::org::w3c::dom::Node* other);
	virtual bool dispatchEvent(::org::w3c::dom::events::Event* event) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual ::org::w3c::dom::Node* getContainer();
	virtual ::org::w3c::dom::Node* getElementAncestor(::org::w3c::dom::Node* currentNode);
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual int32_t getNodeNumber();
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual bool getReadOnly();
	virtual $String* getTextContent() override;
	virtual void getTextContent(::java::lang::StringBuilder* buf);
	virtual $Object* getUserData($String* key) override;
	virtual $Object* getUserData();
	virtual ::java::util::Map* getUserDataRecord();
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	bool hasStringValue();
	void hasStringValue(bool value);
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	bool internalIsIgnorableWhitespace();
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	bool isFirstChild();
	void isFirstChild(bool value);
	bool isIdAttribute();
	void isIdAttribute(bool value);
	void isIgnorableWhitespace(bool value);
	bool isNormalized();
	void isNormalized(bool value);
	bool isOwned();
	void isOwned(bool value);
	bool isReadOnly();
	void isReadOnly(bool value);
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	bool isSpecified();
	void isSpecified(bool value);
	virtual bool isSupported($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual $String* lookupNamespacePrefix($String* namespaceURI, ::com::sun::org::apache::xerces::internal::dom::ElementImpl* el);
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	bool needsSyncChildren();
	void needsSyncChildren(bool value);
	bool needsSyncData();
	void needsSyncData(bool value);
	virtual void normalize() override;
	virtual ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument();
	virtual ::com::sun::org::apache::xerces::internal::dom::NodeImpl* parentNode();
	virtual ::com::sun::org::apache::xerces::internal::dom::ChildNode* previousSibling();
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual void removeEventListener($String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setNodeValue($String* x) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc);
	virtual void setPrefix($String* prefix) override;
	virtual void setReadOnly(bool readOnly, bool deep);
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setUserData(Object$* data);
	virtual void synchronizeData();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int16_t TREE_POSITION_PRECEDING = 1;
	static const int16_t TREE_POSITION_FOLLOWING = 2;
	static const int16_t TREE_POSITION_ANCESTOR = 4;
	static const int16_t TREE_POSITION_DESCENDANT = 8;
	static const int16_t TREE_POSITION_EQUIVALENT = 16;
	static const int16_t TREE_POSITION_SAME_NODE = 32;
	static const int16_t TREE_POSITION_DISCONNECTED = 0;
	static const int64_t serialVersionUID = (int64_t)0xA856F50CC3CBBE10;
	static const int16_t ELEMENT_DEFINITION_NODE = 21;
	::com::sun::org::apache::xerces::internal::dom::NodeImpl* ownerNode = nullptr;
	int16_t flags = 0;
	static const int16_t READONLY = 1; // 1 << 0
	static const int16_t SYNCDATA = 2; // 1 << 1
	static const int16_t SYNCCHILDREN = 4; // 1 << 2
	static const int16_t OWNED = 8; // 1 << 3
	static const int16_t FIRSTCHILD = 16; // 1 << 4
	static const int16_t SPECIFIED = 32; // 1 << 5
	static const int16_t IGNORABLEWS = 64; // 1 << 6
	static const int16_t HASSTRING = 128; // 1 << 7
	static const int16_t NORMALIZED = 256; // 1 << 8
	static const int16_t ID = 512; // 1 << 9
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ELEMENT_DEFINITION_NODE")
#pragma pop_macro("FIRSTCHILD")
#pragma pop_macro("HASSTRING")
#pragma pop_macro("ID")
#pragma pop_macro("IGNORABLEWS")
#pragma pop_macro("NORMALIZED")
#pragma pop_macro("OWNED")
#pragma pop_macro("READONLY")
#pragma pop_macro("SPECIFIED")
#pragma pop_macro("SYNCCHILDREN")
#pragma pop_macro("SYNCDATA")
#pragma pop_macro("TREE_POSITION_ANCESTOR")
#pragma pop_macro("TREE_POSITION_DESCENDANT")
#pragma pop_macro("TREE_POSITION_DISCONNECTED")
#pragma pop_macro("TREE_POSITION_EQUIVALENT")
#pragma pop_macro("TREE_POSITION_FOLLOWING")
#pragma pop_macro("TREE_POSITION_PRECEDING")
#pragma pop_macro("TREE_POSITION_SAME_NODE")

#endif // _com_sun_org_apache_xerces_internal_dom_NodeImpl_h_