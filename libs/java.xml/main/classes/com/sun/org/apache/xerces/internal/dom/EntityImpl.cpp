#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef ENTITY_NODE
#undef NO_MODIFICATION_ALLOWED_ERR

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
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

$FieldInfo _EntityImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(EntityImpl, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, name)},
	{"publicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, systemId)},
	{"encoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, encoding)},
	{"inputEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, inputEncoding)},
	{"version", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, version)},
	{"notationName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, notationName)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityImpl, baseURI)},
	{}
};

$MethodInfo _EntityImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EntityImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, cloneNode, $Node*, bool)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getBaseURI, $String*)},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getInputEncoding, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getNodeType, int16_t)},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getNotationName, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getSystemId, $String*)},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getXmlEncoding, $String*)},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityImpl, getXmlVersion, $String*)},
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
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setBaseURI, void, $String*)},
	{"setInputEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setInputEncoding, void, $String*)},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setNotationName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setNotationName, void, $String*)},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setSystemId, void, $String*)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setXmlEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setXmlEncoding, void, $String*)},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityImpl, setXmlVersion, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EntityImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.EntityImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"org.w3c.dom.Entity",
	_EntityImpl_FieldInfo_,
	_EntityImpl_MethodInfo_
};

$Object* allocate$EntityImpl($Class* clazz) {
	return $of($alloc(EntityImpl));
}

$Document* EntityImpl::getOwnerDocument() {
	 return this->$ParentNode::getOwnerDocument();
}

bool EntityImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* EntityImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* EntityImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* EntityImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

$Node* EntityImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ParentNode::insertBefore(newChild, refChild);
}

$Node* EntityImpl::removeChild($Node* oldChild) {
	 return this->$ParentNode::removeChild(oldChild);
}

$Node* EntityImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ParentNode::replaceChild(newChild, oldChild);
}

$String* EntityImpl::getTextContent() {
	 return this->$ParentNode::getTextContent();
}

void EntityImpl::setTextContent($String* textContent) {
	this->$ParentNode::setTextContent(textContent);
}

void EntityImpl::normalize() {
	this->$ParentNode::normalize();
}

bool EntityImpl::isEqualNode($Node* arg) {
	 return this->$ParentNode::isEqualNode(arg);
}

$Node* EntityImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* EntityImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* EntityImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* EntityImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

$Node* EntityImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

$NamedNodeMap* EntityImpl::getAttributes() {
	 return this->$ParentNode::getAttributes();
}

bool EntityImpl::hasAttributes() {
	 return this->$ParentNode::hasAttributes();
}

bool EntityImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* EntityImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* EntityImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

$String* EntityImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

int16_t EntityImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool EntityImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool EntityImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* EntityImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* EntityImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* EntityImpl::getFeature($String* feature, $String* version) {
	 return this->$ParentNode::getFeature(feature, version);
}

$Object* EntityImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ParentNode::setUserData(key, data, handler);
}

$Object* EntityImpl::getUserData($String* key) {
	 return this->$ParentNode::getUserData(key);
}

$String* EntityImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t EntityImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool EntityImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

$Object* EntityImpl::clone() {
	 return this->$ParentNode::clone();
}

void EntityImpl::finalize() {
	this->$ParentNode::finalize();
}

void EntityImpl::init$($CoreDocumentImpl* ownerDoc, $String* name) {
	$ParentNode::init$(ownerDoc);
	$set(this, name, name);
	isReadOnly(true);
}

int16_t EntityImpl::getNodeType() {
	return $Node::ENTITY_NODE;
}

$String* EntityImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

void EntityImpl::setNodeValue($String* x) {
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
}

void EntityImpl::setPrefix($String* prefix) {
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
	}
}

$Node* EntityImpl::cloneNode(bool deep) {
	$var(EntityImpl, newentity, $cast(EntityImpl, $ParentNode::cloneNode(deep)));
	$nc(newentity)->setReadOnly(true, deep);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newentity))));
}

$String* EntityImpl::getPublicId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->publicId;
}

$String* EntityImpl::getSystemId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->systemId;
}

$String* EntityImpl::getXmlVersion() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->version;
}

$String* EntityImpl::getXmlEncoding() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->encoding;
}

$String* EntityImpl::getNotationName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->notationName;
}

void EntityImpl::setPublicId($String* id) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, publicId, id);
}

void EntityImpl::setXmlEncoding($String* value) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, encoding, value);
}

$String* EntityImpl::getInputEncoding() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->inputEncoding;
}

void EntityImpl::setInputEncoding($String* inputEncoding) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, inputEncoding, inputEncoding);
}

void EntityImpl::setXmlVersion($String* value) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, version, value);
}

void EntityImpl::setSystemId($String* id) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, systemId, id);
}

void EntityImpl::setNotationName($String* name) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, notationName, name);
}

$String* EntityImpl::getBaseURI() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return (this->baseURI != nullptr) ? this->baseURI : $nc(($cast($CoreDocumentImpl, $(getOwnerDocument()))))->getBaseURI();
}

void EntityImpl::setBaseURI($String* uri) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, baseURI, uri);
}

EntityImpl::EntityImpl() {
}

$Class* EntityImpl::load$($String* name, bool initialize) {
	$loadClass(EntityImpl, name, initialize, &_EntityImpl_ClassInfo_, allocate$EntityImpl);
	return class$;
}

$Class* EntityImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com