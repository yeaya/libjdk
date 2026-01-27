#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/StringBuffer.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOM_DOMAIN
#undef DTD_URI
#undef ENTITY_REFERENCE_NODE
#undef HIERARCHY_REQUEST_ERR
#undef NOT_FOUND_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef TEXT_NODE
#undef WRONG_DOCUMENT_ERR

using $CharacterDataImpl = ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $EntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
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

$CompoundAttribute _AttrImpl_MethodAnnotations_getElement6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AttrImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AttrImpl, serialVersionUID)},
	{"DTD_URI", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AttrImpl, DTD_URI)},
	{"value", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(AttrImpl, value)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AttrImpl, name)},
	{"type", "Ljava/lang/Object;", nullptr, $TRANSIENT, $field(AttrImpl, type)},
	{}
};

$MethodInfo _AttrImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AttrImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AttrImpl, init$, void)},
	{"checkNormalizationAfterInsert", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, 0, $virtualMethod(AttrImpl, checkNormalizationAfterInsert, void, $ChildNode*)},
	{"checkNormalizationAfterRemove", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, 0, $virtualMethod(AttrImpl, checkNormalizationAfterRemove, void, $ChildNode*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, cloneNode, $Node*, bool)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getChildNodes, $NodeList*)},
	{"getElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttrImpl, getElement, $Element*), nullptr, nullptr, _AttrImpl_MethodAnnotations_getElement6},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getFirstChild, $Node*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getLastChild, $Node*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getLength, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getName, $String*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getNodeType, int16_t)},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getNodeValue, $String*)},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getOwnerElement, $Element*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getSchemaTypeInfo, $TypeInfo*)},
	{"getSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getSpecified, bool)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getTypeNamespace, $String*)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, getValue, $String*)},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, hasChildNodes, bool)},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"internalInsertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(AttrImpl, internalInsertBefore, $Node*, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"internalRemoveChild", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(AttrImpl, internalRemoveChild, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, isEqualNode, bool, $Node*)},
	{"isId", "()Z", nullptr, $PUBLIC, $virtualMethod(AttrImpl, isId, bool)},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, item, $Node*, int32_t)},
	{"lastChild", "()Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $FINAL, $method(AttrImpl, lastChild, $ChildNode*)},
	{"lastChild", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, $FINAL, $method(AttrImpl, lastChild, void, $ChildNode*)},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"makeChildNode", "()V", nullptr, $PROTECTED, $virtualMethod(AttrImpl, makeChildNode, void)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, normalize, void)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(AttrImpl, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"rename", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(AttrImpl, rename, void, $String*)},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setIdAttribute", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setIdAttribute, void, bool)},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setNodeValue, void, $String*), "org.w3c.dom.DOMException"},
	{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $virtualMethod(AttrImpl, setOwnerDocument, void, $CoreDocumentImpl*)},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setReadOnly, void, bool, bool)},
	{"setSpecified", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setSpecified, void, bool)},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setType", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setType, void, Object$*)},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttrImpl, setValue, void, $String*)},
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(AttrImpl, synchronizeChildren, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrImpl, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(AttrImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _AttrImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.AttrImpl",
	"com.sun.org.apache.xerces.internal.dom.NodeImpl",
	"org.w3c.dom.Attr,org.w3c.dom.TypeInfo",
	_AttrImpl_FieldInfo_,
	_AttrImpl_MethodInfo_
};

$Object* allocate$AttrImpl($Class* clazz) {
	return $of($alloc(AttrImpl));
}

$Node* AttrImpl::appendChild($Node* newChild) {
	 return this->$NodeImpl::appendChild(newChild);
}

$Document* AttrImpl::getOwnerDocument() {
	 return this->$NodeImpl::getOwnerDocument();
}

$Node* AttrImpl::getParentNode() {
	 return this->$NodeImpl::getParentNode();
}

$Node* AttrImpl::getNextSibling() {
	 return this->$NodeImpl::getNextSibling();
}

$Node* AttrImpl::getPreviousSibling() {
	 return this->$NodeImpl::getPreviousSibling();
}

$NamedNodeMap* AttrImpl::getAttributes() {
	 return this->$NodeImpl::getAttributes();
}

bool AttrImpl::hasAttributes() {
	 return this->$NodeImpl::hasAttributes();
}

bool AttrImpl::isSupported($String* feature, $String* version) {
	 return this->$NodeImpl::isSupported(feature, version);
}

$String* AttrImpl::getNamespaceURI() {
	 return this->$NodeImpl::getNamespaceURI();
}

$String* AttrImpl::getPrefix() {
	 return this->$NodeImpl::getPrefix();
}

void AttrImpl::setPrefix($String* prefix) {
	this->$NodeImpl::setPrefix(prefix);
}

$String* AttrImpl::getLocalName() {
	 return this->$NodeImpl::getLocalName();
}

$String* AttrImpl::getBaseURI() {
	 return this->$NodeImpl::getBaseURI();
}

int16_t AttrImpl::compareDocumentPosition($Node* other) {
	 return this->$NodeImpl::compareDocumentPosition(other);
}

$String* AttrImpl::getTextContent() {
	 return this->$NodeImpl::getTextContent();
}

void AttrImpl::setTextContent($String* textContent) {
	this->$NodeImpl::setTextContent(textContent);
}

bool AttrImpl::isSameNode($Node* other) {
	 return this->$NodeImpl::isSameNode(other);
}

bool AttrImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$NodeImpl::isDefaultNamespace(namespaceURI);
}

