#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttributeMap.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DeepNodeListImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef INVALID_CHARACTER_ERR
#undef NAMESPACE_ERR
#undef NOT_FOUND_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef TEXT_NODE
#undef WRONG_DOCUMENT_ERR

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
using $AttributeMap = ::com::sun::org::apache::xerces::internal::dom::AttributeMap;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DeepNodeListImpl = ::com::sun::org::apache::xerces::internal::dom::DeepNodeListImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $ElementDefinitionImpl = ::com::sun::org::apache::xerces::internal::dom::ElementDefinitionImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _ElementImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ElementImpl, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementImpl, name)},
	{"attributes", "Lcom/sun/org/apache/xerces/internal/dom/AttributeMap;", nullptr, $PROTECTED, $field(ElementImpl, attributes)},
	{}
};

$MethodInfo _ElementImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
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
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ElementImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"<init>", "()V", nullptr, $PROTECTED, $method(ElementImpl, init$, void)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, cloneNode, $Node*, bool)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getAttribute, $String*, $String*)},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getAttributeNS, $String*, $String*, $String*)},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getAttributeNode, $Attr*, $String*)},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getAttributeNodeNS, $Attr*, $String*, $String*)},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getAttributes, $NamedNodeMap*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getBaseURI, $String*)},
	{"getChildElementCount", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(ElementImpl, getChildElementCount, int32_t)},
	{"getDefaultAttributes", "()Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PROTECTED, $virtualMethod(ElementImpl, getDefaultAttributes, $NamedNodeMapImpl*)},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getElementsByTagNameNS, $NodeList*, $String*, $String*)},
	{"getFirstElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ElementImpl, getFirstElementChild, $Element*)},
	{"getFirstElementChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(ElementImpl, getFirstElementChild, $Element*, $Node*)},
	{"getLastElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ElementImpl, getLastElementChild, $Element*)},
	{"getLastElementChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(ElementImpl, getLastElementChild, $Element*, $Node*)},
	{"getNextElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ElementImpl, getNextElementSibling, $Element*)},
	{"getNextLogicalSibling", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(ElementImpl, getNextLogicalSibling, $Node*, $Node*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getNodeType, int16_t)},
	{"getPreviousElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ElementImpl, getPreviousElementSibling, $Element*)},
	{"getPreviousLogicalSibling", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(ElementImpl, getPreviousLogicalSibling, $Node*, $Node*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getSchemaTypeInfo, $TypeInfo*)},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getTagName, $String*)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, getTypeNamespace, $String*)},
	{"getXMLBaseAttribute", "()Lorg/w3c/dom/Attr;", nullptr, $PROTECTED, $virtualMethod(ElementImpl, getXMLBaseAttribute, $Attr*)},
	{"getXercesAttribute", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(ElementImpl, getXercesAttribute, int32_t, $String*, $String*)},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ElementImpl, hasAttribute, bool, $String*)},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ElementImpl, hasAttributeNS, bool, $String*, $String*)},
	{"hasAttributes", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementImpl, hasAttributes, bool)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(ElementImpl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(ElementImpl, isEqualNode, bool, $Node*)},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"moveSpecifiedAttributes", "(Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;)V", nullptr, 0, $virtualMethod(ElementImpl, moveSpecifiedAttributes, void, ElementImpl*)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, normalize, void)},
	{"reconcileDefaultAttributes", "()V", nullptr, $PROTECTED, $virtualMethod(ElementImpl, reconcileDefaultAttributes, void)},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, removeAttribute, void, $String*)},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, removeAttributeNS, void, $String*, $String*)},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, removeAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"rename", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ElementImpl, rename, void, $String*)},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setAttribute, void, $String*, $String*)},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setAttributeNS, void, $String*, $String*, $String*)},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setAttributeNodeNS, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setIdAttribute, void, $String*, bool)},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setIdAttributeNS, void, $String*, $String*, bool)},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setIdAttributeNode, void, $Attr*, bool)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $virtualMethod(ElementImpl, setOwnerDocument, void, $CoreDocumentImpl*)},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(ElementImpl, setReadOnly, void, bool, bool)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setXercesAttributeNode", "(Lorg/w3c/dom/Attr;)I", nullptr, $PROTECTED, $virtualMethod(ElementImpl, setXercesAttributeNode, int32_t, $Attr*)},
	{"setupDefaultAttributes", "()V", nullptr, $PROTECTED, $virtualMethod(ElementImpl, setupDefaultAttributes, void)},
	{"synchronizeData", "()V", nullptr, $PROTECTED, $virtualMethod(ElementImpl, synchronizeData, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ElementImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.ElementImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"org.w3c.dom.Element,org.w3c.dom.ElementTraversal,org.w3c.dom.TypeInfo",
	_ElementImpl_FieldInfo_,
	_ElementImpl_MethodInfo_
};

$Object* allocate$ElementImpl($Class* clazz) {
	return $of($alloc(ElementImpl));
}

$Document* ElementImpl::getOwnerDocument() {
	 return this->$ParentNode::getOwnerDocument();
}

bool ElementImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* ElementImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* ElementImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* ElementImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

$Node* ElementImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$ParentNode::insertBefore(newChild, refChild);
}

