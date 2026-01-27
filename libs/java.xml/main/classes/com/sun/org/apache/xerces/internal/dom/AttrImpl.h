#ifndef _com_sun_org_apache_xerces_internal_dom_AttrImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_AttrImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.AttrImpl
//$ extends com.sun.org.apache.xerces.internal.dom.NodeImpl
//$ implements org.w3c.dom.Attr,org.w3c.dom.TypeInfo

#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/TypeInfo.h>

#pragma push_macro("DTD_URI")
#undef DTD_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class ChildNode;
							class CoreDocumentImpl;
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
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
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

class AttrImpl : public ::com::sun::org::apache::xerces::internal::dom::NodeImpl, public ::org::w3c::dom::Attr, public ::org::w3c::dom::TypeInfo {
	$class(AttrImpl, 0, ::com::sun::org::apache::xerces::internal::dom::NodeImpl, ::org::w3c::dom::Attr, ::org::w3c::dom::TypeInfo)
public:
	AttrImpl();
	using ::com::sun::org::apache::xerces::internal::dom::NodeImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::NodeImpl::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual bool hasAttributes() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* name);
	void init$();
	virtual void checkNormalizationAfterInsert(::com::sun::org::apache::xerces::internal::dom::ChildNode* insertedChild);
	virtual void checkNormalizationAfterRemove(::com::sun::org::apache::xerces::internal::dom::ChildNode* previousSibling);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual ::org::w3c::dom::Element* getElement();
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual $String* getName() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Element* getOwnerElement() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual bool getSpecified() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual $String* getValue() override;
	virtual bool hasChildNodes() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual ::org::w3c::dom::Node* internalInsertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild, bool replace);
	virtual ::org::w3c::dom::Node* internalRemoveChild(::org::w3c::dom::Node* oldChild, bool replace);
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isId() override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* lastChild();
	void lastChild(::com::sun::org::apache::xerces::internal::dom::ChildNode* node);
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void makeChildNode();
	virtual void normalize() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual void rename($String* name);
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setIdAttribute(bool id);
	virtual void setNodeValue($String* value) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setReadOnly(bool readOnly, bool deep) override;
	virtual void setSpecified(bool arg);
	virtual void setTextContent($String* textContent) override;
	virtual void setType(Object$* type);
	using ::com::sun::org::apache::xerces::internal::dom::NodeImpl::setUserData;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* newvalue) override;
	virtual void synchronizeChildren();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x64FF9C955F6BCFC6;
	static $String* DTD_URI;
	$Object* value = nullptr;
	$String* name = nullptr;
	$Object* type = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DTD_URI")

#endif // _com_sun_org_apache_xerces_internal_dom_AttrImpl_h_