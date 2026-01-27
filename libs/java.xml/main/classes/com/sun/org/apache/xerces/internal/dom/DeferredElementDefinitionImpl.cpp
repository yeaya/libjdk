#include <com/sun/org/apache/xerces/internal/dom/DeferredElementDefinitionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ElementDefinitionImpl = ::com::sun::org::apache::xerces::internal::dom::ElementDefinitionImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
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

$FieldInfo _DeferredElementDefinitionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredElementDefinitionImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredElementDefinitionImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredElementDefinitionImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredElementDefinitionImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredElementDefinitionImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredElementDefinitionImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredElementDefinitionImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredElementDefinitionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredElementDefinitionImpl",
	"com.sun.org.apache.xerces.internal.dom.ElementDefinitionImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredElementDefinitionImpl_FieldInfo_,
	_DeferredElementDefinitionImpl_MethodInfo_
};

$Object* allocate$DeferredElementDefinitionImpl($Class* clazz) {
	return $of($alloc(DeferredElementDefinitionImpl));
}

int16_t DeferredElementDefinitionImpl::getNodeType() {
	 return this->$ElementDefinitionImpl::getNodeType();
}

$String* DeferredElementDefinitionImpl::getNodeName() {
	 return this->$ElementDefinitionImpl::getNodeName();
}

$Node* DeferredElementDefinitionImpl::cloneNode(bool deep) {
	 return this->$ElementDefinitionImpl::cloneNode(deep);
}

$NamedNodeMap* DeferredElementDefinitionImpl::getAttributes() {
	 return this->$ElementDefinitionImpl::getAttributes();
}

$Document* DeferredElementDefinitionImpl::getOwnerDocument() {
	 return this->$ElementDefinitionImpl::getOwnerDocument();
}

bool DeferredElementDefinitionImpl::hasChildNodes() {
	 return this->$ElementDefinitionImpl::hasChildNodes();
}

$NodeList* DeferredElementDefinitionImpl::getChildNodes() {
	 return this->$ElementDefinitionImpl::getChildNodes();
}

$Node* DeferredElementDefinitionImpl::getFirstChild() {
	 return this->$ElementDefinitionImpl::getFirstChild();
}

$Node* DeferredElementDefinitionImpl::getLastChild() {
	 return this->$ElementDefinitionImpl::getLastChild();
}

$Node* DeferredElementDefinitionImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ElementDefinitionImpl::insertBefore(newChild, refChild);
}

$Node* DeferredElementDefinitionImpl::removeChild($Node* oldChild) {
	 return this->$ElementDefinitionImpl::removeChild(oldChild);
}

$Node* DeferredElementDefinitionImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ElementDefinitionImpl::replaceChild(newChild, oldChild);
}

$String* DeferredElementDefinitionImpl::getTextContent() {
	 return this->$ElementDefinitionImpl::getTextContent();
}

void DeferredElementDefinitionImpl::setTextContent($String* textContent) {
	this->$ElementDefinitionImpl::setTextContent(textContent);
}

void DeferredElementDefinitionImpl::normalize() {
	this->$ElementDefinitionImpl::normalize();
}

bool DeferredElementDefinitionImpl::isEqualNode($Node* arg) {
	 return this->$ElementDefinitionImpl::isEqualNode(arg);
}

$Node* DeferredElementDefinitionImpl::getParentNode() {
	 return this->$ElementDefinitionImpl::getParentNode();
}

$Node* DeferredElementDefinitionImpl::getNextSibling() {
	 return this->$ElementDefinitionImpl::getNextSibling();
}

$Node* DeferredElementDefinitionImpl::getPreviousSibling() {
	 return this->$ElementDefinitionImpl::getPreviousSibling();
}

$String* DeferredElementDefinitionImpl::getNodeValue() {
	 return this->$ElementDefinitionImpl::getNodeValue();
}

void DeferredElementDefinitionImpl::setNodeValue($String* x) {
	this->$ElementDefinitionImpl::setNodeValue(x);
}

