#include <com/sun/org/apache/xerces/internal/dom/DeferredNotationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NotationImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $NotationImpl = ::com::sun::org::apache::xerces::internal::dom::NotationImpl;
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

$FieldInfo _DeferredNotationImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredNotationImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredNotationImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredNotationImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredNotationImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredNotationImpl, getNodeIndex, int32_t)},
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
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredNotationImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredNotationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredNotationImpl",
	"com.sun.org.apache.xerces.internal.dom.NotationImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredNotationImpl_FieldInfo_,
	_DeferredNotationImpl_MethodInfo_
};

$Object* allocate$DeferredNotationImpl($Class* clazz) {
	return $of($alloc(DeferredNotationImpl));
}

int16_t DeferredNotationImpl::getNodeType() {
	 return this->$NotationImpl::getNodeType();
}

$String* DeferredNotationImpl::getNodeName() {
	 return this->$NotationImpl::getNodeName();
}

$String* DeferredNotationImpl::getBaseURI() {
	 return this->$NotationImpl::getBaseURI();
}

$String* DeferredNotationImpl::getNodeValue() {
	 return this->$NotationImpl::getNodeValue();
}

void DeferredNotationImpl::setNodeValue($String* x) {
	this->$NotationImpl::setNodeValue(x);
}

$Node* DeferredNotationImpl::appendChild($Node* newChild) {
	 return this->$NotationImpl::appendChild(newChild);
}

$Node* DeferredNotationImpl::cloneNode(bool deep) {
	 return this->$NotationImpl::cloneNode(deep);
}

$Document* DeferredNotationImpl::getOwnerDocument() {
	 return this->$NotationImpl::getOwnerDocument();
}

$Node* DeferredNotationImpl::getParentNode() {
	 return this->$NotationImpl::getParentNode();
}

$Node* DeferredNotationImpl::getNextSibling() {
	 return this->$NotationImpl::getNextSibling();
}

$Node* DeferredNotationImpl::getPreviousSibling() {
	 return this->$NotationImpl::getPreviousSibling();
}

$NamedNodeMap* DeferredNotationImpl::getAttributes() {
	 return this->$NotationImpl::getAttributes();
}

bool DeferredNotationImpl::hasAttributes() {
	 return this->$NotationImpl::hasAttributes();
}

bool DeferredNotationImpl::hasChildNodes() {
	 return this->$NotationImpl::hasChildNodes();
}

$NodeList* DeferredNotationImpl::getChildNodes() {
	 return this->$NotationImpl::getChildNodes();
}

$Node* DeferredNotationImpl::getFirstChild() {
	 return this->$NotationImpl::getFirstChild();
}

$Node* DeferredNotationImpl::getLastChild() {
	 return this->$NotationImpl::getLastChild();
}

$Node* DeferredNotationImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NotationImpl::insertBefore(newChild, refChild);
}

$Node* DeferredNotationImpl::removeChild($Node* oldChild) {
	 return this->$NotationImpl::removeChild(oldChild);
}

$Node* DeferredNotationImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NotationImpl::replaceChild(newChild, oldChild);
}

void DeferredNotationImpl::normalize() {
	this->$NotationImpl::normalize();
}

bool DeferredNotationImpl::isSupported($String* feature, $String* version) {
	 return this->$NotationImpl::isSupported(feature, version);
}

$String* DeferredNotationImpl::getNamespaceURI() {
	 return this->$NotationImpl::getNamespaceURI();
}

$String* DeferredNotationImpl::getPrefix() {
	 return this->$NotationImpl::getPrefix();
}

void DeferredNotationImpl::setPrefix($String* prefix) {
	this->$NotationImpl::setPrefix(prefix);
}

$String* DeferredNotationImpl::getLocalName() {
	 return this->$NotationImpl::getLocalName();
}

int16_t DeferredNotationImpl::compareDocumentPosition($Node* other) {
	 return this->$NotationImpl::compareDocumentPosition(other);
}

$String* DeferredNotationImpl::getTextContent() {
	 return this->$NotationImpl::getTextContent();
}

void DeferredNotationImpl::setTextContent($String* textContent) {
	this->$NotationImpl::setTextContent(textContent);
}

bool DeferredNotationImpl::isSameNode($Node* other) {
	 return this->$NotationImpl::isSameNode(other);
}

bool DeferredNotationImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$NotationImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredNotationImpl::lookupPrefix($String* namespaceURI) {
	 return this->$NotationImpl::lookupPrefix(namespaceURI);
}

$String* DeferredNotationImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$NotationImpl::lookupNamespaceURI(specifiedPrefix);
}

bool DeferredNotationImpl::isEqualNode($Node* arg) {
	 return this->$NotationImpl::isEqualNode(arg);
}

$Object* DeferredNotationImpl::getFeature($String* feature, $String* version) {
	 return this->$NotationImpl::getFeature(feature, version);
}

$Object* DeferredNotationImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NotationImpl::setUserData(key, data, handler);
}

$Object* DeferredNotationImpl::getUserData($String* key) {
	 return this->$NotationImpl::getUserData(key);
}

$String* DeferredNotationImpl::toString() {
	 return this->$NotationImpl::toString();
}

int32_t DeferredNotationImpl::hashCode() {
	 return this->$NotationImpl::hashCode();
}

bool DeferredNotationImpl::equals(Object$* arg0) {
	 return this->$NotationImpl::equals(arg0);
}

$Object* DeferredNotationImpl::clone() {
	 return this->$NotationImpl::clone();
}

void DeferredNotationImpl::finalize() {
	this->$NotationImpl::finalize();
}

void DeferredNotationImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$NotationImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredNotationImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredNotationImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	ownerDocument->getNodeType(this->fNodeIndex);
	$set(this, publicId, ownerDocument->getNodeValue(this->fNodeIndex));
	$set(this, systemId, ownerDocument->getNodeURI(this->fNodeIndex));
	int32_t extraDataIndex = ownerDocument->getNodeExtra(this->fNodeIndex);
	ownerDocument->getNodeType(extraDataIndex);
	$set(this, baseURI, ownerDocument->getNodeName(extraDataIndex));
}

DeferredNotationImpl::DeferredNotationImpl() {
}

$Class* DeferredNotationImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredNotationImpl, name, initialize, &_DeferredNotationImpl_ClassInfo_, allocate$DeferredNotationImpl);
	return class$;
}

$Class* DeferredNotationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com