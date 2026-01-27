#ifndef _com_sun_org_apache_xerces_internal_dom_TextImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_TextImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.TextImpl
//$ extends com.sun.org.apache.xerces.internal.dom.CharacterDataImpl
//$ implements org.w3c.dom.Text

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <org/w3c/dom/Text.h>

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
namespace java {
	namespace lang {
		class StringBuilder;
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

class TextImpl : public ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl, public ::org::w3c::dom::Text {
	$class(TextImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl, ::org::w3c::dom::Text)
public:
	TextImpl();
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::getUserData;
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
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* data);
	bool canModifyNext(::org::w3c::dom::Node* node);
	bool canModifyPrev(::org::w3c::dom::Node* node);
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getWholeText() override;
	bool getWholeTextBackward(::org::w3c::dom::Node* node, ::java::lang::StringBuilder* buffer, ::org::w3c::dom::Node* parent);
	bool getWholeTextForward(::org::w3c::dom::Node* node, ::java::lang::StringBuilder* buffer, ::org::w3c::dom::Node* parent);
	bool hasTextOnlyChildren(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertData(int32_t offset, $String* data) override;
	virtual void insertTextContent(::java::lang::StringBuilder* buf);
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isElementContentWhitespace() override;
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::isIgnorableWhitespace;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isIgnorableWhitespace();
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual $String* removeData();
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void replaceData(int32_t offset, int32_t count, $String* data) override;
	virtual void replaceData($String* value);
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content) override;
	virtual void setData($String* value) override;
	virtual void setIgnorableWhitespace(bool ignore);
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::setUserData;
	virtual void setNodeValue($String* value) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValues(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* data);
	virtual ::org::w3c::dom::Text* splitText(int32_t offset) override;
	virtual $String* substringData(int32_t offset, int32_t count) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB68472F7DEFAA6B3;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_TextImpl_h_