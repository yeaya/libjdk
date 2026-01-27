#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeListCache.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode$1.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOM_DOMAIN
#undef ENTITY_REFERENCE_NODE
#undef HIERARCHY_REQUEST_ERR
#undef NOT_FOUND_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE
#undef WRONG_DOCUMENT_ERR

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode$1 = ::com::sun::org::apache::xerces::internal::dom::ParentNode$1;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _ParentNode_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ParentNode, serialVersionUID)},
	{"ownerDocument", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $field(ParentNode, ownerDocument$)},
	{"firstChild", "Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $PROTECTED, $field(ParentNode, firstChild)},
	{"fNodeListCache", "Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;", nullptr, $PROTECTED | $TRANSIENT, $field(ParentNode, fNodeListCache)},
	{}
};

$MethodInfo _ParentNode_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $method(ParentNode, init$, void, $CoreDocumentImpl*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ParentNode, init$, void)},
	{"checkNormalizationAfterInsert", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, 0, $virtualMethod(ParentNode, checkNormalizationAfterInsert, void, $ChildNode*)},
	{"checkNormalizationAfterRemove", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, 0, $virtualMethod(ParentNode, checkNormalizationAfterRemove, void, $ChildNode*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, cloneNode, $Node*, bool)},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(ParentNode, getChildNodes, $NodeList*)},
	{"getChildNodesUnoptimized", "()Lorg/w3c/dom/NodeList;", nullptr, $PROTECTED | $FINAL, $method(ParentNode, getChildNodesUnoptimized, $NodeList*)},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, getFirstChild, $Node*)},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, getLastChild, $Node*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ParentNode, getLength, int32_t)},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(ParentNode, getOwnerDocument, $Document*)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParentNode, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getTextContent", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(ParentNode, getTextContent, void, $StringBuilder*), "org.w3c.dom.DOMException"},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(ParentNode, hasChildNodes, bool)},
	{"hasTextContent", "(Lorg/w3c/dom/Node;)Z", nullptr, $FINAL, $method(ParentNode, hasTextContent, bool, $Node*)},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"internalInsertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(ParentNode, internalInsertBefore, $Node*, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"internalRemoveChild", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(ParentNode, internalRemoveChild, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(ParentNode, isEqualNode, bool, $Node*)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, item, $Node*, int32_t)},
	{"lastChild", "()Lcom/sun/org/apache/xerces/internal/dom/ChildNode;", nullptr, $FINAL, $method(ParentNode, lastChild, $ChildNode*)},
	{"lastChild", "(Lcom/sun/org/apache/xerces/internal/dom/ChildNode;)V", nullptr, $FINAL, $method(ParentNode, lastChild, void, $ChildNode*)},
	{"nodeListGetLength", "()I", nullptr, $PRIVATE, $method(ParentNode, nodeListGetLength, int32_t)},
	{"nodeListItem", "(I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(ParentNode, nodeListItem, $Node*, int32_t)},
	{"normalize", "()V", nullptr, $PUBLIC, $virtualMethod(ParentNode, normalize, void)},
	{"ownerDocument", "()Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, 0, $virtualMethod(ParentNode, ownerDocument, $CoreDocumentImpl*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ParentNode, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED, $virtualMethod(ParentNode, setOwnerDocument, void, $CoreDocumentImpl*)},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(ParentNode, setReadOnly, void, bool, bool)},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParentNode, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"synchronizeChildren", "()V", nullptr, $PROTECTED, $virtualMethod(ParentNode, synchronizeChildren, void)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ParentNode, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ParentNode_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.ParentNode$UserDataRecord", "com.sun.org.apache.xerces.internal.dom.ParentNode", "UserDataRecord", 0},
	{"com.sun.org.apache.xerces.internal.dom.ParentNode$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ParentNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"com.sun.org.apache.xerces.internal.dom.ChildNode",
	nullptr,
	_ParentNode_FieldInfo_,
	_ParentNode_MethodInfo_,
	nullptr,
	nullptr,
	_ParentNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.ParentNode$UserDataRecord,com.sun.org.apache.xerces.internal.dom.ParentNode$1"
};

$Object* allocate$ParentNode($Class* clazz) {
	return $of($alloc(ParentNode));
}

void ParentNode::init$($CoreDocumentImpl* ownerDocument) {
	$ChildNode::init$(ownerDocument);
	$set(this, firstChild, nullptr);
	$set(this, fNodeListCache, nullptr);
	$set(this, ownerDocument$, ownerDocument);
}

void ParentNode::init$() {
	$ChildNode::init$();
	$set(this, firstChild, nullptr);
	$set(this, fNodeListCache, nullptr);
}

$Node* ParentNode::cloneNode(bool deep) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$var(ParentNode, newnode, $cast(ParentNode, $ChildNode::cloneNode(deep)));
	$set($nc(newnode), ownerDocument$, this->ownerDocument$);
	$set(newnode, firstChild, nullptr);
	$set(newnode, fNodeListCache, nullptr);
	if (deep) {
		{
			$var($ChildNode, child, this->firstChild);
			for (; child != nullptr; $assign(child, $nc(child)->nextSibling)) {
				newnode->appendChild($(child->cloneNode(true)));
			}
		}
	}
	return newnode;
}