$Node* ElementImpl::removeChild($Node* oldChild) {
	 return this->$ParentNode::removeChild(oldChild);
}

$Node* ElementImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$ParentNode::replaceChild(newChild, oldChild);
}

$String* ElementImpl::getTextContent() {
	 return this->$ParentNode::getTextContent();
}

void ElementImpl::setTextContent($String* textContent) {
	this->$ParentNode::setTextContent(textContent);
}

$Node* ElementImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* ElementImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* ElementImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* ElementImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

void ElementImpl::setNodeValue($String* x) {
	this->$ParentNode::setNodeValue(x);
}

$Node* ElementImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

bool ElementImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* ElementImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* ElementImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

void ElementImpl::setPrefix($String* prefix) {
	this->$ParentNode::setPrefix(prefix);
}

$String* ElementImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

int16_t ElementImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool ElementImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool ElementImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* ElementImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* ElementImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* ElementImpl::getFeature($String* feature, $String* version) {
	 return this->$ParentNode::getFeature(feature, version);
}

$Object* ElementImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ParentNode::setUserData(key, data, handler);
}

$Object* ElementImpl::getUserData($String* key) {
	 return this->$ParentNode::getUserData(key);
}

$String* ElementImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t ElementImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool ElementImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

$Object* ElementImpl::clone() {
	 return this->$ParentNode::clone();
}

void ElementImpl::finalize() {
	this->$ParentNode::finalize();
}

void ElementImpl::init$($CoreDocumentImpl* ownerDoc, $String* name) {
	$ParentNode::init$(ownerDoc);
	$set(this, name, name);
	needsSyncData(true);
}

void ElementImpl::init$() {
	$ParentNode::init$();
}

void ElementImpl::rename($String* name) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		int32_t colon1 = $nc(name)->indexOf((int32_t)u':');
		if (colon1 != -1) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
		}
		if (!$CoreDocumentImpl::isXMLName(name, $nc(this->ownerDocument$)->isXML11Version())) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
		}
	}
	$set(this, name, name);
	reconcileDefaultAttributes();
}

int16_t ElementImpl::getNodeType() {
	return $Node::ELEMENT_NODE;
}

$String* ElementImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

$NamedNodeMap* ElementImpl::getAttributes() {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($AttributeMap, this, nullptr));
	}
	return this->attributes;
}

$Node* ElementImpl::cloneNode(bool deep) {
	$var(ElementImpl, newnode, $cast(ElementImpl, $ParentNode::cloneNode(deep)));
	if (this->attributes != nullptr) {
		$set($nc(newnode), attributes, $cast($AttributeMap, $nc(this->attributes)->cloneMap(static_cast<$NodeImpl*>(newnode))));
	}
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newnode))));
}

$String* ElementImpl::getBaseURI() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes != nullptr) {
		$var($Attr, attrNode, getXMLBaseAttribute());
		if (attrNode != nullptr) {
			$var($String, uri, attrNode->getNodeValue());
			if ($nc(uri)->length() != 0) {
				try {
					$var($URI, _uri, $new($URI, uri, true));
					if (_uri->isAbsoluteURI()) {
						return _uri->toString();
					}
					$var($String, parentBaseURI, (this->ownerNode != nullptr) ? $nc(this->ownerNode)->getBaseURI() : ($String*)nullptr);
					if (parentBaseURI != nullptr) {
						try {
							$var($URI, _parentBaseURI, $new($URI, parentBaseURI));
							_uri->absolutize(_parentBaseURI);
							return _uri->toString();
						} catch ($URI$MalformedURIException& ex) {
							return nullptr;
						}
					}
					return nullptr;
				} catch ($URI$MalformedURIException& ex) {
					return nullptr;
				}
			}
		}
	}
	return (this->ownerNode != nullptr) ? $nc(this->ownerNode)->getBaseURI() : ($String*)nullptr;
}

