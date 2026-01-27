#include <com/sun/org/apache/xerces/internal/dom/DeferredTextImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
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

$FieldInfo _DeferredTextImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredTextImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredTextImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredTextImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredTextImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredTextImpl, getNodeIndex, int32_t)},
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
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredTextImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredTextImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredTextImpl",
	"com.sun.org.apache.xerces.internal.dom.TextImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredTextImpl_FieldInfo_,
	_DeferredTextImpl_MethodInfo_
};

$Object* allocate$DeferredTextImpl($Class* clazz) {
	return $of($alloc(DeferredTextImpl));
}

int16_t DeferredTextImpl::getNodeType() {
	 return this->$TextImpl::getNodeType();
}

$String* DeferredTextImpl::getNodeName() {
	 return this->$TextImpl::getNodeName();
}

$NodeList* DeferredTextImpl::getChildNodes() {
	 return this->$TextImpl::getChildNodes();
}

$String* DeferredTextImpl::getNodeValue() {
	 return this->$TextImpl::getNodeValue();
}

void DeferredTextImpl::setNodeValue($String* value) {
	this->$TextImpl::setNodeValue(value);
}

$Node* DeferredTextImpl::cloneNode(bool deep) {
	 return this->$TextImpl::cloneNode(deep);
}

$Node* DeferredTextImpl::getParentNode() {
	 return this->$TextImpl::getParentNode();
}

$Node* DeferredTextImpl::getNextSibling() {
	 return this->$TextImpl::getNextSibling();
}

$Node* DeferredTextImpl::getPreviousSibling() {
	 return this->$TextImpl::getPreviousSibling();
}

$Node* DeferredTextImpl::appendChild($Node* newChild) {
	 return this->$TextImpl::appendChild(newChild);
}

$Document* DeferredTextImpl::getOwnerDocument() {
	 return this->$TextImpl::getOwnerDocument();
}

$NamedNodeMap* DeferredTextImpl::getAttributes() {
	 return this->$TextImpl::getAttributes();
}

bool DeferredTextImpl::hasAttributes() {
	 return this->$TextImpl::hasAttributes();
}

bool DeferredTextImpl::hasChildNodes() {
	 return this->$TextImpl::hasChildNodes();
}

$Node* DeferredTextImpl::getFirstChild() {
	 return this->$TextImpl::getFirstChild();
}

$Node* DeferredTextImpl::getLastChild() {
	 return this->$TextImpl::getLastChild();
}

$Node* DeferredTextImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$TextImpl::insertBefore(newChild, refChild);
}

$Node* DeferredTextImpl::removeChild($Node* oldChild) {
	 return this->$TextImpl::removeChild(oldChild);
}

$Node* DeferredTextImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$TextImpl::replaceChild(newChild, oldChild);
}

void DeferredTextImpl::normalize() {
	this->$TextImpl::normalize();
}

bool DeferredTextImpl::isSupported($String* feature, $String* version) {
	 return this->$TextImpl::isSupported(feature, version);
}

$String* DeferredTextImpl::getNamespaceURI() {
	 return this->$TextImpl::getNamespaceURI();
}

$String* DeferredTextImpl::getPrefix() {
	 return this->$TextImpl::getPrefix();
}

void DeferredTextImpl::setPrefix($String* prefix) {
	this->$TextImpl::setPrefix(prefix);
}

$String* DeferredTextImpl::getLocalName() {
	 return this->$TextImpl::getLocalName();
}

$String* DeferredTextImpl::getBaseURI() {
	 return this->$TextImpl::getBaseURI();
}

int16_t DeferredTextImpl::compareDocumentPosition($Node* other) {
	 return this->$TextImpl::compareDocumentPosition(other);
}

$String* DeferredTextImpl::getTextContent() {
	 return this->$TextImpl::getTextContent();
}

void DeferredTextImpl::setTextContent($String* textContent) {
	this->$TextImpl::setTextContent(textContent);
}

bool DeferredTextImpl::isSameNode($Node* other) {
	 return this->$TextImpl::isSameNode(other);
}

bool DeferredTextImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$TextImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredTextImpl::lookupPrefix($String* namespaceURI) {
	 return this->$TextImpl::lookupPrefix(namespaceURI);
}

$String* DeferredTextImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$TextImpl::lookupNamespaceURI(specifiedPrefix);
}

bool DeferredTextImpl::isEqualNode($Node* arg) {
	 return this->$TextImpl::isEqualNode(arg);
}

$Object* DeferredTextImpl::getFeature($String* feature, $String* version) {
	 return this->$TextImpl::getFeature(feature, version);
}

$Object* DeferredTextImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$TextImpl::setUserData(key, data, handler);
}

$Object* DeferredTextImpl::getUserData($String* key) {
	 return this->$TextImpl::getUserData(key);
}

$String* DeferredTextImpl::toString() {
	 return this->$TextImpl::toString();
}

int32_t DeferredTextImpl::hashCode() {
	 return this->$TextImpl::hashCode();
}

bool DeferredTextImpl::equals(Object$* arg0) {
	 return this->$TextImpl::equals(arg0);
}

$Object* DeferredTextImpl::clone() {
	 return this->$TextImpl::clone();
}

void DeferredTextImpl::finalize() {
	this->$TextImpl::finalize();
}

void DeferredTextImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$TextImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredTextImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredTextImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, data, $nc(ownerDocument)->getNodeValueString(this->fNodeIndex));
	isIgnorableWhitespace(ownerDocument->getNodeExtra(this->fNodeIndex) == 1);
}

DeferredTextImpl::DeferredTextImpl() {
}

$Class* DeferredTextImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredTextImpl, name, initialize, &_DeferredTextImpl_ClassInfo_, allocate$DeferredTextImpl);
	return class$;
}

$Class* DeferredTextImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com