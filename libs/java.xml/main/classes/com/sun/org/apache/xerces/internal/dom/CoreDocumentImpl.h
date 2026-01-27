#ifndef _com_sun_org_apache_xerces_internal_dom_CoreDocumentImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_CoreDocumentImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ParentNode
//$ implements org.w3c.dom.Document

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/lang/Array.h>
#include <org/w3c/dom/Document.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class DOMConfigurationImpl;
							class DOMNormalizer;
							class DocumentTypeImpl;
							class ElementDefinitionImpl;
							class ElementImpl;
							class NodeImpl;
							class NodeListCache;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
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
			class Entity;
			class EntityReference;
			class Node;
			class NodeList;
			class Notation;
			class ProcessingInstruction;
			class Text;
			class UserDataHandler;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class Event;
				class EventListener;
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

class CoreDocumentImpl : public ::com::sun::org::apache::xerces::internal::dom::ParentNode, public ::org::w3c::dom::Document {
	$class(CoreDocumentImpl, 0, ::com::sun::org::apache::xerces::internal::dom::ParentNode, ::org::w3c::dom::Document)
public:
	CoreDocumentImpl();
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::addEventListener;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::dispatchEvent;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getUserDataRecord;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::getUserData;
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $Object* getUserData($String* key) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	void init$();
	void init$(bool grammarAccess);
	void init$(::org::w3c::dom::DocumentType* doctype);
	void init$(::org::w3c::dom::DocumentType* doctype, bool grammarAccess);
	virtual void abort();
	virtual void addEventListener(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture);
	virtual ::org::w3c::dom::Node* adoptNode(::org::w3c::dom::Node* source) override;
	virtual void callUserDataHandlers(::org::w3c::dom::Node* n, ::org::w3c::dom::Node* c, int16_t operation);
	virtual void callUserDataHandlers(::org::w3c::dom::Node* n, ::org::w3c::dom::Node* c, int16_t operation, ::java::util::Map* userData);
	virtual void changed() override;
	virtual int32_t changes() override;
	void checkDOMNSErr($String* prefix, $String* namespace$);
	void checkNamespaceWF($String* qname, int32_t colon1, int32_t colon2);
	void checkQName($String* prefix, $String* local);
	void clearIdentifiers();
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual void cloneNode(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* newdoc, bool deep);
	virtual void copyEventListeners(::com::sun::org::apache::xerces::internal::dom::NodeImpl* src, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* tgt);
	virtual ::org::w3c::dom::Attr* createAttribute($String* name) override;
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::Attr* createAttributeNS($String* namespaceURI, $String* qualifiedName, $String* localpart);
	virtual ::org::w3c::dom::CDATASection* createCDATASection($String* data) override;
	virtual ::org::w3c::dom::Comment* createComment($String* data) override;
	virtual ::org::w3c::dom::DocumentFragment* createDocumentFragment() override;
	virtual ::org::w3c::dom::DocumentType* createDocumentType($String* qualifiedName, $String* publicID, $String* systemID);
	virtual ::org::w3c::dom::Element* createElement($String* tagName) override;
	virtual ::com::sun::org::apache::xerces::internal::dom::ElementDefinitionImpl* createElementDefinition($String* name);
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName) override;
	virtual ::org::w3c::dom::Element* createElementNS($String* namespaceURI, $String* qualifiedName, $String* localpart);
	virtual ::org::w3c::dom::Entity* createEntity($String* name);
	virtual ::org::w3c::dom::EntityReference* createEntityReference($String* name) override;
	virtual ::org::w3c::dom::Notation* createNotation($String* name);
	virtual ::org::w3c::dom::ProcessingInstruction* createProcessingInstruction($String* target, $String* data) override;
	virtual ::org::w3c::dom::Text* createTextNode($String* data) override;
	virtual void deletedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, int32_t offset, int32_t count);
	virtual bool dispatchEvent(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::org::w3c::dom::events::Event* event);
	virtual void freeNodeListCache(::com::sun::org::apache::xerces::internal::dom::NodeListCache* c);
	virtual bool getAsync();
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::DocumentType* getDoctype() override;
	virtual ::org::w3c::dom::Element* getDocumentElement() override;
	virtual $String* getDocumentURI() override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::Element* getElementById($String* elementId) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* tagname) override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual $String* getEncoding();
	virtual bool getErrorChecking();
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Element* getIdentifier($String* idName);
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual $String* getInputEncoding() override;
	virtual bool getMutationEvents();
	virtual ::com::sun::org::apache::xerces::internal::dom::NodeListCache* getNodeListCache(::com::sun::org::apache::xerces::internal::dom::ParentNode* owner);
	virtual $String* getNodeName() override;
	virtual int32_t getNodeNumber() override;
	virtual int32_t getNodeNumber(::org::w3c::dom::Node* node);
	virtual int16_t getNodeType() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual bool getStandalone();
	virtual bool getStrictErrorChecking() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData(::org::w3c::dom::Node* n, $String* key);
	virtual $Object* getUserData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* n);
	virtual ::java::util::Map* getUserDataRecord(::org::w3c::dom::Node* n);
	virtual $String* getVersion();
	virtual $String* getXmlEncoding() override;
	virtual bool getXmlStandalone() override;
	virtual $String* getXmlVersion() override;
	virtual ::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* source, bool deep) override;
	::org::w3c::dom::Node* importNode(::org::w3c::dom::Node* source, bool deep, bool cloningDoc, ::java::util::Map* reversedIdentifiers);
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual void insertedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* newInternal, bool replace);
	virtual void insertedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, int32_t offset, int32_t count);
	virtual void insertingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace);
	virtual bool isKidOK(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* child);
	virtual bool isNormalizeDocRequired();
	static bool isValidQName($String* prefix, $String* local, bool xml11Version);
	virtual bool isXML11Version();
	static bool isXMLName($String* s, bool xml11Version);
	virtual bool isXMLVersionChanged();
	static void lambda$callUserDataHandlers$0(::java::util::Map* userData, int16_t operation, ::org::w3c::dom::Node* n, ::org::w3c::dom::Node* c, $String* key);
	virtual bool load($String* uri);
	virtual bool loadXML($String* source);
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void modifiedAttrValue(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, $String* oldvalue);
	virtual void modifiedCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* oldvalue, $String* value, bool replace);
	virtual void modifyingCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace);
	virtual void normalize() override;
	virtual void normalizeDocument() override;
	virtual void putIdentifier($String* idName, ::org::w3c::dom::Element* element);
	void readObject(::java::io::ObjectInputStream* in);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::removeEventListener;
	virtual void removeEventListener(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture);
	virtual void removeIdentifier($String* idName);
	virtual ::java::util::Map* removeUserDataTable(::org::w3c::dom::Node* n);
	virtual void removedAttrNode(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* oldOwner, $String* name);
	virtual void removedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace);
	virtual void removingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* oldChild, bool replace);
	virtual ::org::w3c::dom::Node* renameNode(::org::w3c::dom::Node* n, $String* namespaceURI, $String* name) override;
	virtual void renamedAttrNode(::org::w3c::dom::Attr* oldAt, ::org::w3c::dom::Attr* newAt);
	virtual void renamedElement(::org::w3c::dom::Element* oldEl, ::org::w3c::dom::Element* newEl);
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void replacedCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* oldvalue, $String* value);
	virtual void replacedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node);
	virtual void replacedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node);
	virtual void replacingData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node);
	virtual void replacingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node);
	virtual $String* saveXML(::org::w3c::dom::Node* node);
	virtual void setAsync(bool async);
	virtual void setAttrNode(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, ::com::sun::org::apache::xerces::internal::dom::AttrImpl* previous);
	virtual void setDocumentURI($String* documentURI) override;
	virtual void setEncoding($String* value);
	virtual void setErrorChecking(bool check);
	virtual void setInputEncoding($String* value);
	virtual void setMutationEvents(bool set);
	virtual void setNodeValue($String* x) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setStandalone(bool value);
	virtual void setStrictErrorChecking(bool check) override;
	virtual void setTextContent($String* textContent) override;
	using ::com::sun::org::apache::xerces::internal::dom::ParentNode::setUserData;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual $Object* setUserData(::org::w3c::dom::Node* n, $String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler);
	virtual void setUserData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* n, Object$* data);
	virtual void setUserDataTable(::org::w3c::dom::Node* n, ::java::util::Map* data);
	virtual void setVersion($String* value);
	virtual void setXmlEncoding($String* value);
	virtual void setXmlStandalone(bool value) override;
	virtual void setXmlVersion($String* value) override;
	virtual $String* toString() override;
	virtual void undeferChildren(::org::w3c::dom::Node* node);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = 0;
	::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl* docType = nullptr;
	::com::sun::org::apache::xerces::internal::dom::ElementImpl* docElement = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NodeListCache* fFreeNLCache = nullptr;
	$String* encoding = nullptr;
	$String* actualEncoding = nullptr;
	$String* version = nullptr;
	bool standalone = false;
	$String* fDocumentURI = nullptr;
	::java::util::Map* nodeUserData = nullptr;
	::java::util::Map* identifiers = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMNormalizer* domNormalizer = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMConfigurationImpl* fConfiguration = nullptr;
	$Object* fXPathEvaluator = nullptr;
	static $ints* kidOK;
	int32_t changes$ = 0;
	bool allowGrammarAccess = false;
	bool errorChecking = false;
	bool ancestorChecking = false;
	bool xmlVersionChanged = false;
	int32_t documentNumber = 0;
	int32_t nodeCounter = 0;
	::java::util::Map* nodeTable = nullptr;
	bool xml11Version = false;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_CoreDocumentImpl_h_