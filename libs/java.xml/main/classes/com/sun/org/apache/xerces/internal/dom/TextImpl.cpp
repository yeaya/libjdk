#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef DOM_DOMAIN
#undef ENTITY_REFERENCE_NODE
#undef INDEX_SIZE_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef TEXT_NODE

using $CharacterDataImpl = ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterData = ::org::w3c::dom::CharacterData;
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
						namespace dom {

$FieldInfo _TextImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TextImpl, serialVersionUID)},
	{}
};

$MethodInfo _TextImpl_MethodInfo_[] = {
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
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(TextImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TextImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"canModifyNext", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(TextImpl, canModifyNext, bool, $Node*)},
	{"canModifyPrev", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(TextImpl, canModifyPrev, bool, $Node*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getNodeName, $String*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(TextImpl, getNodeType, int16_t)},
	{"getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getWholeText, $String*)},
	{"getWholeTextBackward", "(Lorg/w3c/dom/Node;Ljava/lang/StringBuilder;Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(TextImpl, getWholeTextBackward, bool, $Node*, $StringBuilder*, $Node*)},
	{"getWholeTextForward", "(Lorg/w3c/dom/Node;Ljava/lang/StringBuilder;Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(TextImpl, getWholeTextForward, bool, $Node*, $StringBuilder*, $Node*)},
	{"hasTextOnlyChildren", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(TextImpl, hasTextOnlyChildren, bool, $Node*)},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"insertTextContent", "(Ljava/lang/StringBuilder;)V", nullptr, $PROTECTED, $virtualMethod(TextImpl, insertTextContent, void, $StringBuilder*), "org.w3c.dom.DOMException"},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isElementContentWhitespace", "()Z", nullptr, $PUBLIC, $virtualMethod(TextImpl, isElementContentWhitespace, bool)},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isIgnorableWhitespace", "()Z", nullptr, $PUBLIC, $virtualMethod(TextImpl, isIgnorableWhitespace, bool)},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"removeData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextImpl, removeData, $String*)},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC},
	{"replaceData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TextImpl, replaceData, void, $String*)},
	{"replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(TextImpl, replaceWholeText, $Text*, $String*), "org.w3c.dom.DOMException"},
	{"*setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIgnorableWhitespace", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TextImpl, setIgnorableWhitespace, void, bool)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TextImpl, setValues, void, $CoreDocumentImpl*, $String*)},
	{"splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(TextImpl, splitText, $Text*, int32_t), "org.w3c.dom.DOMException"},
	{"*substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.TextImpl",
	"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl",
	"org.w3c.dom.Text",
	_TextImpl_FieldInfo_,
	_TextImpl_MethodInfo_
};

$Object* allocate$TextImpl($Class* clazz) {
	return $of($alloc(TextImpl));
}

$NodeList* TextImpl::getChildNodes() {
	 return this->$CharacterDataImpl::getChildNodes();
}

$String* TextImpl::getNodeValue() {
	 return this->$CharacterDataImpl::getNodeValue();
}

void TextImpl::setNodeValue($String* value) {
	this->$CharacterDataImpl::setNodeValue(value);
}

$String* TextImpl::getData() {
	 return this->$CharacterDataImpl::getData();
}

int32_t TextImpl::getLength() {
	 return this->$CharacterDataImpl::getLength();
}

void TextImpl::appendData($String* data) {
	this->$CharacterDataImpl::appendData(data);
}

void TextImpl::deleteData(int32_t offset, int32_t count) {
	this->$CharacterDataImpl::deleteData(offset, count);
}

void TextImpl::insertData(int32_t offset, $String* data) {
	this->$CharacterDataImpl::insertData(offset, data);
}

void TextImpl::replaceData(int32_t offset, int32_t count, $String* data) {
	this->$CharacterDataImpl::replaceData(offset, count, data);
}

void TextImpl::setData($String* value) {
	this->$CharacterDataImpl::setData(value);
}

$String* TextImpl::substringData(int32_t offset, int32_t count) {
	 return this->$CharacterDataImpl::substringData(offset, count);
}

$Node* TextImpl::cloneNode(bool deep) {
	 return this->$CharacterDataImpl::cloneNode(deep);
}

$Node* TextImpl::getParentNode() {
	 return this->$CharacterDataImpl::getParentNode();
}

$Node* TextImpl::getNextSibling() {
	 return this->$CharacterDataImpl::getNextSibling();
}

$Node* TextImpl::getPreviousSibling() {
	 return this->$CharacterDataImpl::getPreviousSibling();
}

$Node* TextImpl::appendChild($Node* newChild) {
	 return this->$CharacterDataImpl::appendChild(newChild);
}

$Document* TextImpl::getOwnerDocument() {
	 return this->$CharacterDataImpl::getOwnerDocument();
}

$NamedNodeMap* TextImpl::getAttributes() {
	 return this->$CharacterDataImpl::getAttributes();
}

bool TextImpl::hasAttributes() {
	 return this->$CharacterDataImpl::hasAttributes();
}

bool TextImpl::hasChildNodes() {
	 return this->$CharacterDataImpl::hasChildNodes();
}

$Node* TextImpl::getFirstChild() {
	 return this->$CharacterDataImpl::getFirstChild();
}

$Node* TextImpl::getLastChild() {
	 return this->$CharacterDataImpl::getLastChild();
}

$Node* TextImpl::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$CharacterDataImpl::insertBefore(newChild, refChild);
}

$Node* TextImpl::removeChild($Node* oldChild) {
	 return this->$CharacterDataImpl::removeChild(oldChild);
}

$Node* TextImpl::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$CharacterDataImpl::replaceChild(newChild, oldChild);
}

void TextImpl::normalize() {
	this->$CharacterDataImpl::normalize();
}

bool TextImpl::isSupported($String* feature, $String* version) {
	 return this->$CharacterDataImpl::isSupported(feature, version);
}

$String* TextImpl::getNamespaceURI() {
	 return this->$CharacterDataImpl::getNamespaceURI();
}

$String* TextImpl::getPrefix() {
	 return this->$CharacterDataImpl::getPrefix();
}

void TextImpl::setPrefix($String* prefix) {
	this->$CharacterDataImpl::setPrefix(prefix);
}

$String* TextImpl::getLocalName() {
	 return this->$CharacterDataImpl::getLocalName();
}

$String* TextImpl::getBaseURI() {
	 return this->$CharacterDataImpl::getBaseURI();
}

int16_t TextImpl::compareDocumentPosition($Node* other) {
	 return this->$CharacterDataImpl::compareDocumentPosition(other);
}

$String* TextImpl::getTextContent() {
	 return this->$CharacterDataImpl::getTextContent();
}

void TextImpl::setTextContent($String* textContent) {
	this->$CharacterDataImpl::setTextContent(textContent);
}

bool TextImpl::isSameNode($Node* other) {
	 return this->$CharacterDataImpl::isSameNode(other);
}

bool TextImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$CharacterDataImpl::isDefaultNamespace(namespaceURI);
}

$String* TextImpl::lookupPrefix($String* namespaceURI) {
	 return this->$CharacterDataImpl::lookupPrefix(namespaceURI);
}

$String* TextImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$CharacterDataImpl::lookupNamespaceURI(specifiedPrefix);
}

