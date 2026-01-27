#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <java/lang/StringBuffer.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ENTITY_REFERENCE_NODE
#undef TEXT_NODE

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $EntityImpl = ::com::sun::org::apache::xerces::internal::dom::EntityImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
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

$FieldInfo _EntityReferenceImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(EntityReferenceImpl, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityReferenceImpl, name)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(EntityReferenceImpl, baseURI)},
	{}
};

$MethodInfo _EntityReferenceImpl_MethodInfo_[] = {
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
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(EntityReferenceImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, cloneNode, $Node*, bool)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, getBaseURI, $String*)},
	{"getEntityRefValue", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(EntityReferenceImpl, getEntityRefValue, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, getNodeType, int16_t)},
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
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, setBaseURI, void, $String*)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(EntityReferenceImpl, setReadOnly, void, bool, bool)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(EntityReferenceImpl, synchronizeChildren, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EntityReferenceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.EntityReferenceImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"org.w3c.dom.EntityReference",
	_EntityReferenceImpl_FieldInfo_,
	_EntityReferenceImpl_MethodInfo_
};

$Object* allocate$EntityReferenceImpl($Class* clazz) {
	return $of($alloc(EntityReferenceImpl));
}

$Document* EntityReferenceImpl::getOwnerDocument() {
	 return this->$ParentNode::getOwnerDocument();
}

bool EntityReferenceImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* EntityReferenceImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* EntityReferenceImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* EntityReferenceImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

$Node* EntityReferenceImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ParentNode::insertBefore(newChild, refChild);
}

$Node* EntityReferenceImpl::removeChild($Node* oldChild) {
	 return this->$ParentNode::removeChild(oldChild);
}

$Node* EntityReferenceImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ParentNode::replaceChild(newChild, oldChild);
}

$String* EntityReferenceImpl::getTextContent() {
	 return this->$ParentNode::getTextContent();
}

void EntityReferenceImpl::setTextContent($String* textContent) {
	this->$ParentNode::setTextContent(textContent);
}

void EntityReferenceImpl::normalize() {
	this->$ParentNode::normalize();
}

bool EntityReferenceImpl::isEqualNode($Node* arg) {
	 return this->$ParentNode::isEqualNode(arg);
}

$Node* EntityReferenceImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* EntityReferenceImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* EntityReferenceImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* EntityReferenceImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

void EntityReferenceImpl::setNodeValue($String* x) {
	this->$ParentNode::setNodeValue(x);
}

$Node* EntityReferenceImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

$NamedNodeMap* EntityReferenceImpl::getAttributes() {
	 return this->$ParentNode::getAttributes();
}

bool EntityReferenceImpl::hasAttributes() {
	 return this->$ParentNode::hasAttributes();
}

bool EntityReferenceImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* EntityReferenceImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* EntityReferenceImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

void EntityReferenceImpl::setPrefix($String* prefix) {
	this->$ParentNode::setPrefix(prefix);
}

$String* EntityReferenceImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

int16_t EntityReferenceImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool EntityReferenceImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool EntityReferenceImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* EntityReferenceImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* EntityReferenceImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* EntityReferenceImpl::getFeature($String* feature, $String* version) {
	 return this->$ParentNode::getFeature(feature, version);
}

$Object* EntityReferenceImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ParentNode::setUserData(key, data, handler);
}

$Object* EntityReferenceImpl::getUserData($String* key) {
	 return this->$ParentNode::getUserData(key);
}

$String* EntityReferenceImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t EntityReferenceImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool EntityReferenceImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

$Object* EntityReferenceImpl::clone() {
	 return this->$ParentNode::clone();
}

void EntityReferenceImpl::finalize() {
	this->$ParentNode::finalize();
}

void EntityReferenceImpl::init$($CoreDocumentImpl* ownerDoc, $String* name) {
	$ParentNode::init$(ownerDoc);
	$set(this, name, name);
	isReadOnly(true);
	needsSyncChildren(true);
}

int16_t EntityReferenceImpl::getNodeType() {
	return $Node::ENTITY_REFERENCE_NODE;
}

