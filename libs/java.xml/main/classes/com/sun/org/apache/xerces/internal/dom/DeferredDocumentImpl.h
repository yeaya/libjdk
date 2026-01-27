#ifndef _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl
//$ extends com.sun.org.apache.xerces.internal.dom.DocumentImpl
//$ implements com.sun.org.apache.xerces.internal.dom.DeferredNode

#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SHIFT")
#undef CHUNK_SHIFT
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("DEBUG_IDS")
#undef DEBUG_IDS
#pragma push_macro("DEBUG_PRINT_REF_COUNTS")
#undef DEBUG_PRINT_REF_COUNTS
#pragma push_macro("DEBUG_PRINT_TABLES")
#undef DEBUG_PRINT_TABLES
#pragma push_macro("INITIAL_CHUNK_COUNT")
#undef INITIAL_CHUNK_COUNT
#pragma push_macro("INIT_ARRAY")
#undef INIT_ARRAY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class ParentNode;
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
namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Element;
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

class DeferredDocumentImpl : public ::com::sun::org::apache::xerces::internal::dom::DocumentImpl, public ::com::sun::org::apache::xerces::internal::dom::DeferredNode {
	$class(DeferredDocumentImpl, 0, ::com::sun::org::apache::xerces::internal::dom::DocumentImpl, ::com::sun::org::apache::xerces::internal::dom::DeferredNode)
public:
	DeferredDocumentImpl();
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::addEventListener;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::dispatchEvent;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::cloneNode;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getUserData;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getUserDataRecord;
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::getTextContent;
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
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual bool isSameNode(::org::w3c::dom::Node* other) override;
	virtual bool isSupported($String* feature, $String* version) override;
	void init$();
	void init$(bool namespacesEnabled);
	void init$(bool namespaces, bool grammarAccess);
	virtual void appendChild(int32_t parentIndex, int32_t childIndex);
	static int32_t binarySearch($ints* values, int32_t start, int32_t end, int32_t target);
	int32_t clearChunkIndex($Array<int32_t, 2>* data, int32_t chunk, int32_t index);
	$String* clearChunkValue($Array<::java::lang::Object, 2>* data, int32_t chunk, int32_t index);
	virtual int32_t cloneNode(int32_t nodeIndex, bool deep);
	void createChunk($Array<int32_t, 2>* data, int32_t chunk);
	void createChunk($Array<::java::lang::Object, 2>* data, int32_t chunk);
	virtual int32_t createDeferredAttribute($String* attrName, $String* attrValue, bool specified);
	virtual int32_t createDeferredAttribute($String* attrName, $String* attrURI, $String* attrValue, bool specified);
	virtual int32_t createDeferredCDATASection($String* data);
	virtual int32_t createDeferredComment($String* data);
	virtual int32_t createDeferredDocument();
	virtual int32_t createDeferredDocumentType($String* rootElementName, $String* publicId, $String* systemId);
	virtual int32_t createDeferredElement($String* elementURI, $String* elementName, Object$* type);
	virtual int32_t createDeferredElement($String* elementName);
	virtual int32_t createDeferredElement($String* elementURI, $String* elementName);
	virtual int32_t createDeferredElementDefinition($String* elementName);
	virtual int32_t createDeferredEntity($String* entityName, $String* publicId, $String* systemId, $String* notationName, $String* baseURI);
	virtual int32_t createDeferredEntityReference($String* name, $String* baseURI);
	virtual int32_t createDeferredNotation($String* notationName, $String* publicId, $String* systemId, $String* baseURI);
	virtual int32_t createDeferredProcessingInstruction($String* target, $String* data);
	virtual int32_t createDeferredTextNode($String* data, bool ignorableWhitespace);
	virtual int32_t createNode(int16_t nodeType);
	virtual void ensureCapacity(int32_t chunk);
	virtual $String* getAttribute(int32_t elemIndex, $String* name);
	int32_t getChunkIndex($Array<int32_t, 2>* data, int32_t chunk, int32_t index);
	$String* getChunkValue($Array<::java::lang::Object, 2>* data, int32_t chunk, int32_t index);
	virtual $String* getDeferredEntityBaseURI(int32_t entityIndex);
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual int32_t getLastChild(int32_t nodeIndex);
	virtual int32_t getLastChild(int32_t nodeIndex, bool free);
	virtual bool getNamespacesEnabled();
	virtual int32_t getNodeExtra(int32_t nodeIndex);
	virtual int32_t getNodeExtra(int32_t nodeIndex, bool free);
	virtual int32_t getNodeIndex() override;
	virtual $String* getNodeName(int32_t nodeIndex);
	virtual $String* getNodeName(int32_t nodeIndex, bool free);
	virtual ::com::sun::org::apache::xerces::internal::dom::DeferredNode* getNodeObject(int32_t nodeIndex);
	virtual int16_t getNodeType(int32_t nodeIndex);
	virtual int16_t getNodeType(int32_t nodeIndex, bool free);
	virtual $String* getNodeURI(int32_t nodeIndex);
	virtual $String* getNodeURI(int32_t nodeIndex, bool free);
	virtual $String* getNodeValue(int32_t nodeIndex);
	virtual $String* getNodeValue(int32_t nodeIndex, bool free);
	$String* getNodeValue(int32_t chunk, int32_t index);
	virtual $String* getNodeValueString(int32_t nodeIndex);
	virtual $String* getNodeValueString(int32_t nodeIndex, bool free);
	virtual int32_t getParentNode(int32_t nodeIndex);
	virtual int32_t getParentNode(int32_t nodeIndex, bool free);
	virtual int32_t getPrevSibling(int32_t nodeIndex);
	virtual int32_t getPrevSibling(int32_t nodeIndex, bool free);
	virtual int32_t getRealPrevSibling(int32_t nodeIndex);
	virtual int32_t getRealPrevSibling(int32_t nodeIndex, bool free);
	virtual $Object* getTypeInfo(int32_t nodeIndex);
	virtual int32_t insertBefore(int32_t parentIndex, int32_t newChildIndex, int32_t refChildIndex);
	virtual int32_t lookupElementDefinition($String* elementName);
	virtual $String* lookupNamespaceURI($String* specifiedPrefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual void print();
	static void print($ints* values, int32_t start, int32_t end, int32_t middle, int32_t target);
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::putIdentifier;
	virtual void putIdentifier($String* name, int32_t elementNodeIndex);
	void putIdentifier0($String* idName, ::org::w3c::dom::Element* element);
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::removeEventListener;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setAsLastChild(int32_t parentIndex, int32_t childIndex);
	virtual int32_t setAttributeNode(int32_t elemIndex, int32_t attrIndex);
	int32_t setChunkIndex($Array<int32_t, 2>* data, int32_t value, int32_t chunk, int32_t index);
	$String* setChunkValue($Array<::java::lang::Object, 2>* data, Object$* value, int32_t chunk, int32_t index);
	virtual int32_t setDeferredAttribute(int32_t elementNodeIndex, $String* attrName, $String* attrURI, $String* attrValue, bool specified, bool id, Object$* type);
	virtual void setEntityInfo(int32_t currentEntityDecl, $String* version, $String* encoding);
	virtual void setIdAttribute(int32_t attrIndex);
	virtual void setIdAttributeNode(int32_t elemIndex, int32_t attrIndex);
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::setInputEncoding;
	virtual void setInputEncoding(int32_t currentEntityDecl, $String* value);
	virtual void setInternalSubset(int32_t doctypeIndex, $String* subset);
	virtual void setNamespacesEnabled(bool enable);
	virtual void setNodeValue($String* x) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual void setTypeInfo(int32_t elementNodeIndex, Object$* type);
	using ::com::sun::org::apache::xerces::internal::dom::DocumentImpl::setUserData;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void synchronizeChildren() override;
	void synchronizeChildren(::com::sun::org::apache::xerces::internal::dom::AttrImpl* a, int32_t nodeIndex);
	void synchronizeChildren(::com::sun::org::apache::xerces::internal::dom::ParentNode* p, int32_t nodeIndex);
	virtual void synchronizeData() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x47F985D180D03DE9;
	static const bool DEBUG_PRINT_REF_COUNTS = false;
	static const bool DEBUG_PRINT_TABLES = false;
	static const bool DEBUG_IDS = false;
	static const int32_t CHUNK_SHIFT = 8;
	static const int32_t CHUNK_SIZE = 256; // (1 << CHUNK_SHIFT)
	static const int32_t CHUNK_MASK = 255; // CHUNK_SIZE - 1
	static const int32_t INITIAL_CHUNK_COUNT = 32; // (1 << (13 - CHUNK_SHIFT))
	int32_t fNodeCount = 0;
	$Array<int32_t, 2>* fNodeType = nullptr;
	$Array<::java::lang::Object, 2>* fNodeName = nullptr;
	$Array<::java::lang::Object, 2>* fNodeValue = nullptr;
	$Array<int32_t, 2>* fNodeParent = nullptr;
	$Array<int32_t, 2>* fNodeLastChild = nullptr;
	$Array<int32_t, 2>* fNodePrevSib = nullptr;
	$Array<::java::lang::Object, 2>* fNodeURI = nullptr;
	$Array<int32_t, 2>* fNodeExtra = nullptr;
	int32_t fIdCount = 0;
	$StringArray* fIdName = nullptr;
	$ints* fIdElement = nullptr;
	bool fNamespacesEnabled = false;
	::java::lang::StringBuilder* fBufferStr = nullptr;
	::java::util::List* fStrChunks = nullptr;
	static $ints* INIT_ARRAY;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SHIFT")
#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("DEBUG_IDS")
#pragma pop_macro("DEBUG_PRINT_REF_COUNTS")
#pragma pop_macro("DEBUG_PRINT_TABLES")
#pragma pop_macro("INITIAL_CHUNK_COUNT")
#pragma pop_macro("INIT_ARRAY")

#endif // _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl_h_