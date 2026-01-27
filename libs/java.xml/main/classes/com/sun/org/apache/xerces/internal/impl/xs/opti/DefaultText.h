#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultText_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultText_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultText
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl
//$ implements org.w3c.dom.Text

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Text.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

class DefaultText : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, public ::org::w3c::dom::Text {
	$class(DefaultText, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, ::org::w3c::dom::Text)
public:
	DefaultText();
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
	virtual void appendData($String* arg) override;
	virtual void deleteData(int32_t offset, int32_t count) override;
	virtual $String* getData() override;
	virtual int32_t getLength() override;
	virtual $String* getWholeText() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertData(int32_t offset, $String* arg) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isElementContentWhitespace() override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void replaceData(int32_t offset, int32_t count, $String* arg) override;
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content) override;
	virtual void setData($String* data) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual ::org::w3c::dom::Text* splitText(int32_t offset) override;
	virtual $String* substringData(int32_t offset, int32_t count) override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultText_h_