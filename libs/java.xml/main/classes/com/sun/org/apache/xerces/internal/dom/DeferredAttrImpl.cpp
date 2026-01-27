#include <com/sun/org/apache/xerces/internal/dom/DeferredAttrImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
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

#undef ID
#undef SPECIFIED

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
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

$FieldInfo _DeferredAttrImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredAttrImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredAttrImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredAttrImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredAttrImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredAttrImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredAttrImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredAttrImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredAttrImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredAttrImpl",
	"com.sun.org.apache.xerces.internal.dom.AttrImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredAttrImpl_FieldInfo_,
	_DeferredAttrImpl_MethodInfo_
};

$Object* allocate$DeferredAttrImpl($Class* clazz) {
	return $of($alloc(DeferredAttrImpl));
}

$Node* DeferredAttrImpl::cloneNode(bool deep) {
	 return this->$AttrImpl::cloneNode(deep);
}

int16_t DeferredAttrImpl::getNodeType() {
	 return this->$AttrImpl::getNodeType();
}

$String* DeferredAttrImpl::getNodeName() {
	 return this->$AttrImpl::getNodeName();
}

void DeferredAttrImpl::setNodeValue($String* value) {
	this->$AttrImpl::setNodeValue(value);
}

$String* DeferredAttrImpl::getNodeValue() {
	 return this->$AttrImpl::getNodeValue();
}

void DeferredAttrImpl::normalize() {
	this->$AttrImpl::normalize();
}

$String* DeferredAttrImpl::toString() {
	 return this->$AttrImpl::toString();
}

bool DeferredAttrImpl::hasChildNodes() {
	 return this->$AttrImpl::hasChildNodes();
}

$NodeList* DeferredAttrImpl::getChildNodes() {
	 return this->$AttrImpl::getChildNodes();
}

$Node* DeferredAttrImpl::getFirstChild() {
	 return this->$AttrImpl::getFirstChild();
}

$Node* DeferredAttrImpl::getLastChild() {
	 return this->$AttrImpl::getLastChild();
}

$Node* DeferredAttrImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$AttrImpl::insertBefore(newChild, refChild);
}

$Node* DeferredAttrImpl::removeChild($Node* oldChild) {
	 return this->$AttrImpl::removeChild(oldChild);
}

$Node* DeferredAttrImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$AttrImpl::replaceChild(newChild, oldChild);
}

bool DeferredAttrImpl::isEqualNode($Node* arg) {
	 return this->$AttrImpl::isEqualNode(arg);
}

$Node* DeferredAttrImpl::appendChild($Node* newChild) {
	 return this->$AttrImpl::appendChild(newChild);
}

$Document* DeferredAttrImpl::getOwnerDocument() {
	 return this->$AttrImpl::getOwnerDocument();
}

$Node* DeferredAttrImpl::getParentNode() {
	 return this->$AttrImpl::getParentNode();
}

$Node* DeferredAttrImpl::getNextSibling() {
	 return this->$AttrImpl::getNextSibling();
}

$Node* DeferredAttrImpl::getPreviousSibling() {
	 return this->$AttrImpl::getPreviousSibling();
}

$NamedNodeMap* DeferredAttrImpl::getAttributes() {
	 return this->$AttrImpl::getAttributes();
}

bool DeferredAttrImpl::hasAttributes() {
	 return this->$AttrImpl::hasAttributes();
}

bool DeferredAttrImpl::isSupported($String* feature, $String* version) {
	 return this->$AttrImpl::isSupported(feature, version);
}

$String* DeferredAttrImpl::getNamespaceURI() {
	 return this->$AttrImpl::getNamespaceURI();
}

$String* DeferredAttrImpl::getPrefix() {
	 return this->$AttrImpl::getPrefix();
}

void DeferredAttrImpl::setPrefix($String* prefix) {
	this->$AttrImpl::setPrefix(prefix);
}

$String* DeferredAttrImpl::getLocalName() {
	 return this->$AttrImpl::getLocalName();
}

$String* DeferredAttrImpl::getBaseURI() {
	 return this->$AttrImpl::getBaseURI();
}

int16_t DeferredAttrImpl::compareDocumentPosition($Node* other) {
	 return this->$AttrImpl::compareDocumentPosition(other);
}

$String* DeferredAttrImpl::getTextContent() {
	 return this->$AttrImpl::getTextContent();
}

void DeferredAttrImpl::setTextContent($String* textContent) {
	this->$AttrImpl::setTextContent(textContent);
}

bool DeferredAttrImpl::isSameNode($Node* other) {
	 return this->$AttrImpl::isSameNode(other);
}

bool DeferredAttrImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$AttrImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredAttrImpl::lookupPrefix($String* namespaceURI) {
	 return this->$AttrImpl::lookupPrefix(namespaceURI);
}

$String* DeferredAttrImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$AttrImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredAttrImpl::getFeature($String* feature, $String* version) {
	 return this->$AttrImpl::getFeature(feature, version);
}

$Object* DeferredAttrImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$AttrImpl::setUserData(key, data, handler);
}

$Object* DeferredAttrImpl::getUserData($String* key) {
	 return this->$AttrImpl::getUserData(key);
}

int32_t DeferredAttrImpl::hashCode() {
	 return this->$AttrImpl::hashCode();
}

bool DeferredAttrImpl::equals(Object$* arg0) {
	 return this->$AttrImpl::equals(arg0);
}

$Object* DeferredAttrImpl::clone() {
	 return this->$AttrImpl::clone();
}

void DeferredAttrImpl::finalize() {
	this->$AttrImpl::finalize();
}

void DeferredAttrImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$AttrImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
	needsSyncChildren(true);
}

int32_t DeferredAttrImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredAttrImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	int32_t extra = ownerDocument->getNodeExtra(this->fNodeIndex);
	isSpecified(((int32_t)(extra & (uint32_t)(int32_t)$NodeImpl::SPECIFIED)) != 0);
	isIdAttribute(((int32_t)(extra & (uint32_t)(int32_t)$NodeImpl::ID)) != 0);
	int32_t extraNode = ownerDocument->getLastChild(this->fNodeIndex);
	$set(this, type, ownerDocument->getTypeInfo(extraNode));
}

void DeferredAttrImpl::synchronizeChildren() {
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$AttrImpl*>(this), this->fNodeIndex);
}

DeferredAttrImpl::DeferredAttrImpl() {
}

$Class* DeferredAttrImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredAttrImpl, name, initialize, &_DeferredAttrImpl_ClassInfo_, allocate$DeferredAttrImpl);
	return class$;
}

$Class* DeferredAttrImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com