$String* AttrImpl::lookupPrefix($String* namespaceURI) {
	 return this->$NodeImpl::lookupPrefix(namespaceURI);
}

$String* AttrImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$NodeImpl::lookupNamespaceURI(specifiedPrefix);
}

$Object* AttrImpl::getFeature($String* feature, $String* version) {
	 return this->$NodeImpl::getFeature(feature, version);
}

$Object* AttrImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$NodeImpl::setUserData(key, data, handler);
}

$Object* AttrImpl::getUserData($String* key) {
	 return this->$NodeImpl::getUserData(key);
}

int32_t AttrImpl::hashCode() {
	 return this->$NodeImpl::hashCode();
}

bool AttrImpl::equals(Object$* arg0) {
	 return this->$NodeImpl::equals(arg0);
}

$Object* AttrImpl::clone() {
	 return this->$NodeImpl::clone();
}

void AttrImpl::finalize() {
	this->$NodeImpl::finalize();
}

$String* AttrImpl::DTD_URI = nullptr;

void AttrImpl::init$($CoreDocumentImpl* ownerDocument, $String* name) {
	$NodeImpl::init$(ownerDocument);
	$set(this, value, nullptr);
	$set(this, name, name);
	isSpecified(true);
	hasStringValue(true);
}

void AttrImpl::init$() {
	$NodeImpl::init$();
	$set(this, value, nullptr);
}

void AttrImpl::rename($String* name) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, name, name);
}

void AttrImpl::makeChildNode() {
	$useLocalCurrentObjectStackCache();
	if (hasStringValue()) {
		if (this->value != nullptr) {
			$var($TextImpl, text, $cast($TextImpl, $nc($(ownerDocument()))->createTextNode($cast($String, this->value))));
			$set(this, value, text);
			$nc(text)->isFirstChild(true);
			$set(text, previousSibling$, text);
			$set(text, ownerNode, this);
			text->isOwned(true);
		}
		hasStringValue(false);
	}
}

void AttrImpl::setOwnerDocument($CoreDocumentImpl* doc) {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$NodeImpl::setOwnerDocument(doc);
	if (!hasStringValue()) {
		{
			$var($ChildNode, child, $cast($ChildNode, this->value));
			for (; child != nullptr; $assign(child, $nc(child)->nextSibling)) {
				child->setOwnerDocument(doc);
			}
		}
	}
}

void AttrImpl::setIdAttribute(bool id) {
	if (needsSyncData()) {
		synchronizeData();
	}
	isIdAttribute(id);
}

bool AttrImpl::isId() {
	return isIdAttribute();
}

