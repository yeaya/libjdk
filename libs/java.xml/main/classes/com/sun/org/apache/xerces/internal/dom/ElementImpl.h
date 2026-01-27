#ifndef _com_sun_org_apache_xerces_internal_dom_ElementImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_ElementImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.ElementImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ParentNode
//$ implements org.w3c.dom.Element,org.w3c.dom.ElementTraversal,org.w3c.dom.TypeInfo

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/ElementTraversal.h>
#include <org/w3c/dom/TypeInfo.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttributeMap;
							class CoreDocumentImpl;
							class NamedNodeMapImpl;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class NamedNodeMap;
			class Node;
			class NodeList;
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

class ElementImpl : public ::com::sun::org::apache::xerces::internal::dom::ParentNode, public ::org::w3c::dom::Element, public ::org::w3c::dom::ElementTraversal, public ::org::w3c::dom::TypeInfo {
	$class(ElementImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::ParentNode, ::org::w3c::dom::Element, ::org::w3c::dom::ElementTraversal, ::org::w3c::dom::TypeInfo)
public:
	ElementImpl();
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* name);
	void init$();
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual int32_t getChildElementCount() override;
	virtual ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* getDefaultAttributes();
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* tagname) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Element* getFirstElementChild() override;
	::org::w3c::dom::Element* getFirstElementChild(::org::w3c::dom::Node* n);
	virtual ::org::w3c::dom::Element* getLastElementChild() override;
	::org::w3c::dom::Element* getLastElementChild(::org::w3c::dom::Node* n);
	virtual ::org::w3c::dom::Element* getNextElementSibling() override;
	::org::w3c::dom::Node* getNextLogicalSibling(::org::w3c::dom::Node* n);
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual ::org::w3c::dom::Element* getPreviousElementSibling() override;
	::org::w3c::dom::Node* getPreviousLogicalSibling(::org::w3c::dom::Node* n);
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual $String* getTagName() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual ::org::w3c::dom::Attr* getXMLBaseAttribute();
	virtual int32_t getXercesAttribute($String* namespaceURI, $String* localName);
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) override;
	virtual bool hasAttributes() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void moveSpecifiedAttributes(::com::sun::org::apache::xerces::internal::dom::ElementImpl* el);
	virtual void normalize() override;
	virtual void reconcileDefaultAttributes();
	virtual void removeAttribute($String* name) override;
	virtual void removeAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* removeAttributeNode(::org::w3c::dom::Attr* oldAttr) override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual void rename($String* name);
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setAttribute($String* name, $String* value) override;
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) override;
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) override;
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) override;
	virtual void setIdAttribute($String* name, bool makeId) override;
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) override;
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* at, bool makeId) override;
	virtual void setNodeValue($String* x) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setReadOnly(bool readOnly, bool deep) override;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::setUserData;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual int32_t setXercesAttributeNode(::org::w3c::dom::Attr* attr);
	virtual void setupDefaultAttributes();
	virtual void synchronizeData() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x33965660E8283866;
	$String* name = nullptr;
	::com::sun::org::apache::xerces::internal::dom::AttributeMap* attributes = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ElementImpl_h_