$Attr* ElementImpl::getXMLBaseAttribute() {
	return $cast($Attr, $nc(this->attributes)->getNamedItem("xml:base"_s));
}

void ElementImpl::setOwnerDocument($CoreDocumentImpl* doc) {
	$ParentNode::setOwnerDocument(doc);
	if (this->attributes != nullptr) {
		$nc(this->attributes)->setOwnerDocument(doc);
	}
}

$String* ElementImpl::getAttribute($String* name) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return ""_s;
	}
	$var($Attr, attr, ($cast($Attr, $nc(this->attributes)->getNamedItem(name))));
	return (attr == nullptr) ? ""_s : $nc(attr)->getValue();
}

$Attr* ElementImpl::getAttributeNode($String* name) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return nullptr;
	}
	return $cast($Attr, $nc(this->attributes)->getNamedItem(name));
}

$NodeList* ElementImpl::getElementsByTagName($String* tagname) {
	return $new($DeepNodeListImpl, this, tagname);
}

$String* ElementImpl::getTagName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

void ElementImpl::normalize() {
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
		} else if (kid->getNodeType() == $Node::ELEMENT_NODE) {
			kid->normalize();
		}
	}
	if (this->attributes != nullptr) {
		for (int32_t i = 0; i < $nc(this->attributes)->getLength(); ++i) {
			$var($Node, attr, $nc(this->attributes)->item(i));
			$nc(attr)->normalize();
		}
	}
	isNormalized(true);
}

void ElementImpl::removeAttribute($String* name) {
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return;
	}
	$nc(this->attributes)->safeRemoveNamedItem(name);
}

$Attr* ElementImpl::removeAttributeNode($Attr* oldAttr) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	return $cast($Attr, $nc(this->attributes)->removeItem(oldAttr, true));
}

void ElementImpl::setAttribute($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	$var($Attr, newAttr, getAttributeNode(name));
	if (newAttr == nullptr) {
		$assign(newAttr, $nc($(getOwnerDocument()))->createAttribute(name));
		if (this->attributes == nullptr) {
			$set(this, attributes, $new($AttributeMap, this, nullptr));
		}
		$nc(newAttr)->setNodeValue(value);
		$nc(this->attributes)->setNamedItem(newAttr);
	} else {
		$nc(newAttr)->setNodeValue(value);
	}
}

$Attr* ElementImpl::setAttributeNode($Attr* newAttr) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(newAttr)->getOwnerDocument(), this->ownerDocument$)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($AttributeMap, this, nullptr));
	}
	return $cast($Attr, $nc(this->attributes)->setNamedItem(newAttr));
}

$String* ElementImpl::getAttributeNS($String* namespaceURI, $String* localName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return ""_s;
	}
	$var($Attr, attr, ($cast($Attr, $nc(this->attributes)->getNamedItemNS(namespaceURI, localName))));
	return (attr == nullptr) ? ""_s : $nc(attr)->getValue();
}

void ElementImpl::setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	int32_t index = $nc(qualifiedName)->indexOf((int32_t)u':');
	$var($String, prefix, nullptr);
	$var($String, localName, nullptr);
	if (index < 0) {
		$assign(prefix, nullptr);
		$assign(localName, qualifiedName);
	} else {
		$assign(prefix, qualifiedName->substring(0, index));
		$assign(localName, qualifiedName->substring(index + 1));
	}
	$var($Attr, newAttr, getAttributeNodeNS(namespaceURI, localName));
	if (newAttr == nullptr) {
		$assign(newAttr, $nc($(getOwnerDocument()))->createAttributeNS(namespaceURI, qualifiedName));
		if (this->attributes == nullptr) {
			$set(this, attributes, $new($AttributeMap, this, nullptr));
		}
		$nc(newAttr)->setNodeValue(value);
		$nc(this->attributes)->setNamedItemNS(newAttr);
	} else {
		if ($instanceOf($AttrNSImpl, newAttr)) {
			$var($String, origNodeName, $nc(($cast($AttrNSImpl, newAttr)))->name);
			$var($String, newName, (prefix != nullptr) ? ($str({prefix, ":"_s, localName})) : localName);
			$set($nc($cast($AttrNSImpl, newAttr)), name, newName);
			if (!$nc(newName)->equals(origNodeName)) {
				$assign(newAttr, $cast($Attr, $nc(this->attributes)->removeItem(newAttr, false)));
				$nc(this->attributes)->addItem(newAttr);
			}
		} else {
			$assign(newAttr, $nc(($cast($CoreDocumentImpl, $(getOwnerDocument()))))->createAttributeNS(namespaceURI, qualifiedName, localName));
			$nc(this->attributes)->setNamedItemNS(newAttr);
		}
		$nc(newAttr)->setNodeValue(value);
	}
}