$Node* AttrImpl::cloneNode(bool deep) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$var(AttrImpl, clone, $cast(AttrImpl, $NodeImpl::cloneNode(deep)));
	if (!$nc(clone)->hasStringValue()) {
		$set(clone, value, nullptr);
		{
			$var($Node, child, $cast($Node, this->value));
			for (; child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
				clone->appendChild($(child->cloneNode(true)));
			}
		}
	}
	$nc(clone)->isSpecified(true);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(clone));
}

int16_t AttrImpl::getNodeType() {
	return $Node::ATTRIBUTE_NODE;
}

$String* AttrImpl::getNodeName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

void AttrImpl::setNodeValue($String* value) {
	setValue(value);
}

$String* AttrImpl::getTypeName() {
	return $cast($String, this->type);
}

$String* AttrImpl::getTypeNamespace() {
	if (this->type != nullptr) {
		return AttrImpl::DTD_URI;
	}
	return nullptr;
}

$TypeInfo* AttrImpl::getSchemaTypeInfo() {
	return this;
}

$String* AttrImpl::getNodeValue() {
	return getValue();
}

$String* AttrImpl::getName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->name;
}

void AttrImpl::setValue($String* newvalue) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	$var($Element, ownerElement, getOwnerElement());
	$var($String, oldvalue, ""_s);
	$var($TextImpl, textNode, nullptr);
	if (needsSyncData()) {
		synchronizeData();
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	if (this->value != nullptr) {
		if ($nc(ownerDocument)->getMutationEvents()) {
			if (hasStringValue()) {
				$assign(oldvalue, $cast($String, this->value));
				$assign(textNode, $cast($TextImpl, ownerDocument->createTextNode($cast($String, this->value))));
				$set(this, value, textNode);
				$nc(textNode)->isFirstChild(true);
				$set(textNode, previousSibling$, textNode);
				$set(textNode, ownerNode, this);
				textNode->isOwned(true);
				hasStringValue(false);
				internalRemoveChild(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(textNode)))), true);
			} else {
				$assign(oldvalue, getValue());
				while (this->value != nullptr) {
					internalRemoveChild($cast($Node, this->value), true);
				}
			}
		} else {
			if (hasStringValue()) {
				$assign(oldvalue, $cast($String, this->value));
			} else {
				$assign(oldvalue, getValue());
				$var($ChildNode, firstChild, $cast($ChildNode, this->value));
				$set($nc(firstChild), previousSibling$, nullptr);
				firstChild->isFirstChild(false);
				$set(firstChild, ownerNode, ownerDocument);
			}
			$set(this, value, nullptr);
			needsSyncChildren(false);
		}
		if (isIdAttribute() && ownerElement != nullptr) {
			$nc(ownerDocument)->removeIdentifier(oldvalue);
		}
	}
	isSpecified(true);
	if ($nc(ownerDocument)->getMutationEvents()) {
		if (textNode == nullptr) {
			$assign(textNode, $cast($TextImpl, ownerDocument->createTextNode(newvalue)));
		} else {
			$set($nc(textNode), data, newvalue);
		}
		internalInsertBefore(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(textNode)))), nullptr, true);
		hasStringValue(false);
		ownerDocument->modifiedAttrValue(this, oldvalue);
	} else {
		$set(this, value, newvalue);
		hasStringValue(true);
		changed();
	}
	if (isIdAttribute() && ownerElement != nullptr) {
		$nc(ownerDocument)->putIdentifier(newvalue, ownerElement);
	}
}

$String* AttrImpl::getValue() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	if (this->value == nullptr) {
		return ""_s;
	}
	if (hasStringValue()) {
		return $cast($String, this->value);
	}
	$var($ChildNode, firstChild, $cast($ChildNode, this->value));
	$var($String, data, nullptr);
	if ($nc(firstChild)->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
		$assign(data, $nc(($cast($EntityReferenceImpl, firstChild)))->getEntityRefValue());
	} else {
		$assign(data, firstChild->getNodeValue());
	}
	$var($ChildNode, node, $nc(firstChild)->nextSibling);
	if (node == nullptr || data == nullptr) {
		return (data == nullptr) ? ""_s : data;
	}
	$var($StringBuffer, value, $new($StringBuffer, data));
	while (node != nullptr) {
		if (node->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
			$assign(data, $nc(($cast($EntityReferenceImpl, node)))->getEntityRefValue());
			if (data == nullptr) {
				return ""_s;
			}
			value->append(data);
		} else {
			value->append($(node->getNodeValue()));
		}
		$assign(node, node->nextSibling);
	}
	return value->toString();
}

