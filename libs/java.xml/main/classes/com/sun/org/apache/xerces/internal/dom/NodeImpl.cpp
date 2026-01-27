#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <org/w3c/dom/events/Event.h>
#include <org/w3c/dom/events/EventListener.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_POSITION_CONTAINED_BY
#undef DOCUMENT_POSITION_CONTAINS
#undef DOCUMENT_POSITION_DISCONNECTED
#undef DOCUMENT_POSITION_FOLLOWING
#undef DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC
#undef DOCUMENT_POSITION_PRECEDING
#undef DOCUMENT_TYPE_NODE
#undef DOM_DOMAIN
#undef ELEMENT_DEFINITION_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef FIRSTCHILD
#undef HASSTRING
#undef HIERARCHY_REQUEST_ERR
#undef ID
#undef IGNORABLEWS
#undef NAMESPACE_ERR
#undef NODE_CLONED
#undef NORMALIZED
#undef NOTATION_NODE
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef OWNED
#undef READONLY
#undef SPECIFIED
#undef SYNCCHILDREN
#undef SYNCDATA
#undef TREE_POSITION_ANCESTOR
#undef TREE_POSITION_DESCENDANT
#undef TREE_POSITION_DISCONNECTED
#undef TREE_POSITION_EQUIVALENT
#undef TREE_POSITION_FOLLOWING
#undef TREE_POSITION_PRECEDING
#undef TREE_POSITION_SAME_NODE

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Map = ::java::util::Map;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;
using $Event = ::org::w3c::dom::events::Event;
using $EventListener = ::org::w3c::dom::events::EventListener;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$CompoundAttribute _NodeImpl_MethodAnnotations_compareTreePosition8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _NodeImpl_FieldInfo_[] = {
	{"TREE_POSITION_PRECEDING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_PRECEDING)},
	{"TREE_POSITION_FOLLOWING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_FOLLOWING)},
	{"TREE_POSITION_ANCESTOR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_ANCESTOR)},
	{"TREE_POSITION_DESCENDANT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_DESCENDANT)},
	{"TREE_POSITION_EQUIVALENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_EQUIVALENT)},
	{"TREE_POSITION_SAME_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_SAME_NODE)},
	{"TREE_POSITION_DISCONNECTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, TREE_POSITION_DISCONNECTED)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NodeImpl, serialVersionUID)},
	{"ELEMENT_DEFINITION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeImpl, ELEMENT_DEFINITION_NODE)},
	{"ownerNode", "Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;", nullptr, $PROTECTED, $field(NodeImpl, ownerNode)},
	{"flags", "S", nullptr, $PROTECTED, $field(NodeImpl, flags)},
	{"READONLY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, READONLY)},
	{"SYNCDATA", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, SYNCDATA)},
	{"SYNCCHILDREN", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, SYNCCHILDREN)},
	{"OWNED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, OWNED)},
	{"FIRSTCHILD", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, FIRSTCHILD)},
	{"SPECIFIED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, SPECIFIED)},
	{"IGNORABLEWS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, IGNORABLEWS)},
	{"HASSTRING", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, HASSTRING)},
	{"NORMALIZED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, NORMALIZED)},
	{"ID", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NodeImpl, ID)},
	{}
};

$MethodInfo _NodeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $method(NodeImpl, init$, void, $CoreDocumentImpl*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeImpl, init$, void)},
	{"addEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, addEventListener, void, $String*, $EventListener*, bool)},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, appendChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"changed", "()V", nullptr, $PROTECTED, $virtualMethod(NodeImpl, changed, void)},
	{"changes", "()I", nullptr, $PROTECTED, $virtualMethod(NodeImpl, changes, int32_t)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, cloneNode, $Node*, bool)},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, $virtualMethod(NodeImpl, compareDocumentPosition, int16_t, $Node*), "org.w3c.dom.DOMException"},
	{"compareTreePosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(NodeImpl, compareTreePosition, int16_t, $Node*), nullptr, nullptr, _NodeImpl_MethodAnnotations_compareTreePosition8},
	{"dispatchEvent", "(Lorg/w3c/dom/events/Event;)Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, dispatchEvent, bool, $Event*)},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getAttributes, $NamedNodeMap*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getBaseURI, $String*)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getChildNodes, $NodeList*)},
	{"getContainer", "()Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $virtualMethod(NodeImpl, getContainer, $Node*)},
	{"getElementAncestor", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(NodeImpl, getElementAncestor, $Node*, $Node*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getFeature, $Object*, $String*, $String*)},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getFirstChild, $Node*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getLastChild, $Node*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getLength, int32_t)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getNamespaceURI, $String*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getNextSibling, $Node*)},
	{"getNodeNumber", "()I", nullptr, $PROTECTED, $virtualMethod(NodeImpl, getNodeNumber, int32_t)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getNodeValue, $String*), "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getOwnerDocument, $Document*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getParentNode, $Node*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getPrefix, $String*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getPreviousSibling, $Node*)},
	{"getReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getReadOnly, bool)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getTextContent", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(NodeImpl, getTextContent, void, $StringBuilder*), "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getUserData, $Object*, $String*)},
	{"getUserData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, getUserData, $Object*)},
	{"getUserDataRecord", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;", $PROTECTED, $virtualMethod(NodeImpl, getUserDataRecord, $Map*)},
	{"hasAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, hasAttributes, bool)},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, hasChildNodes, bool)},
	{"hasStringValue", "()Z", nullptr, $FINAL, $method(NodeImpl, hasStringValue, bool)},
	{"hasStringValue", "(Z)V", nullptr, $FINAL, $method(NodeImpl, hasStringValue, void, bool)},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"internalIsIgnorableWhitespace", "()Z", nullptr, $FINAL, $method(NodeImpl, internalIsIgnorableWhitespace, bool)},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, isDefaultNamespace, bool, $String*)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, isEqualNode, bool, $Node*)},
	{"isFirstChild", "()Z", nullptr, $FINAL, $method(NodeImpl, isFirstChild, bool)},
	{"isFirstChild", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isFirstChild, void, bool)},
	{"isIdAttribute", "()Z", nullptr, $FINAL, $method(NodeImpl, isIdAttribute, bool)},
	{"isIdAttribute", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isIdAttribute, void, bool)},
	{"isIgnorableWhitespace", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isIgnorableWhitespace, void, bool)},
	{"isNormalized", "()Z", nullptr, $FINAL, $method(NodeImpl, isNormalized, bool)},
	{"isNormalized", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isNormalized, void, bool)},
	{"isOwned", "()Z", nullptr, $FINAL, $method(NodeImpl, isOwned, bool)},
	{"isOwned", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isOwned, void, bool)},
	{"isReadOnly", "()Z", nullptr, $FINAL, $method(NodeImpl, isReadOnly, bool)},
	{"isReadOnly", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isReadOnly, void, bool)},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, isSameNode, bool, $Node*)},
	{"isSpecified", "()Z", nullptr, $FINAL, $method(NodeImpl, isSpecified, bool)},
	{"isSpecified", "(Z)V", nullptr, $FINAL, $method(NodeImpl, isSpecified, void, bool)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NodeImpl, isSupported, bool, $String*, $String*)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, item, $Node*, int32_t)},
	{"lookupNamespacePrefix", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;)Ljava/lang/String;", nullptr, 0, $virtualMethod(NodeImpl, lookupNamespacePrefix, $String*, $String*, $ElementImpl*)},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, lookupNamespaceURI, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, lookupPrefix, $String*, $String*)},
	{"needsSyncChildren", "()Z", nullptr, $FINAL, $method(NodeImpl, needsSyncChildren, bool)},
	{"needsSyncChildren", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(NodeImpl, needsSyncChildren, void, bool)},
	{"needsSyncData", "()Z", nullptr, $FINAL, $method(NodeImpl, needsSyncData, bool)},
	{"needsSyncData", "(Z)V", nullptr, $FINAL, $method(NodeImpl, needsSyncData, void, bool)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, normalize, void)},
	{"ownerDocument", "()Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, 0, $virtualMethod(NodeImpl, ownerDocument, $CoreDocumentImpl*)},
	{"parentNode", "()Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;", nullptr, 0, $virtualMethod(NodeImpl, parentNode, NodeImpl*)},
	{"previousSibling", "()Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, 0, $virtualMethod(NodeImpl, previousSibling, $ChildNode*)},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"removeEventListener", "(Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, removeEventListener, void, $String*, $EventListener*, bool)},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $virtualMethod(NodeImpl, setOwnerDocument, void, $CoreDocumentImpl*)},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setReadOnly, void, bool, bool)},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setUserData, $Object*, $String*, Object$*, $UserDataHandler*)},
	{"setUserData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NodeImpl, setUserData, void, Object$*)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(NodeImpl, synchronizeData, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeImpl, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(NodeImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _NodeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.dom.NodeImpl",
	"java.lang.Object",
	"org.w3c.dom.Node,org.w3c.dom.NodeList,org.w3c.dom.events.EventTarget,java.lang.Cloneable,java.io.Serializable",
	_NodeImpl_FieldInfo_,
	_NodeImpl_MethodInfo_
};