void ElementImpl::removeAttributeNS($String* namespaceURI, $String* localName) {
	if ($nc(this->ownerDocument$)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return;
	}
	$nc(this->attributes)->safeRemoveNamedItemNS(namespaceURI, localName);
}

$Attr* ElementImpl::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return nullptr;
	}
	return $cast($Attr, $nc(this->attributes)->getNamedItemNS(namespaceURI, localName));
}

$Attr* ElementImpl::setAttributeNodeNS($Attr* newAttr) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(newAttr)->getOwnerDocument(), this->ownerDocument$)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($AttributeMap, this, nullptr));
	}
	return $cast($Attr, $nc(this->attributes)->setNamedItemNS(newAttr));
}

int32_t ElementImpl::setXercesAttributeNode($Attr* attr) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($AttributeMap, this, nullptr));
	}
	return $nc(this->attributes)->addItem(attr);
}

int32_t ElementImpl::getXercesAttribute($String* namespaceURI, $String* localName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->attributes == nullptr) {
		return -1;
	}
	return $nc(this->attributes)->getNamedItemIndex(namespaceURI, localName);
}

bool ElementImpl::hasAttributes() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return (this->attributes != nullptr && $nc(this->attributes)->getLength() != 0);
}

bool ElementImpl::hasAttribute($String* name) {
	return getAttributeNode(name) != nullptr;
}

bool ElementImpl::hasAttributeNS($String* namespaceURI, $String* localName) {
	return getAttributeNodeNS(namespaceURI, localName) != nullptr;
}

$NodeList* ElementImpl::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	return $new($DeepNodeListImpl, this, namespaceURI, localName);
}

bool ElementImpl::isEqualNode($Node* arg) {
	$useLocalCurrentObjectStackCache();
	if (!$ParentNode::isEqualNode(arg)) {
		return false;
	}
	bool hasAttrs = hasAttributes();
	if (hasAttrs != $nc(($cast($Element, arg)))->hasAttributes()) {
		return false;
	}
	if (hasAttrs) {
		$var($NamedNodeMap, map1, getAttributes());
		$var($NamedNodeMap, map2, $nc(($cast($Element, arg)))->getAttributes());
		int32_t len = $nc(map1)->getLength();
		if (len != $nc(map2)->getLength()) {
			return false;
		}
		for (int32_t i = 0; i < len; ++i) {
			$var($Node, n1, map1->item(i));
			if ($nc(n1)->getLocalName() == nullptr) {
				$var($Node, n2, $nc(map2)->getNamedItem($(n1->getNodeName())));
				if (n2 == nullptr || !$nc(($cast($NodeImpl, n1)))->isEqualNode(n2)) {
					return false;
				}
			} else {
				$var($String, var$0, n1->getNamespaceURI());
				$var($Node, n2, $nc(map2)->getNamedItemNS(var$0, $(n1->getLocalName())));
				if (n2 == nullptr || !$nc(($cast($NodeImpl, n1)))->isEqualNode(n2)) {
					return false;
				}
			}
		}
	}
	return true;
}

void ElementImpl::setIdAttributeNode($Attr* at, bool makeId) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(at)->getOwnerElement(), this)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
	}
	$nc(($cast($AttrImpl, at)))->isIdAttribute(makeId);
	if (!makeId) {
		$nc(this->ownerDocument$)->removeIdentifier($($nc(at)->getValue()));
	} else {
		$nc(this->ownerDocument$)->putIdentifier($($nc(at)->getValue()), this);
	}
}