bool AttrImpl::getSpecified() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return isSpecified();
}

$Element* AttrImpl::getElement() {
	return ($cast($Element, (isOwned() ? this->ownerNode : ($NodeImpl*)nullptr)));
}

$Element* AttrImpl::getOwnerElement() {
	return ($cast($Element, (isOwned() ? this->ownerNode : ($NodeImpl*)nullptr)));
}

void AttrImpl::normalize() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isNormalized();
	if (var$0 || hasStringValue()) {
		return;
	}
	$var($Node, kid, nullptr);
	$var($Node, next, nullptr);
	$var($ChildNode, firstChild, $cast($ChildNode, this->value));
	for ($assign(kid, firstChild); kid != nullptr; $assign(kid, next)) {
		$assign(next, $nc(kid)->getNextSibling());
		if (kid->getNodeType() == $Node::TEXT_NODE) {
			if (next != nullptr && next->getNodeType() == $Node::TEXT_NODE) {
				$nc(($cast($Text, kid)))->appendData($(next->getNodeValue()));
				removeChild(next);
				$assign(next, kid);
			} else {
				bool var$2 = kid->getNodeValue() == nullptr;
				if (var$2 || $nc($(kid->getNodeValue()))->length() == 0) {
					removeChild(kid);
				}
			}
		}
	}
	isNormalized(true);
}

void AttrImpl::setSpecified(bool arg) {
	if (needsSyncData()) {
		synchronizeData();
	}
	isSpecified(arg);
}

void AttrImpl::setType(Object$* type) {
	$set(this, type, type);
}

$String* AttrImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(getName()), "=\""_s}));
	$var($String, var$0, $$concat(var$1, $(getValue())));
	return $concat(var$0, "\""_s);
}

bool AttrImpl::hasChildNodes() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->value != nullptr;
}

$NodeList* AttrImpl::getChildNodes() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this;
}

$Node* AttrImpl::getFirstChild() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	makeChildNode();
	return $cast($Node, this->value);
}

$Node* AttrImpl::getLastChild() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return lastChild();
}

$ChildNode* AttrImpl::lastChild() {
	makeChildNode();
	return this->value != nullptr ? $nc(($cast($ChildNode, this->value)))->previousSibling$ : ($ChildNode*)nullptr;
}

void AttrImpl::lastChild($ChildNode* node) {
	if (this->value != nullptr) {
		$set($nc($cast($ChildNode, this->value)), previousSibling$, node);
	}
}

$Node* AttrImpl::insertBefore($Node* newChild, $Node* refChild) {
	return internalInsertBefore(newChild, refChild, false);
}