$Object* allocate$NodeImpl($Class* clazz) {
	return $of($alloc(NodeImpl));
}

int32_t NodeImpl::hashCode() {
	 return this->$Node::hashCode();
}

bool NodeImpl::equals(Object$* arg0) {
	 return this->$Node::equals(arg0);
}

$Object* NodeImpl::clone() {
	 return this->$Node::clone();
}

void NodeImpl::finalize() {
	this->$Node::finalize();
}

void NodeImpl::init$($CoreDocumentImpl* ownerDocument) {
	$set(this, ownerNode, ownerDocument);
}

void NodeImpl::init$() {
}

$String* NodeImpl::getNodeValue() {
	return nullptr;
}

void NodeImpl::setNodeValue($String* x) {
}

$Node* NodeImpl::appendChild($Node* newChild) {
	return insertBefore(newChild, nullptr);
}

$Node* NodeImpl::cloneNode(bool deep) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	$var(NodeImpl, newnode, nullptr);
	try {
		$assign(newnode, $cast(NodeImpl, clone()));
	} catch ($CloneNotSupportedException& e) {
		$throwNew($RuntimeException, $$str({"**Internal Error**"_s, e}));
	}
	$set($nc(newnode), ownerNode, ownerDocument());
	newnode->isOwned(false);
	newnode->isReadOnly(false);
	$nc($(ownerDocument()))->callUserDataHandlers(this, newnode, $UserDataHandler::NODE_CLONED);
	return newnode;
}