void ElementImpl::setIdAttribute($String* name, bool makeId) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	$var($Attr, at, getAttributeNode(name));
	if (at == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(at)->getOwnerElement(), this)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
	}
	$nc(($cast($AttrImpl, at)))->isIdAttribute(makeId);
	if (!makeId) {
		$nc(this->ownerDocument$)->removeIdentifier($($nc(at)->getValue()));
	} else {
		$nc(this->ownerDocument$)->putIdentifier($($nc(at)->getValue()), this);
	}
}

void ElementImpl::setIdAttributeNS($String* namespaceURI$renamed, $String* localName, bool makeId) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, namespaceURI$renamed);
	if (needsSyncData()) {
		synchronizeData();
	}
	if (namespaceURI != nullptr) {
		$assign(namespaceURI, (namespaceURI->length() == 0) ? ($String*)nullptr : namespaceURI);
	}
	$var($Attr, at, getAttributeNodeNS(namespaceURI, localName));
	if (at == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(at)->getOwnerElement(), this)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
	}
	$nc(($cast($AttrImpl, at)))->isIdAttribute(makeId);
	if (!makeId) {
		$nc(this->ownerDocument$)->removeIdentifier($($nc(at)->getValue()));
	} else {
		$nc(this->ownerDocument$)->putIdentifier($($nc(at)->getValue()), this);
	}
}

$String* ElementImpl::getTypeName() {
	return nullptr;
}

$String* ElementImpl::getTypeNamespace() {
	return nullptr;
}

bool ElementImpl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	return false;
}

$TypeInfo* ElementImpl::getSchemaTypeInfo() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this;
}

void ElementImpl::setReadOnly(bool readOnly, bool deep) {
	$ParentNode::setReadOnly(readOnly, deep);
	if (this->attributes != nullptr) {
		$nc(this->attributes)->setReadOnly(readOnly, true);
	}
}

void ElementImpl::synchronizeData() {
	needsSyncData(false);
	bool orig = $nc(this->ownerDocument$)->getMutationEvents();
	$nc(this->ownerDocument$)->setMutationEvents(false);
	setupDefaultAttributes();
	$nc(this->ownerDocument$)->setMutationEvents(orig);
}

void ElementImpl::moveSpecifiedAttributes(ElementImpl* el) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(el)->hasAttributes()) {
		if (this->attributes == nullptr) {
			$set(this, attributes, $new($AttributeMap, this, nullptr));
		}
		$nc(this->attributes)->moveSpecifiedAttributes(el->attributes);
	}
}

void ElementImpl::setupDefaultAttributes() {
	$var($NamedNodeMapImpl, defaults, getDefaultAttributes());
	if (defaults != nullptr) {
		$set(this, attributes, $new($AttributeMap, this, defaults));
	}
}

void ElementImpl::reconcileDefaultAttributes() {
	if (this->attributes != nullptr) {
		$var($NamedNodeMapImpl, defaults, getDefaultAttributes());
		$nc(this->attributes)->reconcileDefaults(defaults);
	}
}

$NamedNodeMapImpl* ElementImpl::getDefaultAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($DocumentTypeImpl, doctype, $cast($DocumentTypeImpl, $nc(this->ownerDocument$)->getDoctype()));
	if (doctype == nullptr) {
		return nullptr;
	}
	$var($ElementDefinitionImpl, eldef, $cast($ElementDefinitionImpl, $nc($($nc(doctype)->getElements()))->getNamedItem($(getNodeName()))));
	if (eldef == nullptr) {
		return nullptr;
	}
	return $cast($NamedNodeMapImpl, $nc(eldef)->getAttributes());
}

int32_t ElementImpl::getChildElementCount() {
	int32_t count = 0;
	$var($Element, child, getFirstElementChild());
	while (child != nullptr) {
		++count;
		$assign(child, $nc(($cast(ElementImpl, child)))->getNextElementSibling());
	}
	return count;
}

$Element* ElementImpl::getFirstElementChild() {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, getFirstChild());
	while (n != nullptr) {
		{
			$var($Element, e, nullptr)
			switch (n->getNodeType()) {
			case $Node::ELEMENT_NODE:
				{
					return $cast($Element, n);
				}
			case $Node::ENTITY_REFERENCE_NODE:
				{
					$assign(e, getFirstElementChild(n));
					if (e != nullptr) {
						return e;
					}
					break;
				}
			}
		}
		$assign(n, n->getNextSibling());
	}
	return nullptr;
}

