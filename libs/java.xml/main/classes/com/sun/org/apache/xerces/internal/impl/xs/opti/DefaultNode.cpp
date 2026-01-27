#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultNode.h>

#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $ClassInfo = ::java::lang::ClassInfo;
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
						namespace impl {
							namespace xs {
								namespace opti {

$MethodInfo _DefaultNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultNode, init$, void)},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, appendChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, cloneNode, $Node*, bool)},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, $virtualMethod(DefaultNode, compareDocumentPosition, int16_t, $Node*)},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getAttributes, $NamedNodeMap*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getBaseURI, $String*)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getChildNodes, $NodeList*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getFeature, $Object*, $String*, $String*)},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getFirstChild, $Node*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getLastChild, $Node*)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getNamespaceURI, $String*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getNextSibling, $Node*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getNodeType, int16_t)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getNodeValue, $String*), "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getOwnerDocument, $Document*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getParentNode, $Node*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getPrefix, $String*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getPreviousSibling, $Node*)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, getUserData, $Object*, $String*)},
	{"hasAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, hasAttributes, bool)},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, hasChildNodes, bool)},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, isDefaultNamespace, bool, $String*)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, isEqualNode, bool, $Node*)},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, isSameNode, bool, $Node*)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultNode, isSupported, bool, $String*, $String*)},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, lookupNamespaceURI, $String*, $String*)},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, lookupPrefix, $String*, $String*)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultNode, normalize, void)},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultNode, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultNode, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultNode, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultNode, setUserData, $Object*, $String*, Object$*, $UserDataHandler*)},
	{}
};

$ClassInfo _DefaultNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultNode",
	"java.lang.Object",
	"org.w3c.dom.Node",
	nullptr,
	_DefaultNode_MethodInfo_
};

$Object* allocate$DefaultNode($Class* clazz) {
	return $of($alloc(DefaultNode));
}

void DefaultNode::init$() {
}

$String* DefaultNode::getNodeName() {
	return nullptr;
}

$String* DefaultNode::getNodeValue() {
	return nullptr;
}

int16_t DefaultNode::getNodeType() {
	return (int16_t)-1;
}

$Node* DefaultNode::getParentNode() {
	return nullptr;
}

$NodeList* DefaultNode::getChildNodes() {
	return nullptr;
}

$Node* DefaultNode::getFirstChild() {
	return nullptr;
}

$Node* DefaultNode::getLastChild() {
	return nullptr;
}

$Node* DefaultNode::getPreviousSibling() {
	return nullptr;
}

$Node* DefaultNode::getNextSibling() {
	return nullptr;
}

$NamedNodeMap* DefaultNode::getAttributes() {
	return nullptr;
}

$Document* DefaultNode::getOwnerDocument() {
	return nullptr;
}

bool DefaultNode::hasChildNodes() {
	return false;
}

$Node* DefaultNode::cloneNode(bool deep) {
	return nullptr;
}

void DefaultNode::normalize() {
}

bool DefaultNode::isSupported($String* feature, $String* version) {
	return false;
}

$String* DefaultNode::getNamespaceURI() {
	return nullptr;
}

$String* DefaultNode::getPrefix() {
	return nullptr;
}

$String* DefaultNode::getLocalName() {
	return nullptr;
}

$String* DefaultNode::getBaseURI() {
	return nullptr;
}

bool DefaultNode::hasAttributes() {
	return false;
}

void DefaultNode::setNodeValue($String* nodeValue) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$Node* DefaultNode::insertBefore($Node* newChild, $Node* refChild) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* DefaultNode::replaceChild($Node* newChild, $Node* oldChild) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* DefaultNode::removeChild($Node* oldChild) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Node* DefaultNode::appendChild($Node* newChild) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultNode::setPrefix($String* prefix) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

int16_t DefaultNode::compareDocumentPosition($Node* other) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* DefaultNode::getTextContent() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultNode::setTextContent($String* textContent) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

bool DefaultNode::isSameNode($Node* other) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* DefaultNode::lookupPrefix($String* namespaceURI) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool DefaultNode::isDefaultNamespace($String* namespaceURI) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* DefaultNode::lookupNamespaceURI($String* prefix) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool DefaultNode::isEqualNode($Node* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* DefaultNode::getFeature($String* feature, $String* version) {
	return $of(nullptr);
}

$Object* DefaultNode::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* DefaultNode::getUserData($String* key) {
	return $of(nullptr);
}

DefaultNode::DefaultNode() {
}

$Class* DefaultNode::load$($String* name, bool initialize) {
	$loadClass(DefaultNode, name, initialize, &_DefaultNode_ClassInfo_, allocate$DefaultNode);
	return class$;
}

$Class* DefaultNode::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com