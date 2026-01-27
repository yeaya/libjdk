#ifndef _com_sun_org_apache_xerces_internal_dom_CDATASectionImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_CDATASectionImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.CDATASectionImpl
//$ extends com.sun.org.apache.xerces.internal.dom.TextImpl
//$ implements org.w3c.dom.CDATASection

#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <org/w3c/dom/CDATASection.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class CDATASectionImpl : public ::com::sun::org::apache::xerces::internal::dom::TextImpl, public ::org::w3c::dom::CDATASection {
	$class(CDATASectionImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::TextImpl, ::org::w3c::dom::CDATASection)
public:
	CDATASectionImpl();
	using ::com::sun::org::apache::xerces::internal::dom::TextImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::TextImpl::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual void appendData($String* data) override;
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual void deleteData(int32_t offset, int32_t count) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual $String* getData() override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
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
	virtual $String* getWholeText() override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* data);
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	using ::com::sun::org::apache::xerces::internal::dom::TextImpl::isIgnorableWhitespace;
	using ::com::sun::org::apache::xerces::internal::dom::TextImpl::replaceData;
	using ::com::sun::org::apache::xerces::internal::dom::TextImpl::setUserData;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertData(int32_t offset, $String* data) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isElementContentWhitespace() override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void replaceData(int32_t offset, int32_t count, $String* data) override;
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content) override;
	virtual void setData($String* value) override;
	virtual void setNodeValue($String* value) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual ::org::w3c::dom::Text* splitText(int32_t offset) override;
	virtual $String* substringData(int32_t offset, int32_t count) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x20EB4A4713EDB7F4;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_CDATASectionImpl_h_