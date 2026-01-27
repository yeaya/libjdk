#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultElement_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultElement_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultElement
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl
//$ implements org.w3c.dom.Element

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Element.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class NodeList;
			class TypeInfo;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

class DefaultElement : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, public ::org::w3c::dom::Element {
	$class(DefaultElement, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, ::org::w3c::dom::Element)
public:
	DefaultElement();
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
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
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
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
	void init$();
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int16_t nodeType);
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* name) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual $String* getTagName() override;
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual void removeAttribute($String* name) override;
	virtual void removeAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* removeAttributeNode(::org::w3c::dom::Attr* oldAttr) override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setAttribute($String* name, $String* value) override;
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) override;
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) override;
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) override;
	virtual void setIdAttribute($String* name, bool makeId) override;
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) override;
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* at, bool makeId) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual $String* toString() override;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultElement_h_