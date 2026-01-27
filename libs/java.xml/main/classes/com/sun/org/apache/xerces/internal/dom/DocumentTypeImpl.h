#ifndef _com_sun_org_apache_xerces_internal_dom_DocumentTypeImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DocumentTypeImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DocumentTypeImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ParentNode
//$ implements org.w3c.dom.DocumentType

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/lang/Array.h>
#include <org/w3c/dom/DocumentType.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
							class NamedNodeMapImpl;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
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
			class NamedNodeMap;
			class Node;
			class UserDataHandler;
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

class DocumentTypeImpl : public ::com::sun::org::apache::xerces::internal::dom::ParentNode, public ::org::w3c::dom::DocumentType {
	$class(DocumentTypeImpl, 0, ::com::sun::org::apache::xerces::internal::dom::ParentNode, ::org::w3c::dom::DocumentType)
public:
	DocumentTypeImpl();
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
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
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* name);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* qualifiedName, $String* publicID, $String* systemID);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::NamedNodeMap* getElements();
	virtual ::org::w3c::dom::NamedNodeMap* getEntities() override;
	virtual $String* getInternalSubset() override;
	virtual $String* getName() override;
	virtual $String* getNodeName() override;
	virtual int32_t getNodeNumber() override;
	virtual int16_t getNodeType() override;
	virtual ::org::w3c::dom::NamedNodeMap* getNotations() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual ::java::util::Map* getUserDataRecord() override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setInternalSubset($String* internalSubset);
	virtual void setNodeValue($String* x) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setReadOnly(bool readOnly, bool deep) override;
	virtual void setTextContent($String* textContent) override;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::setUserData;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x6B92258C19CC7F95;
	$String* name = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* entities = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* notations = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* elements = nullptr;
	$String* publicID = nullptr;
	$String* systemID = nullptr;
	$String* internalSubset = nullptr;
	int32_t doctypeNumber = 0;
	::java::util::Map* userData = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DocumentTypeImpl_h_