$Element* ElementImpl::getLastElementChild() {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, getLastChild());
	while (n != nullptr) {
		{
			$var($Element, e, nullptr)
			switch (n->getNodeType()) {
			case $Node::ELEMENT_NODE:
				{
					return $cast($Element, n);
				}
			case $Node::ENTITY_REFERENCE_NODE:
				{
					$assign(e, getLastElementChild(n));
					if (e != nullptr) {
						return e;
					}
					break;
				}
			}
		}
		$assign(n, n->getPreviousSibling());
	}
	return nullptr;
}

$Element* ElementImpl::getNextElementSibling() {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, getNextLogicalSibling(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(this))))));
	while (n != nullptr) {
		{
			$var($Element, e, nullptr)
			switch (n->getNodeType()) {
			case $Node::ELEMENT_NODE:
				{
					return $cast($Element, n);
				}
			case $Node::ENTITY_REFERENCE_NODE:
				{
					$assign(e, getFirstElementChild(n));
					if (e != nullptr) {
						return e;
					}
					break;
				}
			}
		}
		$assign(n, getNextLogicalSibling(n));
	}
	return nullptr;
}

$Element* ElementImpl::getPreviousElementSibling() {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, getPreviousLogicalSibling(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(this))))));
	while (n != nullptr) {
		{
			$var($Element, e, nullptr)
			switch (n->getNodeType()) {
			case $Node::ELEMENT_NODE:
				{
					return $cast($Element, n);
				}
			case $Node::ENTITY_REFERENCE_NODE:
				{
					$assign(e, getLastElementChild(n));
					if (e != nullptr) {
						return e;
					}
					break;
				}
			}
		}
		$assign(n, getPreviousLogicalSibling(n));
	}
	return nullptr;
}

$Element* ElementImpl::getFirstElementChild($Node* n$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, n$renamed);
	$var($Node, top, n);
	while (n != nullptr) {
		if (n->getNodeType() == $Node::ELEMENT_NODE) {
			return $cast($Element, n);
		}
		$var($Node, next, n->getFirstChild());
		while (next == nullptr) {
			if (top == n) {
				break;
			}
			$assign(next, $nc(n)->getNextSibling());
			if (next == nullptr) {
				$assign(n, n->getParentNode());
				if (n == nullptr || top == n) {
					return nullptr;
				}
			}
		}
		$assign(n, next);
	}
	return nullptr;
}

$Element* ElementImpl::getLastElementChild($Node* n$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, n$renamed);
	$var($Node, top, n);
	while (n != nullptr) {
		if (n->getNodeType() == $Node::ELEMENT_NODE) {
			return $cast($Element, n);
		}
		$var($Node, next, n->getLastChild());
		while (next == nullptr) {
			if (top == n) {
				break;
			}
			$assign(next, $nc(n)->getPreviousSibling());
			if (next == nullptr) {
				$assign(n, n->getParentNode());
				if (n == nullptr || top == n) {
					return nullptr;
				}
			}
		}
		$assign(n, next);
	}
	return nullptr;
}

$Node* ElementImpl::getNextLogicalSibling($Node* n) {
	$useLocalCurrentObjectStackCache();
	$var($Node, next, $nc(n)->getNextSibling());
	if (next == nullptr) {
		$var($Node, parent, n->getParentNode());
		while (parent != nullptr && parent->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
			$assign(next, parent->getNextSibling());
			if (next != nullptr) {
				break;
			}
			$assign(parent, parent->getParentNode());
		}
	}
	return next;
}

$Node* ElementImpl::getPreviousLogicalSibling($Node* n) {
	$useLocalCurrentObjectStackCache();
	$var($Node, prev, $nc(n)->getPreviousSibling());
	if (prev == nullptr) {
		$var($Node, parent, n->getParentNode());
		while (parent != nullptr && parent->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
			$assign(prev, parent->getPreviousSibling());
			if (prev != nullptr) {
				break;
			}
			$assign(parent, parent->getParentNode());
		}
	}
	return prev;
}

ElementImpl::ElementImpl() {
}

$Class* ElementImpl::load$($String* name, bool initialize) {
	$loadClass(ElementImpl, name, initialize, &_ElementImpl_ClassInfo_, allocate$ElementImpl);
	return class$;
}

$Class* ElementImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com