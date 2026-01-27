#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultText.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef NOT_SUPPORTED_ERR

using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
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
						namespace impl {
							namespace xs {
								namespace opti {

$MethodInfo _DefaultText_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultText, init$, void)},
	{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultText, appendData, void, $String*), "org.w3c.dom.DOMException"},
	{"deleteData", "(II)V", nullptr, $PUBLIC, $virtualMethod(DefaultText, deleteData, void, int32_t, int32_t), "org.w3c.dom.DOMException"},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultText, getData, $String*), "org.w3c.dom.DOMException"},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultText, getLength, int32_t)},
	{"getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultText, getWholeText, $String*)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultText, insertData, void, int32_t, $String*), "org.w3c.dom.DOMException"},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isElementContentWhitespace", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultText, isElementContentWhitespace, bool)},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultText, replaceData, void, int32_t, int32_t, $String*), "org.w3c.dom.DOMException"},
	{"replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(DefaultText, replaceWholeText, $Text*, $String*), "org.w3c.dom.DOMException"},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DefaultText, setData, void, $String*), "org.w3c.dom.DOMException"},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(DefaultText, splitText, $Text*, int32_t), "org.w3c.dom.DOMException"},
	{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultText, substringData, $String*, int32_t, int32_t), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultText",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl",
	"org.w3c.dom.Text",
	nullptr,
	_DefaultText_MethodInfo_
};

$Object* allocate$DefaultText($Class* clazz) {
	return $of($alloc(DefaultText));
}

$String* DefaultText::getNodeName() {
	 return this->$NodeImpl::getNodeName();
}

$String* DefaultText::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* DefaultText::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

$String* DefaultText::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

int16_t DefaultText::getNodeType() {
	 return this->$NodeImpl::getNodeType();
}

$String* DefaultText::getNodeValue() {
	 return this->$NodeImpl::getNodeValue();
}

$Node* DefaultText::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$NodeList* DefaultText::getChildNodes() {
	 return this->$NodeImpl::getChildNodes();
}

$Node* DefaultText::getFirstChild() {
	 return this->$NodeImpl::getFirstChild();
}

$Node* DefaultText::getLastChild() {
	 return this->$NodeImpl::getLastChild();
}

$Node* DefaultText::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$Node* DefaultText::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$NamedNodeMap* DefaultText::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

$Document* DefaultText::getOwnerDocument() {
	 return this->$NodeImpl::getOwnerDocument();
}

bool DefaultText::hasChildNodes() {
	 return this->$NodeImpl::hasChildNodes();
}

$Node* DefaultText::cloneNode(bool deep) {
	 return this->$NodeImpl::cloneNode(deep);
}

void DefaultText::normalize() {
	this->$NodeImpl::normalize();
}

bool DefaultText::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* DefaultText::getBaseURI() {
	 return this->$NodeImpl::getBaseURI();
}

bool DefaultText::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

void DefaultText::setNodeValue($String* nodeValue) {
	this->$NodeImpl::setNodeValue(nodeValue);
}

$Node* DefaultText::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$NodeImpl::insertBefore(newChild, refChild);
}

$Node* DefaultText::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$NodeImpl::replaceChild(newChild, oldChild);
}

$Node* DefaultText::removeChild($Node* oldChild) {
	 return this->$NodeImpl::removeChild(oldChild);
}

$Node* DefaultText::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

void DefaultText::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

int16_t DefaultText::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* DefaultText::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void DefaultText::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool DefaultText::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

$String* DefaultText::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

bool DefaultText::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* DefaultText::lookupNamespaceURI($String* prefix) {
	 return this->$NodeImpl::lookupNamespaceURI(prefix);
}

bool DefaultText::isEqualNode($Node* arg) {
	 return this->$NodeImpl::isEqualNode(arg);
}

$Object* DefaultText::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* DefaultText::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* DefaultText::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

int32_t DefaultText::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool DefaultText::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* DefaultText::clone() {
	 return this->$NodeImpl::clone();
}

$String* DefaultText::toString() {
	 return this->$NodeImpl::toString();
}

void DefaultText::finalize() {
	this->$NodeImpl::finalize();
}

void DefaultText::init$() {
	$NodeImpl::init$();
}

$String* DefaultText::getData() {
	return nullptr;
}

void DefaultText::setData($String* data) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

int32_t DefaultText::getLength() {
	return 0;
}

$String* DefaultText::substringData(int32_t offset, int32_t count) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void DefaultText::appendData($String* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultText::insertData(int32_t offset, $String* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultText::deleteData(int32_t offset, int32_t count) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void DefaultText::replaceData(int32_t offset, int32_t count, $String* arg) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$Text* DefaultText::splitText(int32_t offset) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool DefaultText::isElementContentWhitespace() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* DefaultText::getWholeText() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Text* DefaultText::replaceWholeText($String* content) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

DefaultText::DefaultText() {
}

$Class* DefaultText::load$($String* name, bool initialize) {
	$loadClass(DefaultText, name, initialize, &_DefaultText_ClassInfo_, allocate$DefaultText);
	return class$;
}

$Class* DefaultText::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com