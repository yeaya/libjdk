#ifndef _org_w3c_dom_Document_h_
#define _org_w3c_dom_Document_h_
//$ interface org.w3c.dom.Document
//$ extends org.w3c.dom.Node

#include <org/w3c/dom/Node.h>

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
			class NodeList;
			class ProcessingInstruction;
			class Text;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $export Document : public ::org::w3c::dom::Node {
	$interface(Document, $NO_CLASS_INIT, ::org::w3c::dom::Node)
public:
	virtual ::org::w3c::dom::Node* adoptNode(::org::w3c::dom::Node* source) {return nullptr;}
	virtual ::org::w3c::dom::Attr* createAttribute($String* name) {return nullptr;}
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName) {return nullptr;}
	virtual ::org::w3c::dom::CDATASection* createCDATASection($String* data) {return nullptr;}
	virtual ::org::w3c::dom::Comment* createComment($String* data) {return nullptr;}
	virtual ::org::w3c::dom::DocumentFragment* createDocumentFragment() {return nullptr;}
	virtual ::org::w3c::dom::Element* createElement($String* tagName) {return nullptr;}
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName) {return nullptr;}
	virtual ::org::w3c::dom::EntityReference* createEntityReference($String* name) {return nullptr;}
	virtual ::org::w3c::dom::ProcessingInstruction* createProcessingInstruction($String* target, $String* data) {return nullptr;}
	virtual ::org::w3c::dom::Text* createTextNode($String* data) {return nullptr;}
	virtual ::org::w3c::dom::DocumentType* getDoctype() {return nullptr;}
	virtual ::org::w3c::dom::Element* getDocumentElement() {return nullptr;}
	virtual $String* getDocumentURI() {return nullptr;}
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() {return nullptr;}
	virtual ::org::w3c::dom::Element* getElementById($String* elementId) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* tagname) {return nullptr;}
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) {return nullptr;}
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() {return nullptr;}
	virtual $String* getInputEncoding() {return nullptr;}
	virtual bool getStrictErrorChecking() {return false;}
	virtual $String* getXmlEncoding() {return nullptr;}
	virtual bool getXmlStandalone() {return false;}
	virtual $String* getXmlVersion() {return nullptr;}
	virtual ::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* importedNode, bool deep) {return nullptr;}
	virtual void normalizeDocument() {}
	virtual ::org::w3c::dom::Node* renameNode(::org::w3c::dom::Node* n, $String* namespaceURI, $String* qualifiedName) {return nullptr;}
	virtual void setDocumentURI($String* documentURI) {}
	virtual void setStrictErrorChecking(bool strictErrorChecking) {}
	virtual void setXmlStandalone(bool xmlStandalone) {}
	virtual void setXmlVersion($String* xmlVersion) {}
};

		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_Document_h_