$Document* ParentNode::getOwnerDocument() {
	return this->ownerDocument$;
}

$CoreDocumentImpl* ParentNode::ownerDocument() {
	return this->ownerDocument$;
}

void ParentNode::setOwnerDocument($CoreDocumentImpl* doc) {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$ChildNode::setOwnerDocument(doc);
	$set(this, ownerDocument$, doc);
	{
		$var($ChildNode, child, this->firstChild);
		for (; child != nullptr; $assign(child, $nc(child)->nextSibling)) {
			child->setOwnerDocument(doc);
		}
	}
}

bool ParentNode::hasChildNodes() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->firstChild != nullptr;
}

$NodeList* ParentNode::getChildNodes() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this;
}

$Node* ParentNode::getFirstChild() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->firstChild;
}

$Node* ParentNode::getLastChild() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return lastChild();
}

$ChildNode* ParentNode::lastChild() {
	return this->firstChild != nullptr ? $nc(this->firstChild)->previousSibling$ : ($ChildNode*)nullptr;
}

void ParentNode::lastChild($ChildNode* node) {
	if (this->firstChild != nullptr) {
		$set($nc(this->firstChild), previousSibling$, node);
	}
}

$Node* ParentNode::insertBefore($Node* newChild, $Node* refChild) {
	return internalInsertBefore(newChild, refChild, false);
}