$Node* DeferredElementDefinitionImpl::appendChild($Node* newChild) {
	 return this->$ElementDefinitionImpl::appendChild(newChild);
}

bool DeferredElementDefinitionImpl::hasAttributes() {
	 return this->$ElementDefinitionImpl::hasAttributes();
}

bool DeferredElementDefinitionImpl::isSupported($String* feature, $String* version) {
	 return this->$ElementDefinitionImpl::isSupported(feature, version);
}

$String* DeferredElementDefinitionImpl::getNamespaceURI() {
	 return this->$ElementDefinitionImpl::getNamespaceURI();
}

$String* DeferredElementDefinitionImpl::getPrefix() {
	 return this->$ElementDefinitionImpl::getPrefix();
}

void DeferredElementDefinitionImpl::setPrefix($String* prefix) {
	this->$ElementDefinitionImpl::setPrefix(prefix);
}

$String* DeferredElementDefinitionImpl::getLocalName() {
	 return this->$ElementDefinitionImpl::getLocalName();
}

$String* DeferredElementDefinitionImpl::getBaseURI() {
	 return this->$ElementDefinitionImpl::getBaseURI();
}

int16_t DeferredElementDefinitionImpl::compareDocumentPosition($Node* other) {
	 return this->$ElementDefinitionImpl::compareDocumentPosition(other);
}

bool DeferredElementDefinitionImpl::isSameNode($Node* other) {
	 return this->$ElementDefinitionImpl::isSameNode(other);
}

bool DeferredElementDefinitionImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ElementDefinitionImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredElementDefinitionImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ElementDefinitionImpl::lookupPrefix(namespaceURI);
}

$String* DeferredElementDefinitionImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ElementDefinitionImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredElementDefinitionImpl::getFeature($String* feature, $String* version) {
	 return this->$ElementDefinitionImpl::getFeature(feature, version);
}

$Object* DeferredElementDefinitionImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ElementDefinitionImpl::setUserData(key, data, handler);
}

$Object* DeferredElementDefinitionImpl::getUserData($String* key) {
	 return this->$ElementDefinitionImpl::getUserData(key);
}

$String* DeferredElementDefinitionImpl::toString() {
	 return this->$ElementDefinitionImpl::toString();
}

int32_t DeferredElementDefinitionImpl::hashCode() {
	 return this->$ElementDefinitionImpl::hashCode();
}

bool DeferredElementDefinitionImpl::equals(Object$* arg0) {
	 return this->$ElementDefinitionImpl::equals(arg0);
}

$Object* DeferredElementDefinitionImpl::clone() {
	 return this->$ElementDefinitionImpl::clone();
}

void DeferredElementDefinitionImpl::finalize() {
	this->$ElementDefinitionImpl::finalize();
}

void DeferredElementDefinitionImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$ElementDefinitionImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
	needsSyncChildren(true);
}

int32_t DeferredElementDefinitionImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredElementDefinitionImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
}

void DeferredElementDefinitionImpl::synchronizeChildren() {
	$useLocalCurrentObjectStackCache();
	bool orig = $nc(this->ownerDocument$)->getMutationEvents();
	$nc(this->ownerDocument$)->setMutationEvents(false);
	needsSyncChildren(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, attributes, $new($NamedNodeMapImpl, ownerDocument));
	for (int32_t nodeIndex = $nc(ownerDocument)->getLastChild(this->fNodeIndex); nodeIndex != -1; nodeIndex = ownerDocument->getPrevSibling(nodeIndex)) {
		$var($Node, attr, ownerDocument->getNodeObject(nodeIndex));
		$nc(this->attributes)->setNamedItem(attr);
	}
	ownerDocument->setMutationEvents(orig);
}

DeferredElementDefinitionImpl::DeferredElementDefinitionImpl() {
}

$Class* DeferredElementDefinitionImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredElementDefinitionImpl, name, initialize, &_DeferredElementDefinitionImpl_ClassInfo_, allocate$DeferredElementDefinitionImpl);
	return class$;
}

$Class* DeferredElementDefinitionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com