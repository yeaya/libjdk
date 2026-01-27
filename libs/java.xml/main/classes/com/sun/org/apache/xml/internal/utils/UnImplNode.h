#ifndef _com_sun_org_apache_xml_internal_utils_UnImplNode_h_
#define _com_sun_org_apache_xml_internal_utils_UnImplNode_h_
//$ class com.sun.org.apache.xml.internal.utils.UnImplNode
//$ extends org.w3c.dom.Element
//$ implements org.w3c.dom.NodeList,org.w3c.dom.Document

#include <java/lang/Array.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NodeList.h>

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
			class EntityReference;
			class NamedNodeMap;
			class Node;
			class ProcessingInstruction;
			class Text;
			class TypeInfo;
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
						namespace utils {

class $export UnImplNode : public ::org::w3c::dom::Element, public ::org::w3c::dom::NodeList, public ::org::w3c::dom::Document {
	$class(UnImplNode, $NO_CLASS_INIT, ::org::w3c::dom::Element, ::org::w3c::dom::NodeList, ::org::w3c::dom::Document)
public:
	UnImplNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::org::w3c::dom::Node* adoptNode(::org::w3c::dom::Node* source) override;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual void appendData($String* arg);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
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
	virtual void deleteData(int32_t offset, int32_t count);
	virtual void error($String* msg);
	virtual void error($String* msg, $ObjectArray* args);
	virtual $String* getActualEncoding();
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual ::org::w3c::dom::DocumentType* getDoctype() override;
	virtual ::org::w3c::dom::Element* getDocumentElement() override;
	virtual $String* getDocumentURI() override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::Element* getElementById($String* elementId) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* name) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual $String* getInputEncoding() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Element* getOwnerElement();
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual bool getSpecified();
	virtual bool getStandalone();
	virtual bool getStrictErrorChecking() override;
	virtual $String* getTagName() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual $String* getVersion();
	virtual $String* getWholeText();
	virtual $String* getXmlEncoding() override;
	virtual bool getXmlStandalone() override;
	virtual $String* getXmlVersion() override;
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* name, $String* x) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual ::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* importedNode, bool deep) override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertData(int32_t offset, $String* arg);
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isId();
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual bool isWhitespaceInElementContent();
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual void normalizeDocument() override;
	virtual void removeAttribute($String* name) override;
	virtual void removeAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* removeAttributeNode(::org::w3c::dom::Attr* oldAttr) override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* renameNode(::org::w3c::dom::Node* n, $String* namespaceURI, $String* name) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void replaceData(int32_t offset, int32_t count, $String* arg);
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content);
	virtual void setActualEncoding($String* value);
	virtual void setAttribute($String* name, $String* value) override;
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) override;
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) override;
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) override;
	virtual void setData($String* data);
	virtual void setDocumentURI($String* documentURI) override;
	virtual void setIdAttribute(bool id);
	virtual void setIdAttribute($String* name, bool makeId) override;
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) override;
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* at, bool makeId) override;
	virtual void setInputEncoding($String* encoding);
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setStandalone(bool standalone);
	virtual void setStrictErrorChecking(bool strictErrorChecking) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* value);
	virtual void setVersion($String* version);
	virtual void setXmlEncoding($String* xmlEncoding);
	virtual void setXmlStandalone(bool xmlStandalone) override;
	virtual void setXmlVersion($String* xmlVersion) override;
	virtual ::org::w3c::dom::Text* splitText(int32_t offset);
	virtual $String* substringData(int32_t offset, int32_t count);
	virtual $String* toString() override;
	$String* fDocumentURI = nullptr;
	$String* actualEncoding = nullptr;
	$String* xmlEncoding = nullptr;
	bool xmlStandalone = false;
	$String* xmlVersion = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_UnImplNode_h_