$Document* NodeImpl::getOwnerDocument() {
	if (isOwned()) {
		return $nc(this->ownerNode)->ownerDocument();
	} else {
		return $cast($Document, this->ownerNode);
	}
}

$CoreDocumentImpl* NodeImpl::ownerDocument() {
	if (isOwned()) {
		return $nc(this->ownerNode)->ownerDocument();
	} else {
		return $cast($CoreDocumentImpl, this->ownerNode);
	}
}

void NodeImpl::setOwnerDocument($CoreDocumentImpl* doc) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (!isOwned()) {
		$set(this, ownerNode, doc);
	}
}

int32_t NodeImpl::getNodeNumber() {
	int32_t nodeNumber = 0;
	$var($CoreDocumentImpl, cd, ($cast($CoreDocumentImpl, this->getOwnerDocument())));
	nodeNumber = $nc(cd)->getNodeNumber(this);
	return nodeNumber;
}

$Node* NodeImpl::getParentNode() {
	return nullptr;
}

NodeImpl* NodeImpl::parentNode() {
	return nullptr;
}

$Node* NodeImpl::getNextSibling() {
	return nullptr;
}

$Node* NodeImpl::getPreviousSibling() {
	return nullptr;
}

$ChildNode* NodeImpl::previousSibling() {
	return nullptr;
}

$NamedNodeMap* NodeImpl::getAttributes() {
	return nullptr;
}

bool NodeImpl::hasAttributes() {
	return false;
}

bool NodeImpl::hasChildNodes() {
	return false;
}

$NodeList* NodeImpl::getChildNodes() {
	return this;
}

$Node* NodeImpl::getFirstChild() {
	return nullptr;
}

$Node* NodeImpl::getLastChild() {
	return nullptr;
}

$Node* NodeImpl::insertBefore($Node* newChild, $Node* refChild) {
	$init($DOMMessageFormatter);
	$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
	$shouldNotReachHere();
}

$Node* NodeImpl::removeChild($Node* oldChild) {
	$init($DOMMessageFormatter);
	$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr)));
	$shouldNotReachHere();
}

$Node* NodeImpl::replaceChild($Node* newChild, $Node* oldChild) {
	$init($DOMMessageFormatter);
	$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
	$shouldNotReachHere();
}

int32_t NodeImpl::getLength() {
	return 0;
}

$Node* NodeImpl::item(int32_t index) {
	return nullptr;
}

void NodeImpl::normalize() {
}

bool NodeImpl::isSupported($String* feature, $String* version) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(ownerDocument()))->getImplementation()))->hasFeature(feature, version);
}

$String* NodeImpl::getNamespaceURI() {
	return nullptr;
}

$String* NodeImpl::getPrefix() {
	return nullptr;
}

void NodeImpl::setPrefix($String* prefix) {
	$init($DOMMessageFormatter);
	$throwNew($DOMException, $DOMException::NAMESPACE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr)));
}

$String* NodeImpl::getLocalName() {
	return nullptr;
}

void NodeImpl::addEventListener($String* type, $EventListener* listener, bool useCapture) {
	$nc($(ownerDocument()))->addEventListener(this, type, listener, useCapture);
}

void NodeImpl::removeEventListener($String* type, $EventListener* listener, bool useCapture) {
	$nc($(ownerDocument()))->removeEventListener(this, type, listener, useCapture);
}

bool NodeImpl::dispatchEvent($Event* event) {
	return $nc($(ownerDocument()))->dispatchEvent(this, event);
}

$String* NodeImpl::getBaseURI() {
	return nullptr;
}

