#include <com/sun/org/apache/xerces/internal/dom/DeferredElementImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
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

$FieldInfo _DeferredElementImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredElementImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredElementImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredElementImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredElementImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DeferredElementImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(DeferredElementImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(DeferredElementImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredElementImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredElementImpl",
	"com.sun.org.apache.xerces.internal.dom.ElementImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredElementImpl_FieldInfo_,
	_DeferredElementImpl_MethodInfo_
};

$Object* allocate$DeferredElementImpl($Class* clazz) {
	return $of($alloc(DeferredElementImpl));
}

int16_t DeferredElementImpl::getNodeType() {
	 return this->$ElementImpl::getNodeType();
}

$String* DeferredElementImpl::getNodeName() {
	 return this->$ElementImpl::getNodeName();
}

$NamedNodeMap* DeferredElementImpl::getAttributes() {
	 return this->$ElementImpl::getAttributes();
}

$Node* DeferredElementImpl::cloneNode(bool deep) {
	 return this->$ElementImpl::cloneNode(deep);
}

$String* DeferredElementImpl::getBaseURI() {
	 return this->$ElementImpl::getBaseURI();
}

void DeferredElementImpl::normalize() {
	this->$ElementImpl::normalize();
}

bool DeferredElementImpl::hasAttributes() {
	 return this->$ElementImpl::hasAttributes();
}

bool DeferredElementImpl::isEqualNode($Node* arg) {
	 return this->$ElementImpl::isEqualNode(arg);
}

$Document* DeferredElementImpl::getOwnerDocument() {
	 return this->$ElementImpl::getOwnerDocument();
}

bool DeferredElementImpl::hasChildNodes() {
	 return this->$ElementImpl::hasChildNodes();
}

$NodeList* DeferredElementImpl::getChildNodes() {
	 return this->$ElementImpl::getChildNodes();
}

$Node* DeferredElementImpl::getFirstChild() {
	 return this->$ElementImpl::getFirstChild();
}

$Node* DeferredElementImpl::getLastChild() {
	 return this->$ElementImpl::getLastChild();
}

$Node* DeferredElementImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ElementImpl::insertBefore(newChild, refChild);
}

$Node* DeferredElementImpl::removeChild($Node* oldChild) {
	 return this->$ElementImpl::removeChild(oldChild);
}

$Node* DeferredElementImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ElementImpl::replaceChild(newChild, oldChild);
}

$String* DeferredElementImpl::getTextContent() {
	 return this->$ElementImpl::getTextContent();
}

void DeferredElementImpl::setTextContent($String* textContent) {
	this->$ElementImpl::setTextContent(textContent);
}

$Node* DeferredElementImpl::getParentNode() {
	 return this->$ElementImpl::getParentNode();
}

$Node* DeferredElementImpl::getNextSibling() {
	 return this->$ElementImpl::getNextSibling();
}

$Node* DeferredElementImpl::getPreviousSibling() {
	 return this->$ElementImpl::getPreviousSibling();
}

$String* DeferredElementImpl::getNodeValue() {
	 return this->$ElementImpl::getNodeValue();
}

void DeferredElementImpl::setNodeValue($String* x) {
	this->$ElementImpl::setNodeValue(x);
}

$Node* DeferredElementImpl::appendChild($Node* newChild) {
	 return this->$ElementImpl::appendChild(newChild);
}

bool DeferredElementImpl::isSupported($String* feature, $String* version) {
	 return this->$ElementImpl::isSupported(feature, version);
}

$String* DeferredElementImpl::getNamespaceURI() {
	 return this->$ElementImpl::getNamespaceURI();
}

$String* DeferredElementImpl::getPrefix() {
	 return this->$ElementImpl::getPrefix();
}

void DeferredElementImpl::setPrefix($String* prefix) {
	this->$ElementImpl::setPrefix(prefix);
}

$String* DeferredElementImpl::getLocalName() {
	 return this->$ElementImpl::getLocalName();
}

int16_t DeferredElementImpl::compareDocumentPosition($Node* other) {
	 return this->$ElementImpl::compareDocumentPosition(other);
}

bool DeferredElementImpl::isSameNode($Node* other) {
	 return this->$ElementImpl::isSameNode(other);
}

bool DeferredElementImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ElementImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredElementImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ElementImpl::lookupPrefix(namespaceURI);
}

$String* DeferredElementImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ElementImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredElementImpl::getFeature($String* feature, $String* version) {
	 return this->$ElementImpl::getFeature(feature, version);
}

$Object* DeferredElementImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ElementImpl::setUserData(key, data, handler);
}

$Object* DeferredElementImpl::getUserData($String* key) {
	 return this->$ElementImpl::getUserData(key);
}

$String* DeferredElementImpl::toString() {
	 return this->$ElementImpl::toString();
}

int32_t DeferredElementImpl::hashCode() {
	 return this->$ElementImpl::hashCode();
}

bool DeferredElementImpl::equals(Object$* arg0) {
	 return this->$ElementImpl::equals(arg0);
}

$Object* DeferredElementImpl::clone() {
	 return this->$ElementImpl::clone();
}

void DeferredElementImpl::finalize() {
	this->$ElementImpl::finalize();
}

void DeferredElementImpl::init$($DeferredDocumentImpl* ownerDoc, int32_t nodeIndex) {
	$ElementImpl::init$(ownerDoc, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncChildren(true);
}

int32_t DeferredElementImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredElementImpl::synchronizeData() {
	$useLocalCurrentObjectStackCache();
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	bool orig = $nc(ownerDocument)->mutationEvents;
	ownerDocument->mutationEvents = false;
	$set(this, name, ownerDocument->getNodeName(this->fNodeIndex));
	setupDefaultAttributes();
	int32_t index = ownerDocument->getNodeExtra(this->fNodeIndex);
	if (index != -1) {
		$var($NamedNodeMap, attrs, getAttributes());
		do {
			$var($NodeImpl, attr, $cast($NodeImpl, ownerDocument->getNodeObject(index)));
			$nc(attrs)->setNamedItem(attr);
			index = ownerDocument->getPrevSibling(index);
		} while (index != -1);
	}
	ownerDocument->mutationEvents = orig;
}

void DeferredElementImpl::synchronizeChildren() {
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$ParentNode*>(this), this->fNodeIndex);
}

DeferredElementImpl::DeferredElementImpl() {
}

$Class* DeferredElementImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredElementImpl, name, initialize, &_DeferredElementImpl_ClassInfo_, allocate$DeferredElementImpl);
	return class$;
}

$Class* DeferredElementImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com