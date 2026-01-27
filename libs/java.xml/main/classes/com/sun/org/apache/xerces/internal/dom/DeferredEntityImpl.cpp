#include <com/sun/org/apache/xerces/internal/dom/DeferredEntityImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>
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
using $EntityImpl = ::com::sun::org::apache::xerces::internal::dom::EntityImpl;
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

$FieldInfo _DeferredEntityImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredEntityImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredEntityImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredEntityImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredEntityImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredEntityImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredEntityImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredEntityImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredEntityImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredEntityImpl",
	"com.sun.org.apache.xerces.internal.dom.EntityImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredEntityImpl_FieldInfo_,
	_DeferredEntityImpl_MethodInfo_
};

$Object* allocate$DeferredEntityImpl($Class* clazz) {
	return $of($alloc(DeferredEntityImpl));
}

int16_t DeferredEntityImpl::getNodeType() {
	 return this->$EntityImpl::getNodeType();
}

$String* DeferredEntityImpl::getNodeName() {
	 return this->$EntityImpl::getNodeName();
}

void DeferredEntityImpl::setNodeValue($String* x) {
	this->$EntityImpl::setNodeValue(x);
}

void DeferredEntityImpl::setPrefix($String* prefix) {
	this->$EntityImpl::setPrefix(prefix);
}

$Node* DeferredEntityImpl::cloneNode(bool deep) {
	 return this->$EntityImpl::cloneNode(deep);
}

$String* DeferredEntityImpl::getBaseURI() {
	 return this->$EntityImpl::getBaseURI();
}

$Document* DeferredEntityImpl::getOwnerDocument() {
	 return this->$EntityImpl::getOwnerDocument();
}

bool DeferredEntityImpl::hasChildNodes() {
	 return this->$EntityImpl::hasChildNodes();
}

$NodeList* DeferredEntityImpl::getChildNodes() {
	 return this->$EntityImpl::getChildNodes();
}

$Node* DeferredEntityImpl::getFirstChild() {
	 return this->$EntityImpl::getFirstChild();
}

$Node* DeferredEntityImpl::getLastChild() {
	 return this->$EntityImpl::getLastChild();
}

$Node* DeferredEntityImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$EntityImpl::insertBefore(newChild, refChild);
}

$Node* DeferredEntityImpl::removeChild($Node* oldChild) {
	 return this->$EntityImpl::removeChild(oldChild);
}

$Node* DeferredEntityImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$EntityImpl::replaceChild(newChild, oldChild);
}

$String* DeferredEntityImpl::getTextContent() {
	 return this->$EntityImpl::getTextContent();
}

void DeferredEntityImpl::setTextContent($String* textContent) {
	this->$EntityImpl::setTextContent(textContent);
}

void DeferredEntityImpl::normalize() {
	this->$EntityImpl::normalize();
}

bool DeferredEntityImpl::isEqualNode($Node* arg) {
	 return this->$EntityImpl::isEqualNode(arg);
}

$Node* DeferredEntityImpl::getParentNode() {
	 return this->$EntityImpl::getParentNode();
}

$Node* DeferredEntityImpl::getNextSibling() {
	 return this->$EntityImpl::getNextSibling();
}

$Node* DeferredEntityImpl::getPreviousSibling() {
	 return this->$EntityImpl::getPreviousSibling();
}

$String* DeferredEntityImpl::getNodeValue() {
	 return this->$EntityImpl::getNodeValue();
}

$Node* DeferredEntityImpl::appendChild($Node* newChild) {
	 return this->$EntityImpl::appendChild(newChild);
}

$NamedNodeMap* DeferredEntityImpl::getAttributes() {
	 return this->$EntityImpl::getAttributes();
}

bool DeferredEntityImpl::hasAttributes() {
	 return this->$EntityImpl::hasAttributes();
}

bool DeferredEntityImpl::isSupported($String* feature, $String* version) {
	 return this->$EntityImpl::isSupported(feature, version);
}

$String* DeferredEntityImpl::getNamespaceURI() {
	 return this->$EntityImpl::getNamespaceURI();
}

$String* DeferredEntityImpl::getPrefix() {
	 return this->$EntityImpl::getPrefix();
}

$String* DeferredEntityImpl::getLocalName() {
	 return this->$EntityImpl::getLocalName();
}

int16_t DeferredEntityImpl::compareDocumentPosition($Node* other) {
	 return this->$EntityImpl::compareDocumentPosition(other);
}

bool DeferredEntityImpl::isSameNode($Node* other) {
	 return this->$EntityImpl::isSameNode(other);
}

bool DeferredEntityImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$EntityImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredEntityImpl::lookupPrefix($String* namespaceURI) {
	 return this->$EntityImpl::lookupPrefix(namespaceURI);
}

$String* DeferredEntityImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$EntityImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredEntityImpl::getFeature($String* feature, $String* version) {
	 return this->$EntityImpl::getFeature(feature, version);
}

$Object* DeferredEntityImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$EntityImpl::setUserData(key, data, handler);
}

$Object* DeferredEntityImpl::getUserData($String* key) {
	 return this->$EntityImpl::getUserData(key);
}

$String* DeferredEntityImpl::toString() {
	 return this->$EntityImpl::toString();
}

int32_t DeferredEntityImpl::hashCode() {
	 return this->$EntityImpl::hashCode();
}

bool DeferredEntityImpl::equals(Object$* arg0) {
	 return this->$EntityImpl::equals(arg0);
}

$Object* DeferredEntityImpl::clone() {
	 return this->$EntityImpl::clone();
}

void DeferredEntityImpl::finalize() {
	this->$EntityImpl::finalize();
}

void DeferredEntityImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$EntityImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
	needsSyncChildren(true);
}

int32_t DeferredEntityImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredEntityImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	$set(this, publicId, ownerDocument->getNodeValue(this->fNodeIndex));
	$set(this, systemId, ownerDocument->getNodeURI(this->fNodeIndex));
	int32_t extraDataIndex = ownerDocument->getNodeExtra(this->fNodeIndex);
	ownerDocument->getNodeType(extraDataIndex);
	$set(this, notationName, ownerDocument->getNodeName(extraDataIndex));
	$set(this, version, ownerDocument->getNodeValue(extraDataIndex));
	$set(this, encoding, ownerDocument->getNodeURI(extraDataIndex));
	int32_t extraIndex2 = ownerDocument->getNodeExtra(extraDataIndex);
	$set(this, baseURI, ownerDocument->getNodeName(extraIndex2));
	$set(this, inputEncoding, ownerDocument->getNodeValue(extraIndex2));
}

void DeferredEntityImpl::synchronizeChildren() {
	needsSyncChildren(false);
	isReadOnly(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$ParentNode*>(this), this->fNodeIndex);
	setReadOnly(true, true);
}

DeferredEntityImpl::DeferredEntityImpl() {
}

$Class* DeferredEntityImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredEntityImpl, name, initialize, &_DeferredEntityImpl_ClassInfo_, allocate$DeferredEntityImpl);
	return class$;
}

$Class* DeferredEntityImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com