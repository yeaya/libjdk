#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultDocument_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultDocument_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultDocument
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl
//$ implements org.w3c.dom.Document

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Document.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class CDATASection;
			class Comment;
			class DOMConfiguration;
			class DOMImplementation;
			class DocumentFragment;
			class DocumentType;
			class Element;
			class EntityReference;
			class Node;
			class NodeList;
			class ProcessingInstruction;
			class Text;
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

class DefaultDocument : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, public ::org::w3c::dom::Document {
	$class(DefaultDocument, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, ::org::w3c::dom::Document)
public:
	DefaultDocument();
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
	virtual ::org::w3c::dom::Node* adoptNode(::org::w3c::dom::Node* source) override;
	virtual ::org::w3c::dom::Attr* createAttribute($String* name) override;
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::CDATASection* createCDATASection($String* data) override;
	virtual ::org::w3c::dom::Comment* createComment($String* data) override;
	virtual ::org::w3c::dom::DocumentFragment* createDocumentFragment() override;
	virtual ::org::w3c::dom::Element* createElement($String* tagName) override;
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::EntityReference* createEntityReference($String* name) override;
	virtual ::org::w3c::dom::ProcessingInstruction* createProcessingInstruction($String* target, $String* data) override;
	virtual ::org::w3c::dom::Text* createTextNode($String* data) override;
	virtual ::org::w3c::dom::DocumentType* getDoctype() override;
	virtual ::org::w3c::dom::Element* getDocumentElement() override;
	virtual $String* getDocumentURI() override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::Element* getElementById($String* elementId) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* tagname) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual $String* getInputEncoding() override;
	virtual bool getStrictErrorChecking() override;
	virtual $String* getXmlEncoding() override;
	virtual bool getXmlStandalone() override;
	virtual $String* getXmlVersion() override;
	virtual ::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* importedNode, bool deep) override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual void normalizeDocument() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* renameNode(::org::w3c::dom::Node* n, $String* namespaceURI, $String* name) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setDocumentURI($String* documentURI) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setStrictErrorChecking(bool strictErrorChecking) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setXmlStandalone(bool standalone) override;
	virtual void setXmlVersion($String* version) override;
	virtual $String* toString() override;
	$String* fDocumentURI = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_DefaultDocument_h_