$Node* ParentNode::internalInsertBefore($Node* newChild, $Node* refChild$renamed, bool replace) {
	$useLocalCurrentObjectStackCache();
	$var($Node, refChild, refChild$renamed);
	bool errorChecking = $nc(this->ownerDocument$)->errorChecking;
	if ($nc(newChild)->getNodeType() == $Node::DOCUMENT_FRAGMENT_NODE) {
		if (errorChecking) {
			{
				$var($Node, kid, newChild->getFirstChild());
				for (; kid != nullptr; $assign(kid, $nc(kid)->getNextSibling())) {
					if (!$nc(this->ownerDocument$)->isKidOK(this, kid)) {
						$init($DOMMessageFormatter);
						$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
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
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
		}
		if (!$equals($nc(newChild)->getOwnerDocument(), this->ownerDocument$) && !$equals(newChild, this->ownerDocument$)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
		if (!$nc(this->ownerDocument$)->isKidOK(this, newChild)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
		}
		if (refChild != nullptr && !$equals(refChild->getParentNode(), this)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr)));
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
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
		}
	}
	$nc(this->ownerDocument$)->insertingNode(this, replace);
	$var($ChildNode, newInternal, $cast($ChildNode, newChild));
	$var($Node, oldparent, $nc(newInternal)->parentNode());
	if (oldparent != nullptr) {
		oldparent->removeChild(newInternal);
	}
	$var($ChildNode, refInternal, $cast($ChildNode, refChild));
	$set(newInternal, ownerNode, this);
	newInternal->isOwned(true);
	if (this->firstChild == nullptr) {
		$set(this, firstChild, newInternal);
		newInternal->isFirstChild(true);
		$set(newInternal, previousSibling$, newInternal);
	} else if (refInternal == nullptr) {
		$var($ChildNode, lastChild, $nc(this->firstChild)->previousSibling$);
		$set($nc(lastChild), nextSibling, newInternal);
		$set(newInternal, previousSibling$, lastChild);
		$set($nc(this->firstChild), previousSibling$, newInternal);
	} else if ($equals(refChild, this->firstChild)) {
		$nc(this->firstChild)->isFirstChild(false);
		$set(newInternal, nextSibling, this->firstChild);
		$set(newInternal, previousSibling$, $nc(this->firstChild)->previousSibling$);
		$set($nc(this->firstChild), previousSibling$, newInternal);
		$set(this, firstChild, newInternal);
		newInternal->isFirstChild(true);
	} else {
		$var($ChildNode, prev, $nc(refInternal)->previousSibling$);
		$set(newInternal, nextSibling, refInternal);
		$set($nc(prev), nextSibling, newInternal);
		$set(refInternal, previousSibling$, newInternal);
		$set(newInternal, previousSibling$, prev);
	}
	changed();
	if (this->fNodeListCache != nullptr) {
		if ($nc(this->fNodeListCache)->fLength != -1) {
			++$nc(this->fNodeListCache)->fLength;
		}
		if ($nc(this->fNodeListCache)->fChildIndex != -1) {
			if ($nc(this->fNodeListCache)->fChild == refInternal) {
				$set($nc(this->fNodeListCache), fChild, newInternal);
			} else {
				$nc(this->fNodeListCache)->fChildIndex = -1;
			}
		}
	}
	$nc(this->ownerDocument$)->insertedNode(this, newInternal, replace);
	checkNormalizationAfterInsert(newInternal);
	return newChild;
}

$Node* ParentNode::removeChild($Node* oldChild) {
	return internalRemoveChild(oldChild, false);
}

$Node* ParentNode::internalRemoveChild($Node* oldChild, bool replace) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr)));
		}
		if (oldChild != nullptr && !$equals(oldChild->getParentNode(), this)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr)));
		}
	}
	$var($ChildNode, oldInternal, $cast($ChildNode, oldChild));
	$nc(ownerDocument)->removingNode(this, oldInternal, replace);
	$var($ChildNode, oldPreviousSibling, $nc(oldInternal)->previousSibling());
	if (this->fNodeListCache != nullptr) {
		if ($nc(this->fNodeListCache)->fLength != -1) {
			--$nc(this->fNodeListCache)->fLength;
		}
		if ($nc(this->fNodeListCache)->fChildIndex != -1) {
			if ($nc(this->fNodeListCache)->fChild == oldInternal) {
				--$nc(this->fNodeListCache)->fChildIndex;
				$set($nc(this->fNodeListCache), fChild, oldPreviousSibling);
			} else {
				$nc(this->fNodeListCache)->fChildIndex = -1;
			}
		}
	}
	if (oldInternal == this->firstChild) {
		oldInternal->isFirstChild(false);
		$set(this, firstChild, oldInternal->nextSibling);
		if (this->firstChild != nullptr) {
			$nc(this->firstChild)->isFirstChild(true);
			$set($nc(this->firstChild), previousSibling$, oldInternal->previousSibling$);
		}
	} else {
		$var($ChildNode, prev, oldInternal->previousSibling$);
		$var($ChildNode, next, oldInternal->nextSibling);
		$set($nc(prev), nextSibling, next);
		if (next == nullptr) {
			$set($nc(this->firstChild), previousSibling$, prev);
		} else {
			$set($nc(next), previousSibling$, prev);
		}
	}
	$set(oldInternal, ownerNode, ownerDocument);
	oldInternal->isOwned(false);
	$set(oldInternal, nextSibling, nullptr);
	$set(oldInternal, previousSibling$, nullptr);
	changed();
	ownerDocument->removedNode(this, replace);
	checkNormalizationAfterRemove(oldPreviousSibling);
	return oldInternal;
}

