#include <com/sun/org/apache/xerces/internal/dom/CDATASectionImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _CDATASectionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CDATASectionImpl, serialVersionUID)},
	{}
};

$MethodInfo _CDATASectionImpl_MethodInfo_[] = {
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
	{"*getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CDATASectionImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CDATASectionImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(CDATASectionImpl, getNodeType, int16_t)},
	{"*isElementContentWhitespace", "()Z", nullptr, $PUBLIC},
	{"*replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC},
	{"*splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC},
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

$ClassInfo _CDATASectionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CDATASectionImpl",
	"com.sun.org.apache.xerces.internal.dom.TextImpl",
	"org.w3c.dom.CDATASection",
	_CDATASectionImpl_FieldInfo_,
	_CDATASectionImpl_MethodInfo_
};

$Object* allocate$CDATASectionImpl($Class* clazz) {
	return $of($alloc(CDATASectionImpl));
}

bool CDATASectionImpl::isElementContentWhitespace() {
	 return this->$TextImpl::isElementContentWhitespace();
}

$String* CDATASectionImpl::getWholeText() {
	 return this->$TextImpl::getWholeText();
}

$Text* CDATASectionImpl::replaceWholeText($String* content) {
	 return this->$TextImpl::replaceWholeText(content);
}

$Text* CDATASectionImpl::splitText(int32_t offset) {
	 return this->$TextImpl::splitText(offset);
}

$NodeList* CDATASectionImpl::getChildNodes() {
	 return this->$TextImpl::getChildNodes();
}

$String* CDATASectionImpl::getNodeValue() {
	 return this->$TextImpl::getNodeValue();
}

void CDATASectionImpl::setNodeValue($String* value) {
	this->$TextImpl::setNodeValue(value);
}

$String* CDATASectionImpl::getData() {
	 return this->$TextImpl::getData();
}

int32_t CDATASectionImpl::getLength() {
	 return this->$TextImpl::getLength();
}

void CDATASectionImpl::appendData($String* data) {
	this->$TextImpl::appendData(data);
}

void CDATASectionImpl::deleteData(int32_t offset, int32_t count) {
	this->$TextImpl::deleteData(offset, count);
}

void CDATASectionImpl::insertData(int32_t offset, $String* data) {
	this->$TextImpl::insertData(offset, data);
}

void CDATASectionImpl::replaceData(int32_t offset, int32_t count, $String* data) {
	this->$TextImpl::replaceData(offset, count, data);
}

void CDATASectionImpl::setData($String* value) {
	this->$TextImpl::setData(value);
}

$String* CDATASectionImpl::substringData(int32_t offset, int32_t count) {
	 return this->$TextImpl::substringData(offset, count);
}

$Node* CDATASectionImpl::cloneNode(bool deep) {
	 return this->$TextImpl::cloneNode(deep);
}

$Node* CDATASectionImpl::getParentNode() {
	 return this->$TextImpl::getParentNode();
}

$Node* CDATASectionImpl::getNextSibling() {
	 return this->$TextImpl::getNextSibling();
}

$Node* CDATASectionImpl::getPreviousSibling() {
	 return this->$TextImpl::getPreviousSibling();
}

$Node* CDATASectionImpl::appendChild($Node* newChild) {
	 return this->$TextImpl::appendChild(newChild);
}

$Document* CDATASectionImpl::getOwnerDocument() {
	 return this->$TextImpl::getOwnerDocument();
}

$NamedNodeMap* CDATASectionImpl::getAttributes() {
	 return this->$TextImpl::getAttributes();
}

bool CDATASectionImpl::hasAttributes() {
	 return this->$TextImpl::hasAttributes();
}

bool CDATASectionImpl::hasChildNodes() {
	 return this->$TextImpl::hasChildNodes();
}

$Node* CDATASectionImpl::getFirstChild() {
	 return this->$TextImpl::getFirstChild();
}

$Node* CDATASectionImpl::getLastChild() {
	 return this->$TextImpl::getLastChild();
}

$Node* CDATASectionImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$TextImpl::insertBefore(newChild, refChild);
}

$Node* CDATASectionImpl::removeChild($Node* oldChild) {
	 return this->$TextImpl::removeChild(oldChild);
}

$Node* CDATASectionImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$TextImpl::replaceChild(newChild, oldChild);
}

void CDATASectionImpl::normalize() {
	this->$TextImpl::normalize();
}

bool CDATASectionImpl::isSupported($String* feature, $String* version) {
	 return this->$TextImpl::isSupported(feature, version);
}

$String* CDATASectionImpl::getNamespaceURI() {
	 return this->$TextImpl::getNamespaceURI();
}

$String* CDATASectionImpl::getPrefix() {
	 return this->$TextImpl::getPrefix();
}

void CDATASectionImpl::setPrefix($String* prefix) {
	this->$TextImpl::setPrefix(prefix);
}

$String* CDATASectionImpl::getLocalName() {
	 return this->$TextImpl::getLocalName();
}

$String* CDATASectionImpl::getBaseURI() {
	 return this->$TextImpl::getBaseURI();
}

int16_t CDATASectionImpl::compareDocumentPosition($Node* other) {
	 return this->$TextImpl::compareDocumentPosition(other);
}

$String* CDATASectionImpl::getTextContent() {
	 return this->$TextImpl::getTextContent();
}

void CDATASectionImpl::setTextContent($String* textContent) {
	this->$TextImpl::setTextContent(textContent);
}

bool CDATASectionImpl::isSameNode($Node* other) {
	 return this->$TextImpl::isSameNode(other);
}

bool CDATASectionImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$TextImpl::isDefaultNamespace(namespaceURI);
}

$String* CDATASectionImpl::lookupPrefix($String* namespaceURI) {
	 return this->$TextImpl::lookupPrefix(namespaceURI);
}

$String* CDATASectionImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$TextImpl::lookupNamespaceURI(specifiedPrefix);
}

bool CDATASectionImpl::isEqualNode($Node* arg) {
	 return this->$TextImpl::isEqualNode(arg);
}

$Object* CDATASectionImpl::getFeature($String* feature, $String* version) {
	 return this->$TextImpl::getFeature(feature, version);
}

$Object* CDATASectionImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$TextImpl::setUserData(key, data, handler);
}

$Object* CDATASectionImpl::getUserData($String* key) {
	 return this->$TextImpl::getUserData(key);
}

$String* CDATASectionImpl::toString() {
	 return this->$TextImpl::toString();
}

int32_t CDATASectionImpl::hashCode() {
	 return this->$TextImpl::hashCode();
}

bool CDATASectionImpl::equals(Object$* arg0) {
	 return this->$TextImpl::equals(arg0);
}

$Object* CDATASectionImpl::clone() {
	 return this->$TextImpl::clone();
}

void CDATASectionImpl::finalize() {
	this->$TextImpl::finalize();
}

void CDATASectionImpl::init$($CoreDocumentImpl* ownerDoc, $String* data) {
	$TextImpl::init$(ownerDoc, data);
}

int16_t CDATASectionImpl::getNodeType() {
	return $Node::CDATA_SECTION_NODE;
}

$String* CDATASectionImpl::getNodeName() {
	return "#cdata-section"_s;
}

CDATASectionImpl::CDATASectionImpl() {
}

$Class* CDATASectionImpl::load$($String* name, bool initialize) {
	$loadClass(CDATASectionImpl, name, initialize, &_CDATASectionImpl_ClassInfo_, allocate$CDATASectionImpl);
	return class$;
}

$Class* CDATASectionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com