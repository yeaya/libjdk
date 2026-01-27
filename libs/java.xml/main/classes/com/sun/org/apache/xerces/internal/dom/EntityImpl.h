#ifndef _com_sun_org_apache_xerces_internal_dom_EntityImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_EntityImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.EntityImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ParentNode
//$ implements org.w3c.dom.Entity

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Entity.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
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
			class Node;
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

class EntityImpl : public ::com::sun::org::apache::xerces::internal::dom::ParentNode, public ::org::w3c::dom::Entity {
	$class(EntityImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::ParentNode, ::org::w3c::dom::Entity)
public:
	EntityImpl();
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
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
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* name);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual $String* getBaseURI() override;
	virtual $String* getInputEncoding() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNotationName() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getXmlEncoding() override;
	virtual $String* getXmlVersion() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setBaseURI($String* uri);
	virtual void setInputEncoding($String* inputEncoding);
	virtual void setNodeValue($String* x) override;
	virtual void setNotationName($String* name);
	virtual void setPrefix($String* prefix) override;
	virtual void setPublicId($String* id);
	virtual void setSystemId($String* id);
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::setUserData;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setXmlEncoding($String* value);
	virtual void setXmlVersion($String* value);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xCE60585DFC4961C1;
	$String* name = nullptr;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	$String* encoding = nullptr;
	$String* inputEncoding = nullptr;
	$String* version = nullptr;
	$String* notationName = nullptr;
	$String* baseURI = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_EntityImpl_h_