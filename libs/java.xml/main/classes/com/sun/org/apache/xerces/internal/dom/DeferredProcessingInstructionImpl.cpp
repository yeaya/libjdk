#include <com/sun/org/apache/xerces/internal/dom/DeferredProcessingInstructionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ProcessingInstructionImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ProcessingInstructionImpl = ::com::sun::org::apache::xerces::internal::dom::ProcessingInstructionImpl;
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

$FieldInfo _DeferredProcessingInstructionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredProcessingInstructionImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredProcessingInstructionImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredProcessingInstructionImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredProcessingInstructionImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredProcessingInstructionImpl, getNodeIndex, int32_t)},
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
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredProcessingInstructionImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredProcessingInstructionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredProcessingInstructionImpl",
	"com.sun.org.apache.xerces.internal.dom.ProcessingInstructionImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredProcessingInstructionImpl_FieldInfo_,
	_DeferredProcessingInstructionImpl_MethodInfo_
};

$Object* allocate$DeferredProcessingInstructionImpl($Class* clazz) {
	return $of($alloc(DeferredProcessingInstructionImpl));
}

int16_t DeferredProcessingInstructionImpl::getNodeType() {
	 return this->$ProcessingInstructionImpl::getNodeType();
}

$String* DeferredProcessingInstructionImpl::getNodeName() {
	 return this->$ProcessingInstructionImpl::getNodeName();
}

$String* DeferredProcessingInstructionImpl::getBaseURI() {
	 return this->$ProcessingInstructionImpl::getBaseURI();
}

$NodeList* DeferredProcessingInstructionImpl::getChildNodes() {
	 return this->$ProcessingInstructionImpl::getChildNodes();
}

$String* DeferredProcessingInstructionImpl::getNodeValue() {
	 return this->$ProcessingInstructionImpl::getNodeValue();
}

void DeferredProcessingInstructionImpl::setNodeValue($String* value) {
	this->$ProcessingInstructionImpl::setNodeValue(value);
}

$Node* DeferredProcessingInstructionImpl::cloneNode(bool deep) {
	 return this->$ProcessingInstructionImpl::cloneNode(deep);
}

$Node* DeferredProcessingInstructionImpl::getParentNode() {
	 return this->$ProcessingInstructionImpl::getParentNode();
}

$Node* DeferredProcessingInstructionImpl::getNextSibling() {
	 return this->$ProcessingInstructionImpl::getNextSibling();
}

$Node* DeferredProcessingInstructionImpl::getPreviousSibling() {
	 return this->$ProcessingInstructionImpl::getPreviousSibling();
}

$Node* DeferredProcessingInstructionImpl::appendChild($Node* newChild) {
	 return this->$ProcessingInstructionImpl::appendChild(newChild);
}

$Document* DeferredProcessingInstructionImpl::getOwnerDocument() {
	 return this->$ProcessingInstructionImpl::getOwnerDocument();
}

$NamedNodeMap* DeferredProcessingInstructionImpl::getAttributes() {
	 return this->$ProcessingInstructionImpl::getAttributes();
}

bool DeferredProcessingInstructionImpl::hasAttributes() {
	 return this->$ProcessingInstructionImpl::hasAttributes();
}

bool DeferredProcessingInstructionImpl::hasChildNodes() {
	 return this->$ProcessingInstructionImpl::hasChildNodes();
}

$Node* DeferredProcessingInstructionImpl::getFirstChild() {
	 return this->$ProcessingInstructionImpl::getFirstChild();
}

$Node* DeferredProcessingInstructionImpl::getLastChild() {
	 return this->$ProcessingInstructionImpl::getLastChild();
}

$Node* DeferredProcessingInstructionImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ProcessingInstructionImpl::insertBefore(newChild, refChild);
}

$Node* DeferredProcessingInstructionImpl::removeChild($Node* oldChild) {
	 return this->$ProcessingInstructionImpl::removeChild(oldChild);
}

$Node* DeferredProcessingInstructionImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ProcessingInstructionImpl::replaceChild(newChild, oldChild);
}

void DeferredProcessingInstructionImpl::normalize() {
	this->$ProcessingInstructionImpl::normalize();
}

bool DeferredProcessingInstructionImpl::isSupported($String* feature, $String* version) {
	 return this->$ProcessingInstructionImpl::isSupported(feature, version);
}

$String* DeferredProcessingInstructionImpl::getNamespaceURI() {
	 return this->$ProcessingInstructionImpl::getNamespaceURI();
}

$String* DeferredProcessingInstructionImpl::getPrefix() {
	 return this->$ProcessingInstructionImpl::getPrefix();
}

void DeferredProcessingInstructionImpl::setPrefix($String* prefix) {
	this->$ProcessingInstructionImpl::setPrefix(prefix);
}

$String* DeferredProcessingInstructionImpl::getLocalName() {
	 return this->$ProcessingInstructionImpl::getLocalName();
}

int16_t DeferredProcessingInstructionImpl::compareDocumentPosition($Node* other) {
	 return this->$ProcessingInstructionImpl::compareDocumentPosition(other);
}

$String* DeferredProcessingInstructionImpl::getTextContent() {
	 return this->$ProcessingInstructionImpl::getTextContent();
}

void DeferredProcessingInstructionImpl::setTextContent($String* textContent) {
	this->$ProcessingInstructionImpl::setTextContent(textContent);
}

bool DeferredProcessingInstructionImpl::isSameNode($Node* other) {
	 return this->$ProcessingInstructionImpl::isSameNode(other);
}

bool DeferredProcessingInstructionImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ProcessingInstructionImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredProcessingInstructionImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ProcessingInstructionImpl::lookupPrefix(namespaceURI);
}

$String* DeferredProcessingInstructionImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ProcessingInstructionImpl::lookupNamespaceURI(specifiedPrefix);
}

bool DeferredProcessingInstructionImpl::isEqualNode($Node* arg) {
	 return this->$ProcessingInstructionImpl::isEqualNode(arg);
}

$Object* DeferredProcessingInstructionImpl::getFeature($String* feature, $String* version) {
	 return this->$ProcessingInstructionImpl::getFeature(feature, version);
}

$Object* DeferredProcessingInstructionImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ProcessingInstructionImpl::setUserData(key, data, handler);
}

$Object* DeferredProcessingInstructionImpl::getUserData($String* key) {
	 return this->$ProcessingInstructionImpl::getUserData(key);
}

$String* DeferredProcessingInstructionImpl::toString() {
	 return this->$ProcessingInstructionImpl::toString();
}

int32_t DeferredProcessingInstructionImpl::hashCode() {
	 return this->$ProcessingInstructionImpl::hashCode();
}

bool DeferredProcessingInstructionImpl::equals(Object$* arg0) {
	 return this->$ProcessingInstructionImpl::equals(arg0);
}

$Object* DeferredProcessingInstructionImpl::clone() {
	 return this->$ProcessingInstructionImpl::clone();
}

void DeferredProcessingInstructionImpl::finalize() {
	this->$ProcessingInstructionImpl::finalize();
}

void DeferredProcessingInstructionImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$ProcessingInstructionImpl::init$(ownerDocument, nullptr, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredProcessingInstructionImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredProcessingInstructionImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, target, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	$set(this, data, ownerDocument->getNodeValueString(this->fNodeIndex));
}

DeferredProcessingInstructionImpl::DeferredProcessingInstructionImpl() {
}

$Class* DeferredProcessingInstructionImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredProcessingInstructionImpl, name, initialize, &_DeferredProcessingInstructionImpl_ClassInfo_, allocate$DeferredProcessingInstructionImpl);
	return class$;
}

$Class* DeferredProcessingInstructionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com