bool TextImpl::isEqualNode($Node* arg) {
	 return this->$CharacterDataImpl::isEqualNode(arg);
}

$Object* TextImpl::getFeature($String* feature, $String* version) {
	 return this->$CharacterDataImpl::getFeature(feature, version);
}

$Object* TextImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$CharacterDataImpl::setUserData(key, data, handler);
}

$Object* TextImpl::getUserData($String* key) {
	 return this->$CharacterDataImpl::getUserData(key);
}

$String* TextImpl::toString() {
	 return this->$CharacterDataImpl::toString();
}

int32_t TextImpl::hashCode() {
	 return this->$CharacterDataImpl::hashCode();
}

bool TextImpl::equals(Object$* arg0) {
	 return this->$CharacterDataImpl::equals(arg0);
}

$Object* TextImpl::clone() {
	 return this->$CharacterDataImpl::clone();
}

void TextImpl::finalize() {
	this->$CharacterDataImpl::finalize();
}

void TextImpl::init$() {
	$CharacterDataImpl::init$();
}

void TextImpl::init$($CoreDocumentImpl* ownerDoc, $String* data) {
	$CharacterDataImpl::init$(ownerDoc, data);
}

void TextImpl::setValues($CoreDocumentImpl* ownerDoc, $String* data) {
	this->flags = (int16_t)0;
	$set(this, nextSibling, nullptr);
	$set(this, previousSibling$, nullptr);
	setOwnerDocument(ownerDoc);
	$set(this, data, data);
}

int16_t TextImpl::getNodeType() {
	return $Node::TEXT_NODE;
}

$String* TextImpl::getNodeName() {
	return "#text"_s;
}

void TextImpl::setIgnorableWhitespace(bool ignore) {
	if (needsSyncData()) {
		synchronizeData();
	}
	isIgnorableWhitespace(ignore);
}

bool TextImpl::isElementContentWhitespace() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return internalIsIgnorableWhitespace();
}

