#include <com/sun/org/apache/xerces/internal/dom/DeferredCDATASectionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CDATASectionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $CDATASectionImpl = ::com::sun::org::apache::xerces::internal::dom::CDATASectionImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
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

$FieldInfo _DeferredCDATASectionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredCDATASectionImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredCDATASectionImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredCDATASectionImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredCDATASectionImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredCDATASectionImpl, getNodeIndex, int32_t)},
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
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredCDATASectionImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredCDATASectionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredCDATASectionImpl",
	"com.sun.org.apache.xerces.internal.dom.CDATASectionImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredCDATASectionImpl_FieldInfo_,
	_DeferredCDATASectionImpl_MethodInfo_
};

$Object* allocate$DeferredCDATASectionImpl($Class* clazz) {
	return $of($alloc(DeferredCDATASectionImpl));
}

int16_t DeferredCDATASectionImpl::getNodeType() {
	 return this->$CDATASectionImpl::getNodeType();
}

$String* DeferredCDATASectionImpl::getNodeName() {
	 return this->$CDATASectionImpl::getNodeName();
}

$NodeList* DeferredCDATASectionImpl::getChildNodes() {
	 return this->$CDATASectionImpl::getChildNodes();
}

$String* DeferredCDATASectionImpl::getNodeValue() {
	 return this->$CDATASectionImpl::getNodeValue();
}

void DeferredCDATASectionImpl::setNodeValue($String* value) {
	this->$CDATASectionImpl::setNodeValue(value);
}

$Node* DeferredCDATASectionImpl::cloneNode(bool deep) {
	 return this->$CDATASectionImpl::cloneNode(deep);
}

$Node* DeferredCDATASectionImpl::getParentNode() {
	 return this->$CDATASectionImpl::getParentNode();
}

$Node* DeferredCDATASectionImpl::getNextSibling() {
	 return this->$CDATASectionImpl::getNextSibling();
}

$Node* DeferredCDATASectionImpl::getPreviousSibling() {
	 return this->$CDATASectionImpl::getPreviousSibling();
}

$Node* DeferredCDATASectionImpl::appendChild($Node* newChild) {
	 return this->$CDATASectionImpl::appendChild(newChild);
}

$Document* DeferredCDATASectionImpl::getOwnerDocument() {
	 return this->$CDATASectionImpl::getOwnerDocument();
}

$NamedNodeMap* DeferredCDATASectionImpl::getAttributes() {
	 return this->$CDATASectionImpl::getAttributes();
}

bool DeferredCDATASectionImpl::hasAttributes() {
	 return this->$CDATASectionImpl::hasAttributes();
}

bool DeferredCDATASectionImpl::hasChildNodes() {
	 return this->$CDATASectionImpl::hasChildNodes();
}

$Node* DeferredCDATASectionImpl::getFirstChild() {
	 return this->$CDATASectionImpl::getFirstChild();
}

$Node* DeferredCDATASectionImpl::getLastChild() {
	 return this->$CDATASectionImpl::getLastChild();
}

$Node* DeferredCDATASectionImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$CDATASectionImpl::insertBefore(newChild, refChild);
}

$Node* DeferredCDATASectionImpl::removeChild($Node* oldChild) {
	 return this->$CDATASectionImpl::removeChild(oldChild);
}

$Node* DeferredCDATASectionImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$CDATASectionImpl::replaceChild(newChild, oldChild);
}

void DeferredCDATASectionImpl::normalize() {
	this->$CDATASectionImpl::normalize();
}

bool DeferredCDATASectionImpl::isSupported($String* feature, $String* version) {
	 return this->$CDATASectionImpl::isSupported(feature, version);
}

$String* DeferredCDATASectionImpl::getNamespaceURI() {
	 return this->$CDATASectionImpl::getNamespaceURI();
}

$String* DeferredCDATASectionImpl::getPrefix() {
	 return this->$CDATASectionImpl::getPrefix();
}

void DeferredCDATASectionImpl::setPrefix($String* prefix) {
	this->$CDATASectionImpl::setPrefix(prefix);
}

$String* DeferredCDATASectionImpl::getLocalName() {
	 return this->$CDATASectionImpl::getLocalName();
}

$String* DeferredCDATASectionImpl::getBaseURI() {
	 return this->$CDATASectionImpl::getBaseURI();
}

int16_t DeferredCDATASectionImpl::compareDocumentPosition($Node* other) {
	 return this->$CDATASectionImpl::compareDocumentPosition(other);
}

$String* DeferredCDATASectionImpl::getTextContent() {
	 return this->$CDATASectionImpl::getTextContent();
}

void DeferredCDATASectionImpl::setTextContent($String* textContent) {
	this->$CDATASectionImpl::setTextContent(textContent);
}

bool DeferredCDATASectionImpl::isSameNode($Node* other) {
	 return this->$CDATASectionImpl::isSameNode(other);
}

bool DeferredCDATASectionImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$CDATASectionImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredCDATASectionImpl::lookupPrefix($String* namespaceURI) {
	 return this->$CDATASectionImpl::lookupPrefix(namespaceURI);
}

$String* DeferredCDATASectionImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$CDATASectionImpl::lookupNamespaceURI(specifiedPrefix);
}

bool DeferredCDATASectionImpl::isEqualNode($Node* arg) {
	 return this->$CDATASectionImpl::isEqualNode(arg);
}

$Object* DeferredCDATASectionImpl::getFeature($String* feature, $String* version) {
	 return this->$CDATASectionImpl::getFeature(feature, version);
}

$Object* DeferredCDATASectionImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$CDATASectionImpl::setUserData(key, data, handler);
}

$Object* DeferredCDATASectionImpl::getUserData($String* key) {
	 return this->$CDATASectionImpl::getUserData(key);
}

$String* DeferredCDATASectionImpl::toString() {
	 return this->$CDATASectionImpl::toString();
}

int32_t DeferredCDATASectionImpl::hashCode() {
	 return this->$CDATASectionImpl::hashCode();
}

bool DeferredCDATASectionImpl::equals(Object$* arg0) {
	 return this->$CDATASectionImpl::equals(arg0);
}

$Object* DeferredCDATASectionImpl::clone() {
	 return this->$CDATASectionImpl::clone();
}

void DeferredCDATASectionImpl::finalize() {
	this->$CDATASectionImpl::finalize();
}

void DeferredCDATASectionImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$CDATASectionImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredCDATASectionImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredCDATASectionImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, data, $nc(ownerDocument)->getNodeValueString(this->fNodeIndex));
}

DeferredCDATASectionImpl::DeferredCDATASectionImpl() {
}

$Class* DeferredCDATASectionImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredCDATASectionImpl, name, initialize, &_DeferredCDATASectionImpl_ClassInfo_, allocate$DeferredCDATASectionImpl);
	return class$;
}

$Class* DeferredCDATASectionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com