int16_t NodeImpl::compareTreePosition($Node* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return ((int16_t)(NodeImpl::TREE_POSITION_SAME_NODE | NodeImpl::TREE_POSITION_EQUIVALENT));
	}
	int16_t thisType = this->getNodeType();
	int16_t otherType = $nc(other)->getNodeType();
	if (thisType == $Node::ENTITY_NODE || thisType == $Node::NOTATION_NODE || otherType == $Node::ENTITY_NODE || otherType == $Node::NOTATION_NODE) {
		return NodeImpl::TREE_POSITION_DISCONNECTED;
	}
	$var($Node, node, nullptr);
	$var($Node, thisAncestor, this);
	$var($Node, otherAncestor, other);
	int32_t thisDepth = 0;
	int32_t otherDepth = 0;
	for ($assign(node, this); node != nullptr; $assign(node, node->getParentNode())) {
		thisDepth += 1;
		if (node == other) {
			return ((int16_t)(NodeImpl::TREE_POSITION_ANCESTOR | NodeImpl::TREE_POSITION_PRECEDING));
		}
		$assign(thisAncestor, node);
	}
	for ($assign(node, other); node != nullptr; $assign(node, node->getParentNode())) {
		otherDepth += 1;
		if ($equals(node, this)) {
			return ((int16_t)(NodeImpl::TREE_POSITION_DESCENDANT | NodeImpl::TREE_POSITION_FOLLOWING));
		}
		$assign(otherAncestor, node);
	}
	$var($Node, thisNode, this);
	$var($Node, otherNode, other);
	int32_t thisAncestorType = $nc(thisAncestor)->getNodeType();
	int32_t otherAncestorType = $nc(otherAncestor)->getNodeType();
	if (thisAncestorType == $Node::ATTRIBUTE_NODE) {
		$assign(thisNode, $nc(($cast($AttrImpl, thisAncestor)))->getOwnerElement());
	}
	if (otherAncestorType == $Node::ATTRIBUTE_NODE) {
		$assign(otherNode, $nc(($cast($AttrImpl, otherAncestor)))->getOwnerElement());
	}
	if (thisAncestorType == $Node::ATTRIBUTE_NODE && otherAncestorType == $Node::ATTRIBUTE_NODE && thisNode == otherNode) {
		return NodeImpl::TREE_POSITION_EQUIVALENT;
	}
	if (thisAncestorType == $Node::ATTRIBUTE_NODE) {
		thisDepth = 0;
		for ($assign(node, thisNode); node != nullptr; $assign(node, node->getParentNode())) {
			thisDepth += 1;
			if (node == otherNode) {
				return NodeImpl::TREE_POSITION_PRECEDING;
			}
			$assign(thisAncestor, node);
		}
	}
	if (otherAncestorType == $Node::ATTRIBUTE_NODE) {
		otherDepth = 0;
		for ($assign(node, otherNode); node != nullptr; $assign(node, node->getParentNode())) {
			otherDepth += 1;
			if (node == thisNode) {
				return NodeImpl::TREE_POSITION_FOLLOWING;
			}
			$assign(otherAncestor, node);
		}
	}
	if (thisAncestor != otherAncestor) {
		return NodeImpl::TREE_POSITION_DISCONNECTED;
	}
	if (thisDepth > otherDepth) {
		for (int32_t i = 0; i < thisDepth - otherDepth; ++i) {
			$assign(thisNode, $nc(thisNode)->getParentNode());
		}
		if (thisNode == otherNode) {
			return NodeImpl::TREE_POSITION_PRECEDING;
		}
	} else {
		for (int32_t i = 0; i < otherDepth - thisDepth; ++i) {
			$assign(otherNode, $nc(otherNode)->getParentNode());
		}
		if (otherNode == thisNode) {
			return NodeImpl::TREE_POSITION_FOLLOWING;
		}
	}
	$var($Node, thisNodeP, nullptr);
	$var($Node, otherNodeP, nullptr);
	for ($assign(thisNodeP, $nc(thisNode)->getParentNode()), $assign(otherNodeP, $nc(otherNode)->getParentNode()); thisNodeP != otherNodeP;) {
		$assign(thisNode, thisNodeP);
		$assign(otherNode, otherNodeP);
		$assign(thisNodeP, $nc(thisNodeP)->getParentNode());
		$assign(otherNodeP, $nc(otherNodeP)->getParentNode());
	}
	{
		$var($Node, current, $nc(thisNodeP)->getFirstChild());
		for (; current != nullptr; $assign(current, $nc(current)->getNextSibling())) {
			if (current == otherNode) {
				return NodeImpl::TREE_POSITION_PRECEDING;
			} else if (current == thisNode) {
				return NodeImpl::TREE_POSITION_FOLLOWING;
			}
		}
	}
	return (int16_t)0;
}

int16_t NodeImpl::compareDocumentPosition($Node* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return (int16_t)0;
	}
	if (other != nullptr && !($instanceOf(NodeImpl, other))) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	$var($Document, thisOwnerDoc, nullptr);
	$var($Document, otherOwnerDoc, nullptr);
	if (this->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(thisOwnerDoc, $cast($Document, this));
	} else {
		$assign(thisOwnerDoc, this->getOwnerDocument());
	}
	if ($nc(other)->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(otherOwnerDoc, $cast($Document, other));
	} else {
		$assign(otherOwnerDoc, other->getOwnerDocument());
	}
	if (thisOwnerDoc != otherOwnerDoc && thisOwnerDoc != nullptr && otherOwnerDoc != nullptr) {
		int32_t otherDocNum = $nc(($cast($CoreDocumentImpl, otherOwnerDoc)))->getNodeNumber();
		int32_t thisDocNum = $nc(($cast($CoreDocumentImpl, thisOwnerDoc)))->getNodeNumber();
		if (otherDocNum > thisDocNum) {
			return (int16_t)(($Node::DOCUMENT_POSITION_DISCONNECTED | $Node::DOCUMENT_POSITION_FOLLOWING) | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC);
		} else {
			return (int16_t)(($Node::DOCUMENT_POSITION_DISCONNECTED | $Node::DOCUMENT_POSITION_PRECEDING) | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC);
		}
	}
	$var($Node, node, nullptr);
	$var($Node, thisAncestor, this);
	$var($Node, otherAncestor, other);
	int32_t thisDepth = 0;
	int32_t otherDepth = 0;
	for ($assign(node, this); node != nullptr; $assign(node, node->getParentNode())) {
		thisDepth += 1;
		if (node == other) {
			return ((int16_t)($Node::DOCUMENT_POSITION_CONTAINS | $Node::DOCUMENT_POSITION_PRECEDING));
		}
		$assign(thisAncestor, node);
	}
	for ($assign(node, other); node != nullptr; $assign(node, $nc(node)->getParentNode())) {
		otherDepth += 1;
		if ($equals(node, this)) {
			return ((int16_t)($Node::DOCUMENT_POSITION_CONTAINED_BY | $Node::DOCUMENT_POSITION_FOLLOWING));
		}
		$assign(otherAncestor, node);
	}
	int32_t thisAncestorType = $nc(thisAncestor)->getNodeType();
	int32_t otherAncestorType = $nc(otherAncestor)->getNodeType();
	$var($Node, thisNode, this);
	$var($Node, otherNode, other);
	switch (thisAncestorType) {
	case $Node::NOTATION_NODE:
		{}
	case $Node::ENTITY_NODE:
		{
			{
				$var($DocumentType, container, $nc(thisOwnerDoc)->getDoctype());
				if ($equals(container, otherAncestor)) {
					return ((int16_t)($Node::DOCUMENT_POSITION_CONTAINS | $Node::DOCUMENT_POSITION_PRECEDING));
				}
				switch (otherAncestorType) {
				case $Node::NOTATION_NODE:
					{}
				case $Node::ENTITY_NODE:
					{
						{
							if (thisAncestorType != otherAncestorType) {
								return ((thisAncestorType > otherAncestorType) ? $Node::DOCUMENT_POSITION_PRECEDING : $Node::DOCUMENT_POSITION_FOLLOWING);
							} else if (thisAncestorType == $Node::NOTATION_NODE) {
								if ($nc(($cast($NamedNodeMapImpl, $($nc(container)->getNotations()))))->precedes(otherAncestor, thisAncestor)) {
									return ((int16_t)($Node::DOCUMENT_POSITION_PRECEDING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
								} else {
									return ((int16_t)($Node::DOCUMENT_POSITION_FOLLOWING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
								}
							} else if ($nc(($cast($NamedNodeMapImpl, $($nc(container)->getEntities()))))->precedes(otherAncestor, thisAncestor)) {
								return ((int16_t)($Node::DOCUMENT_POSITION_PRECEDING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
							} else {
								return ((int16_t)($Node::DOCUMENT_POSITION_FOLLOWING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
							}
						}
					}
				}
				$assign(thisNode, ($assign(thisAncestor, thisOwnerDoc)));
				break;
			}
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				if ($equals(otherNode, thisOwnerDoc)) {
					return ((int16_t)($Node::DOCUMENT_POSITION_PRECEDING | $Node::DOCUMENT_POSITION_CONTAINS));
				} else if (thisOwnerDoc != nullptr && thisOwnerDoc == otherOwnerDoc) {
					return ($Node::DOCUMENT_POSITION_FOLLOWING);
				}
				break;
			}
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				$assign(thisNode, $nc(($cast($AttrImpl, thisAncestor)))->getOwnerElement());
				if (otherAncestorType == $Node::ATTRIBUTE_NODE) {
					$assign(otherNode, $nc(($cast($AttrImpl, otherAncestor)))->getOwnerElement());
					if (otherNode == thisNode) {
						if ($nc(($cast($NamedNodeMapImpl, $($nc(thisNode)->getAttributes()))))->precedes(other, this)) {
							return ((int16_t)($Node::DOCUMENT_POSITION_PRECEDING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
						} else {
							return ((int16_t)($Node::DOCUMENT_POSITION_FOLLOWING | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC));
						}
					}
				}
				thisDepth = 0;
				for ($assign(node, thisNode); node != nullptr; $assign(node, $nc(node)->getParentNode())) {
					thisDepth += 1;
					if (node == otherNode) {
						return ((int16_t)($Node::DOCUMENT_POSITION_CONTAINS | $Node::DOCUMENT_POSITION_PRECEDING));
					}
					$assign(thisAncestor, node);
				}
			}
		}
	}
	switch (otherAncestorType) {
	case $Node::NOTATION_NODE:
		{}
	case $Node::ENTITY_NODE:
		{
			{
				$var($DocumentType, container, $nc(thisOwnerDoc)->getDoctype());
				if ($equals(container, this)) {
					return ((int16_t)($Node::DOCUMENT_POSITION_CONTAINED_BY | $Node::DOCUMENT_POSITION_FOLLOWING));
				}
				$assign(otherNode, ($assign(otherAncestor, thisOwnerDoc)));
				break;
			}
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				if ($equals(thisNode, otherOwnerDoc)) {
					return ((int16_t)($Node::DOCUMENT_POSITION_FOLLOWING | $Node::DOCUMENT_POSITION_CONTAINED_BY));
				} else if (otherOwnerDoc != nullptr && thisOwnerDoc == otherOwnerDoc) {
					return ($Node::DOCUMENT_POSITION_PRECEDING);
				}
				break;
			}
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				otherDepth = 0;
				$assign(otherNode, $nc(($cast($AttrImpl, otherAncestor)))->getOwnerElement());
				for ($assign(node, otherNode); node != nullptr; $assign(node, $nc(node)->getParentNode())) {
					otherDepth += 1;
					if (node == thisNode) {
						return (int16_t)($Node::DOCUMENT_POSITION_FOLLOWING | $Node::DOCUMENT_POSITION_CONTAINED_BY);
					}
					$assign(otherAncestor, node);
				}
			}
		}
	}
	if (thisAncestor != otherAncestor) {
		int32_t thisAncestorNum = 0;
		int32_t otherAncestorNum = 0;
		thisAncestorNum = $nc(($cast(NodeImpl, thisAncestor)))->getNodeNumber();
		otherAncestorNum = $nc(($cast(NodeImpl, otherAncestor)))->getNodeNumber();
		if (thisAncestorNum > otherAncestorNum) {
			return (int16_t)(($Node::DOCUMENT_POSITION_DISCONNECTED | $Node::DOCUMENT_POSITION_FOLLOWING) | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC);
		} else {
			return (int16_t)(($Node::DOCUMENT_POSITION_DISCONNECTED | $Node::DOCUMENT_POSITION_PRECEDING) | $Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC);
		}
	}
	if (thisDepth > otherDepth) {
		for (int32_t i = 0; i < thisDepth - otherDepth; ++i) {
			$assign(thisNode, $nc(thisNode)->getParentNode());
		}
		if (thisNode == otherNode) {
			return $Node::DOCUMENT_POSITION_PRECEDING;
		}
	} else {
		for (int32_t i = 0; i < otherDepth - thisDepth; ++i) {
			$assign(otherNode, $nc(otherNode)->getParentNode());
		}
		if (otherNode == thisNode) {
			return $Node::DOCUMENT_POSITION_FOLLOWING;
		}
	}
	$var($Node, thisNodeP, nullptr);
	$var($Node, otherNodeP, nullptr);
	for ($assign(thisNodeP, $nc(thisNode)->getParentNode()), $assign(otherNodeP, $nc(otherNode)->getParentNode()); thisNodeP != otherNodeP;) {
		$assign(thisNode, thisNodeP);
		$assign(otherNode, otherNodeP);
		$assign(thisNodeP, $nc(thisNodeP)->getParentNode());
		$assign(otherNodeP, $nc(otherNodeP)->getParentNode());
	}
	{
		$var($Node, current, $nc(thisNodeP)->getFirstChild());
		for (; current != nullptr; $assign(current, $nc(current)->getNextSibling())) {
			if (current == otherNode) {
				return $Node::DOCUMENT_POSITION_PRECEDING;
			} else if (current == thisNode) {
				return $Node::DOCUMENT_POSITION_FOLLOWING;
			}
		}
	}
	return (int16_t)0;
}

$String* NodeImpl::getTextContent() {
	return getNodeValue();
}

void NodeImpl::getTextContent($StringBuilder* buf) {
	$var($String, content, getNodeValue());
	if (content != nullptr) {
		$nc(buf)->append(content);
	}
}

void NodeImpl::setTextContent($String* textContent) {
	setNodeValue(textContent);
}

bool NodeImpl::isSameNode($Node* other) {
	return $equals(this, other);
}

bool NodeImpl::isDefaultNamespace($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($String, namespace$, this->getNamespaceURI());
				$var($String, prefix, this->getPrefix());
				if (prefix == nullptr || $nc(prefix)->length() == 0) {
					if (namespaceURI == nullptr) {
						return (namespace$ == namespaceURI);
					}
					return $nc(namespaceURI)->equals(namespace$);
				}
				if (this->hasAttributes()) {
					$var($ElementImpl, elem, $cast($ElementImpl, this));
					$var(NodeImpl, attr, $cast(NodeImpl, elem->getAttributeNodeNS("http://www.w3.org/2000/xmlns/"_s, "xmlns"_s)));
					if (attr != nullptr) {
						$var($String, value, attr->getNodeValue());
						if (namespaceURI == nullptr) {
							return (namespace$ == value);
						}
						return $nc(namespaceURI)->equals(value);
					}
				}
				$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
				if (ancestor != nullptr) {
					return ancestor->isDefaultNamespace(namespaceURI);
				}
				return false;
			}
		}
	case $Node::DOCUMENT_NODE:
		{
			{
				$var($Element, docElement, $nc(($cast($Document, this)))->getDocumentElement());
				if (docElement != nullptr) {
					return docElement->isDefaultNamespace(namespaceURI);
				}
				return false;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return false;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc(this->ownerNode)->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc(this->ownerNode)->isDefaultNamespace(namespaceURI);
				}
				return false;
			}
		}
	default:
		{
			{
				$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
				if (ancestor != nullptr) {
					return ancestor->isDefaultNamespace(namespaceURI);
				}
				return false;
			}
		}
	}
}

$String* NodeImpl::lookupPrefix($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (namespaceURI == nullptr) {
		return nullptr;
	}
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				this->getNamespaceURI();
				return lookupNamespacePrefix(namespaceURI, $cast($ElementImpl, this));
			}
		}
	case $Node::DOCUMENT_NODE:
		{
			{
				$var($Element, docElement, $nc(($cast($Document, this)))->getDocumentElement());
				if (docElement != nullptr) {
					return docElement->lookupPrefix(namespaceURI);
				}
				return nullptr;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc(this->ownerNode)->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc(this->ownerNode)->lookupPrefix(namespaceURI);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
				if (ancestor != nullptr) {
					return ancestor->lookupPrefix(namespaceURI);
				}
				return nullptr;
			}
		}
	}
}

