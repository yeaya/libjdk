#include <com/sun/org/apache/xerces/internal/dom/ProcessingInstructionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef PROCESSING_INSTRUCTION_NODE

using $CharacterDataImpl = ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
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

$FieldInfo _ProcessingInstructionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProcessingInstructionImpl, serialVersionUID)},
	{"target", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ProcessingInstructionImpl, target)},
	{}
};

$MethodInfo _ProcessingInstructionImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProcessingInstructionImpl, init$, void, $CoreDocumentImpl*, $String*, $String*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, getBaseURI, $String*)},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, getData, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, getNodeType, int16_t)},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, getTarget, $String*)},
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
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionImpl, setData, void, $String*)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProcessingInstructionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.ProcessingInstructionImpl",
	"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl",
	"org.w3c.dom.ProcessingInstruction",
	_ProcessingInstructionImpl_FieldInfo_,
	_ProcessingInstructionImpl_MethodInfo_
};

$Object* allocate$ProcessingInstructionImpl($Class* clazz) {
	return $of($alloc(ProcessingInstructionImpl));
}

$NodeList* ProcessingInstructionImpl::getChildNodes() {
	 return this->$CharacterDataImpl::getChildNodes();
}

$String* ProcessingInstructionImpl::getNodeValue() {
	 return this->$CharacterDataImpl::getNodeValue();
}

void ProcessingInstructionImpl::setNodeValue($String* value) {
	this->$CharacterDataImpl::setNodeValue(value);
}

$Node* ProcessingInstructionImpl::cloneNode(bool deep) {
	 return this->$CharacterDataImpl::cloneNode(deep);
}

$Node* ProcessingInstructionImpl::getParentNode() {
	 return this->$CharacterDataImpl::getParentNode();
}

$Node* ProcessingInstructionImpl::getNextSibling() {
	 return this->$CharacterDataImpl::getNextSibling();
}

$Node* ProcessingInstructionImpl::getPreviousSibling() {
	 return this->$CharacterDataImpl::getPreviousSibling();
}

$Node* ProcessingInstructionImpl::appendChild($Node* newChild) {
	 return this->$CharacterDataImpl::appendChild(newChild);
}

$Document* ProcessingInstructionImpl::getOwnerDocument() {
	 return this->$CharacterDataImpl::getOwnerDocument();
}

$NamedNodeMap* ProcessingInstructionImpl::getAttributes() {
	 return this->$CharacterDataImpl::getAttributes();
}

bool ProcessingInstructionImpl::hasAttributes() {
	 return this->$CharacterDataImpl::hasAttributes();
}

bool ProcessingInstructionImpl::hasChildNodes() {
	 return this->$CharacterDataImpl::hasChildNodes();
}

$Node* ProcessingInstructionImpl::getFirstChild() {
	 return this->$CharacterDataImpl::getFirstChild();
}

$Node* ProcessingInstructionImpl::getLastChild() {
	 return this->$CharacterDataImpl::getLastChild();
}

$Node* ProcessingInstructionImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$CharacterDataImpl::insertBefore(newChild, refChild);
}

$Node* ProcessingInstructionImpl::removeChild($Node* oldChild) {
	 return this->$CharacterDataImpl::removeChild(oldChild);
}

$Node* ProcessingInstructionImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$CharacterDataImpl::replaceChild(newChild, oldChild);
}

void ProcessingInstructionImpl::normalize() {
	this->$CharacterDataImpl::normalize();
}

bool ProcessingInstructionImpl::isSupported($String* feature, $String* version) {
	 return this->$CharacterDataImpl::isSupported(feature, version);
}

$String* ProcessingInstructionImpl::getNamespaceURI() {
	 return this->$CharacterDataImpl::getNamespaceURI();
}

$String* ProcessingInstructionImpl::getPrefix() {
	 return this->$CharacterDataImpl::getPrefix();
}

void ProcessingInstructionImpl::setPrefix($String* prefix) {
	this->$CharacterDataImpl::setPrefix(prefix);
}

$String* ProcessingInstructionImpl::getLocalName() {
	 return this->$CharacterDataImpl::getLocalName();
}

int16_t ProcessingInstructionImpl::compareDocumentPosition($Node* other) {
	 return this->$CharacterDataImpl::compareDocumentPosition(other);
}

$String* ProcessingInstructionImpl::getTextContent() {
	 return this->$CharacterDataImpl::getTextContent();
}

void ProcessingInstructionImpl::setTextContent($String* textContent) {
	this->$CharacterDataImpl::setTextContent(textContent);
}

bool ProcessingInstructionImpl::isSameNode($Node* other) {
	 return this->$CharacterDataImpl::isSameNode(other);
}

bool ProcessingInstructionImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$CharacterDataImpl::isDefaultNamespace(namespaceURI);
}

$String* ProcessingInstructionImpl::lookupPrefix($String* namespaceURI) {
	 return this->$CharacterDataImpl::lookupPrefix(namespaceURI);
}

$String* ProcessingInstructionImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$CharacterDataImpl::lookupNamespaceURI(specifiedPrefix);
}

bool ProcessingInstructionImpl::isEqualNode($Node* arg) {
	 return this->$CharacterDataImpl::isEqualNode(arg);
}

$Object* ProcessingInstructionImpl::getFeature($String* feature, $String* version) {
	 return this->$CharacterDataImpl::getFeature(feature, version);
}

$Object* ProcessingInstructionImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$CharacterDataImpl::setUserData(key, data, handler);
}

$Object* ProcessingInstructionImpl::getUserData($String* key) {
	 return this->$CharacterDataImpl::getUserData(key);
}

$String* ProcessingInstructionImpl::toString() {
	 return this->$CharacterDataImpl::toString();
}

int32_t ProcessingInstructionImpl::hashCode() {
	 return this->$CharacterDataImpl::hashCode();
}

bool ProcessingInstructionImpl::equals(Object$* arg0) {
	 return this->$CharacterDataImpl::equals(arg0);
}

$Object* ProcessingInstructionImpl::clone() {
	 return this->$CharacterDataImpl::clone();
}

void ProcessingInstructionImpl::finalize() {
	this->$CharacterDataImpl::finalize();
}

void ProcessingInstructionImpl::init$($CoreDocumentImpl* ownerDoc, $String* target, $String* data) {
	$CharacterDataImpl::init$(ownerDoc, data);
	$set(this, target, target);
}

int16_t ProcessingInstructionImpl::getNodeType() {
	return $Node::PROCESSING_INSTRUCTION_NODE;
}

$String* ProcessingInstructionImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->target;
}

$String* ProcessingInstructionImpl::getTarget() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->target;
}

$String* ProcessingInstructionImpl::getData() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->data;
}

void ProcessingInstructionImpl::setData($String* data) {
	setNodeValue(data);
}

$String* ProcessingInstructionImpl::getBaseURI() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return $nc(this->ownerNode)->getBaseURI();
}

ProcessingInstructionImpl::ProcessingInstructionImpl() {
}

$Class* ProcessingInstructionImpl::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstructionImpl, name, initialize, &_ProcessingInstructionImpl_ClassInfo_, allocate$ProcessingInstructionImpl);
	return class$;
}

$Class* ProcessingInstructionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com