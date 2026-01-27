#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy
//$ extends org.w3c.dom.Document
//$ implements org.w3c.dom.Text,org.w3c.dom.Element,org.w3c.dom.Attr,org.w3c.dom.ProcessingInstruction,org.w3c.dom.Comment,org.w3c.dom.DocumentFragment

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>

#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class CDATASection;
			class DOMConfiguration;
			class DOMImplementation;
			class DocumentType;
			class EntityReference;
			class NamedNodeMap;
			class Node;
			class NodeList;
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
						namespace dtm {
							namespace ref {

class DTMNodeProxy : public ::org::w3c::dom::Document, public ::org::w3c::dom::Text, public ::org::w3c::dom::Element, public ::org::w3c::dom::Attr, public ::org::w3c::dom::ProcessingInstruction, public ::org::w3c::dom::Comment, public ::org::w3c::dom::DocumentFragment {
	$class(DTMNodeProxy, 0, ::org::w3c::dom::Document, ::org::w3c::dom::Text, ::org::w3c::dom::Element, ::org::w3c::dom::Attr, ::org::w3c::dom::ProcessingInstruction, ::org::w3c::dom::Comment, ::org::w3c::dom::DocumentFragment)
public:
	DTMNodeProxy();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t node);
	virtual ::org::w3c::dom::Node* adoptNode(::org::w3c::dom::Node* source) override;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual void appendData($String* arg) override;
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
	virtual void deleteData(int32_t offset, int32_t count) override;
	bool equals(::org::w3c::dom::Node* node);
	virtual bool equals(Object$* node) override;
	virtual $String* getActualEncoding();
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	::com::sun::org::apache::xml::internal::dtm::DTM* getDTM();
	int32_t getDTMNodeNumber();
	virtual $String* getData() override;
	virtual ::org::w3c::dom::DocumentType* getDoctype() override;
	virtual ::org::w3c::dom::Element* getDocumentElement() override;
	virtual $String* getDocumentURI() override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::Element* getElementById($String* elementId) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* tagname) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual $String* getInputEncoding() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName() override;
	virtual $String* getName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Element* getOwnerElement() override;
	::org::w3c::dom::Node* getOwnerNode();
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual bool getSpecified() override;
	virtual bool getStandalone();
	virtual bool getStrictErrorChecking() override;
	$String* getStringValue();
	virtual $String* getTagName() override;
	virtual $String* getTarget() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual $String* getValue() override;
	virtual $String* getVersion();
	virtual $String* getWholeText() override;
	virtual $String* getXmlEncoding() override;
	virtual bool getXmlStandalone() override;
	virtual $String* getXmlVersion() override;
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	virtual ::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* importedNode, bool deep) override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertData(int32_t offset, $String* arg) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isElementContentWhitespace() override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isId() override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
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
	virtual void replaceData(int32_t offset, int32_t count, $String* arg) override;
	virtual ::org::w3c::dom::Text* replaceWholeText($String* content) override;
	bool sameNodeAs(::org::w3c::dom::Node* other);
	virtual void setActualEncoding($String* value);
	virtual void setAttribute($String* name, $String* value) override;
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) override;
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) override;
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) override;
	virtual void setData($String* data) override;
	virtual void setDocumentURI($String* documentURI) override;
	virtual void setEncoding($String* encoding);
	virtual void setIdAttribute(bool id);
	virtual void setIdAttribute($String* name, bool makeId) override;
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) override;
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* at, bool makeId) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setStandalone(bool standalone);
	virtual void setStrictErrorChecking(bool strictErrorChecking) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* value) override;
	virtual void setVersion($String* version);
	virtual void setXmlEncoding($String* xmlEncoding);
	virtual void setXmlStandalone(bool xmlStandalone) override;
	virtual void setXmlVersion($String* xmlVersion) override;
	virtual ::org::w3c::dom::Text* splitText(int32_t offset) override;
	virtual $String* substringData(int32_t offset, int32_t count) override;
	bool supports($String* feature, $String* version);
	virtual $String* toString() override;
	void traverseChildren(::java::util::List* listVector, ::org::w3c::dom::Node* tempNode, $String* tagname, bool isTagNameWildCard);
	void traverseChildren(::java::util::List* listVector, ::org::w3c::dom::Node* tempNode, $String* namespaceURI, $String* localname, bool isNamespaceURIWildCard, bool isLocalNameWildCard);
	::com::sun::org::apache::xml::internal::dtm::DTM* dtm = nullptr;
	int32_t node = 0;
	static $String* EMPTYSTRING;
	static ::org::w3c::dom::DOMImplementation* implementation;
	$String* fDocumentURI = nullptr;
	$String* actualEncoding = nullptr;
	$String* xmlEncoding = nullptr;
	bool xmlStandalone = false;
	$String* xmlVersion = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTYSTRING")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeProxy_h_