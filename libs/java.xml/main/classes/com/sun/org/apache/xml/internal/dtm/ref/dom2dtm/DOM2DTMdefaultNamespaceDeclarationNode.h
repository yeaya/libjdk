#ifndef _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTMdefaultNamespaceDeclarationNode_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTMdefaultNamespaceDeclarationNode_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTMdefaultNamespaceDeclarationNode
//$ extends org.w3c.dom.Attr
//$ implements org.w3c.dom.TypeInfo

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/TypeInfo.h>

#pragma push_macro("NOT_SUPPORTED_ERR")
#undef NOT_SUPPORTED_ERR

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class NamedNodeMap;
			class Node;
			class NodeList;
			class UserDataHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace dom2dtm {

class DOM2DTMdefaultNamespaceDeclarationNode : public ::org::w3c::dom::Attr, public ::org::w3c::dom::TypeInfo {
	$class(DOM2DTMdefaultNamespaceDeclarationNode, $NO_CLASS_INIT, ::org::w3c::dom::Attr, ::org::w3c::dom::TypeInfo)
public:
	DOM2DTMdefaultNamespaceDeclarationNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* pseudoparent, $String* prefix, $String* uri, int32_t handle);
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* a) override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual int32_t getHandleOfNode();
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual $String* getLocalName() override;
	virtual $String* getName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Element* getOwnerElement() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual bool getSpecified() override;
	virtual $String* getTextContent() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual $Object* getUserData($String* key) override;
	virtual $String* getValue() override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* a, ::org::w3c::dom::Node* b) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isDerivedFrom($String* ns, $String* localName, int32_t derivationMethod) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isId() override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* a) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* a, ::org::w3c::dom::Node* b) override;
	virtual void setNodeValue($String* value) override;
	virtual void setPrefix($String* value) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* value) override;
	virtual $String* toString() override;
	$String* NOT_SUPPORTED_ERR = nullptr;
	::org::w3c::dom::Element* pseudoparent = nullptr;
	$String* prefix = nullptr;
	$String* uri = nullptr;
	$String* nodename = nullptr;
	int32_t handle = 0;
};

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NOT_SUPPORTED_ERR")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTMdefaultNamespaceDeclarationNode_h_