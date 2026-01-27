#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentTypeImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ELEMENT_DEFINITION_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef NOTATION_NODE

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DeferredNode = ::com::sun::org::apache::xerces::internal::dom::DeferredNode;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
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

$FieldInfo _DeferredDocumentTypeImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredDocumentTypeImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredDocumentTypeImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredDocumentTypeImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
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
	{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredDocumentTypeImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredDocumentTypeImpl, getNodeIndex, int32_t)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentTypeImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredDocumentTypeImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredDocumentTypeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredDocumentTypeImpl",
	"com.sun.org.apache.xerces.internal.dom.DocumentTypeImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredDocumentTypeImpl_FieldInfo_,
	_DeferredDocumentTypeImpl_MethodInfo_
};

$Object* allocate$DeferredDocumentTypeImpl($Class* clazz) {
	return $of($alloc(DeferredDocumentTypeImpl));
}

int16_t DeferredDocumentTypeImpl::getNodeType() {
	 return this->$DocumentTypeImpl::getNodeType();
}

$String* DeferredDocumentTypeImpl::getNodeName() {
	 return this->$DocumentTypeImpl::getNodeName();
}

$Node* DeferredDocumentTypeImpl::cloneNode(bool deep) {
	 return this->$DocumentTypeImpl::cloneNode(deep);
}

$String* DeferredDocumentTypeImpl::getTextContent() {
	 return this->$DocumentTypeImpl::getTextContent();
}

void DeferredDocumentTypeImpl::setTextContent($String* textContent) {
	this->$DocumentTypeImpl::setTextContent(textContent);
}

bool DeferredDocumentTypeImpl::isEqualNode($Node* arg) {
	 return this->$DocumentTypeImpl::isEqualNode(arg);
}

$Object* DeferredDocumentTypeImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$DocumentTypeImpl::setUserData(key, data, handler);
}

$Object* DeferredDocumentTypeImpl::getUserData($String* key) {
	 return this->$DocumentTypeImpl::getUserData(key);
}

$Document* DeferredDocumentTypeImpl::getOwnerDocument() {
	 return this->$DocumentTypeImpl::getOwnerDocument();
}

bool DeferredDocumentTypeImpl::hasChildNodes() {
	 return this->$DocumentTypeImpl::hasChildNodes();
}

$NodeList* DeferredDocumentTypeImpl::getChildNodes() {
	 return this->$DocumentTypeImpl::getChildNodes();
}

$Node* DeferredDocumentTypeImpl::getFirstChild() {
	 return this->$DocumentTypeImpl::getFirstChild();
}

$Node* DeferredDocumentTypeImpl::getLastChild() {
	 return this->$DocumentTypeImpl::getLastChild();
}

$Node* DeferredDocumentTypeImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$DocumentTypeImpl::insertBefore(newChild, refChild);
}

$Node* DeferredDocumentTypeImpl::removeChild($Node* oldChild) {
	 return this->$DocumentTypeImpl::removeChild(oldChild);
}

$Node* DeferredDocumentTypeImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$DocumentTypeImpl::replaceChild(newChild, oldChild);
}

void DeferredDocumentTypeImpl::normalize() {
	this->$DocumentTypeImpl::normalize();
}

$Node* DeferredDocumentTypeImpl::getParentNode() {
	 return this->$DocumentTypeImpl::getParentNode();
}

$Node* DeferredDocumentTypeImpl::getNextSibling() {
	 return this->$DocumentTypeImpl::getNextSibling();
}

$Node* DeferredDocumentTypeImpl::getPreviousSibling() {
	 return this->$DocumentTypeImpl::getPreviousSibling();
}

$String* DeferredDocumentTypeImpl::getNodeValue() {
	 return this->$DocumentTypeImpl::getNodeValue();
}

void DeferredDocumentTypeImpl::setNodeValue($String* x) {
	this->$DocumentTypeImpl::setNodeValue(x);
}

$Node* DeferredDocumentTypeImpl::appendChild($Node* newChild) {
	 return this->$DocumentTypeImpl::appendChild(newChild);
}

$NamedNodeMap* DeferredDocumentTypeImpl::getAttributes() {
	 return this->$DocumentTypeImpl::getAttributes();
}

bool DeferredDocumentTypeImpl::hasAttributes() {
	 return this->$DocumentTypeImpl::hasAttributes();
}

bool DeferredDocumentTypeImpl::isSupported($String* feature, $String* version) {
	 return this->$DocumentTypeImpl::isSupported(feature, version);
}

$String* DeferredDocumentTypeImpl::getNamespaceURI() {
	 return this->$DocumentTypeImpl::getNamespaceURI();
}

$String* DeferredDocumentTypeImpl::getPrefix() {
	 return this->$DocumentTypeImpl::getPrefix();
}

void DeferredDocumentTypeImpl::setPrefix($String* prefix) {
	this->$DocumentTypeImpl::setPrefix(prefix);
}

$String* DeferredDocumentTypeImpl::getLocalName() {
	 return this->$DocumentTypeImpl::getLocalName();
}

$String* DeferredDocumentTypeImpl::getBaseURI() {
	 return this->$DocumentTypeImpl::getBaseURI();
}

int16_t DeferredDocumentTypeImpl::compareDocumentPosition($Node* other) {
	 return this->$DocumentTypeImpl::compareDocumentPosition(other);
}

bool DeferredDocumentTypeImpl::isSameNode($Node* other) {
	 return this->$DocumentTypeImpl::isSameNode(other);
}

bool DeferredDocumentTypeImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$DocumentTypeImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredDocumentTypeImpl::lookupPrefix($String* namespaceURI) {
	 return this->$DocumentTypeImpl::lookupPrefix(namespaceURI);
}

$String* DeferredDocumentTypeImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$DocumentTypeImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredDocumentTypeImpl::getFeature($String* feature, $String* version) {
	 return this->$DocumentTypeImpl::getFeature(feature, version);
}

$String* DeferredDocumentTypeImpl::toString() {
	 return this->$DocumentTypeImpl::toString();
}

int32_t DeferredDocumentTypeImpl::hashCode() {
	 return this->$DocumentTypeImpl::hashCode();
}

bool DeferredDocumentTypeImpl::equals(Object$* arg0) {
	 return this->$DocumentTypeImpl::equals(arg0);
}

$Object* DeferredDocumentTypeImpl::clone() {
	 return this->$DocumentTypeImpl::clone();
}

void DeferredDocumentTypeImpl::finalize() {
	this->$DocumentTypeImpl::finalize();
}

void DeferredDocumentTypeImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$DocumentTypeImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
	needsSyncChildren(true);
}

int32_t DeferredDocumentTypeImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredDocumentTypeImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	$set(this, publicID, ownerDocument->getNodeValue(this->fNodeIndex));
	$set(this, systemID, ownerDocument->getNodeURI(this->fNodeIndex));
	int32_t extraDataIndex = ownerDocument->getNodeExtra(this->fNodeIndex);
	$set(this, internalSubset, ownerDocument->getNodeValue(extraDataIndex));
}

void DeferredDocumentTypeImpl::synchronizeChildren() {
	$useLocalCurrentObjectStackCache();
	bool orig = $nc($(this->ownerDocument()))->getMutationEvents();
	$nc($(this->ownerDocument()))->setMutationEvents(false);
	needsSyncChildren(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, entities, $new($NamedNodeMapImpl, this));
	$set(this, notations, $new($NamedNodeMapImpl, this));
	$set(this, elements, $new($NamedNodeMapImpl, this));
	$var($DeferredNode, last, nullptr);
	for (int32_t index = $nc(ownerDocument)->getLastChild(this->fNodeIndex); index != -1; index = ownerDocument->getPrevSibling(index)) {
		$var($DeferredNode, node, ownerDocument->getNodeObject(index));
		int32_t type = $nc(node)->getNodeType();
		switch (type) {
		case $Node::ENTITY_NODE:
			{
				{
					$nc(this->entities)->setNamedItem(node);
					break;
				}
			}
		case $Node::NOTATION_NODE:
			{
				{
					$nc(this->notations)->setNamedItem(node);
					break;
				}
			}
		case $NodeImpl::ELEMENT_DEFINITION_NODE:
			{
				{
					$nc(this->elements)->setNamedItem(node);
					break;
				}
			}
		case $Node::ELEMENT_NODE:
			{
				{
					if ($nc(($cast($DocumentImpl, $(getOwnerDocument()))))->allowGrammarAccess) {
						insertBefore(node, last);
						$assign(last, node);
					}
					break;
				}
			}
		default:
			{
				{
					$var($String, var$0, $$str({"DeferredDocumentTypeImpl#synchronizeInfo: node.getNodeType() = "_s, $$str(node->getNodeType()), ", class = "_s}));
					$nc($System::out)->println($$concat(var$0, $($of(node)->getClass()->getName())));
				}
			}
		}
	}
	$nc($(this->ownerDocument()))->setMutationEvents(orig);
	setReadOnly(true, false);
}

DeferredDocumentTypeImpl::DeferredDocumentTypeImpl() {
}

$Class* DeferredDocumentTypeImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredDocumentTypeImpl, name, initialize, &_DeferredDocumentTypeImpl_ClassInfo_, allocate$DeferredDocumentTypeImpl);
	return class$;
}

$Class* DeferredDocumentTypeImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com