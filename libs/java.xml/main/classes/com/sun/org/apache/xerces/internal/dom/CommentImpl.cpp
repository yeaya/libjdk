#include <com/sun/org/apache/xerces/internal/dom/CommentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef COMMENT_NODE

using $CharacterDataImpl = ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
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

$FieldInfo _CommentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CommentImpl, serialVersionUID)},
	{}
};

$MethodInfo _CommentImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*deleteData", "(II)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLength", "()I", nullptr, $PUBLIC},
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CommentImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CommentImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(CommentImpl, getNodeType, int16_t)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"*replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC},
	{"*setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CommentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CommentImpl",
	"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl",
	"org.w3c.dom.Comment",
	_CommentImpl_FieldInfo_,
	_CommentImpl_MethodInfo_
};

$Object* allocate$CommentImpl($Class* clazz) {
	return $of($alloc(CommentImpl));
}

$NodeList* CommentImpl::getChildNodes() {
	 return this->$CharacterDataImpl::getChildNodes();
}

$String* CommentImpl::getNodeValue() {
	 return this->$CharacterDataImpl::getNodeValue();
}

void CommentImpl::setNodeValue($String* value) {
	this->$CharacterDataImpl::setNodeValue(value);
}

$String* CommentImpl::getData() {
	 return this->$CharacterDataImpl::getData();
}

int32_t CommentImpl::getLength() {
	 return this->$CharacterDataImpl::getLength();
}

void CommentImpl::appendData($String* data) {
	this->$CharacterDataImpl::appendData(data);
}

void CommentImpl::deleteData(int32_t offset, int32_t count) {
	this->$CharacterDataImpl::deleteData(offset, count);
}

void CommentImpl::insertData(int32_t offset, $String* data) {
	this->$CharacterDataImpl::insertData(offset, data);
}

void CommentImpl::replaceData(int32_t offset, int32_t count, $String* data) {
	this->$CharacterDataImpl::replaceData(offset, count, data);
}

void CommentImpl::setData($String* value) {
	this->$CharacterDataImpl::setData(value);
}

$String* CommentImpl::substringData(int32_t offset, int32_t count) {
	 return this->$CharacterDataImpl::substringData(offset, count);
}

$Node* CommentImpl::cloneNode(bool deep) {
	 return this->$CharacterDataImpl::cloneNode(deep);
}

$Node* CommentImpl::getParentNode() {
	 return this->$CharacterDataImpl::getParentNode();
}

$Node* CommentImpl::getNextSibling() {
	 return this->$CharacterDataImpl::getNextSibling();
}

$Node* CommentImpl::getPreviousSibling() {
	 return this->$CharacterDataImpl::getPreviousSibling();
}

$Node* CommentImpl::appendChild($Node* newChild) {
	 return this->$CharacterDataImpl::appendChild(newChild);
}

$Document* CommentImpl::getOwnerDocument() {
	 return this->$CharacterDataImpl::getOwnerDocument();
}

$NamedNodeMap* CommentImpl::getAttributes() {
	 return this->$CharacterDataImpl::getAttributes();
}

bool CommentImpl::hasAttributes() {
	 return this->$CharacterDataImpl::hasAttributes();
}

bool CommentImpl::hasChildNodes() {
	 return this->$CharacterDataImpl::hasChildNodes();
}

$Node* CommentImpl::getFirstChild() {
	 return this->$CharacterDataImpl::getFirstChild();
}

$Node* CommentImpl::getLastChild() {
	 return this->$CharacterDataImpl::getLastChild();
}

$Node* CommentImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$CharacterDataImpl::insertBefore(newChild, refChild);
}

$Node* CommentImpl::removeChild($Node* oldChild) {
	 return this->$CharacterDataImpl::removeChild(oldChild);
}

$Node* CommentImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$CharacterDataImpl::replaceChild(newChild, oldChild);
}

void CommentImpl::normalize() {
	this->$CharacterDataImpl::normalize();
}

bool CommentImpl::isSupported($String* feature, $String* version) {
	 return this->$CharacterDataImpl::isSupported(feature, version);
}

$String* CommentImpl::getNamespaceURI() {
	 return this->$CharacterDataImpl::getNamespaceURI();
}

$String* CommentImpl::getPrefix() {
	 return this->$CharacterDataImpl::getPrefix();
}

void CommentImpl::setPrefix($String* prefix) {
	this->$CharacterDataImpl::setPrefix(prefix);
}

$String* CommentImpl::getLocalName() {
	 return this->$CharacterDataImpl::getLocalName();
}

$String* CommentImpl::getBaseURI() {
	 return this->$CharacterDataImpl::getBaseURI();
}

int16_t CommentImpl::compareDocumentPosition($Node* other) {
	 return this->$CharacterDataImpl::compareDocumentPosition(other);
}

$String* CommentImpl::getTextContent() {
	 return this->$CharacterDataImpl::getTextContent();
}

void CommentImpl::setTextContent($String* textContent) {
	this->$CharacterDataImpl::setTextContent(textContent);
}

bool CommentImpl::isSameNode($Node* other) {
	 return this->$CharacterDataImpl::isSameNode(other);
}

bool CommentImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$CharacterDataImpl::isDefaultNamespace(namespaceURI);
}

$String* CommentImpl::lookupPrefix($String* namespaceURI) {
	 return this->$CharacterDataImpl::lookupPrefix(namespaceURI);
}

$String* CommentImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$CharacterDataImpl::lookupNamespaceURI(specifiedPrefix);
}

bool CommentImpl::isEqualNode($Node* arg) {
	 return this->$CharacterDataImpl::isEqualNode(arg);
}

$Object* CommentImpl::getFeature($String* feature, $String* version) {
	 return this->$CharacterDataImpl::getFeature(feature, version);
}

$Object* CommentImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$CharacterDataImpl::setUserData(key, data, handler);
}

$Object* CommentImpl::getUserData($String* key) {
	 return this->$CharacterDataImpl::getUserData(key);
}

$String* CommentImpl::toString() {
	 return this->$CharacterDataImpl::toString();
}

int32_t CommentImpl::hashCode() {
	 return this->$CharacterDataImpl::hashCode();
}

bool CommentImpl::equals(Object$* arg0) {
	 return this->$CharacterDataImpl::equals(arg0);
}

$Object* CommentImpl::clone() {
	 return this->$CharacterDataImpl::clone();
}

void CommentImpl::finalize() {
	this->$CharacterDataImpl::finalize();
}

void CommentImpl::init$($CoreDocumentImpl* ownerDoc, $String* data) {
	$CharacterDataImpl::init$(ownerDoc, data);
}

int16_t CommentImpl::getNodeType() {
	return $Node::COMMENT_NODE;
}

$String* CommentImpl::getNodeName() {
	return "#comment"_s;
}

CommentImpl::CommentImpl() {
}

$Class* CommentImpl::load$($String* name, bool initialize) {
	$loadClass(CommentImpl, name, initialize, &_CommentImpl_ClassInfo_, allocate$CommentImpl);
	return class$;
}

$Class* CommentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com