$String* NodeImpl::lookupNamespaceURI($String* specifiedPrefix) {
	$useLocalCurrentObjectStackCache();
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($String, namespace$, this->getNamespaceURI());
				$var($String, prefix, this->getPrefix());
				if (namespace$ != nullptr) {
					if (specifiedPrefix == nullptr && prefix == specifiedPrefix) {
						return namespace$;
					} else if (prefix != nullptr && prefix->equals(specifiedPrefix)) {
						return namespace$;
					}
				}
				if (this->hasAttributes()) {
					$var($NamedNodeMap, map, this->getAttributes());
					int32_t length = $nc(map)->getLength();
					for (int32_t i = 0; i < length; ++i) {
						$var($Node, attr, map->item(i));
						$assign(namespace$, $nc(attr)->getNamespaceURI());
						if (namespace$ != nullptr && namespace$->equals("http://www.w3.org/2000/xmlns/"_s)) {
							$var($String, attrPrefix, attr->getPrefix());
							$var($String, value, attr->getNodeValue());
							if (specifiedPrefix == nullptr && $nc($(attr->getNodeName()))->equals("xmlns"_s)) {
								return $nc(value)->length() > 0 ? value : ($String*)nullptr;
							} else {
								bool var$1 = attrPrefix != nullptr && attrPrefix->equals("xmlns"_s);
								if (var$1 && $nc($(attr->getLocalName()))->equals(specifiedPrefix)) {
									return $nc(value)->length() > 0 ? value : ($String*)nullptr;
								}
							}
						}
					}
				}
				$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
				if (ancestor != nullptr) {
					return ancestor->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	case $Node::DOCUMENT_NODE:
		{
			{
				$var($Element, docElement, $nc(($cast($Document, this)))->getDocumentElement());
				if (docElement != nullptr) {
					return docElement->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc(this->ownerNode)->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc(this->ownerNode)->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
				if (ancestor != nullptr) {
					return ancestor->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	}
}

$Node* NodeImpl::getElementAncestor($Node* currentNode) {
	$var($Node, parent, $nc(currentNode)->getParentNode());
	while (parent != nullptr) {
		int16_t type = parent->getNodeType();
		if (type == $Node::ELEMENT_NODE) {
			return parent;
		}
		$assign(parent, parent->getParentNode());
	}
	return nullptr;
}

$String* NodeImpl::lookupNamespacePrefix($String* namespaceURI, $ElementImpl* el) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, this->getNamespaceURI());
	$var($String, prefix, this->getPrefix());
	if (namespace$ != nullptr && namespace$->equals(namespaceURI)) {
		if (prefix != nullptr) {
			$var($String, foundNamespace, $nc(el)->lookupNamespaceURI(prefix));
			if (foundNamespace != nullptr && foundNamespace->equals(namespaceURI)) {
				return prefix;
			}
		}
	}
	if (this->hasAttributes()) {
		$var($NamedNodeMap, map, this->getAttributes());
		int32_t length = $nc(map)->getLength();
		for (int32_t i = 0; i < length; ++i) {
			$var($Node, attr, map->item(i));
			$assign(namespace$, $nc(attr)->getNamespaceURI());
			if (namespace$ != nullptr && namespace$->equals("http://www.w3.org/2000/xmlns/"_s)) {
				$var($String, attrPrefix, attr->getPrefix());
				$var($String, value, attr->getNodeValue());
				bool var$0 = ($nc($(attr->getNodeName()))->equals("xmlns"_s));
				if (!var$0) {
					bool var$1 = (attrPrefix != nullptr && attrPrefix->equals("xmlns"_s));
					var$0 = var$1 && $nc(value)->equals(namespaceURI);
				}
				if (var$0) {
					$var($String, localname, attr->getLocalName());
					$var($String, foundNamespace, $nc(el)->lookupNamespaceURI(localname));
					if (foundNamespace != nullptr && foundNamespace->equals(namespaceURI)) {
						return localname;
					}
				}
			}
		}
	}
	$var(NodeImpl, ancestor, $cast(NodeImpl, getElementAncestor(this)));
	if (ancestor != nullptr) {
		return ancestor->lookupNamespacePrefix(namespaceURI, el);
	}
	return nullptr;
}

bool NodeImpl::isEqualNode($Node* arg) {
	$useLocalCurrentObjectStackCache();
	if ($equals(arg, this)) {
		return true;
	}
	int16_t var$0 = $nc(arg)->getNodeType();
	if (var$0 != getNodeType()) {
		return false;
	}
	if (getNodeName() == nullptr) {
		if ($nc(arg)->getNodeName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeName()))->equals($($nc(arg)->getNodeName()))) {
		return false;
	}
	if (getLocalName() == nullptr) {
		if ($nc(arg)->getLocalName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getLocalName()))->equals($($nc(arg)->getLocalName()))) {
		return false;
	}
	if (getNamespaceURI() == nullptr) {
		if ($nc(arg)->getNamespaceURI() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNamespaceURI()))->equals($($nc(arg)->getNamespaceURI()))) {
		return false;
	}
	if (getPrefix() == nullptr) {
		if ($nc(arg)->getPrefix() != nullptr) {
			return false;
		}
	} else if (!$nc($(getPrefix()))->equals($($nc(arg)->getPrefix()))) {
		return false;
	}
	if (getNodeValue() == nullptr) {
		if ($nc(arg)->getNodeValue() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeValue()))->equals($($nc(arg)->getNodeValue()))) {
		return false;
	}
	return true;
}

$Object* NodeImpl::getFeature($String* feature, $String* version) {
	return $of(isSupported(feature, version) ? $of(this) : ($Object*)nullptr);
}

$Object* NodeImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	return $of($nc($(ownerDocument()))->setUserData(this, key, data, handler));
}

$Object* NodeImpl::getUserData($String* key) {
	return $of($nc($(ownerDocument()))->getUserData(this, key));
}

$Map* NodeImpl::getUserDataRecord() {
	return $nc($(ownerDocument()))->getUserDataRecord(this);
}

void NodeImpl::setReadOnly(bool readOnly, bool deep) {
	if (needsSyncData()) {
		synchronizeData();
	}
	isReadOnly(readOnly);
}

bool NodeImpl::getReadOnly() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return isReadOnly();
}

void NodeImpl::setUserData(Object$* data) {
	$nc($(ownerDocument()))->setUserData(this, data);
}

$Object* NodeImpl::getUserData() {
	return $of($nc($(ownerDocument()))->getUserData(this));
}

void NodeImpl::changed() {
	$nc($(ownerDocument()))->changed();
}

int32_t NodeImpl::changes() {
	return $nc($(ownerDocument()))->changes();
}

void NodeImpl::synchronizeData() {
	needsSyncData(false);
}

$Node* NodeImpl::getContainer() {
	return nullptr;
}

bool NodeImpl::isReadOnly() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::READONLY)) != 0;
}

void NodeImpl::isReadOnly(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::READONLY : (int32_t)(this->flags & (uint32_t)~NodeImpl::READONLY));
}

bool NodeImpl::needsSyncData() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::SYNCDATA)) != 0;
}

void NodeImpl::needsSyncData(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::SYNCDATA : (int32_t)(this->flags & (uint32_t)~NodeImpl::SYNCDATA));
}

bool NodeImpl::needsSyncChildren() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::SYNCCHILDREN)) != 0;
}

void NodeImpl::needsSyncChildren(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::SYNCCHILDREN : (int32_t)(this->flags & (uint32_t)~NodeImpl::SYNCCHILDREN));
}

bool NodeImpl::isOwned() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::OWNED)) != 0;
}

void NodeImpl::isOwned(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::OWNED : (int32_t)(this->flags & (uint32_t)~NodeImpl::OWNED));
}

bool NodeImpl::isFirstChild() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::FIRSTCHILD)) != 0;
}

void NodeImpl::isFirstChild(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::FIRSTCHILD : (int32_t)(this->flags & (uint32_t)~NodeImpl::FIRSTCHILD));
}

bool NodeImpl::isSpecified() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::SPECIFIED)) != 0;
}

void NodeImpl::isSpecified(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::SPECIFIED : (int32_t)(this->flags & (uint32_t)~NodeImpl::SPECIFIED));
}

bool NodeImpl::internalIsIgnorableWhitespace() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::IGNORABLEWS)) != 0;
}

void NodeImpl::isIgnorableWhitespace(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::IGNORABLEWS : (int32_t)(this->flags & (uint32_t)~NodeImpl::IGNORABLEWS));
}

bool NodeImpl::hasStringValue() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::HASSTRING)) != 0;
}

void NodeImpl::hasStringValue(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::HASSTRING : (int32_t)(this->flags & (uint32_t)~NodeImpl::HASSTRING));
}

bool NodeImpl::isNormalized() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::NORMALIZED)) != 0;
}

void NodeImpl::isNormalized(bool value) {
	if (!value && isNormalized() && this->ownerNode != nullptr) {
		$nc(this->ownerNode)->isNormalized(false);
	}
	this->flags = (int16_t)(value ? this->flags | NodeImpl::NORMALIZED : (int32_t)(this->flags & (uint32_t)~NodeImpl::NORMALIZED));
}

bool NodeImpl::isIdAttribute() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NodeImpl::ID)) != 0;
}

void NodeImpl::isIdAttribute(bool value) {
	this->flags = (int16_t)(value ? this->flags | NodeImpl::ID : (int32_t)(this->flags & (uint32_t)~NodeImpl::ID));
}

$String* NodeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"["_s, $(getNodeName()), ": "_s}));
	$var($String, var$0, $$concat(var$1, $(getNodeValue())));
	return $concat(var$0, "]"_s);
}

void NodeImpl::writeObject($ObjectOutputStream* out) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$nc(out)->defaultWriteObject();
}

NodeImpl::NodeImpl() {
}

$Class* NodeImpl::load$($String* name, bool initialize) {
	$loadClass(NodeImpl, name, initialize, &_NodeImpl_ClassInfo_, allocate$NodeImpl);
	return class$;
}

$Class* NodeImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com