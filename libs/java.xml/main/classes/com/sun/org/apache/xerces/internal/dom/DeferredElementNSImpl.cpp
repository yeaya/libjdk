#include <com/sun/org/apache/xerces/internal/dom/DeferredElementNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredNode.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef XMLNS_URI

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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

$FieldInfo _DeferredElementNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DeferredElementNSImpl, serialVersionUID)},
	{"fNodeIndex", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DeferredElementNSImpl, fNodeIndex)},
	{}
};

$MethodInfo _DeferredElementNSImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;I)V", nullptr, 0, $method(DeferredElementNSImpl, init$, void, $DeferredDocumentImpl*, int32_t)},
	{"getNodeIndex", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DeferredElementNSImpl, getNodeIndex, int32_t)},
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
	{"synchronizeChildren", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(DeferredElementNSImpl, synchronizeChildren, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(DeferredElementNSImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DeferredElementNSImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredElementNSImpl",
	"com.sun.org.apache.xerces.internal.dom.ElementNSImpl",
	"com.sun.org.apache.xerces.internal.dom.DeferredNode",
	_DeferredElementNSImpl_FieldInfo_,
	_DeferredElementNSImpl_MethodInfo_
};

$Object* allocate$DeferredElementNSImpl($Class* clazz) {
	return $of($alloc(DeferredElementNSImpl));
}

$String* DeferredElementNSImpl::getNamespaceURI() {
	 return this->$ElementNSImpl::getNamespaceURI();
}

$String* DeferredElementNSImpl::getPrefix() {
	 return this->$ElementNSImpl::getPrefix();
}

void DeferredElementNSImpl::setPrefix($String* prefix) {
	this->$ElementNSImpl::setPrefix(prefix);
}

$String* DeferredElementNSImpl::getLocalName() {
	 return this->$ElementNSImpl::getLocalName();
}

int16_t DeferredElementNSImpl::getNodeType() {
	 return this->$ElementNSImpl::getNodeType();
}

$String* DeferredElementNSImpl::getNodeName() {
	 return this->$ElementNSImpl::getNodeName();
}

$NamedNodeMap* DeferredElementNSImpl::getAttributes() {
	 return this->$ElementNSImpl::getAttributes();
}

$Node* DeferredElementNSImpl::cloneNode(bool deep) {
	 return this->$ElementNSImpl::cloneNode(deep);
}

$String* DeferredElementNSImpl::getBaseURI() {
	 return this->$ElementNSImpl::getBaseURI();
}

void DeferredElementNSImpl::normalize() {
	this->$ElementNSImpl::normalize();
}

bool DeferredElementNSImpl::hasAttributes() {
	 return this->$ElementNSImpl::hasAttributes();
}

bool DeferredElementNSImpl::isEqualNode($Node* arg) {
	 return this->$ElementNSImpl::isEqualNode(arg);
}

$Document* DeferredElementNSImpl::getOwnerDocument() {
	 return this->$ElementNSImpl::getOwnerDocument();
}

bool DeferredElementNSImpl::hasChildNodes() {
	 return this->$ElementNSImpl::hasChildNodes();
}

$NodeList* DeferredElementNSImpl::getChildNodes() {
	 return this->$ElementNSImpl::getChildNodes();
}

$Node* DeferredElementNSImpl::getFirstChild() {
	 return this->$ElementNSImpl::getFirstChild();
}

$Node* DeferredElementNSImpl::getLastChild() {
	 return this->$ElementNSImpl::getLastChild();
}

$Node* DeferredElementNSImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ElementNSImpl::insertBefore(newChild, refChild);
}

$Node* DeferredElementNSImpl::removeChild($Node* oldChild) {
	 return this->$ElementNSImpl::removeChild(oldChild);
}

$Node* DeferredElementNSImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ElementNSImpl::replaceChild(newChild, oldChild);
}

$String* DeferredElementNSImpl::getTextContent() {
	 return this->$ElementNSImpl::getTextContent();
}

void DeferredElementNSImpl::setTextContent($String* textContent) {
	this->$ElementNSImpl::setTextContent(textContent);
}

$Node* DeferredElementNSImpl::getParentNode() {
	 return this->$ElementNSImpl::getParentNode();
}

$Node* DeferredElementNSImpl::getNextSibling() {
	 return this->$ElementNSImpl::getNextSibling();
}

$Node* DeferredElementNSImpl::getPreviousSibling() {
	 return this->$ElementNSImpl::getPreviousSibling();
}

$String* DeferredElementNSImpl::getNodeValue() {
	 return this->$ElementNSImpl::getNodeValue();
}

void DeferredElementNSImpl::setNodeValue($String* x) {
	this->$ElementNSImpl::setNodeValue(x);
}