$Node* AttrImpl::internalInsertBefore($Node* newChild, $Node* refChild$renamed, bool replace) {
	$useLocalCurrentObjectStackCache();
	$var($Node, refChild, refChild$renamed);
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	bool errorChecking = $nc(ownerDocument)->errorChecking;
	if ($nc(newChild)->getNodeType() == $Node::DOCUMENT_FRAGMENT_NODE) {
		if (errorChecking) {
			{
				$var($Node, kid, newChild->getFirstChild());
				for (; kid != nullptr; $assign(kid, $nc(kid)->getNextSibling())) {
					if (!ownerDocument->isKidOK(static_cast<$Node*>(static_cast<$NodeImpl*>(this)), kid)) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
						$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
					}
				}
			}
		}
		while (newChild->hasChildNodes()) {
			insertBefore($(newChild->getFirstChild()), refChild);
		}
		return newChild;
	}
	if (newChild == refChild) {
		$assign(refChild, $nc(refChild)->getNextSibling());
		removeChild(newChild);
		insertBefore(newChild, refChild);
		return newChild;
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	if (errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(newChild)->getOwnerDocument(), ownerDocument)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
		if (!ownerDocument->isKidOK(static_cast<$Node*>(static_cast<$NodeImpl*>(this)), newChild)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
		}
		if (refChild != nullptr && !$equals(refChild->getParentNode(), this)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
		bool treeSafe = true;
		{
			$var($NodeImpl, a, this);
			for (; treeSafe && a != nullptr; $assign(a, a->parentNode())) {
				treeSafe = !$equals(newChild, a);
			}
		}
		if (!treeSafe) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
		}
	}
	makeChildNode();
	ownerDocument->insertingNode(this, replace);
	$var($ChildNode, newInternal, $cast($ChildNode, newChild));
	$var($Node, oldparent, $nc(newInternal)->parentNode());
	if (oldparent != nullptr) {
		oldparent->removeChild(newInternal);
	}
	$var($ChildNode, refInternal, $cast($ChildNode, refChild));
	$set(newInternal, ownerNode, this);
	newInternal->isOwned(true);
	$var($ChildNode, firstChild, $cast($ChildNode, this->value));
	if (firstChild == nullptr) {
		$set(this, value, newInternal);
		newInternal->isFirstChild(true);
		$set(newInternal, previousSibling$, newInternal);
	} else if (refInternal == nullptr) {
		$var($ChildNode, lastChild, $nc(firstChild)->previousSibling$);
		$set($nc(lastChild), nextSibling, newInternal);
		$set(newInternal, previousSibling$, lastChild);
		$set(firstChild, previousSibling$, newInternal);
	} else if ($equals(refChild, firstChild)) {
		$nc(firstChild)->isFirstChild(false);
		$set(newInternal, nextSibling, firstChild);
		$set(newInternal, previousSibling$, firstChild->previousSibling$);
		$set(firstChild, previousSibling$, newInternal);
		$set(this, value, newInternal);
		newInternal->isFirstChild(true);
	} else {
		$var($ChildNode, prev, $nc(refInternal)->previousSibling$);
		$set(newInternal, nextSibling, refInternal);
		$set($nc(prev), nextSibling, newInternal);
		$set(refInternal, previousSibling$, newInternal);
		$set(newInternal, previousSibling$, prev);
	}
	changed();
	ownerDocument->insertedNode(this, newInternal, replace);
	checkNormalizationAfterInsert(newInternal);
	return newChild;
}

$Node* AttrImpl::removeChild($Node* oldChild) {
	if (hasStringValue()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	return internalRemoveChild(oldChild, false);
}

$Node* AttrImpl::internalRemoveChild($Node* oldChild, bool replace) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (oldChild != nullptr && !$equals(oldChild->getParentNode(), this)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
		}
	}
	$var($ChildNode, oldInternal, $cast($ChildNode, oldChild));
	$nc(ownerDocument)->removingNode(this, oldInternal, replace);
	if ($equals(oldInternal, this->value)) {
		$nc(oldInternal)->isFirstChild(false);
		$set(this, value, oldInternal->nextSibling);
		$var($ChildNode, firstChild, $cast($ChildNode, this->value));
		if (firstChild != nullptr) {
			firstChild->isFirstChild(true);
			$set(firstChild, previousSibling$, oldInternal->previousSibling$);
		}
	} else {
		$var($ChildNode, prev, $nc(oldInternal)->previousSibling$);
		$var($ChildNode, next, oldInternal->nextSibling);
		$set($nc(prev), nextSibling, next);
		if (next == nullptr) {
			$var($ChildNode, firstChild, $cast($ChildNode, this->value));
			$set($nc(firstChild), previousSibling$, prev);
		} else {
			$set($nc(next), previousSibling$, prev);
		}
	}
	$var($ChildNode, oldPreviousSibling, $nc(oldInternal)->previousSibling());
	$set(oldInternal, ownerNode, ownerDocument);
	oldInternal->isOwned(false);
	$set(oldInternal, nextSibling, nullptr);
	$set(oldInternal, previousSibling$, nullptr);
	changed();
	ownerDocument->removedNode(this, replace);
	checkNormalizationAfterRemove(oldPreviousSibling);
	return oldInternal;
}