$String* EntityReferenceImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$Node* EntityReferenceImpl::cloneNode(bool deep) {
	$var(EntityReferenceImpl, er, $cast(EntityReferenceImpl, $ParentNode::cloneNode(deep)));
	$nc(er)->setReadOnly(true, deep);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(er))));
}

$String* EntityReferenceImpl::getBaseURI() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->baseURI == nullptr) {
		$var($DocumentType, doctype, nullptr);
		$var($NamedNodeMap, entities, nullptr);
		$var($EntityImpl, entDef, nullptr);
		bool var$0 = nullptr != ($assign(doctype, $nc($(getOwnerDocument()))->getDoctype()));
		if (var$0 && nullptr != ($assign(entities, $nc(doctype)->getEntities()))) {
			$assign(entDef, $cast($EntityImpl, $nc(entities)->getNamedItem($(getNodeName()))));
			if (entDef != nullptr) {
				return entDef->getBaseURI();
			}
		}
	} else if (this->baseURI != nullptr && $nc(this->baseURI)->length() != 0) {
		try {
			return $$new($URI, this->baseURI)->toString();
		} catch ($URI$MalformedURIException& e) {
			return nullptr;
		}
	}
	return this->baseURI;
}

void EntityReferenceImpl::setBaseURI($String* uri) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, baseURI, uri);
}

$String* EntityReferenceImpl::getEntityRefValue() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$var($String, value, ""_s);
	if (this->firstChild != nullptr) {
		if ($nc(this->firstChild)->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
			$assign(value, $nc(($cast(EntityReferenceImpl, this->firstChild)))->getEntityRefValue());
		} else if ($nc(this->firstChild)->getNodeType() == $Node::TEXT_NODE) {
			$assign(value, $nc(this->firstChild)->getNodeValue());
		} else {
			return nullptr;
		}
		if ($nc(this->firstChild)->nextSibling == nullptr) {
			return value;
		} else {
			$var($StringBuffer, buff, $new($StringBuffer, value));
			$var($ChildNode, next, $nc(this->firstChild)->nextSibling);
			while (next != nullptr) {
				if (next->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
					$assign(value, $nc(($cast(EntityReferenceImpl, next)))->getEntityRefValue());
				} else if (next->getNodeType() == $Node::TEXT_NODE) {
					$assign(value, next->getNodeValue());
				} else {
					return nullptr;
				}
				buff->append(value);
				$assign(next, next->nextSibling);
			}
			return buff->toString();
		}
	}
	return ""_s;
}

void EntityReferenceImpl::synchronizeChildren() {
	$useLocalCurrentObjectStackCache();
	needsSyncChildren(false);
	$var($DocumentType, doctype, nullptr);
	$var($NamedNodeMap, entities, nullptr);
	$var($EntityImpl, entDef, nullptr);
	bool var$0 = nullptr != ($assign(doctype, $nc($(getOwnerDocument()))->getDoctype()));
	if (var$0 && nullptr != ($assign(entities, $nc(doctype)->getEntities()))) {
		$assign(entDef, $cast($EntityImpl, $nc(entities)->getNamedItem($(getNodeName()))));
		if (entDef == nullptr) {
			return;
		}
		isReadOnly(false);
		{
			$var($Node, defkid, $nc(entDef)->getFirstChild());
			for (; defkid != nullptr; $assign(defkid, $nc(defkid)->getNextSibling())) {
				$var($Node, newkid, defkid->cloneNode(true));
				insertBefore(newkid, nullptr);
			}
		}
		setReadOnly(true, true);
	}
}

void EntityReferenceImpl::setReadOnly(bool readOnly, bool deep) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (deep) {
		if (needsSyncChildren()) {
			synchronizeChildren();
		}
		{
			$var($ChildNode, mykid, this->firstChild);
			for (; mykid != nullptr; $assign(mykid, $nc(mykid)->nextSibling)) {
				mykid->setReadOnly(readOnly, true);
			}
		}
	}
	isReadOnly(readOnly);
}

EntityReferenceImpl::EntityReferenceImpl() {
}

$Class* EntityReferenceImpl::load$($String* name, bool initialize) {
	$loadClass(EntityReferenceImpl, name, initialize, &_EntityReferenceImpl_ClassInfo_, allocate$EntityReferenceImpl);
	return class$;
}

$Class* EntityReferenceImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com