#include <com/sun/org/apache/xerces/internal/dom/DeferredCommentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CommentImpl.h>
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

using $CommentImpl = ::com::sun::org::apache::xerces::internal::dom::CommentImpl;
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

$FieldInfo _DeferredCommentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredCommentImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredCommentImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredCommentImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredCommentImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DeferredCommentImpl, getNodeIndex, int32_t)},
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
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(DeferredCommentImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredCommentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredCommentImpl",
	"com.sun.org.apache.xerces.internal.dom.CommentImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredCommentImpl_FieldInfo_,
	_DeferredCommentImpl_MethodInfo_
};

$Object* allocate$DeferredCommentImpl($Class* clazz) {
	return $of($alloc(DeferredCommentImpl));
}

int16_t DeferredCommentImpl::getNodeType() {
	 return this->$CommentImpl::getNodeType();
}

$String* DeferredCommentImpl::getNodeName() {
	 return this->$CommentImpl::getNodeName();
}

$NodeList* DeferredCommentImpl::getChildNodes() {
	 return this->$CommentImpl::getChildNodes();
}

$String* DeferredCommentImpl::getNodeValue() {
	 return this->$CommentImpl::getNodeValue();
}

void DeferredCommentImpl::setNodeValue($String* value) {
	this->$CommentImpl::setNodeValue(value);
}

$Node* DeferredCommentImpl::cloneNode(bool deep) {
	 return this->$CommentImpl::cloneNode(deep);
}

$Node* DeferredCommentImpl::getParentNode() {
	 return this->$CommentImpl::getParentNode();
}

$Node* DeferredCommentImpl::getNextSibling() {
	 return this->$CommentImpl::getNextSibling();
}

$Node* DeferredCommentImpl::getPreviousSibling() {
	 return this->$CommentImpl::getPreviousSibling();
}

$Node* DeferredCommentImpl::appendChild($Node* newChild) {
	 return this->$CommentImpl::appendChild(newChild);
}

$Document* DeferredCommentImpl::getOwnerDocument() {
	 return this->$CommentImpl::getOwnerDocument();
}

$NamedNodeMap* DeferredCommentImpl::getAttributes() {
	 return this->$CommentImpl::getAttributes();
}

bool DeferredCommentImpl::hasAttributes() {
	 return this->$CommentImpl::hasAttributes();
}

bool DeferredCommentImpl::hasChildNodes() {
	 return this->$CommentImpl::hasChildNodes();
}

$Node* DeferredCommentImpl::getFirstChild() {
	 return this->$CommentImpl::getFirstChild();
}

$Node* DeferredCommentImpl::getLastChild() {
	 return this->$CommentImpl::getLastChild();
}

$Node* DeferredCommentImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$CommentImpl::insertBefore(newChild, refChild);
}

$Node* DeferredCommentImpl::removeChild($Node* oldChild) {
	 return this->$CommentImpl::removeChild(oldChild);
}

$Node* DeferredCommentImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$CommentImpl::replaceChild(newChild, oldChild);
}

void DeferredCommentImpl::normalize() {
	this->$CommentImpl::normalize();
}

bool DeferredCommentImpl::isSupported($String* feature, $String* version) {
	 return this->$CommentImpl::isSupported(feature, version);
}

$String* DeferredCommentImpl::getNamespaceURI() {
	 return this->$CommentImpl::getNamespaceURI();
}

$String* DeferredCommentImpl::getPrefix() {
	 return this->$CommentImpl::getPrefix();
}

void DeferredCommentImpl::setPrefix($String* prefix) {
	this->$CommentImpl::setPrefix(prefix);
}

$String* DeferredCommentImpl::getLocalName() {
	 return this->$CommentImpl::getLocalName();
}

$String* DeferredCommentImpl::getBaseURI() {
	 return this->$CommentImpl::getBaseURI();
}

int16_t DeferredCommentImpl::compareDocumentPosition($Node* other) {
	 return this->$CommentImpl::compareDocumentPosition(other);
}

$String* DeferredCommentImpl::getTextContent() {
	 return this->$CommentImpl::getTextContent();
}

void DeferredCommentImpl::setTextContent($String* textContent) {
	this->$CommentImpl::setTextContent(textContent);
}

bool DeferredCommentImpl::isSameNode($Node* other) {
	 return this->$CommentImpl::isSameNode(other);
}

bool DeferredCommentImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$CommentImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredCommentImpl::lookupPrefix($String* namespaceURI) {
	 return this->$CommentImpl::lookupPrefix(namespaceURI);
}

$String* DeferredCommentImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$CommentImpl::lookupNamespaceURI(specifiedPrefix);
}

bool DeferredCommentImpl::isEqualNode($Node* arg) {
	 return this->$CommentImpl::isEqualNode(arg);
}

$Object* DeferredCommentImpl::getFeature($String* feature, $String* version) {
	 return this->$CommentImpl::getFeature(feature, version);
}

$Object* DeferredCommentImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$CommentImpl::setUserData(key, data, handler);
}

$Object* DeferredCommentImpl::getUserData($String* key) {
	 return this->$CommentImpl::getUserData(key);
}

$String* DeferredCommentImpl::toString() {
	 return this->$CommentImpl::toString();
}

int32_t DeferredCommentImpl::hashCode() {
	 return this->$CommentImpl::hashCode();
}

bool DeferredCommentImpl::equals(Object$* arg0) {
	 return this->$CommentImpl::equals(arg0);
}

$Object* DeferredCommentImpl::clone() {
	 return this->$CommentImpl::clone();
}

void DeferredCommentImpl::finalize() {
	this->$CommentImpl::finalize();
}

void DeferredCommentImpl::init$($DeferredDocumentImpl* ownerDocument, int32_t nodeIndex) {
	$CommentImpl::init$(ownerDocument, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncData(true);
}

int32_t DeferredCommentImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredCommentImpl::synchronizeData() {
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$set(this, data, $nc(ownerDocument)->getNodeValueString(this->fNodeIndex));
}

DeferredCommentImpl::DeferredCommentImpl() {
}

$Class* DeferredCommentImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredCommentImpl, name, initialize, &_DeferredCommentImpl_ClassInfo_, allocate$DeferredCommentImpl);
	return class$;
}

$Class* DeferredCommentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com