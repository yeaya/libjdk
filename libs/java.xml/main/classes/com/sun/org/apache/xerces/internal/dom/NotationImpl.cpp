#include <com/sun/org/apache/xerces/internal/dom/NotationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef NOTATION_NODE
#undef NO_MODIFICATION_ALLOWED_ERR

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
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

$FieldInfo _NotationImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NotationImpl, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NotationImpl, name)},
	{"publicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NotationImpl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NotationImpl, systemId)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NotationImpl, baseURI)},
	{}
};

$MethodInfo _NotationImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotationImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationImpl, getBaseURI, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(NotationImpl, getNodeType, int16_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationImpl, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NotationImpl, getSystemId, $String*)},
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
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NotationImpl, setBaseURI, void, $String*)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NotationImpl, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NotationImpl, setSystemId, void, $String*)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NotationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.NotationImpl",
	"com.sun.org.apache.xerces.internal.dom.NodeImpl",
	"org.w3c.dom.Notation",
	_NotationImpl_FieldInfo_,
	_NotationImpl_MethodInfo_
};

$Object* allocate$NotationImpl($Class* clazz) {
	return $of($alloc(NotationImpl));
}

$String* NotationImpl::getNodeValue() {
	 return this->$NodeImpl::getNodeValue();
}

void NotationImpl::setNodeValue($String* x) {
	this->$NodeImpl::setNodeValue(x);
}

$Node* NotationImpl::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

$Node* NotationImpl::cloneNode(bool deep) {
	 return this->$NodeImpl::cloneNode(deep);
}

$Document* NotationImpl::getOwnerDocument() {
	 return this->$NodeImpl::getOwnerDocument();
}

$Node* NotationImpl::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$Node* NotationImpl::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$Node* NotationImpl::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$NamedNodeMap* NotationImpl::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

bool NotationImpl::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

bool NotationImpl::hasChildNodes() {
	 return this->$NodeImpl::hasChildNodes();
}

$NodeList* NotationImpl::getChildNodes() {
	 return this->$NodeImpl::getChildNodes();
}

$Node* NotationImpl::getFirstChild() {
	 return this->$NodeImpl::getFirstChild();
}

$Node* NotationImpl::getLastChild() {
	 return this->$NodeImpl::getLastChild();
}

$Node* NotationImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NodeImpl::insertBefore(newChild, refChild);
}

$Node* NotationImpl::removeChild($Node* oldChild) {
	 return this->$NodeImpl::removeChild(oldChild);
}

$Node* NotationImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NodeImpl::replaceChild(newChild, oldChild);
}

void NotationImpl::normalize() {
	this->$NodeImpl::normalize();
}

bool NotationImpl::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* NotationImpl::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* NotationImpl::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

void NotationImpl::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

$String* NotationImpl::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

int16_t NotationImpl::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* NotationImpl::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void NotationImpl::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool NotationImpl::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

bool NotationImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* NotationImpl::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

$String* NotationImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$NodeImpl::lookupNamespaceURI(specifiedPrefix);
}

bool NotationImpl::isEqualNode($Node* arg) {
	 return this->$NodeImpl::isEqualNode(arg);
}

$Object* NotationImpl::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* NotationImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* NotationImpl::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

$String* NotationImpl::toString() {
	 return this->$NodeImpl::toString();
}

int32_t NotationImpl::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool NotationImpl::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* NotationImpl::clone() {
	 return this->$NodeImpl::clone();
}

void NotationImpl::finalize() {
	this->$NodeImpl::finalize();
}

void NotationImpl::init$($CoreDocumentImpl* ownerDoc, $String* name) {
	$NodeImpl::init$(ownerDoc);
	$set(this, name, name);
}

int16_t NotationImpl::getNodeType() {
	return $Node::NOTATION_NODE;
}

$String* NotationImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$String* NotationImpl::getPublicId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->publicId;
}

$String* NotationImpl::getSystemId() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->systemId;
}

void NotationImpl::setPublicId($String* id) {
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, publicId, id);
}

void NotationImpl::setSystemId($String* id) {
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, systemId, id);
}

$String* NotationImpl::getBaseURI() {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->baseURI != nullptr && $nc(this->baseURI)->length() != 0) {
		try {
			return $$new($URI, this->baseURI)->toString();
		} catch ($URI$MalformedURIException& e) {
			return nullptr;
		}
	}
	return this->baseURI;
}

void NotationImpl::setBaseURI($String* uri) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, baseURI, uri);
}

NotationImpl::NotationImpl() {
}

$Class* NotationImpl::load$($String* name, bool initialize) {
	$loadClass(NotationImpl, name, initialize, &_NotationImpl_ClassInfo_, allocate$NotationImpl);
	return class$;
}

$Class* NotationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com