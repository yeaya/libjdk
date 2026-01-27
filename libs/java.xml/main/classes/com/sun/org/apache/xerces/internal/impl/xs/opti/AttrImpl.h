#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_AttrImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_AttrImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.AttrImpl
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl
//$ implements org.w3c.dom.Attr

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Attr.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
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

class AttrImpl : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, public ::org::w3c::dom::Attr {
	$class(AttrImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, ::org::w3c::dom::Attr)
public:
	AttrImpl();
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
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::w3c::dom::Element* element, $String* prefix, $String* localpart, $String* rawname, $String* uri, $String* value);
	virtual $String* getName() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Element* getOwnerElement() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual bool getSpecified() override;
	virtual $String* getValue() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isId() override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* value) override;
	virtual $String* toString() override;
	::org::w3c::dom::Element* element = nullptr;
	$String* value = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_AttrImpl_h_