#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredAttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredCDATASectionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredCommentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl$IntVector.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl$RefCount.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredElementDefinitionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredEntityImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredEntityReferenceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNotationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredProcessingInstructionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredTextImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef COMMENT_NODE
#undef DEBUG_IDS
#undef DEBUG_PRINT_REF_COUNTS
#undef DEBUG_PRINT_TABLES
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_DEFINITION_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef ID
#undef INITIAL_CHUNK_COUNT
#undef INIT_ARRAY
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef SPECIFIED
#undef TEXT_NODE
#undef TYPE_NODE

using $intArray2 = $Array<int32_t, 2>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredAttrImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredAttrImpl;
using $DeferredAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredAttrNSImpl;
using $DeferredCDATASectionImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredCDATASectionImpl;
using $DeferredCommentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredCommentImpl;
using $DeferredDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl;
using $DeferredDocumentImpl$IntVector = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl$IntVector;
using $DeferredDocumentImpl$RefCount = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl$RefCount;
using $DeferredDocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentTypeImpl;
using $DeferredElementDefinitionImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredElementDefinitionImpl;
using $DeferredElementImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredElementImpl;
using $DeferredElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredElementNSImpl;
using $DeferredEntityImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredEntityImpl;
using $DeferredEntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredEntityReferenceImpl;
using $DeferredNode = ::com::sun::org::apache::xerces::internal::dom::DeferredNode;
using $DeferredNotationImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredNotationImpl;
using $DeferredProcessingInstructionImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredProcessingInstructionImpl;
using $DeferredTextImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredTextImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$CompoundAttribute _DeferredDocumentImpl_MethodAnnotations_createDeferredElement16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _DeferredDocumentImpl_MethodAnnotations_createDeferredElement17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DeferredDocumentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredDocumentImpl, serialVersionUID)},
	{"DEBUG_PRINT_REF_COUNTS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DeferredDocumentImpl, DEBUG_PRINT_REF_COUNTS)},
	{"DEBUG_PRINT_TABLES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DeferredDocumentImpl, DEBUG_PRINT_TABLES)},
	{"DEBUG_IDS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DeferredDocumentImpl, DEBUG_IDS)},
	{"CHUNK_SHIFT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DeferredDocumentImpl, CHUNK_SHIFT)},
	{"CHUNK_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DeferredDocumentImpl, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DeferredDocumentImpl, CHUNK_MASK)},
	{"INITIAL_CHUNK_COUNT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DeferredDocumentImpl, INITIAL_CHUNK_COUNT)},
	{"fNodeCount", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeCount)},
	{"fNodeType", "[[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeType)},
	{"fNodeName", "[[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeName)},
	{"fNodeValue", "[[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeValue)},
	{"fNodeParent", "[[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeParent)},
	{"fNodeLastChild", "[[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeLastChild)},
	{"fNodePrevSib", "[[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodePrevSib)},
	{"fNodeURI", "[[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeURI)},
	{"fNodeExtra", "[[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fNodeExtra)},
	{"fIdCount", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fIdCount)},
	{"fIdName", "[Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fIdName)},
	{"fIdElement", "[I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentImpl, fIdElement)},
	{"fNamespacesEnabled", "Z", nullptr, $PROTECTED, $field(DeferredDocumentImpl, fNamespacesEnabled)},
	{"fBufferStr", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DeferredDocumentImpl, fBufferStr)},
	{"fStrChunks", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL | $TRANSIENT, $field(DeferredDocumentImpl, fStrChunks)},
	{"INIT_ARRAY", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DeferredDocumentImpl, INIT_ARRAY)},
	{}
};

$MethodInfo _DeferredDocumentImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNodeType", "()S", nullptr, $PUBLIC},
	{"*getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $FINAL},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DeferredDocumentImpl, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(DeferredDocumentImpl, init$, void, bool)},
	{"<init>", "(ZZ)V", nullptr, $PUBLIC, $method(DeferredDocumentImpl, init$, void, bool, bool)},
	{"appendChild", "(II)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, appendChild, void, int32_t, int32_t)},
	{"binarySearch", "([IIII)I", nullptr, $PROTECTED | $STATIC, $staticMethod(DeferredDocumentImpl, binarySearch, int32_t, $ints*, int32_t, int32_t, int32_t)},
	{"clearChunkIndex", "([[III)I", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, clearChunkIndex, int32_t, $intArray2*, int32_t, int32_t)},
	{"clearChunkValue", "([[Ljava/lang/Object;II)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, clearChunkValue, $String*, $ObjectArray2*, int32_t, int32_t)},
	{"cloneNode", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, cloneNode, int32_t, int32_t, bool)},
	{"createChunk", "([[II)V", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, createChunk, void, $intArray2*, int32_t)},
	{"createChunk", "([[Ljava/lang/Object;I)V", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, createChunk, void, $ObjectArray2*, int32_t)},
	{"createDeferredAttribute", "(Ljava/lang/String;Ljava/lang/String;Z)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredAttribute, int32_t, $String*, $String*, bool)},
	{"createDeferredAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredAttribute, int32_t, $String*, $String*, $String*, bool)},
	{"createDeferredCDATASection", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredCDATASection, int32_t, $String*)},
	{"createDeferredComment", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredComment, int32_t, $String*)},
	{"createDeferredDocument", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredDocument, int32_t)},
	{"createDeferredDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredDocumentType, int32_t, $String*, $String*, $String*)},
	{"createDeferredElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(DeferredDocumentImpl, createDeferredElement, int32_t, $String*, $String*, Object$*), nullptr, nullptr, _DeferredDocumentImpl_MethodAnnotations_createDeferredElement16},
	{"createDeferredElement", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(DeferredDocumentImpl, createDeferredElement, int32_t, $String*), nullptr, nullptr, _DeferredDocumentImpl_MethodAnnotations_createDeferredElement17},
	{"createDeferredElement", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredElement, int32_t, $String*, $String*)},
	{"createDeferredElementDefinition", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredElementDefinition, int32_t, $String*)},
	{"createDeferredEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredEntity, int32_t, $String*, $String*, $String*, $String*, $String*)},
	{"createDeferredEntityReference", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredEntityReference, int32_t, $String*, $String*)},
	{"createDeferredNotation", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredNotation, int32_t, $String*, $String*, $String*, $String*)},
	{"createDeferredProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredProcessingInstruction, int32_t, $String*, $String*)},
	{"createDeferredTextNode", "(Ljava/lang/String;Z)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, createDeferredTextNode, int32_t, $String*, bool)},
	{"createNode", "(S)I", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentImpl, createNode, int32_t, int16_t)},
	{"ensureCapacity", "(I)V", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentImpl, ensureCapacity, void, int32_t)},
	{"getAttribute", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getAttribute, $String*, int32_t, $String*)},
	{"getChunkIndex", "([[III)I", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, getChunkIndex, int32_t, $intArray2*, int32_t, int32_t)},
	{"getChunkValue", "([[Ljava/lang/Object;II)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, getChunkValue, $String*, $ObjectArray2*, int32_t, int32_t)},
	{"getDeferredEntityBaseURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getDeferredEntityBaseURI, $String*, int32_t)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getImplementation, $DOMImplementation*)},
	{"getLastChild", "(I)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getLastChild, int32_t, int32_t)},
	{"getLastChild", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getLastChild, int32_t, int32_t, bool)},
	{"getNamespacesEnabled", "()Z", nullptr, 0, $virtualMethod(DeferredDocumentImpl, getNamespacesEnabled, bool)},
	{"getNodeExtra", "(I)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeExtra, int32_t, int32_t)},
	{"getNodeExtra", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeExtra, int32_t, int32_t, bool)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeIndex, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeName, $String*, int32_t)},
	{"getNodeName", "(IZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeName, $String*, int32_t, bool)},
	{"getNodeObject", "(I)Lcom/sun/org/apache/xerces/internal/dom/DeferredNode;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeObject, $DeferredNode*, int32_t)},
	{"getNodeType", "(I)S", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeType, int16_t, int32_t)},
	{"getNodeType", "(IZ)S", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeType, int16_t, int32_t, bool)},
	{"getNodeURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeURI, $String*, int32_t)},
	{"getNodeURI", "(IZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeURI, $String*, int32_t, bool)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeValue, $String*, int32_t)},
	{"getNodeValue", "(IZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeValue, $String*, int32_t, bool)},
	{"getNodeValue", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, getNodeValue, $String*, int32_t, int32_t)},
	{"getNodeValueString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeValueString, $String*, int32_t)},
	{"getNodeValueString", "(IZ)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getNodeValueString, $String*, int32_t, bool)},
	{"getParentNode", "(I)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getParentNode, int32_t, int32_t)},
	{"getParentNode", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getParentNode, int32_t, int32_t, bool)},
	{"getPrevSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getPrevSibling, int32_t, int32_t)},
	{"getPrevSibling", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getPrevSibling, int32_t, int32_t, bool)},
	{"getRealPrevSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getRealPrevSibling, int32_t, int32_t)},
	{"getRealPrevSibling", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getRealPrevSibling, int32_t, int32_t, bool)},
	{"getTypeInfo", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, getTypeInfo, $Object*, int32_t)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"insertBefore", "(III)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, insertBefore, int32_t, int32_t, int32_t, int32_t)},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"lookupElementDefinition", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, lookupElementDefinition, int32_t, $String*)},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"print", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, print, void)},
	{"print", "([IIIII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DeferredDocumentImpl, print, void, $ints*, int32_t, int32_t, int32_t, int32_t)},
	{"putIdentifier", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, putIdentifier, void, $String*, int32_t)},
	{"putIdentifier0", "(Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, putIdentifier0, void, $String*, $Element*)},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setAsLastChild", "(II)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setAsLastChild, void, int32_t, int32_t)},
	{"setAttributeNode", "(II)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setAttributeNode, int32_t, int32_t, int32_t)},
	{"setChunkIndex", "([[IIII)I", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, setChunkIndex, int32_t, $intArray2*, int32_t, int32_t, int32_t)},
	{"setChunkValue", "([[Ljava/lang/Object;Ljava/lang/Object;II)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(DeferredDocumentImpl, setChunkValue, $String*, $ObjectArray2*, Object$*, int32_t, int32_t)},
	{"setDeferredAttribute", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLjava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setDeferredAttribute, int32_t, int32_t, $String*, $String*, $String*, bool, bool, Object$*)},
	{"setEntityInfo", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setEntityInfo, void, int32_t, $String*, $String*)},
	{"setIdAttribute", "(I)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setIdAttribute, void, int32_t)},
	{"setIdAttributeNode", "(II)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setIdAttributeNode, void, int32_t, int32_t)},
	{"setInputEncoding", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setInputEncoding, void, int32_t, $String*)},
	{"setInternalSubset", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setInternalSubset, void, int32_t, $String*)},
	{"setNamespacesEnabled", "(Z)V", nullptr, 0, $virtualMethod(DeferredDocumentImpl, setNamespacesEnabled, void, bool)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTypeInfo", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentImpl, setTypeInfo, void, int32_t, Object$*)},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentImpl, synchronizeChildren, void)},
	{"synchronizeChildren", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;I)V", nullptr, $PROTECTED | $FINAL, $method(DeferredDocumentImpl, synchronizeChildren, void, $AttrImpl*, int32_t)},
	{"synchronizeChildren", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;I)V", nullptr, $PROTECTED | $FINAL, $method(DeferredDocumentImpl, synchronizeChildren, void, $ParentNode*, int32_t)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DeferredDocumentImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$IntVector", "com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl", "IntVector", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount", "com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl", "RefCount", $STATIC | $FINAL},
	{}
};

$ClassInfo _DeferredDocumentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl",
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredDocumentImpl_FieldInfo_,
	_DeferredDocumentImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredDocumentImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$IntVector,com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount"
};

$Object* allocate$DeferredDocumentImpl($Class* clazz) {
	return $of($alloc(DeferredDocumentImpl));
}

$Node* DeferredDocumentImpl::cloneNode(bool deep) {
	 return this->$DocumentImpl::cloneNode(deep);
}

$Document* DeferredDocumentImpl::getOwnerDocument() {
	 return this->$DocumentImpl::getOwnerDocument();
}

int16_t DeferredDocumentImpl::getNodeType() {
	 return this->$DocumentImpl::getNodeType();
}

$String* DeferredDocumentImpl::getNodeName() {
	 return this->$DocumentImpl::getNodeName();
}

$Node* DeferredDocumentImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$DocumentImpl::insertBefore(newChild, refChild);
}

$Node* DeferredDocumentImpl::removeChild($Node* oldChild) {
	 return this->$DocumentImpl::removeChild(oldChild);
}

$Node* DeferredDocumentImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$DocumentImpl::replaceChild(newChild, oldChild);
}

$String* DeferredDocumentImpl::getTextContent() {
	 return this->$DocumentImpl::getTextContent();
}

void DeferredDocumentImpl::setTextContent($String* textContent) {
	this->$DocumentImpl::setTextContent(textContent);
}

$Object* DeferredDocumentImpl::getFeature($String* feature, $String* version) {
	 return this->$DocumentImpl::getFeature(feature, version);
}

$String* DeferredDocumentImpl::getBaseURI() {
	 return this->$DocumentImpl::getBaseURI();
}

$Object* DeferredDocumentImpl::clone() {
	 return this->$DocumentImpl::clone();
}

bool DeferredDocumentImpl::hasChildNodes() {
	 return this->$DocumentImpl::hasChildNodes();
}

$NodeList* DeferredDocumentImpl::getChildNodes() {
	 return this->$DocumentImpl::getChildNodes();
}

$Node* DeferredDocumentImpl::getFirstChild() {
	 return this->$DocumentImpl::getFirstChild();
}

$Node* DeferredDocumentImpl::getLastChild() {
	 return this->$DocumentImpl::getLastChild();
}

void DeferredDocumentImpl::normalize() {
	this->$DocumentImpl::normalize();
}

bool DeferredDocumentImpl::isEqualNode($Node* arg) {
	 return this->$DocumentImpl::isEqualNode(arg);
}

$Node* DeferredDocumentImpl::getParentNode() {
	 return this->$DocumentImpl::getParentNode();
}

$Node* DeferredDocumentImpl::getNextSibling() {
	 return this->$DocumentImpl::getNextSibling();
}

$Node* DeferredDocumentImpl::getPreviousSibling() {
	 return this->$DocumentImpl::getPreviousSibling();
}

$String* DeferredDocumentImpl::getNodeValue() {
	 return this->$DocumentImpl::getNodeValue();
}

void DeferredDocumentImpl::setNodeValue($String* x) {
	this->$DocumentImpl::setNodeValue(x);
}

$Node* DeferredDocumentImpl::appendChild($Node* newChild) {
	 return this->$DocumentImpl::appendChild(newChild);
}

$NamedNodeMap* DeferredDocumentImpl::getAttributes() {
	 return this->$DocumentImpl::getAttributes();
}

bool DeferredDocumentImpl::hasAttributes() {
	 return this->$DocumentImpl::hasAttributes();
}

bool DeferredDocumentImpl::isSupported($String* feature, $String* version) {
	 return this->$DocumentImpl::isSupported(feature, version);
}

$String* DeferredDocumentImpl::getNamespaceURI() {
	 return this->$DocumentImpl::getNamespaceURI();
}

$String* DeferredDocumentImpl::getPrefix() {
	 return this->$DocumentImpl::getPrefix();
}

void DeferredDocumentImpl::setPrefix($String* prefix) {
	this->$DocumentImpl::setPrefix(prefix);
}

$String* DeferredDocumentImpl::getLocalName() {
	 return this->$DocumentImpl::getLocalName();
}

int16_t DeferredDocumentImpl::compareDocumentPosition($Node* other) {
	 return this->$DocumentImpl::compareDocumentPosition(other);
}

bool DeferredDocumentImpl::isSameNode($Node* other) {
	 return this->$DocumentImpl::isSameNode(other);
}

bool DeferredDocumentImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$DocumentImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredDocumentImpl::lookupPrefix($String* namespaceURI) {
	 return this->$DocumentImpl::lookupPrefix(namespaceURI);
}

$String* DeferredDocumentImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$DocumentImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredDocumentImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$DocumentImpl::setUserData(key, data, handler);
}

$Object* DeferredDocumentImpl::getUserData($String* key) {
	 return this->$DocumentImpl::getUserData(key);
}

$String* DeferredDocumentImpl::toString() {
	 return this->$DocumentImpl::toString();
}

int32_t DeferredDocumentImpl::hashCode() {
	 return this->$DocumentImpl::hashCode();
}

bool DeferredDocumentImpl::equals(Object$* arg0) {
	 return this->$DocumentImpl::equals(arg0);
}

void DeferredDocumentImpl::finalize() {
	this->$DocumentImpl::finalize();
}

$ints* DeferredDocumentImpl::INIT_ARRAY = nullptr;

void DeferredDocumentImpl::init$() {
	DeferredDocumentImpl::init$(false);
}

void DeferredDocumentImpl::init$(bool namespacesEnabled) {
	DeferredDocumentImpl::init$(namespacesEnabled, false);
}

void DeferredDocumentImpl::init$(bool namespaces, bool grammarAccess) {
	$DocumentImpl::init$(grammarAccess);
	this->fNodeCount = 0;
	this->fNamespacesEnabled = false;
	$set(this, fBufferStr, $new($StringBuilder));
	$set(this, fStrChunks, $new($ArrayList));
	needsSyncData(true);
	needsSyncChildren(true);
	this->fNamespacesEnabled = namespaces;
}

$DOMImplementation* DeferredDocumentImpl::getImplementation() {
	return $DeferredDOMImplementationImpl::getDOMImplementation();
}

bool DeferredDocumentImpl::getNamespacesEnabled() {
	return this->fNamespacesEnabled;
}

void DeferredDocumentImpl::setNamespacesEnabled(bool enable) {
	this->fNamespacesEnabled = enable;
}

int32_t DeferredDocumentImpl::createDeferredDocument() {
	int32_t nodeIndex = createNode($Node::DOCUMENT_NODE);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredDocumentType($String* rootElementName, $String* publicId, $String* systemId) {
	int32_t nodeIndex = createNode($Node::DOCUMENT_TYPE_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, rootElementName, chunk, index);
	setChunkValue(this->fNodeValue, publicId, chunk, index);
	setChunkValue(this->fNodeURI, systemId, chunk, index);
	return nodeIndex;
}

void DeferredDocumentImpl::setInternalSubset(int32_t doctypeIndex, $String* subset) {
	int32_t chunk = $sr(doctypeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(doctypeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t extraDataIndex = createNode($Node::DOCUMENT_TYPE_NODE);
	int32_t echunk = $sr(extraDataIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(extraDataIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkIndex(this->fNodeExtra, extraDataIndex, chunk, index);
	setChunkValue(this->fNodeValue, subset, echunk, eindex);
}

int32_t DeferredDocumentImpl::createDeferredNotation($String* notationName, $String* publicId, $String* systemId, $String* baseURI) {
	int32_t nodeIndex = createNode($Node::NOTATION_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t extraDataIndex = createNode($Node::NOTATION_NODE);
	int32_t echunk = $sr(extraDataIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(extraDataIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, notationName, chunk, index);
	setChunkValue(this->fNodeValue, publicId, chunk, index);
	setChunkValue(this->fNodeURI, systemId, chunk, index);
	setChunkIndex(this->fNodeExtra, extraDataIndex, chunk, index);
	setChunkValue(this->fNodeName, baseURI, echunk, eindex);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredEntity($String* entityName, $String* publicId, $String* systemId, $String* notationName, $String* baseURI) {
	int32_t nodeIndex = createNode($Node::ENTITY_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t extraDataIndex = createNode($Node::ENTITY_NODE);
	int32_t echunk = $sr(extraDataIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(extraDataIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, entityName, chunk, index);
	setChunkValue(this->fNodeValue, publicId, chunk, index);
	setChunkValue(this->fNodeURI, systemId, chunk, index);
	setChunkIndex(this->fNodeExtra, extraDataIndex, chunk, index);
	setChunkValue(this->fNodeName, notationName, echunk, eindex);
	setChunkValue(this->fNodeValue, nullptr, echunk, eindex);
	setChunkValue(this->fNodeURI, nullptr, echunk, eindex);
	int32_t extraDataIndex2 = createNode($Node::ENTITY_NODE);
	int32_t echunk2 = $sr(extraDataIndex2, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex2 = (int32_t)(extraDataIndex2 & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkIndex(this->fNodeExtra, extraDataIndex2, echunk, eindex);
	setChunkValue(this->fNodeName, baseURI, echunk2, eindex2);
	return nodeIndex;
}

$String* DeferredDocumentImpl::getDeferredEntityBaseURI(int32_t entityIndex) {
	if (entityIndex != -1) {
		int32_t extraDataIndex = getNodeExtra(entityIndex, false);
		extraDataIndex = getNodeExtra(extraDataIndex, false);
		return getNodeName(extraDataIndex, false);
	}
	return nullptr;
}

void DeferredDocumentImpl::setEntityInfo(int32_t currentEntityDecl, $String* version, $String* encoding) {
	int32_t eNodeIndex = getNodeExtra(currentEntityDecl, false);
	if (eNodeIndex != -1) {
		int32_t echunk = $sr(eNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		int32_t eindex = (int32_t)(eNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		setChunkValue(this->fNodeValue, version, echunk, eindex);
		setChunkValue(this->fNodeURI, encoding, echunk, eindex);
	}
}

void DeferredDocumentImpl::setTypeInfo(int32_t elementNodeIndex, Object$* type) {
	int32_t elementChunk = $sr(elementNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t elementIndex = (int32_t)(elementNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeValue, type, elementChunk, elementIndex);
}

void DeferredDocumentImpl::setInputEncoding(int32_t currentEntityDecl, $String* value) {
	int32_t nodeIndex = getNodeExtra(currentEntityDecl, false);
	int32_t extraDataIndex = getNodeExtra(nodeIndex, false);
	int32_t echunk = $sr(extraDataIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(extraDataIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeValue, value, echunk, eindex);
}

int32_t DeferredDocumentImpl::createDeferredEntityReference($String* name, $String* baseURI) {
	int32_t nodeIndex = createNode($Node::ENTITY_REFERENCE_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, name, chunk, index);
	setChunkValue(this->fNodeValue, baseURI, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredElement($String* elementURI, $String* elementName, Object$* type) {
	int32_t elementNodeIndex = createNode($Node::ELEMENT_NODE);
	int32_t elementChunk = $sr(elementNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t elementIndex = (int32_t)(elementNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, elementName, elementChunk, elementIndex);
	setChunkValue(this->fNodeURI, elementURI, elementChunk, elementIndex);
	setChunkValue(this->fNodeValue, type, elementChunk, elementIndex);
	return elementNodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredElement($String* elementName) {
	return createDeferredElement(nullptr, elementName);
}

int32_t DeferredDocumentImpl::createDeferredElement($String* elementURI, $String* elementName) {
	int32_t elementNodeIndex = createNode($Node::ELEMENT_NODE);
	int32_t elementChunk = $sr(elementNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t elementIndex = (int32_t)(elementNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, elementName, elementChunk, elementIndex);
	setChunkValue(this->fNodeURI, elementURI, elementChunk, elementIndex);
	return elementNodeIndex;
}

int32_t DeferredDocumentImpl::setDeferredAttribute(int32_t elementNodeIndex, $String* attrName, $String* attrURI, $String* attrValue, bool specified, bool id, Object$* type) {
	int32_t attrNodeIndex = createDeferredAttribute(attrName, attrURI, attrValue, specified);
	int32_t attrChunk = $sr(attrNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t attrIndex = (int32_t)(attrNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkIndex(this->fNodeParent, elementNodeIndex, attrChunk, attrIndex);
	int32_t elementChunk = $sr(elementNodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t elementIndex = (int32_t)(elementNodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t lastAttrNodeIndex = getChunkIndex(this->fNodeExtra, elementChunk, elementIndex);
	if (lastAttrNodeIndex != 0) {
		setChunkIndex(this->fNodePrevSib, lastAttrNodeIndex, attrChunk, attrIndex);
	}
	setChunkIndex(this->fNodeExtra, attrNodeIndex, elementChunk, elementIndex);
	int32_t extra = getChunkIndex(this->fNodeExtra, attrChunk, attrIndex);
	if (id) {
		extra = extra | $NodeImpl::ID;
		setChunkIndex(this->fNodeExtra, extra, attrChunk, attrIndex);
		$var($String, value, getChunkValue(this->fNodeValue, attrChunk, attrIndex));
		putIdentifier(value, elementNodeIndex);
	}
	if (type != nullptr) {
		int32_t extraDataIndex = createNode($DeferredNode::TYPE_NODE);
		int32_t echunk = $sr(extraDataIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		int32_t eindex = (int32_t)(extraDataIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		setChunkIndex(this->fNodeLastChild, extraDataIndex, attrChunk, attrIndex);
		setChunkValue(this->fNodeValue, type, echunk, eindex);
	}
	return attrNodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredAttribute($String* attrName, $String* attrValue, bool specified) {
	return createDeferredAttribute(attrName, nullptr, attrValue, specified);
}

int32_t DeferredDocumentImpl::createDeferredAttribute($String* attrName, $String* attrURI, $String* attrValue, bool specified) {
	int32_t nodeIndex = createNode($NodeImpl::ATTRIBUTE_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, attrName, chunk, index);
	setChunkValue(this->fNodeURI, attrURI, chunk, index);
	setChunkValue(this->fNodeValue, attrValue, chunk, index);
	int32_t extra = specified ? $NodeImpl::SPECIFIED : (int16_t)0;
	setChunkIndex(this->fNodeExtra, extra, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredElementDefinition($String* elementName) {
	int32_t nodeIndex = createNode($NodeImpl::ELEMENT_DEFINITION_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, elementName, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredTextNode($String* data, bool ignorableWhitespace) {
	int32_t nodeIndex = createNode($Node::TEXT_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeValue, data, chunk, index);
	setChunkIndex(this->fNodeExtra, ignorableWhitespace ? 1 : 0, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredCDATASection($String* data) {
	int32_t nodeIndex = createNode($Node::CDATA_SECTION_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeValue, data, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredProcessingInstruction($String* target, $String* data) {
	int32_t nodeIndex = createNode($Node::PROCESSING_INSTRUCTION_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, target, chunk, index);
	setChunkValue(this->fNodeValue, data, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::createDeferredComment($String* data) {
	int32_t nodeIndex = createNode($Node::COMMENT_NODE);
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeValue, data, chunk, index);
	return nodeIndex;
}

int32_t DeferredDocumentImpl::cloneNode(int32_t nodeIndex, bool deep) {
	int32_t nchunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t nindex = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t nodeType = $nc($nc(this->fNodeType)->get(nchunk))->get(nindex);
	int32_t cloneIndex = createNode((int16_t)nodeType);
	int32_t cchunk = $sr(cloneIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t cindex = (int32_t)(cloneIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkValue(this->fNodeName, $nc($nc(this->fNodeName)->get(nchunk))->get(nindex), cchunk, cindex);
	setChunkValue(this->fNodeValue, $nc($nc(this->fNodeValue)->get(nchunk))->get(nindex), cchunk, cindex);
	setChunkValue(this->fNodeURI, $nc($nc(this->fNodeURI)->get(nchunk))->get(nindex), cchunk, cindex);
	int32_t extraIndex = $nc($nc(this->fNodeExtra)->get(nchunk))->get(nindex);
	if (extraIndex != -1) {
		if (nodeType != $Node::ATTRIBUTE_NODE && nodeType != $Node::TEXT_NODE) {
			extraIndex = cloneNode(extraIndex, false);
		}
		setChunkIndex(this->fNodeExtra, extraIndex, cchunk, cindex);
	}
	if (deep) {
		int32_t prevIndex = -1;
		int32_t childIndex = getLastChild(nodeIndex, false);
		while (childIndex != -1) {
			int32_t clonedChildIndex = cloneNode(childIndex, deep);
			insertBefore(cloneIndex, clonedChildIndex, prevIndex);
			prevIndex = clonedChildIndex;
			childIndex = getRealPrevSibling(childIndex, false);
		}
	}
	return cloneIndex;
}

void DeferredDocumentImpl::appendChild(int32_t parentIndex, int32_t childIndex) {
	int32_t pchunk = $sr(parentIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t pindex = (int32_t)(parentIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t cchunk = $sr(childIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t cindex = (int32_t)(childIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkIndex(this->fNodeParent, parentIndex, cchunk, cindex);
	int32_t olast = getChunkIndex(this->fNodeLastChild, pchunk, pindex);
	setChunkIndex(this->fNodePrevSib, olast, cchunk, cindex);
	setChunkIndex(this->fNodeLastChild, childIndex, pchunk, pindex);
}

int32_t DeferredDocumentImpl::setAttributeNode(int32_t elemIndex, int32_t attrIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t echunk = $sr(elemIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(elemIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t achunk = $sr(attrIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t aindex = (int32_t)(attrIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	$var($String, attrName, getChunkValue(this->fNodeName, achunk, aindex));
	int32_t oldAttrIndex = getChunkIndex(this->fNodeExtra, echunk, eindex);
	int32_t nextIndex = -1;
	int32_t oachunk = -1;
	int32_t oaindex = -1;
	while (oldAttrIndex != -1) {
		oachunk = $sr(oldAttrIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		oaindex = (int32_t)(oldAttrIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		$var($String, oldAttrName, getChunkValue(this->fNodeName, oachunk, oaindex));
		if ($nc(oldAttrName)->equals(attrName)) {
			break;
		}
		nextIndex = oldAttrIndex;
		oldAttrIndex = getChunkIndex(this->fNodePrevSib, oachunk, oaindex);
	}
	if (oldAttrIndex != -1) {
		int32_t prevIndex = getChunkIndex(this->fNodePrevSib, oachunk, oaindex);
		if (nextIndex == -1) {
			setChunkIndex(this->fNodeExtra, prevIndex, echunk, eindex);
		} else {
			int32_t pchunk = $sr(nextIndex, DeferredDocumentImpl::CHUNK_SHIFT);
			int32_t pindex = (int32_t)(nextIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
			setChunkIndex(this->fNodePrevSib, prevIndex, pchunk, pindex);
		}
		clearChunkIndex(this->fNodeType, oachunk, oaindex);
		clearChunkValue(this->fNodeName, oachunk, oaindex);
		clearChunkValue(this->fNodeValue, oachunk, oaindex);
		clearChunkIndex(this->fNodeParent, oachunk, oaindex);
		clearChunkIndex(this->fNodePrevSib, oachunk, oaindex);
		int32_t attrTextIndex = clearChunkIndex(this->fNodeLastChild, oachunk, oaindex);
		int32_t atchunk = $sr(attrTextIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		int32_t atindex = (int32_t)(attrTextIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		clearChunkIndex(this->fNodeType, atchunk, atindex);
		clearChunkValue(this->fNodeValue, atchunk, atindex);
		clearChunkIndex(this->fNodeParent, atchunk, atindex);
		clearChunkIndex(this->fNodeLastChild, atchunk, atindex);
	}
	int32_t prevIndex = getChunkIndex(this->fNodeExtra, echunk, eindex);
	setChunkIndex(this->fNodeExtra, attrIndex, echunk, eindex);
	setChunkIndex(this->fNodePrevSib, prevIndex, achunk, aindex);
	return oldAttrIndex;
}

void DeferredDocumentImpl::setIdAttributeNode(int32_t elemIndex, int32_t attrIndex) {
	int32_t chunk = $sr(attrIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(attrIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t extra = getChunkIndex(this->fNodeExtra, chunk, index);
	extra = extra | $NodeImpl::ID;
	setChunkIndex(this->fNodeExtra, extra, chunk, index);
	$var($String, value, getChunkValue(this->fNodeValue, chunk, index));
	putIdentifier(value, elemIndex);
}

void DeferredDocumentImpl::setIdAttribute(int32_t attrIndex) {
	int32_t chunk = $sr(attrIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(attrIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t extra = getChunkIndex(this->fNodeExtra, chunk, index);
	extra = extra | $NodeImpl::ID;
	setChunkIndex(this->fNodeExtra, extra, chunk, index);
}

int32_t DeferredDocumentImpl::insertBefore(int32_t parentIndex, int32_t newChildIndex, int32_t refChildIndex) {
	if (refChildIndex == -1) {
		appendChild(parentIndex, newChildIndex);
		return newChildIndex;
	}
	int32_t nchunk = $sr(newChildIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t nindex = (int32_t)(newChildIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t rchunk = $sr(refChildIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t rindex = (int32_t)(refChildIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t previousIndex = getChunkIndex(this->fNodePrevSib, rchunk, rindex);
	setChunkIndex(this->fNodePrevSib, newChildIndex, rchunk, rindex);
	setChunkIndex(this->fNodePrevSib, previousIndex, nchunk, nindex);
	return newChildIndex;
}

void DeferredDocumentImpl::setAsLastChild(int32_t parentIndex, int32_t childIndex) {
	int32_t pchunk = $sr(parentIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t pindex = (int32_t)(parentIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	setChunkIndex(this->fNodeLastChild, childIndex, pchunk, pindex);
}

int32_t DeferredDocumentImpl::getParentNode(int32_t nodeIndex) {
	return getParentNode(nodeIndex, false);
}

int32_t DeferredDocumentImpl::getParentNode(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return -1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkIndex(this->fNodeParent, chunk, index) : getChunkIndex(this->fNodeParent, chunk, index);
}

int32_t DeferredDocumentImpl::getLastChild(int32_t nodeIndex) {
	return getLastChild(nodeIndex, true);
}

int32_t DeferredDocumentImpl::getLastChild(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return -1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkIndex(this->fNodeLastChild, chunk, index) : getChunkIndex(this->fNodeLastChild, chunk, index);
}

int32_t DeferredDocumentImpl::getPrevSibling(int32_t nodeIndex) {
	return getPrevSibling(nodeIndex, true);
}

int32_t DeferredDocumentImpl::getPrevSibling(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return -1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t type = getChunkIndex(this->fNodeType, chunk, index);
	if (type == $Node::TEXT_NODE) {
		do {
			nodeIndex = getChunkIndex(this->fNodePrevSib, chunk, index);
			if (nodeIndex == -1) {
				break;
			}
			chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
			index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
			type = getChunkIndex(this->fNodeType, chunk, index);
		} while (type == $Node::TEXT_NODE);
	} else {
		nodeIndex = getChunkIndex(this->fNodePrevSib, chunk, index);
	}
	return nodeIndex;
}

int32_t DeferredDocumentImpl::getRealPrevSibling(int32_t nodeIndex) {
	return getRealPrevSibling(nodeIndex, true);
}

int32_t DeferredDocumentImpl::getRealPrevSibling(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return -1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkIndex(this->fNodePrevSib, chunk, index) : getChunkIndex(this->fNodePrevSib, chunk, index);
}

int32_t DeferredDocumentImpl::lookupElementDefinition($String* elementName) {
	if (this->fNodeCount > 1) {
		int32_t docTypeIndex = -1;
		int32_t nchunk = 0;
		int32_t nindex = 0;
		for (int32_t index = getChunkIndex(this->fNodeLastChild, nchunk, nindex); index != -1; index = getChunkIndex(this->fNodePrevSib, nchunk, nindex)) {
			nchunk = $sr(index, DeferredDocumentImpl::CHUNK_SHIFT);
			nindex = (int32_t)(index & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
			if (getChunkIndex(this->fNodeType, nchunk, nindex) == $Node::DOCUMENT_TYPE_NODE) {
				docTypeIndex = index;
				break;
			}
		}
		if (docTypeIndex == -1) {
			return -1;
		}
		nchunk = $sr(docTypeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		nindex = (int32_t)(docTypeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		for (int32_t index = getChunkIndex(this->fNodeLastChild, nchunk, nindex); index != -1; index = getChunkIndex(this->fNodePrevSib, nchunk, nindex)) {
			nchunk = $sr(index, DeferredDocumentImpl::CHUNK_SHIFT);
			nindex = (int32_t)(index & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
			bool var$0 = getChunkIndex(this->fNodeType, nchunk, nindex) == $NodeImpl::ELEMENT_DEFINITION_NODE;
			if (var$0 && getChunkValue(this->fNodeName, nchunk, nindex) == elementName) {
				return index;
			}
		}
	}
	return -1;
}

$DeferredNode* DeferredDocumentImpl::getNodeObject(int32_t nodeIndex) {
	$useLocalCurrentObjectStackCache();
	if (nodeIndex == -1) {
		return nullptr;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t type = getChunkIndex(this->fNodeType, chunk, index);
	if (type != $Node::TEXT_NODE && type != $Node::CDATA_SECTION_NODE) {
		clearChunkIndex(this->fNodeType, chunk, index);
	}
	$var($DeferredNode, node, nullptr);
	switch (type) {
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if (this->fNamespacesEnabled) {
					$assign(node, $new($DeferredAttrNSImpl, this, nodeIndex));
				} else {
					$assign(node, $new($DeferredAttrImpl, this, nodeIndex));
				}
				break;
			}
		}
	case $Node::CDATA_SECTION_NODE:
		{
			{
				$assign(node, $new($DeferredCDATASectionImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::COMMENT_NODE:
		{
			{
				$assign(node, $new($DeferredCommentImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::DOCUMENT_NODE:
		{
			{
				$assign(node, this);
				break;
			}
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				$assign(node, $new($DeferredDocumentTypeImpl, this, nodeIndex));
				$set(this, docType, $cast($DocumentTypeImpl, node));
				break;
			}
		}
	case $Node::ELEMENT_NODE:
		{
			{
				if (this->fNamespacesEnabled) {
					$assign(node, $new($DeferredElementNSImpl, this, nodeIndex));
				} else {
					$assign(node, $new($DeferredElementImpl, this, nodeIndex));
				}
				if (this->fIdElement != nullptr) {
					int32_t idIndex = binarySearch(this->fIdElement, 0, this->fIdCount - 1, nodeIndex);
					while (idIndex != -1) {
						$var($String, name, $nc(this->fIdName)->get(idIndex));
						if (name != nullptr) {
							putIdentifier0(name, $cast($Element, node));
							$nc(this->fIdName)->set(idIndex, nullptr);
						}
						if (idIndex + 1 < this->fIdCount && $nc(this->fIdElement)->get(idIndex + 1) == nodeIndex) {
							++idIndex;
						} else {
							idIndex = -1;
						}
					}
				}
				break;
			}
		}
	case $Node::ENTITY_NODE:
		{
			{
				$assign(node, $new($DeferredEntityImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			{
				$assign(node, $new($DeferredEntityReferenceImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::NOTATION_NODE:
		{
			{
				$assign(node, $new($DeferredNotationImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			{
				$assign(node, $new($DeferredProcessingInstructionImpl, this, nodeIndex));
				break;
			}
		}
	case $Node::TEXT_NODE:
		{
			{
				$assign(node, $new($DeferredTextImpl, this, nodeIndex));
				break;
			}
		}
	case $NodeImpl::ELEMENT_DEFINITION_NODE:
		{
			{
				$assign(node, $new($DeferredElementDefinitionImpl, this, nodeIndex));
				break;
			}
		}
	default:
		{
			{
				$throwNew($IllegalArgumentException, $$str({"type: "_s, $$str(type)}));
			}
		}
	}
	if (node != nullptr) {
		return node;
	}
	$throwNew($IllegalArgumentException);
}

$String* DeferredDocumentImpl::getNodeName(int32_t nodeIndex) {
	return getNodeName(nodeIndex, true);
}

$String* DeferredDocumentImpl::getNodeName(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return nullptr;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkValue(this->fNodeName, chunk, index) : getChunkValue(this->fNodeName, chunk, index);
}

$String* DeferredDocumentImpl::getNodeValueString(int32_t nodeIndex) {
	return getNodeValueString(nodeIndex, true);
}

$String* DeferredDocumentImpl::getNodeValueString(int32_t nodeIndex, bool free) {
	$useLocalCurrentObjectStackCache();
	if (nodeIndex == -1) {
		return nullptr;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	$var($String, value, free ? clearChunkValue(this->fNodeValue, chunk, index) : getChunkValue(this->fNodeValue, chunk, index));
	if (value == nullptr) {
		return nullptr;
	}
	int32_t type = getChunkIndex(this->fNodeType, chunk, index);
	if (type == $Node::TEXT_NODE) {
		int32_t prevSib = getRealPrevSibling(nodeIndex);
		if (prevSib != -1 && getNodeType(prevSib, false) == $Node::TEXT_NODE) {
			$nc(this->fStrChunks)->add(value);
			do {
				chunk = $sr(prevSib, DeferredDocumentImpl::CHUNK_SHIFT);
				index = (int32_t)(prevSib & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
				$assign(value, getChunkValue(this->fNodeValue, chunk, index));
				$nc(this->fStrChunks)->add(value);
				prevSib = getChunkIndex(this->fNodePrevSib, chunk, index);
				if (prevSib == -1) {
					break;
				}
			} while (getNodeType(prevSib, false) == $Node::TEXT_NODE);
			int32_t chunkCount = $nc(this->fStrChunks)->size();
			for (int32_t i = chunkCount - 1; i >= 0; --i) {
				$nc(this->fBufferStr)->append($cast($String, $($nc(this->fStrChunks)->get(i))));
			}
			$assign(value, $nc(this->fBufferStr)->toString());
			$nc(this->fStrChunks)->clear();
			$nc(this->fBufferStr)->setLength(0);
			return value;
		}
	} else if (type == $Node::CDATA_SECTION_NODE) {
		int32_t child = getLastChild(nodeIndex, false);
		if (child != -1) {
			$nc(this->fBufferStr)->append(value);
			while (child != -1) {
				chunk = $sr(child, DeferredDocumentImpl::CHUNK_SHIFT);
				index = (int32_t)(child & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
				$assign(value, getChunkValue(this->fNodeValue, chunk, index));
				$nc(this->fStrChunks)->add(value);
				child = getChunkIndex(this->fNodePrevSib, chunk, index);
			}
			for (int32_t i = $nc(this->fStrChunks)->size() - 1; i >= 0; --i) {
				$nc(this->fBufferStr)->append($cast($String, $($nc(this->fStrChunks)->get(i))));
			}
			$assign(value, $nc(this->fBufferStr)->toString());
			$nc(this->fStrChunks)->clear();
			$nc(this->fBufferStr)->setLength(0);
			return value;
		}
	}
	return value;
}

$String* DeferredDocumentImpl::getNodeValue(int32_t nodeIndex) {
	return getNodeValue(nodeIndex, true);
}

$Object* DeferredDocumentImpl::getTypeInfo(int32_t nodeIndex) {
	$useLocalCurrentObjectStackCache();
	if (nodeIndex == -1) {
		return $of(nullptr);
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	$var($Object, value, $nc(this->fNodeValue)->get(chunk) != nullptr ? $nc($nc(this->fNodeValue)->get(chunk))->get(index) : ($Object*)nullptr);
	if (value != nullptr) {
		$nc($nc(this->fNodeValue)->get(chunk))->set(index, nullptr);
		$var($DeferredDocumentImpl$RefCount, c, $cast($DeferredDocumentImpl$RefCount, $nc($nc(this->fNodeValue)->get(chunk))->get(DeferredDocumentImpl::CHUNK_SIZE)));
		--$nc(c)->fCount;
		if (c->fCount == 0) {
			$nc(this->fNodeValue)->set(chunk, nullptr);
		}
	}
	return $of(value);
}

$String* DeferredDocumentImpl::getNodeValue(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return nullptr;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkValue(this->fNodeValue, chunk, index) : getChunkValue(this->fNodeValue, chunk, index);
}

int32_t DeferredDocumentImpl::getNodeExtra(int32_t nodeIndex) {
	return getNodeExtra(nodeIndex, true);
}

int32_t DeferredDocumentImpl::getNodeExtra(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return -1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkIndex(this->fNodeExtra, chunk, index) : getChunkIndex(this->fNodeExtra, chunk, index);
}

int16_t DeferredDocumentImpl::getNodeType(int32_t nodeIndex) {
	return getNodeType(nodeIndex, true);
}

int16_t DeferredDocumentImpl::getNodeType(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return (int16_t)-1;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? (int16_t)clearChunkIndex(this->fNodeType, chunk, index) : (int16_t)getChunkIndex(this->fNodeType, chunk, index);
}

$String* DeferredDocumentImpl::getAttribute(int32_t elemIndex, $String* name) {
	if (elemIndex == -1 || name == nullptr) {
		return nullptr;
	}
	int32_t echunk = $sr(elemIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t eindex = (int32_t)(elemIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	int32_t attrIndex = getChunkIndex(this->fNodeExtra, echunk, eindex);
	while (attrIndex != -1) {
		int32_t achunk = $sr(attrIndex, DeferredDocumentImpl::CHUNK_SHIFT);
		int32_t aindex = (int32_t)(attrIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
		if (getChunkValue(this->fNodeName, achunk, aindex) == name) {
			return getChunkValue(this->fNodeValue, achunk, aindex);
		}
		attrIndex = getChunkIndex(this->fNodePrevSib, achunk, aindex);
	}
	return nullptr;
}

$String* DeferredDocumentImpl::getNodeURI(int32_t nodeIndex) {
	return getNodeURI(nodeIndex, true);
}

$String* DeferredDocumentImpl::getNodeURI(int32_t nodeIndex, bool free) {
	if (nodeIndex == -1) {
		return nullptr;
	}
	int32_t chunk = $sr(nodeIndex, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(nodeIndex & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	return free ? clearChunkValue(this->fNodeURI, chunk, index) : getChunkValue(this->fNodeURI, chunk, index);
}

void DeferredDocumentImpl::putIdentifier($String* name, int32_t elementNodeIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->fIdName == nullptr) {
		$set(this, fIdName, $new($StringArray, 64));
		$set(this, fIdElement, $new($ints, 64));
	}
	if (this->fIdCount == $nc(this->fIdName)->length) {
		$var($StringArray, idName, $new($StringArray, this->fIdCount * 2));
		$System::arraycopy(this->fIdName, 0, idName, 0, this->fIdCount);
		$set(this, fIdName, idName);
		$var($ints, idElement, $new($ints, idName->length));
		$System::arraycopy(this->fIdElement, 0, idElement, 0, this->fIdCount);
		$set(this, fIdElement, idElement);
	}
	$nc(this->fIdName)->set(this->fIdCount, name);
	$nc(this->fIdElement)->set(this->fIdCount, elementNodeIndex);
	++this->fIdCount;
}

void DeferredDocumentImpl::print() {
}

int32_t DeferredDocumentImpl::getNodeIndex() {
	return 0;
}

void DeferredDocumentImpl::synchronizeData() {
	$useLocalCurrentObjectStackCache();
	needsSyncData(false);
	if (this->fIdElement != nullptr) {
		$var($DeferredDocumentImpl$IntVector, path, $new($DeferredDocumentImpl$IntVector));
		for (int32_t i = 0; i < this->fIdCount; ++i) {
			int32_t elementNodeIndex = $nc(this->fIdElement)->get(i);
			$var($String, idName, $nc(this->fIdName)->get(i));
			if (idName == nullptr) {
				continue;
			}
			path->removeAllElements();
			int32_t index = elementNodeIndex;
			do {
				path->addElement(index);
				int32_t pchunk = $sr(index, DeferredDocumentImpl::CHUNK_SHIFT);
				int32_t pindex = (int32_t)(index & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
				index = getChunkIndex(this->fNodeParent, pchunk, pindex);
			} while (index != -1);
			$var($Node, place, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(static_cast<$DocumentImpl*>(this)))))));
			for (int32_t j = path->size() - 2; j >= 0; --j) {
				index = path->elementAt(j);
				$var($Node, child, $nc(place)->getLastChild());
				while (child != nullptr) {
					if ($instanceOf($DeferredNode, child)) {
						int32_t nodeIndex = $nc(($cast($DeferredNode, child)))->getNodeIndex();
						if (nodeIndex == index) {
							$assign(place, child);
							break;
						}
					}
					$assign(child, child->getPreviousSibling());
				}
			}
			$var($Element, element, $cast($Element, place));
			putIdentifier0(idName, element);
			$nc(this->fIdName)->set(i, nullptr);
			while (i + 1 < this->fIdCount && $nc(this->fIdElement)->get(i + 1) == elementNodeIndex) {
				$assign(idName, $nc(this->fIdName)->get(++i));
				if (idName == nullptr) {
					continue;
				}
				putIdentifier0(idName, element);
			}
		}
	}
}

void DeferredDocumentImpl::synchronizeChildren() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
		if (!needsSyncChildren()) {
			return;
		}
	}
	bool orig = this->mutationEvents;
	this->mutationEvents = false;
	needsSyncChildren(false);
	getNodeType(0);
	$var($ChildNode, first, nullptr);
	$var($ChildNode, last, nullptr);
	for (int32_t index = getLastChild(0); index != -1; index = getPrevSibling(index)) {
		$var($ChildNode, node, $cast($ChildNode, getNodeObject(index)));
		if (last == nullptr) {
			$assign(last, node);
		} else {
			$set($nc(first), previousSibling$, node);
		}
		$set($nc(node), ownerNode, this);
		node->isOwned(true);
		$set(node, nextSibling, first);
		$assign(first, node);
		int32_t type = node->getNodeType();
		if (type == $Node::ELEMENT_NODE) {
			$set(this, docElement, $cast($ElementImpl, node));
		} else if (type == $Node::DOCUMENT_TYPE_NODE) {
			$set(this, docType, $cast($DocumentTypeImpl, node));
		}
	}
	if (first != nullptr) {
		$set(this, firstChild, first);
		first->isFirstChild(true);
		lastChild(last);
	}
	this->mutationEvents = orig;
}

void DeferredDocumentImpl::synchronizeChildren($AttrImpl* a, int32_t nodeIndex) {
	$useLocalCurrentObjectStackCache();
	bool orig = getMutationEvents();
	setMutationEvents(false);
	$nc(a)->needsSyncChildren(false);
	int32_t last = getLastChild(nodeIndex);
	int32_t prev = getPrevSibling(last);
	if (prev == -1) {
		$set(a, value, getNodeValueString(nodeIndex));
		a->hasStringValue(true);
	} else {
		$var($ChildNode, firstNode, nullptr);
		$var($ChildNode, lastNode, nullptr);
		for (int32_t index = last; index != -1; index = getPrevSibling(index)) {
			$var($ChildNode, node, $cast($ChildNode, getNodeObject(index)));
			if (lastNode == nullptr) {
				$assign(lastNode, node);
			} else {
				$set($nc(firstNode), previousSibling$, node);
			}
			$set($nc(node), ownerNode, a);
			node->isOwned(true);
			$set(node, nextSibling, firstNode);
			$assign(firstNode, node);
		}
		if (lastNode != nullptr) {
			$set(a, value, firstNode);
			$nc(firstNode)->isFirstChild(true);
			a->lastChild(lastNode);
		}
		a->hasStringValue(false);
	}
	setMutationEvents(orig);
}

void DeferredDocumentImpl::synchronizeChildren($ParentNode* p, int32_t nodeIndex) {
	$useLocalCurrentObjectStackCache();
	bool orig = getMutationEvents();
	setMutationEvents(false);
	$nc(p)->needsSyncChildren(false);
	$var($ChildNode, firstNode, nullptr);
	$var($ChildNode, lastNode, nullptr);
	for (int32_t index = getLastChild(nodeIndex); index != -1; index = getPrevSibling(index)) {
		$var($ChildNode, node, $cast($ChildNode, getNodeObject(index)));
		if (lastNode == nullptr) {
			$assign(lastNode, node);
		} else {
			$set($nc(firstNode), previousSibling$, node);
		}
		$set($nc(node), ownerNode, p);
		node->isOwned(true);
		$set(node, nextSibling, firstNode);
		$assign(firstNode, node);
	}
	if (lastNode != nullptr) {
		$set(p, firstChild, firstNode);
		$nc(firstNode)->isFirstChild(true);
		p->lastChild(lastNode);
	}
	setMutationEvents(orig);
}

void DeferredDocumentImpl::ensureCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (this->fNodeType == nullptr) {
		$set(this, fNodeType, $new($intArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeName, $new($ObjectArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeValue, $new($ObjectArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeParent, $new($intArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeLastChild, $new($intArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodePrevSib, $new($intArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeURI, $new($ObjectArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
		$set(this, fNodeExtra, $new($intArray2, DeferredDocumentImpl::INITIAL_CHUNK_COUNT));
	} else if ($nc(this->fNodeType)->length <= chunk) {
		int32_t newsize = chunk * 2;
		$var($intArray2, newArray, $new($intArray2, newsize));
		$System::arraycopy(this->fNodeType, 0, newArray, 0, chunk);
		$set(this, fNodeType, newArray);
		$var($ObjectArray2, newStrArray, $new($ObjectArray2, newsize));
		$System::arraycopy(this->fNodeName, 0, newStrArray, 0, chunk);
		$set(this, fNodeName, newStrArray);
		$assign(newStrArray, $new($ObjectArray2, newsize));
		$System::arraycopy(this->fNodeValue, 0, newStrArray, 0, chunk);
		$set(this, fNodeValue, newStrArray);
		$assign(newArray, $new($intArray2, newsize));
		$System::arraycopy(this->fNodeParent, 0, newArray, 0, chunk);
		$set(this, fNodeParent, newArray);
		$assign(newArray, $new($intArray2, newsize));
		$System::arraycopy(this->fNodeLastChild, 0, newArray, 0, chunk);
		$set(this, fNodeLastChild, newArray);
		$assign(newArray, $new($intArray2, newsize));
		$System::arraycopy(this->fNodePrevSib, 0, newArray, 0, chunk);
		$set(this, fNodePrevSib, newArray);
		$assign(newStrArray, $new($ObjectArray2, newsize));
		$System::arraycopy(this->fNodeURI, 0, newStrArray, 0, chunk);
		$set(this, fNodeURI, newStrArray);
		$assign(newArray, $new($intArray2, newsize));
		$System::arraycopy(this->fNodeExtra, 0, newArray, 0, chunk);
		$set(this, fNodeExtra, newArray);
	} else if ($nc(this->fNodeType)->get(chunk) != nullptr) {
		return;
	}
	createChunk(this->fNodeType, chunk);
	createChunk(this->fNodeName, chunk);
	createChunk(this->fNodeValue, chunk);
	createChunk(this->fNodeParent, chunk);
	createChunk(this->fNodeLastChild, chunk);
	createChunk(this->fNodePrevSib, chunk);
	createChunk(this->fNodeURI, chunk);
	createChunk(this->fNodeExtra, chunk);
	return;
}

int32_t DeferredDocumentImpl::createNode(int16_t nodeType) {
	int32_t chunk = $sr(this->fNodeCount, DeferredDocumentImpl::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fNodeCount & (uint32_t)DeferredDocumentImpl::CHUNK_MASK);
	ensureCapacity(chunk);
	setChunkIndex(this->fNodeType, nodeType, chunk, index);
	return this->fNodeCount++;
}

int32_t DeferredDocumentImpl::binarySearch($ints* values, int32_t start, int32_t end, int32_t target) {
	$init(DeferredDocumentImpl);
	while (start <= end) {
		int32_t middle = (int32_t)((uint32_t)(start + end) >> 1);
		int32_t value = $nc(values)->get(middle);
		if (value == target) {
			while (middle > 0 && values->get(middle - 1) == target) {
				--middle;
			}
			return middle;
		}
		if (value > target) {
			end = middle - 1;
		} else {
			start = middle + 1;
		}
	}
	return -1;
}

void DeferredDocumentImpl::createChunk($intArray2* data, int32_t chunk) {
	$nc(data)->set(chunk, $$new($ints, DeferredDocumentImpl::CHUNK_SIZE + 1));
	$System::arraycopy(DeferredDocumentImpl::INIT_ARRAY, 0, data->get(chunk), 0, DeferredDocumentImpl::CHUNK_SIZE);
}

void DeferredDocumentImpl::createChunk($ObjectArray2* data, int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	$nc(data)->set(chunk, $$new($ObjectArray, DeferredDocumentImpl::CHUNK_SIZE + 1));
	$nc(data->get(chunk))->set(DeferredDocumentImpl::CHUNK_SIZE, $$new($DeferredDocumentImpl$RefCount));
}

int32_t DeferredDocumentImpl::setChunkIndex($intArray2* data, int32_t value, int32_t chunk, int32_t index) {
	if (value == -1) {
		return clearChunkIndex(data, chunk, index);
	}
	$var($ints, dataChunk, $nc(data)->get(chunk));
	if (dataChunk == nullptr) {
		createChunk(data, chunk);
		$assign(dataChunk, data->get(chunk));
	}
	int32_t ovalue = $nc(dataChunk)->get(index);
	if (ovalue == -1) {
		++(*dataChunk)[DeferredDocumentImpl::CHUNK_SIZE];
	}
	dataChunk->set(index, value);
	return ovalue;
}

$String* DeferredDocumentImpl::setChunkValue($ObjectArray2* data, Object$* value, int32_t chunk, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return clearChunkValue(data, chunk, index);
	}
	$var($ObjectArray, dataChunk, $nc(data)->get(chunk));
	if (dataChunk == nullptr) {
		createChunk(data, chunk);
		$assign(dataChunk, data->get(chunk));
	}
	$var($String, ovalue, $cast($String, $nc(dataChunk)->get(index)));
	if (ovalue == nullptr) {
		$var($DeferredDocumentImpl$RefCount, c, $cast($DeferredDocumentImpl$RefCount, dataChunk->get(DeferredDocumentImpl::CHUNK_SIZE)));
		++$nc(c)->fCount;
	}
	dataChunk->set(index, value);
	return ovalue;
}

int32_t DeferredDocumentImpl::getChunkIndex($intArray2* data, int32_t chunk, int32_t index) {
	return $nc(data)->get(chunk) != nullptr ? $nc($nc(data)->get(chunk))->get(index) : -1;
}

$String* DeferredDocumentImpl::getChunkValue($ObjectArray2* data, int32_t chunk, int32_t index) {
	return $nc(data)->get(chunk) != nullptr ? $cast($String, $nc($nc(data)->get(chunk))->get(index)) : ($String*)nullptr;
}

$String* DeferredDocumentImpl::getNodeValue(int32_t chunk, int32_t index) {
	$var($Object0, data, $nc($nc(this->fNodeValue)->get(chunk))->get(index));
	if (data == nullptr) {
		return nullptr;
	} else if ($instanceOf($String, data)) {
		return $cast($String, data);
	} else {
		return $nc($of(data))->toString();
	}
}

int32_t DeferredDocumentImpl::clearChunkIndex($intArray2* data, int32_t chunk, int32_t index) {
	int32_t value = $nc(data)->get(chunk) != nullptr ? $nc($nc(data)->get(chunk))->get(index) : -1;
	if (value != -1) {
		--(*$nc(data->get(chunk)))[DeferredDocumentImpl::CHUNK_SIZE];
		$nc(data->get(chunk))->set(index, -1);
		if ($nc(data->get(chunk))->get(DeferredDocumentImpl::CHUNK_SIZE) == 0) {
			data->set(chunk, nullptr);
		}
	}
	return value;
}

$String* DeferredDocumentImpl::clearChunkValue($ObjectArray2* data, int32_t chunk, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, $nc(data)->get(chunk) != nullptr ? $cast($String, $nc($nc(data)->get(chunk))->get(index)) : ($String*)nullptr);
	if (value != nullptr) {
		$nc(data->get(chunk))->set(index, nullptr);
		$var($DeferredDocumentImpl$RefCount, c, $cast($DeferredDocumentImpl$RefCount, $nc(data->get(chunk))->get(DeferredDocumentImpl::CHUNK_SIZE)));
		--$nc(c)->fCount;
		if (c->fCount == 0) {
			data->set(chunk, nullptr);
		}
	}
	return value;
}

void DeferredDocumentImpl::putIdentifier0($String* idName, $Element* element) {
	if (this->identifiers == nullptr) {
		$set(this, identifiers, $new($HashMap));
	}
	$nc(this->identifiers)->put(idName, element);
}

void DeferredDocumentImpl::print($ints* values, int32_t start, int32_t end, int32_t middle, int32_t target) {
	$init(DeferredDocumentImpl);
}

void clinit$DeferredDocumentImpl($Class* class$) {
	$assignStatic(DeferredDocumentImpl::INIT_ARRAY, $new($ints, DeferredDocumentImpl::CHUNK_SIZE + 1));
	{
		for (int32_t i = 0; i < DeferredDocumentImpl::CHUNK_SIZE; ++i) {
			$nc(DeferredDocumentImpl::INIT_ARRAY)->set(i, -1);
		}
	}
}

DeferredDocumentImpl::DeferredDocumentImpl() {
}

$Class* DeferredDocumentImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredDocumentImpl, name, initialize, &_DeferredDocumentImpl_ClassInfo_, clinit$DeferredDocumentImpl, allocate$DeferredDocumentImpl);
	return class$;
}

$Class* DeferredDocumentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com