$String* TextImpl::getWholeText() {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	$var($StringBuilder, buffer, $new($StringBuilder));
	if (this->data != nullptr && $nc(this->data)->length() != 0) {
		buffer->append(this->data);
	}
	$var($Node, var$0, this->getPreviousSibling());
	$var($StringBuilder, var$1, buffer);
	getWholeTextBackward(var$0, var$1, $(this->getParentNode()));
	$var($String, temp, buffer->toString());
	buffer->setLength(0);
	$var($Node, var$2, this->getNextSibling());
	$var($StringBuilder, var$3, buffer);
	getWholeTextForward(var$2, var$3, $(this->getParentNode()));
	return $str({temp, $(buffer->toString())});
}

void TextImpl::insertTextContent($StringBuilder* buf) {
	$var($String, content, getNodeValue());
	if (content != nullptr) {
		$nc(buf)->insert(0, content);
	}
}

bool TextImpl::getWholeTextForward($Node* node$renamed, $StringBuilder* buffer, $Node* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	bool inEntRef = false;
	if (parent != nullptr) {
		inEntRef = parent->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
	}
	while (node != nullptr) {
		int16_t type = node->getNodeType();
		if (type == $Node::ENTITY_REFERENCE_NODE) {
			if (getWholeTextForward($(node->getFirstChild()), buffer, node)) {
				return true;
			}
		} else if (type == $Node::TEXT_NODE || type == $Node::CDATA_SECTION_NODE) {
			$nc(($cast($NodeImpl, node)))->getTextContent(buffer);
		} else {
			return true;
		}
		$assign(node, node->getNextSibling());
	}
	if (inEntRef) {
		$var($Node, var$0, $nc(parent)->getNextSibling());
		$var($StringBuilder, var$1, buffer);
		getWholeTextForward(var$0, var$1, $(parent->getParentNode()));
		return true;
	}
	return false;
}

bool TextImpl::getWholeTextBackward($Node* node$renamed, $StringBuilder* buffer, $Node* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	bool inEntRef = false;
	if (parent != nullptr) {
		inEntRef = parent->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
	}
	while (node != nullptr) {
		int16_t type = node->getNodeType();
		if (type == $Node::ENTITY_REFERENCE_NODE) {
			if (getWholeTextBackward($(node->getLastChild()), buffer, node)) {
				return true;
			}
		} else if (type == $Node::TEXT_NODE || type == $Node::CDATA_SECTION_NODE) {
			$nc(($cast(TextImpl, node)))->insertTextContent(buffer);
		} else {
			return true;
		}
		$assign(node, node->getPreviousSibling());
	}
	if (inEntRef) {
		$var($Node, var$0, $nc(parent)->getPreviousSibling());
		$var($StringBuilder, var$1, buffer);
		getWholeTextBackward(var$0, var$1, $(parent->getParentNode()));
		return true;
	}
	return false;
}

$Text* TextImpl::replaceWholeText($String* content) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	$var($Node, parent, this->getParentNode());
	if (content == nullptr || $nc(content)->length() == 0) {
		if (parent != nullptr) {
			parent->removeChild(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(this)))));
		}
		return nullptr;
	}
	if ($nc($(ownerDocument()))->errorChecking) {
		if (!canModifyPrev(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(this)))))) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
		}
		if (!canModifyNext(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(this)))))) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
		}
	}
	$var($Text, currentNode, nullptr);
	if (isReadOnly()) {
		$var($Text, newNode, $nc($(this->ownerDocument()))->createTextNode(content));
		if (parent != nullptr) {
			parent->insertBefore(newNode, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(this)))));
			parent->removeChild(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$CharacterDataImpl*>(this)))));
			$assign(currentNode, newNode);
		} else {
			return newNode;
		}
	} else {
		this->setData(content);
		$assign(currentNode, this);
	}
	$var($Node, prev, $nc(currentNode)->getPreviousSibling());
	while (prev != nullptr) {
		bool var$1 = (prev->getNodeType() == $Node::TEXT_NODE);
		bool var$0 = var$1 || (prev->getNodeType() == $Node::CDATA_SECTION_NODE);
		if (!var$0) {
			bool var$2 = prev->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
			var$0 = (var$2 && hasTextOnlyChildren(prev));
		}
		if (var$0) {
			$nc(parent)->removeChild(prev);
			$assign(prev, currentNode);
		} else {
			break;
		}
		$assign(prev, prev->getPreviousSibling());
	}
	$var($Node, next, currentNode->getNextSibling());
	while (next != nullptr) {
		bool var$4 = (next->getNodeType() == $Node::TEXT_NODE);
		bool var$3 = var$4 || (next->getNodeType() == $Node::CDATA_SECTION_NODE);
		if (!var$3) {
			bool var$5 = next->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
			var$3 = (var$5 && hasTextOnlyChildren(next));
		}
		if (var$3) {
			$nc(parent)->removeChild(next);
			$assign(next, currentNode);
		} else {
			break;
		}
		$assign(next, next->getNextSibling());
	}
	return currentNode;
}

