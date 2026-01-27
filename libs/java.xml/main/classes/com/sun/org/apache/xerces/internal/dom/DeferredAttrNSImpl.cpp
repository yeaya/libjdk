#include <com/sun/org/apache/xerces/internal/dom/DeferredAttrNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
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
using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
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

$FieldInfo _DeferredAttrNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredAttrNSImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredAttrNSImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredAttrNSImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredAttrNSImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredAttrNSImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredAttrNSImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredAttrNSImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredAttrNSImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredAttrNSImpl",
	"com.sun.org.apache.xerces.internal.dom.AttrNSImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredAttrNSImpl_FieldInfo_,
	_DeferredAttrNSImpl_MethodInfo_
};

$Object* allocate$DeferredAttrNSImpl($Class* clazz) {
	return $of($alloc(DeferredAttrNSImpl));
}

$String* DeferredAttrNSImpl::getNamespaceURI() {
	 return this->$AttrNSImpl::getNamespaceURI();
}

$String* DeferredAttrNSImpl::getPrefix() {
	 return this->$AttrNSImpl::getPrefix();
}

void DeferredAttrNSImpl::setPrefix($String* prefix) {
	this->$AttrNSImpl::setPrefix(prefix);
}

$String* DeferredAttrNSImpl::getLocalName() {
	 return this->$AttrNSImpl::getLocalName();
}

$Node* DeferredAttrNSImpl::cloneNode(bool deep) {
	 return this->$AttrNSImpl::cloneNode(deep);
}

int16_t DeferredAttrNSImpl::getNodeType() {
	 return this->$AttrNSImpl::getNodeType();
}

$String* DeferredAttrNSImpl::getNodeName() {
	 return this->$AttrNSImpl::getNodeName();
}

void DeferredAttrNSImpl::setNodeValue($String* value) {
	this->$AttrNSImpl::setNodeValue(value);
}

$String* DeferredAttrNSImpl::getNodeValue() {
	 return this->$AttrNSImpl::getNodeValue();
}

void DeferredAttrNSImpl::normalize() {
	this->$AttrNSImpl::normalize();
}

$String* DeferredAttrNSImpl::toString() {
	 return this->$AttrNSImpl::toString();
}

bool DeferredAttrNSImpl::hasChildNodes() {
	 return this->$AttrNSImpl::hasChildNodes();
}

$NodeList* DeferredAttrNSImpl::getChildNodes() {
	 return this->$AttrNSImpl::getChildNodes();
}

$Node* DeferredAttrNSImpl::getFirstChild() {
	 return this->$AttrNSImpl::getFirstChild();
}

$Node* DeferredAttrNSImpl::getLastChild() {
	 return this->$AttrNSImpl::getLastChild();
}

$Node* DeferredAttrNSImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$AttrNSImpl::insertBefore(newChild, refChild);
}

$Node* DeferredAttrNSImpl::removeChild($Node* oldChild) {
	 return this->$AttrNSImpl::removeChild(oldChild);
}

$Node* DeferredAttrNSImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$AttrNSImpl::replaceChild(newChild, oldChild);
}

bool DeferredAttrNSImpl::isEqualNode($Node* arg) {
	 return this->$AttrNSImpl::isEqualNode(arg);
}

$Node* DeferredAttrNSImpl::appendChild($Node* newChild) {
	 return this->$AttrNSImpl::appendChild(newChild);
}

$Document* DeferredAttrNSImpl::getOwnerDocument() {
	 return this->$AttrNSImpl::getOwnerDocument();
}

$Node* DeferredAttrNSImpl::getParentNode() {
	 return this->$AttrNSImpl::getParentNode();
}

$Node* DeferredAttrNSImpl::getNextSibling() {
	 return this->$AttrNSImpl::getNextSibling();
}

$Node* DeferredAttrNSImpl::getPreviousSibling() {
	 return this->$AttrNSImpl::getPreviousSibling();
}

$NamedNodeMap* DeferredAttrNSImpl::getAttributes() {
	 return this->$AttrNSImpl::getAttributes();
}

bool DeferredAttrNSImpl::hasAttributes() {
	 return this->$AttrNSImpl::hasAttributes();
}

bool DeferredAttrNSImpl::isSupported($String* feature, $String* version) {
	 return this->$AttrNSImpl::isSupported(feature, version);
}

$String* DeferredAttrNSImpl::getBaseURI() {
	 return this->$AttrNSImpl::getBaseURI();
}

int16_t DeferredAttrNSImpl::compareDocumentPosition($Node* other) {
	 return this->$AttrNSImpl::compareDocumentPosition(other);
}

$String* DeferredAttrNSImpl::getTextContent() {
	 return this->$AttrNSImpl::getTextContent();
}

void DeferredAttrNSImpl::setTextContent($String* textContent) {
	this->$AttrNSImpl::setTextContent(textContent);
}

bool DeferredAttrNSImpl::isSameNode($Node* other) {
	 return this->$AttrNSImpl::isSameNode(other);
}

bool DeferredAttrNSImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$AttrNSImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredAttrNSImpl::lookupPrefix($String* namespaceURI) {
	 return this->$AttrNSImpl::lookupPrefix(namespaceURI);
}

$String* DeferredAttrNSImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$AttrNSImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredAttrNSImpl::getFeature($String* feature, $String* version) {
	 return this->$AttrNSImpl::getFeature(feature, version);
}

$Object* DeferredAttrNSImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$AttrNSImpl::setUserData(key, data, handler);
}

$Object* DeferredAttrNSImpl::getUserData($String* key) {
	 return this->$AttrNSImpl::getUserData(key);
}

int32_t DeferredAttrNSImpl::hashCode() {
	 return this->$AttrNSImpl::hashCode();
}

bool DeferredAttrNSImpl::equals(Object$* arg0) {
	 return this->$AttrNSImpl::equals(arg0);
}

$Object* DeferredAttrNSImpl::clone() {
	 return this->$AttrNSImpl::clone();
}

void DeferredAttrNSImpl::finalize() {
	this->$AttrNSImpl::finalize();
}

void DeferredAttrNSImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$AttrNSImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
	needsSyncChildren(true);
}

int32_t DeferredAttrNSImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredAttrNSImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, name, $nc(ownerDocument)->getNodeName(this->fNodeIndex));
	int32_t index = $nc(this->name)->indexOf((int32_t)u':');
	if (index < 0) {
		$set(this, localName, this->name);
	} else {
		$set(this, localName, $nc(this->name)->substring(index + 1));
	}
	int32_t extra = ownerDocument->getNodeExtra(this->fNodeIndex);
	isSpecified(((int32_t)(extra & (uint32_t)(int32_t)$NodeImpl::SPECIFIED)) != 0);
	isIdAttribute(((int32_t)(extra & (uint32_t)(int32_t)$NodeImpl::ID)) != 0);
	$set(this, namespaceURI, ownerDocument->getNodeURI(this->fNodeIndex));
	int32_t extraNode = ownerDocument->getLastChild(this->fNodeIndex);
	$set(this, type, ownerDocument->getTypeInfo(extraNode));
}

void DeferredAttrNSImpl::synchronizeChildren() {
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$AttrImpl*>(this), this->fNodeIndex);
}

DeferredAttrNSImpl::DeferredAttrNSImpl() {
}

$Class* DeferredAttrNSImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredAttrNSImpl, name, initialize, &_DeferredAttrNSImpl_ClassInfo_, allocate$DeferredAttrNSImpl);
	return class$;
}

$Class* DeferredAttrNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com