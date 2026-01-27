#include <com/sun/org/apache/xerces/internal/dom/DocumentFragmentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef DOCUMENT_FRAGMENT_NODE
#undef TEXT_NODE

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
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

$FieldInfo _DocumentFragmentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocumentFragmentImpl, serialVersionUID)},
	{}
};

$MethodInfo _DocumentFragmentImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PUBLIC, $method(DocumentFragmentImpl, init$, void, $CoreDocumentImpl*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DocumentFragmentImpl, init$, void)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentFragmentImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(DocumentFragmentImpl, getNodeType, int16_t)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(DocumentFragmentImpl, normalize, void)},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DocumentFragmentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DocumentFragmentImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"org.w3c.dom.DocumentFragment",
	_DocumentFragmentImpl_FieldInfo_,
	_DocumentFragmentImpl_MethodInfo_
};

$Object* allocate$DocumentFragmentImpl($Class* clazz) {
	return $of($alloc(DocumentFragmentImpl));
}

$Node* DocumentFragmentImpl::cloneNode(bool deep) {
	 return this->$ParentNode::cloneNode(deep);
}

$Document* DocumentFragmentImpl::getOwnerDocument() {
	 return this->$ParentNode::getOwnerDocument();
}

bool DocumentFragmentImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* DocumentFragmentImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* DocumentFragmentImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* DocumentFragmentImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

$Node* DocumentFragmentImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ParentNode::insertBefore(newChild, refChild);
}

$Node* DocumentFragmentImpl::removeChild($Node* oldChild) {
	 return this->$ParentNode::removeChild(oldChild);
}

$Node* DocumentFragmentImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ParentNode::replaceChild(newChild, oldChild);
}

$String* DocumentFragmentImpl::getTextContent() {
	 return this->$ParentNode::getTextContent();
}

void DocumentFragmentImpl::setTextContent($String* textContent) {
	this->$ParentNode::setTextContent(textContent);
}

bool DocumentFragmentImpl::isEqualNode($Node* arg) {
	 return this->$ParentNode::isEqualNode(arg);
}

$Node* DocumentFragmentImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* DocumentFragmentImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* DocumentFragmentImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* DocumentFragmentImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

void DocumentFragmentImpl::setNodeValue($String* x) {
	this->$ParentNode::setNodeValue(x);
}

$Node* DocumentFragmentImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

$NamedNodeMap* DocumentFragmentImpl::getAttributes() {
	 return this->$ParentNode::getAttributes();
}

bool DocumentFragmentImpl::hasAttributes() {
	 return this->$ParentNode::hasAttributes();
}

bool DocumentFragmentImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* DocumentFragmentImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* DocumentFragmentImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

void DocumentFragmentImpl::setPrefix($String* prefix) {
	this->$ParentNode::setPrefix(prefix);
}

$String* DocumentFragmentImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

$String* DocumentFragmentImpl::getBaseURI() {
	 return this->$ParentNode::getBaseURI();
}

int16_t DocumentFragmentImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool DocumentFragmentImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool DocumentFragmentImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* DocumentFragmentImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* DocumentFragmentImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* DocumentFragmentImpl::getFeature($String* feature, $String* version) {
	 return this->$ParentNode::getFeature(feature, version);
}

$Object* DocumentFragmentImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ParentNode::setUserData(key, data, handler);
}

$Object* DocumentFragmentImpl::getUserData($String* key) {
	 return this->$ParentNode::getUserData(key);
}

$String* DocumentFragmentImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t DocumentFragmentImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool DocumentFragmentImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

$Object* DocumentFragmentImpl::clone() {
	 return this->$ParentNode::clone();
}

void DocumentFragmentImpl::finalize() {
	this->$ParentNode::finalize();
}

void DocumentFragmentImpl::init$($CoreDocumentImpl* ownerDoc) {
	$ParentNode::init$(ownerDoc);
}

void DocumentFragmentImpl::init$() {
	$ParentNode::init$();
}

int16_t DocumentFragmentImpl::getNodeType() {
	return $Node::DOCUMENT_FRAGMENT_NODE;
}

$String* DocumentFragmentImpl::getNodeName() {
	return "#document-fragment"_s;
}

void DocumentFragmentImpl::normalize() {
	$useLocalCurrentObjectStackCache();
	if (isNormalized()) {
		return;
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$var($ChildNode, kid, nullptr);
	$var($ChildNode, next, nullptr);
	for ($assign(kid, this->firstChild); kid != nullptr; $assign(kid, next)) {
		$assign(next, $nc(kid)->nextSibling);
		if (kid->getNodeType() == $Node::TEXT_NODE) {
			if (next != nullptr && next->getNodeType() == $Node::TEXT_NODE) {
				$nc(($cast($Text, kid)))->appendData($(next->getNodeValue()));
				removeChild(next);
				$assign(next, kid);
			} else {
				bool var$1 = kid->getNodeValue() == nullptr;
				if (var$1 || $nc($(kid->getNodeValue()))->length() == 0) {
					removeChild(kid);
				}
			}
		}
		kid->normalize();
	}
	isNormalized(true);
}

DocumentFragmentImpl::DocumentFragmentImpl() {
}

$Class* DocumentFragmentImpl::load$($String* name, bool initialize) {
	$loadClass(DocumentFragmentImpl, name, initialize, &_DocumentFragmentImpl_ClassInfo_, allocate$DocumentFragmentImpl);
	return class$;
}

$Class* DocumentFragmentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com