bool TextImpl::canModifyPrev($Node* node) {
	$useLocalCurrentObjectStackCache();
	bool textLastChild = false;
	$var($Node, prev, $nc(node)->getPreviousSibling());
	while (prev != nullptr) {
		int16_t type = prev->getNodeType();
		if (type == $Node::ENTITY_REFERENCE_NODE) {
			$var($Node, lastChild, prev->getLastChild());
			if (lastChild == nullptr) {
				return false;
			}
			while (lastChild != nullptr) {
				int16_t lType = lastChild->getNodeType();
				if (lType == $Node::TEXT_NODE || lType == $Node::CDATA_SECTION_NODE) {
					textLastChild = true;
				} else if (lType == $Node::ENTITY_REFERENCE_NODE) {
					if (!canModifyPrev(lastChild)) {
						return false;
					} else {
						textLastChild = true;
					}
				} else if (textLastChild) {
					return false;
				} else {
					return true;
				}
				$assign(lastChild, lastChild->getPreviousSibling());
			}
		} else if (type == $Node::TEXT_NODE || type == $Node::CDATA_SECTION_NODE) {
		} else {
			return true;
		}
		$assign(prev, prev->getPreviousSibling());
	}
	return true;
}

bool TextImpl::canModifyNext($Node* node) {
	$useLocalCurrentObjectStackCache();
	bool textFirstChild = false;
	$var($Node, next, $nc(node)->getNextSibling());
	while (next != nullptr) {
		int16_t type = next->getNodeType();
		if (type == $Node::ENTITY_REFERENCE_NODE) {
			$var($Node, firstChild, next->getFirstChild());
			if (firstChild == nullptr) {
				return false;
			}
			while (firstChild != nullptr) {
				int16_t lType = firstChild->getNodeType();
				if (lType == $Node::TEXT_NODE || lType == $Node::CDATA_SECTION_NODE) {
					textFirstChild = true;
				} else if (lType == $Node::ENTITY_REFERENCE_NODE) {
					if (!canModifyNext(firstChild)) {
						return false;
					} else {
						textFirstChild = true;
					}
				} else if (textFirstChild) {
					return false;
				} else {
					return true;
				}
				$assign(firstChild, firstChild->getNextSibling());
			}
		} else if (type == $Node::TEXT_NODE || type == $Node::CDATA_SECTION_NODE) {
		} else {
			return true;
		}
		$assign(next, next->getNextSibling());
	}
	return true;
}

bool TextImpl::hasTextOnlyChildren($Node* node) {
	$var($Node, child, node);
	if (child == nullptr) {
		return false;
	}
	$assign(child, $nc(child)->getFirstChild());
	while (child != nullptr) {
		int32_t type = child->getNodeType();
		if (type == $Node::ENTITY_REFERENCE_NODE) {
			return hasTextOnlyChildren(child);
		} else if (type != $Node::TEXT_NODE && type != $Node::CDATA_SECTION_NODE && type != $Node::ENTITY_REFERENCE_NODE) {
			return false;
		}
		$assign(child, child->getNextSibling());
	}
	return true;
}

bool TextImpl::isIgnorableWhitespace() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return internalIsIgnorableWhitespace();
}

$Text* TextImpl::splitText(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	if (offset < 0 || offset > $nc(this->data)->length()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr)));
	}
	$var($Text, newText, $nc($(getOwnerDocument()))->createTextNode($($nc(this->data)->substring(offset))));
	setNodeValue($($nc(this->data)->substring(0, offset)));
	$var($Node, parentNode, getParentNode());
	if (parentNode != nullptr) {
		parentNode->insertBefore(newText, this->nextSibling);
	}
	return newText;
}

void TextImpl::replaceData($String* value) {
	$set(this, data, value);
}

$String* TextImpl::removeData() {
	$var($String, olddata, this->data);
	$set(this, data, ""_s);
	return olddata;
}

TextImpl::TextImpl() {
}

$Class* TextImpl::load$($String* name, bool initialize) {
	$loadClass(TextImpl, name, initialize, &_TextImpl_ClassInfo_, allocate$TextImpl);
	return class$;
}

$Class* TextImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com