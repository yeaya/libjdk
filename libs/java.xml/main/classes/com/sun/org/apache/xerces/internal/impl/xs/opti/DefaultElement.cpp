#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultElement.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$MethodInfo _DefaultElement_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultElement, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;S)V", nullptr, $PUBLIC, $method(DefaultElement, init$, void, $String*, $String*, $String*, $String*, int16_t)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getAttribute, $String*, $String*)},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getAttributeNS, $String*, $String*, $String*)},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getAttributeNode, $Attr*, $String*)},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getAttributeNodeNS, $Attr*, $String*, $String*)},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getElementsByTagNameNS, $NodeList*, $String*, $String*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getSchemaTypeInfo, $TypeInfo*)},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, getTagName, $String*)},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultElement, hasAttribute, bool, $String*)},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultElement, hasAttributeNS, bool, $String*, $String*)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, removeAttribute, void, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, removeAttributeNS, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, removeAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setAttribute, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setAttributeNS, void, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setAttributeNodeNS, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setIdAttribute, void, $String*, bool), "org.w3c.dom.DOMException"},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setIdAttributeNS, void, $String*, $String*, bool), "org.w3c.dom.DOMException"},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC, $virtualMethod(DefaultElement, setIdAttributeNode, void, $Attr*, bool), "org.w3c.dom.DOMException"},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultElement",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl",
	"org.w3c.dom.Element",
	nullptr,
	_DefaultElement_MethodInfo_
};

$Object* allocate$DefaultElement($Class* clazz) {
	return $of($alloc(DefaultElement));
}

$String* DefaultElement::getNodeName() {
	 return this->$NodeImpl::getNodeName();
}

$String* DefaultElement::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* DefaultElement::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

$String* DefaultElement::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

int16_t DefaultElement::getNodeType() {
	 return this->$NodeImpl::getNodeType();
}

$String* DefaultElement::getNodeValue() {
	 return this->$NodeImpl::getNodeValue();
}

$Node* DefaultElement::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$NodeList* DefaultElement::getChildNodes() {
	 return this->$NodeImpl::getChildNodes();
}

$Node* DefaultElement::getFirstChild() {
	 return this->$NodeImpl::getFirstChild();
}

$Node* DefaultElement::getLastChild() {
	 return this->$NodeImpl::getLastChild();
}

$Node* DefaultElement::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$Node* DefaultElement::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$NamedNodeMap* DefaultElement::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

$Document* DefaultElement::getOwnerDocument() {
	 return this->$NodeImpl::getOwnerDocument();
}

bool DefaultElement::hasChildNodes() {
	 return this->$NodeImpl::hasChildNodes();
}

$Node* DefaultElement::cloneNode(bool deep) {
	 return this->$NodeImpl::cloneNode(deep);
}

void DefaultElement::normalize() {
	this->$NodeImpl::normalize();
}

bool DefaultElement::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* DefaultElement::getBaseURI() {
	 return this->$NodeImpl::getBaseURI();
}

bool DefaultElement::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

void DefaultElement::setNodeValue($String* nodeValue) {
	this->$NodeImpl::setNodeValue(nodeValue);
}

$Node* DefaultElement::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NodeImpl::insertBefore(newChild, refChild);
}

$Node* DefaultElement::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NodeImpl::replaceChild(newChild, oldChild);
}

$Node* DefaultElement::removeChild($Node* oldChild) {
	 return this->$NodeImpl::removeChild(oldChild);
}

$Node* DefaultElement::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

void DefaultElement::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

int16_t DefaultElement::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* DefaultElement::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void DefaultElement::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool DefaultElement::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

$String* DefaultElement::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

bool DefaultElement::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* DefaultElement::lookupNamespaceURI($String* prefix) {
	 return this->$NodeImpl::lookupNamespaceURI(prefix);
}

bool DefaultElement::isEqualNode($Node* arg) {
	 return this->$NodeImpl::isEqualNode(arg);
}

$Object* DefaultElement::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* DefaultElement::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* DefaultElement::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

int32_t DefaultElement::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool DefaultElement::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* DefaultElement::clone() {
	 return this->$NodeImpl::clone();
}

$String* DefaultElement::toString() {
	 return this->$NodeImpl::toString();
}

void DefaultElement::finalize() {
	this->$NodeImpl::finalize();
}

void DefaultElement::init$() {
	$NodeImpl::init$();
}

void DefaultElement::init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int16_t nodeType) {
	$NodeImpl::init$(prefix, localpart, rawname, uri, nodeType);
}

$String* DefaultElement::getTagName() {
	return nullptr;
}

$String* DefaultElement::getAttribute($String* name) {
	return nullptr;
}

$Attr* DefaultElement::getAttributeNode($String* name) {
	return nullptr;
}

$NodeList* DefaultElement::getElementsByTagName($String* name) {
	return nullptr;
}

$String* DefaultElement::getAttributeNS($String* namespaceURI, $String* localName) {
	return nullptr;
}

$Attr* DefaultElement::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	return nullptr;
}

$NodeList* DefaultElement::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	return nullptr;
}

bool DefaultElement::hasAttribute($String* name) {
	return false;
}

bool DefaultElement::hasAttributeNS($String* namespaceURI, $String* localName) {
	return false;
}

$TypeInfo* DefaultElement::getSchemaTypeInfo() {
	return nullptr;
}

void DefaultElement::setAttribute($String* name, $String* value) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultElement::removeAttribute($String* name) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$Attr* DefaultElement::removeAttributeNode($Attr* oldAttr) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Attr* DefaultElement::setAttributeNode($Attr* newAttr) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultElement::setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultElement::removeAttributeNS($String* namespaceURI, $String* localName) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$Attr* DefaultElement::setAttributeNodeNS($Attr* newAttr) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultElement::setIdAttributeNode($Attr* at, bool makeId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultElement::setIdAttribute($String* name, bool makeId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultElement::setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

DefaultElement::DefaultElement() {
}

$Class* DefaultElement::load$($String* name, bool initialize) {
	$loadClass(DefaultElement, name, initialize, &_DefaultElement_ClassInfo_, allocate$DefaultElement);
	return class$;
}

$Class* DefaultElement::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com