$Node* ParentNode::replaceChild($Node* newChild, $Node* oldChild) {
	$nc(this->ownerDocument$)->replacingNode(this);
	internalInsertBefore(newChild, oldChild, true);
	if (newChild != oldChild) {
		internalRemoveChild(oldChild, true);
	}
	$nc(this->ownerDocument$)->replacedNode(this);
	return oldChild;
}

$String* ParentNode::getTextContent() {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, getFirstChild());
	if (child != nullptr) {
		$var($Node, next, child->getNextSibling());
		if (next == nullptr) {
			return hasTextContent(child) ? $nc(($cast($NodeImpl, child)))->getTextContent() : ""_s;
		}
		$var($StringBuilder, buf, $new($StringBuilder));
		getTextContent(buf);
		return buf->toString();
	}
	return ""_s;
}

void ParentNode::getTextContent($StringBuilder* buf) {
	$var($Node, child, getFirstChild());
	while (child != nullptr) {
		if (hasTextContent(child)) {
			$nc(($cast($NodeImpl, child)))->getTextContent(buf);
		}
		$assign(child, child->getNextSibling());
	}
}

bool ParentNode::hasTextContent($Node* child) {
	bool var$1 = $nc(child)->getNodeType() != $Node::COMMENT_NODE;
	bool var$0 = var$1 && child->getNodeType() != $Node::PROCESSING_INSTRUCTION_NODE;
	if (var$0) {
		bool var$2 = child->getNodeType() != $Node::TEXT_NODE;
		var$0 = (var$2 || $nc(($cast($TextImpl, child)))->isIgnorableWhitespace() == false);
	}
	return var$0;
}

void ParentNode::setTextContent($String* textContent) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, nullptr);
	while (($assign(child, getFirstChild())) != nullptr) {
		removeChild(child);
	}
	if (textContent != nullptr && textContent->length() != 0) {
		appendChild($($nc($(ownerDocument()))->createTextNode(textContent)));
	}
}

int32_t ParentNode::nodeListGetLength() {
	if (this->fNodeListCache == nullptr) {
		if (needsSyncChildren()) {
			synchronizeChildren();
		}
		if (this->firstChild == nullptr) {
			return 0;
		}
		if (this->firstChild == lastChild()) {
			return 1;
		}
		$set(this, fNodeListCache, $nc(this->ownerDocument$)->getNodeListCache(this));
	}
	if ($nc(this->fNodeListCache)->fLength == -1) {
		int32_t l = 0;
		$var($ChildNode, n, nullptr);
		if ($nc(this->fNodeListCache)->fChildIndex != -1 && $nc(this->fNodeListCache)->fChild != nullptr) {
			l = $nc(this->fNodeListCache)->fChildIndex;
			$assign(n, $nc(this->fNodeListCache)->fChild);
		} else {
			$assign(n, this->firstChild);
			l = 0;
		}
		while (n != nullptr) {
			++l;
			$assign(n, n->nextSibling);
		}
		$nc(this->fNodeListCache)->fLength = l;
	}
	return $nc(this->fNodeListCache)->fLength;
}

int32_t ParentNode::getLength() {
	return nodeListGetLength();
}

