#include <com/sun/org/apache/xerces/internal/dom/DeferredEntityReferenceImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
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
using $EntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl;
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

$FieldInfo _DeferredEntityReferenceImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredEntityReferenceImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredEntityReferenceImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredEntityReferenceImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredEntityReferenceImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredEntityReferenceImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredEntityReferenceImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredEntityReferenceImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredEntityReferenceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredEntityReferenceImpl",
	"com.sun.org.apache.xerces.internal.dom.EntityReferenceImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredEntityReferenceImpl_FieldInfo_,
	_DeferredEntityReferenceImpl_MethodInfo_
};

$Object* allocate$DeferredEntityReferenceImpl($Class* clazz) {
	return $of($alloc(DeferredEntityReferenceImpl));
}

int16_t DeferredEntityReferenceImpl::getNodeType() {
	 return this->$EntityReferenceImpl::getNodeType();
}

$String* DeferredEntityReferenceImpl::getNodeName() {
	 return this->$EntityReferenceImpl::getNodeName();
}

$Node* DeferredEntityReferenceImpl::cloneNode(bool deep) {
	 return this->$EntityReferenceImpl::cloneNode(deep);
}

$String* DeferredEntityReferenceImpl::getBaseURI() {
	 return this->$EntityReferenceImpl::getBaseURI();
}

$Document* DeferredEntityReferenceImpl::getOwnerDocument() {
	 return this->$EntityReferenceImpl::getOwnerDocument();
}

bool DeferredEntityReferenceImpl::hasChildNodes() {
	 return this->$EntityReferenceImpl::hasChildNodes();
}

$NodeList* DeferredEntityReferenceImpl::getChildNodes() {
	 return this->$EntityReferenceImpl::getChildNodes();
}

$Node* DeferredEntityReferenceImpl::getFirstChild() {
	 return this->$EntityReferenceImpl::getFirstChild();
}

$Node* DeferredEntityReferenceImpl::getLastChild() {
	 return this->$EntityReferenceImpl::getLastChild();
}

$Node* DeferredEntityReferenceImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$EntityReferenceImpl::insertBefore(newChild, refChild);
}

$Node* DeferredEntityReferenceImpl::removeChild($Node* oldChild) {
	 return this->$EntityReferenceImpl::removeChild(oldChild);
}

$Node* DeferredEntityReferenceImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$EntityReferenceImpl::replaceChild(newChild, oldChild);
}

$String* DeferredEntityReferenceImpl::getTextContent() {
	 return this->$EntityReferenceImpl::getTextContent();
}

void DeferredEntityReferenceImpl::setTextContent($String* textContent) {
	this->$EntityReferenceImpl::setTextContent(textContent);
}

void DeferredEntityReferenceImpl::normalize() {
	this->$EntityReferenceImpl::normalize();
}

bool DeferredEntityReferenceImpl::isEqualNode($Node* arg) {
	 return this->$EntityReferenceImpl::isEqualNode(arg);
}

$Node* DeferredEntityReferenceImpl::getParentNode() {
	 return this->$EntityReferenceImpl::getParentNode();
}

$Node* DeferredEntityReferenceImpl::getNextSibling() {
	 return this->$EntityReferenceImpl::getNextSibling();
}

$Node* DeferredEntityReferenceImpl::getPreviousSibling() {
	 return this->$EntityReferenceImpl::getPreviousSibling();
}

$String* DeferredEntityReferenceImpl::getNodeValue() {
	 return this->$EntityReferenceImpl::getNodeValue();
}

void DeferredEntityReferenceImpl::setNodeValue($String* x) {
	this->$EntityReferenceImpl::setNodeValue(x);
}

$Node* DeferredEntityReferenceImpl::appendChild($Node* newChild) {
	 return this->$EntityReferenceImpl::appendChild(newChild);
}

$NamedNodeMap* DeferredEntityReferenceImpl::getAttributes() {
	 return this->$EntityReferenceImpl::getAttributes();
}

bool DeferredEntityReferenceImpl::hasAttributes() {
	 return this->$EntityReferenceImpl::hasAttributes();
}

bool DeferredEntityReferenceImpl::isSupported($String* feature, $String* version) {
	 return this->$EntityReferenceImpl::isSupported(feature, version);
}

$String* DeferredEntityReferenceImpl::getNamespaceURI() {
	 return this->$EntityReferenceImpl::getNamespaceURI();
}

$String* DeferredEntityReferenceImpl::getPrefix() {
	 return this->$EntityReferenceImpl::getPrefix();
}

void DeferredEntityReferenceImpl::setPrefix($String* prefix) {
	this->$EntityReferenceImpl::setPrefix(prefix);
}

$String* DeferredEntityReferenceImpl::getLocalName() {
	 return this->$EntityReferenceImpl::getLocalName();
}

int16_t DeferredEntityReferenceImpl::compareDocumentPosition($Node* other) {
	 return this->$EntityReferenceImpl::compareDocumentPosition(other);
}

bool DeferredEntityReferenceImpl::isSameNode($Node* other) {
	 return this->$EntityReferenceImpl::isSameNode(other);
}

bool DeferredEntityReferenceImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$EntityReferenceImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredEntityReferenceImpl::lookupPrefix($String* namespaceURI) {
	 return this->$EntityReferenceImpl::lookupPrefix(namespaceURI);
}

$String* DeferredEntityReferenceImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$EntityReferenceImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredEntityReferenceImpl::getFeature($String* feature, $String* version) {
	 return this->$EntityReferenceImpl::getFeature(feature, version);
}

$Object* DeferredEntityReferenceImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$EntityReferenceImpl::setUserData(key, data, handler);
}

$Object* DeferredEntityReferenceImpl::getUserData($String* key) {
	 return this->$EntityReferenceImpl::getUserData(key);
}

$String* DeferredEntityReferenceImpl::toString() {
	 return this->$EntityReferenceImpl::toString();
}

int32_t DeferredEntityReferenceImpl::hashCode() {
	 return this->$EntityReferenceImpl::hashCode();
}

bool DeferredEntityReferenceImpl::equals(Object$* arg0) {
	 return this->$EntityReferenceImpl::equals(arg0);
}

$Object* DeferredEntityReferenceImpl::clone() {
	 return this->$EntityReferenceImpl::clone();
}

void DeferredEntityReferenceImpl::finalize() {
	this->$EntityReferenceImpl::finalize();
}

void DeferredEntityReferenceImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$EntityReferenceImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredEntityReferenceImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredEntityReferenceImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	$set(this, baseURI, ownerDocument->getNodeValue(this->fNodeIndex));
}

void DeferredEntityReferenceImpl::synchronizeChildren() {
	needsSyncChildren(false);
	isReadOnly(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$ParentNode*>(this), this->fNodeIndex);
	setReadOnly(true, true);
}

DeferredEntityReferenceImpl::DeferredEntityReferenceImpl() {
}

$Class* DeferredEntityReferenceImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredEntityReferenceImpl, name, initialize, &_DeferredEntityReferenceImpl_ClassInfo_, allocate$DeferredEntityReferenceImpl);
	return class$;
}

$Class* DeferredEntityReferenceImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com