$Node* DeferredElementNSImpl::appendChild($Node* newChild) {
	 return this->$ElementNSImpl::appendChild(newChild);
}

bool DeferredElementNSImpl::isSupported($String* feature, $String* version) {
	 return this->$ElementNSImpl::isSupported(feature, version);
}

int16_t DeferredElementNSImpl::compareDocumentPosition($Node* other) {
	 return this->$ElementNSImpl::compareDocumentPosition(other);
}

bool DeferredElementNSImpl::isSameNode($Node* other) {
	 return this->$ElementNSImpl::isSameNode(other);
}

bool DeferredElementNSImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ElementNSImpl::isDefaultNamespace(namespaceURI);
}

$String* DeferredElementNSImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ElementNSImpl::lookupPrefix(namespaceURI);
}

$String* DeferredElementNSImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ElementNSImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* DeferredElementNSImpl::getFeature($String* feature, $String* version) {
	 return this->$ElementNSImpl::getFeature(feature, version);
}

$Object* DeferredElementNSImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ElementNSImpl::setUserData(key, data, handler);
}

$Object* DeferredElementNSImpl::getUserData($String* key) {
	 return this->$ElementNSImpl::getUserData(key);
}

$String* DeferredElementNSImpl::toString() {
	 return this->$ElementNSImpl::toString();
}

int32_t DeferredElementNSImpl::hashCode() {
	 return this->$ElementNSImpl::hashCode();
}

bool DeferredElementNSImpl::equals(Object$* arg0) {
	 return this->$ElementNSImpl::equals(arg0);
}

$Object* DeferredElementNSImpl::clone() {
	 return this->$ElementNSImpl::clone();
}

void DeferredElementNSImpl::finalize() {
	this->$ElementNSImpl::finalize();
}

void DeferredElementNSImpl::init$($DeferredDocumentImpl* ownerDoc, int32_t nodeIndex) {
	$ElementNSImpl::init$(ownerDoc, nullptr);
	this->fNodeIndex = nodeIndex;
	needsSyncChildren(true);
}

int32_t DeferredElementNSImpl::getNodeIndex() {
	return this->fNodeIndex;
}

void DeferredElementNSImpl::synchronizeData() {
	$useLocalCurrentObjectStackCache();
	needsSyncData(false);
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument$));
	bool orig = $nc(ownerDocument)->mutationEvents;
	ownerDocument->mutationEvents = false;
	$set(this, name, ownerDocument->getNodeName(this->fNodeIndex));
	int32_t index = $nc(this->name)->indexOf((int32_t)u':');
	if (index < 0) {
		$set(this, localName, this->name);
	} else {
		$set(this, localName, $nc(this->name)->substring(index + 1));
	}
	$set(this, namespaceURI, ownerDocument->getNodeURI(this->fNodeIndex));
	$set(this, type, $cast($XSTypeDefinition, ownerDocument->getTypeInfo(this->fNodeIndex)));
	setupDefaultAttributes();
	int32_t attrIndex = ownerDocument->getNodeExtra(this->fNodeIndex);
	if (attrIndex != -1) {
		$var($NamedNodeMap, attrs, getAttributes());
		bool seenSchemaDefault = false;
		do {
			$var($AttrImpl, attr, $cast($AttrImpl, ownerDocument->getNodeObject(attrIndex)));
			bool var$0 = !$nc(attr)->getSpecified();
			if (var$0) {
				bool var$1 = seenSchemaDefault;
				if (!var$1) {
					bool var$3 = $nc(attr)->getNamespaceURI() != nullptr;
					$init($NamespaceContext);
					bool var$2 = var$3 && attr->getNamespaceURI() != $NamespaceContext::XMLNS_URI;
					var$1 = (var$2 && $nc($(attr->getName()))->indexOf((int32_t)u':') < 0);
				}
				var$0 = (var$1);
			}
			if (var$0) {
				seenSchemaDefault = true;
				$nc(attrs)->setNamedItemNS(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			} else {
				$nc(attrs)->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			}
			attrIndex = ownerDocument->getPrevSibling(attrIndex);
		} while (attrIndex != -1);
	}
	ownerDocument->mutationEvents = orig;
}

void DeferredElementNSImpl::synchronizeChildren() {
	$var($DeferredDocumentImpl, ownerDocument, $cast($DeferredDocumentImpl, this->ownerDocument()));
	$nc(ownerDocument)->synchronizeChildren(static_cast<$ParentNode*>(this), this->fNodeIndex);
}

DeferredElementNSImpl::DeferredElementNSImpl() {
}

$Class* DeferredElementNSImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredElementNSImpl, name, initialize, &_DeferredElementNSImpl_ClassInfo_, allocate$DeferredElementNSImpl);
	return class$;
}

$Class* DeferredElementNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com