$Node* AttrImpl::replaceChild($Node* newChild, $Node* oldChild) {
	makeChildNode();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	$nc(ownerDocument)->replacingNode(this);
	internalInsertBefore(newChild, oldChild, true);
	if (newChild != oldChild) {
		internalRemoveChild(oldChild, true);
	}
	ownerDocument->replacedNode(this);
	return oldChild;
}

int32_t AttrImpl::getLength() {
	if (hasStringValue()) {
		return 1;
	}
	$var($ChildNode, node, $cast($ChildNode, this->value));
	int32_t length = 0;
	for (; node != nullptr; $assign(node, $nc(node)->nextSibling)) {
		++length;
	}
	return length;
}

$Node* AttrImpl::item(int32_t index) {
	if (hasStringValue()) {
		if (index != 0 || this->value == nullptr) {
			return nullptr;
		} else {
			makeChildNode();
			return $cast($Node, this->value);
		}
	}
	if (index < 0) {
		return nullptr;
	}
	$var($ChildNode, node, $cast($ChildNode, this->value));
	for (int32_t i = 0; i < index && node != nullptr; ++i) {
		$assign(node, node->nextSibling);
	}
	return node;
}

bool AttrImpl::isEqualNode($Node* arg) {
	return $NodeImpl::isEqualNode(arg);
}

bool AttrImpl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	return false;
}

void AttrImpl::setReadOnly(bool readOnly, bool deep) {
	$NodeImpl::setReadOnly(readOnly, deep);
	if (deep) {
		if (needsSyncChildren()) {
			synchronizeChildren();
		}
		if (hasStringValue()) {
			return;
		}
		{
			$var($ChildNode, mykid, $cast($ChildNode, this->value));
			for (; mykid != nullptr; $assign(mykid, $nc(mykid)->nextSibling)) {
				if (mykid->getNodeType() != $Node::ENTITY_REFERENCE_NODE) {
					mykid->setReadOnly(readOnly, true);
				}
			}
		}
	}
}

void AttrImpl::synchronizeChildren() {
	needsSyncChildren(false);
}

void AttrImpl::checkNormalizationAfterInsert($ChildNode* insertedChild) {
	$useLocalCurrentObjectStackCache();
	if ($nc(insertedChild)->getNodeType() == $Node::TEXT_NODE) {
		$var($ChildNode, prev, insertedChild->previousSibling());
		$var($ChildNode, next, insertedChild->nextSibling);
		bool var$0 = (prev != nullptr && prev->getNodeType() == $Node::TEXT_NODE);
		if (var$0 || (next != nullptr && next->getNodeType() == $Node::TEXT_NODE)) {
			isNormalized(false);
		}
	} else if (!insertedChild->isNormalized()) {
		isNormalized(false);
	}
}

void AttrImpl::checkNormalizationAfterRemove($ChildNode* previousSibling) {
	if (previousSibling != nullptr && previousSibling->getNodeType() == $Node::TEXT_NODE) {
		$var($ChildNode, next, previousSibling->nextSibling);
		if (next != nullptr && next->getNodeType() == $Node::TEXT_NODE) {
			isNormalized(false);
		}
	}
}

void AttrImpl::writeObject($ObjectOutputStream* out) {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$nc(out)->defaultWriteObject();
}

void AttrImpl::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	needsSyncChildren(false);
}

AttrImpl::AttrImpl() {
}

void clinit$AttrImpl($Class* class$) {
	$assignStatic(AttrImpl::DTD_URI, "http://www.w3.org/TR/REC-xml"_s);
}

$Class* AttrImpl::load$($String* name, bool initialize) {
	$loadClass(AttrImpl, name, initialize, &_AttrImpl_ClassInfo_, clinit$AttrImpl, allocate$AttrImpl);
	return class$;
}

$Class* AttrImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com