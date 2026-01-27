#ifndef _com_sun_org_apache_xerces_internal_dom_ProcessingInstructionImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_ProcessingInstructionImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.ProcessingInstructionImpl
//$ extends com.sun.org.apache.xerces.internal.dom.CharacterDataImpl
//$ implements org.w3c.dom.ProcessingInstruction

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <org/w3c/dom/ProcessingInstruction.h>

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

class ProcessingInstructionImpl : public ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl, public ::org::w3c::dom::ProcessingInstruction {
	$class(ProcessingInstructionImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl, ::org::w3c::dom::ProcessingInstruction)
public:
	ProcessingInstructionImpl();
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
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
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDoc, $String* target, $String* data);
	virtual $String* getBaseURI() override;
	virtual $String* getData() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getTarget() override;
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
	virtual void setData($String* data) override;
	using ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl::setUserData;
	virtual void setNodeValue($String* value) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x68D6BEC406F214C6;
	$String* target = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ProcessingInstructionImpl_h_