$Node* ParentNode::nodeListItem(int32_t index) {
	if (this->fNodeListCache == nullptr) {
		if (needsSyncChildren()) {
			synchronizeChildren();
		}
		if (this->firstChild == lastChild()) {
			return index == 0 ? static_cast<$Node*>(this->firstChild) : ($Node*)nullptr;
		}
		$set(this, fNodeListCache, $nc(this->ownerDocument$)->getNodeListCache(this));
	}
	int32_t i = $nc(this->fNodeListCache)->fChildIndex;
	$var($ChildNode, n, $nc(this->fNodeListCache)->fChild);
	bool firstAccess = true;
	if (i != -1 && n != nullptr) {
		firstAccess = false;
		if (i < index) {
			while (i < index && n != nullptr) {
				++i;
				$assign(n, n->nextSibling);
			}
		} else if (i > index) {
			while (i > index && n != nullptr) {
				--i;
				$assign(n, n->previousSibling());
			}
		}
	} else {
		if (index < 0) {
			return nullptr;
		}
		$assign(n, this->firstChild);
		for (i = 0; i < index && n != nullptr; ++i) {
			$assign(n, n->nextSibling);
		}
	}
	if (!firstAccess && (n == this->firstChild || n == lastChild())) {
		$nc(this->fNodeListCache)->fChildIndex = -1;
		$set($nc(this->fNodeListCache), fChild, nullptr);
		$nc(this->ownerDocument$)->freeNodeListCache(this->fNodeListCache);
	} else {
		$nc(this->fNodeListCache)->fChildIndex = i;
		$set($nc(this->fNodeListCache), fChild, n);
	}
	return n;
}

$Node* ParentNode::item(int32_t index) {
	return nodeListItem(index);
}

$NodeList* ParentNode::getChildNodesUnoptimized() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return $new($ParentNode$1, this);
}

void ParentNode::normalize() {
	if (isNormalized()) {
		return;
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$var($ChildNode, kid, nullptr);
	for ($assign(kid, this->firstChild); kid != nullptr; $assign(kid, $nc(kid)->nextSibling)) {
		kid->normalize();
	}
	isNormalized(true);
}

bool ParentNode::isEqualNode($Node* arg) {
	$useLocalCurrentObjectStackCache();
	if (!$ChildNode::isEqualNode(arg)) {
		return false;
	}
	$var($Node, child1, getFirstChild());
	$var($Node, child2, $nc(arg)->getFirstChild());
	while (child1 != nullptr && child2 != nullptr) {
		if (!child1->isEqualNode(child2)) {
			return false;
		}
		$assign(child1, child1->getNextSibling());
		$assign(child2, child2->getNextSibling());
	}
	if (child1 != child2) {
		return false;
	}
	return true;
}

void ParentNode::setReadOnly(bool readOnly, bool deep) {
	$ChildNode::setReadOnly(readOnly, deep);
	if (deep) {
		if (needsSyncChildren()) {
			synchronizeChildren();
		}
		{
			$var($ChildNode, mykid, this->firstChild);
			for (; mykid != nullptr; $assign(mykid, $nc(mykid)->nextSibling)) {
				if (mykid->getNodeType() != $Node::ENTITY_REFERENCE_NODE) {
					mykid->setReadOnly(readOnly, true);
				}
			}
		}
	}
}

void ParentNode::synchronizeChildren() {
	needsSyncChildren(false);
}

void ParentNode::checkNormalizationAfterInsert($ChildNode* insertedChild) {
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

void ParentNode::checkNormalizationAfterRemove($ChildNode* previousSibling) {
	if (previousSibling != nullptr && previousSibling->getNodeType() == $Node::TEXT_NODE) {
		$var($ChildNode, next, previousSibling->nextSibling);
		if (next != nullptr && next->getNodeType() == $Node::TEXT_NODE) {
			isNormalized(false);
		}
	}
}

void ParentNode::writeObject($ObjectOutputStream* out) {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	$nc(out)->defaultWriteObject();
}

void ParentNode::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	needsSyncChildren(false);
}

ParentNode::ParentNode() {
}

$Class* ParentNode::load$($String* name, bool initialize) {
	$loadClass(ParentNode, name, initialize, &_ParentNode_ClassInfo_, allocate$ParentNode);
	return class$;
}

$Class* ParentNode::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com