#include <com/sun/org/apache/xerces/internal/dom/RangeImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/RangeExceptionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/ranges/Range.h>
#include <org/w3c/dom/ranges/RangeException.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef BAD_BOUNDARYPOINTS_ERR
#undef CDATA_SECTION_NODE
#undef CLONE_CONTENTS
#undef COMMENT_NODE
#undef DELETE_CONTENTS
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM_DOMAIN
#undef END_TO_START
#undef ENTITY_NODE
#undef EXTRACT_CONTENTS
#undef HIERARCHY_REQUEST_ERR
#undef INDEX_SIZE_ERR
#undef INVALID_NODE_TYPE_ERR
#undef INVALID_STATE_ERR
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef START_TO_END
#undef START_TO_START
#undef TEXT_NODE
#undef WRONG_DOCUMENT_ERR

using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $RangeExceptionImpl = ::com::sun::org::apache::xerces::internal::dom::RangeExceptionImpl;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $DOMException = ::org::w3c::dom::DOMException;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Range = ::org::w3c::dom::ranges::Range;
using $RangeException = ::org::w3c::dom::ranges::RangeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _RangeImpl_FieldInfo_[] = {
	{"fDocument", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, 0, $field(RangeImpl, fDocument)},
	{"fStartContainer", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fStartContainer)},
	{"fEndContainer", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fEndContainer)},
	{"fStartOffset", "I", nullptr, 0, $field(RangeImpl, fStartOffset)},
	{"fEndOffset", "I", nullptr, 0, $field(RangeImpl, fEndOffset)},
	{"fIsCollapsed", "Z", nullptr, 0, $field(RangeImpl, fIsCollapsed)},
	{"fDetach", "Z", nullptr, 0, $field(RangeImpl, fDetach)},
	{"fInsertNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fInsertNode)},
	{"fDeleteNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fDeleteNode)},
	{"fSplitNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fSplitNode)},
	{"fInsertedFromRange", "Z", nullptr, 0, $field(RangeImpl, fInsertedFromRange)},
	{"fRemoveChild", "Lorg/w3c/dom/Node;", nullptr, 0, $field(RangeImpl, fRemoveChild)},
	{"EXTRACT_CONTENTS", "I", nullptr, $STATIC | $FINAL, $constField(RangeImpl, EXTRACT_CONTENTS)},
	{"CLONE_CONTENTS", "I", nullptr, $STATIC | $FINAL, $constField(RangeImpl, CLONE_CONTENTS)},
	{"DELETE_CONTENTS", "I", nullptr, $STATIC | $FINAL, $constField(RangeImpl, DELETE_CONTENTS)},
	{}
};

$MethodInfo _RangeImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;)V", nullptr, $PUBLIC, $method(RangeImpl, init$, void, $DocumentImpl*)},
	{"checkIndex", "(Lorg/w3c/dom/Node;I)V", nullptr, 0, $virtualMethod(RangeImpl, checkIndex, void, $Node*, int32_t), "org.w3c.dom.DOMException"},
	{"cloneContents", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, cloneContents, $DocumentFragment*), "org.w3c.dom.DOMException"},
	{"cloneRange", "()Lorg/w3c/dom/ranges/Range;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, cloneRange, $Range*)},
	{"collapse", "(Z)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, collapse, void, bool)},
	{"compareBoundaryPoints", "(SLorg/w3c/dom/ranges/Range;)S", nullptr, $PUBLIC, $virtualMethod(RangeImpl, compareBoundaryPoints, int16_t, int16_t, $Range*), "org.w3c.dom.DOMException"},
	{"deleteContents", "()V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, deleteContents, void), "org.w3c.dom.DOMException"},
	{"deleteData", "(Lorg/w3c/dom/CharacterData;II)V", nullptr, 0, $virtualMethod(RangeImpl, deleteData, void, $CharacterData*, int32_t, int32_t)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, detach, void)},
	{"extractContents", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, extractContents, $DocumentFragment*), "org.w3c.dom.DOMException"},
	{"getCollapsed", "()Z", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getCollapsed, bool)},
	{"getCommonAncestorContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getCommonAncestorContainer, $Node*)},
	{"getEndContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getEndContainer, $Node*)},
	{"getEndOffset", "()I", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getEndOffset, int32_t)},
	{"getRootContainer", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, getRootContainer, $Node*, $Node*)},
	{"getSelectedNode", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, getSelectedNode, $Node*, $Node*, int32_t)},
	{"getStartContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getStartContainer, $Node*)},
	{"getStartOffset", "()I", nullptr, $PUBLIC, $virtualMethod(RangeImpl, getStartOffset, int32_t)},
	{"hasLegalRootContainer", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(RangeImpl, hasLegalRootContainer, bool, $Node*)},
	{"indexOf", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)I", nullptr, 0, $virtualMethod(RangeImpl, indexOf, int32_t, $Node*, $Node*)},
	{"insertData", "(Lorg/w3c/dom/CharacterData;ILjava/lang/String;)V", nullptr, 0, $virtualMethod(RangeImpl, insertData, void, $CharacterData*, int32_t, $String*)},
	{"insertNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, insertNode, void, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ranges.RangeException"},
	{"insertedNodeFromDOM", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, insertedNodeFromDOM, void, $Node*)},
	{"isAncestorOf", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, 0, $virtualMethod(RangeImpl, isAncestorOf, bool, $Node*, $Node*)},
	{"isLegalContainedNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(RangeImpl, isLegalContainedNode, bool, $Node*)},
	{"isLegalContainer", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(RangeImpl, isLegalContainer, bool, $Node*)},
	{"nextNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(RangeImpl, nextNode, $Node*, $Node*, bool)},
	{"receiveDeletedText", "(Lorg/w3c/dom/Node;II)V", nullptr, 0, $virtualMethod(RangeImpl, receiveDeletedText, void, $Node*, int32_t, int32_t)},
	{"receiveInsertedText", "(Lorg/w3c/dom/Node;II)V", nullptr, 0, $virtualMethod(RangeImpl, receiveInsertedText, void, $Node*, int32_t, int32_t)},
	{"receiveReplacedText", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $virtualMethod(RangeImpl, receiveReplacedText, void, $Node*)},
	{"receiveSplitData", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;I)V", nullptr, 0, $virtualMethod(RangeImpl, receiveSplitData, void, $Node*, $Node*, int32_t)},
	{"removeChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(RangeImpl, removeChild, $Node*, $Node*, $Node*)},
	{"removeNode", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $virtualMethod(RangeImpl, removeNode, void, $Node*)},
	{"selectNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, selectNode, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"selectNodeContents", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, selectNodeContents, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"setEnd", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setEnd, void, $Node*, int32_t), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setEndAfter", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setEndAfter, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"setEndBefore", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setEndBefore, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"setStart", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setStart, void, $Node*, int32_t), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setStartAfter", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setStartAfter, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"setStartBefore", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, setStartBefore, void, $Node*), "org.w3c.dom.ranges.RangeException"},
	{"signalSplitData", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;I)V", nullptr, 0, $virtualMethod(RangeImpl, signalSplitData, void, $Node*, $Node*, int32_t)},
	{"surroundContents", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(RangeImpl, surroundContents, void, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ranges.RangeException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RangeImpl, toString, $String*)},
	{"traverseCommonAncestors", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;I)Lorg/w3c/dom/DocumentFragment;", nullptr, $PRIVATE, $method(RangeImpl, traverseCommonAncestors, $DocumentFragment*, $Node*, $Node*, int32_t)},
	{"traverseCommonEndContainer", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/DocumentFragment;", nullptr, $PRIVATE, $method(RangeImpl, traverseCommonEndContainer, $DocumentFragment*, $Node*, int32_t)},
	{"traverseCommonStartContainer", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/DocumentFragment;", nullptr, $PRIVATE, $method(RangeImpl, traverseCommonStartContainer, $DocumentFragment*, $Node*, int32_t)},
	{"traverseContents", "(I)Lorg/w3c/dom/DocumentFragment;", nullptr, $PRIVATE, $method(RangeImpl, traverseContents, $DocumentFragment*, int32_t), "org.w3c.dom.DOMException"},
	{"traverseFullySelected", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traverseFullySelected, $Node*, $Node*, int32_t)},
	{"traverseLeftBoundary", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traverseLeftBoundary, $Node*, $Node*, int32_t)},
	{"traverseNode", "(Lorg/w3c/dom/Node;ZZI)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traverseNode, $Node*, $Node*, bool, bool, int32_t)},
	{"traversePartiallySelected", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traversePartiallySelected, $Node*, $Node*, int32_t)},
	{"traverseRightBoundary", "(Lorg/w3c/dom/Node;I)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traverseRightBoundary, $Node*, $Node*, int32_t)},
	{"traverseSameContainer", "(I)Lorg/w3c/dom/DocumentFragment;", nullptr, $PRIVATE, $method(RangeImpl, traverseSameContainer, $DocumentFragment*, int32_t)},
	{"traverseTextNode", "(Lorg/w3c/dom/Node;ZI)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(RangeImpl, traverseTextNode, $Node*, $Node*, bool, int32_t)},
	{}
};

$ClassInfo _RangeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.RangeImpl",
	"java.lang.Object",
	"org.w3c.dom.ranges.Range",
	_RangeImpl_FieldInfo_,
	_RangeImpl_MethodInfo_
};

$Object* allocate$RangeImpl($Class* clazz) {
	return $of($alloc(RangeImpl));
}

void RangeImpl::init$($DocumentImpl* document) {
	this->fDetach = false;
	$set(this, fInsertNode, nullptr);
	$set(this, fDeleteNode, nullptr);
	$set(this, fSplitNode, nullptr);
	this->fInsertedFromRange = false;
	$set(this, fRemoveChild, nullptr);
	$set(this, fDocument, document);
	$set(this, fStartContainer, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(document))))));
	$set(this, fEndContainer, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(document))))));
	this->fStartOffset = 0;
	this->fEndOffset = 0;
	this->fDetach = false;
}

$Node* RangeImpl::getStartContainer() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	return this->fStartContainer;
}

int32_t RangeImpl::getStartOffset() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	return this->fStartOffset;
}

$Node* RangeImpl::getEndContainer() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	return this->fEndContainer;
}

int32_t RangeImpl::getEndOffset() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	return this->fEndOffset;
}

bool RangeImpl::getCollapsed() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	return (this->fStartContainer == this->fEndContainer && this->fStartOffset == this->fEndOffset);
}

$Node* RangeImpl::getCommonAncestorContainer() {
	$useLocalCurrentObjectStackCache();
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	$var($List, startV, $new($ArrayList));
	$var($Node, node, nullptr);
	for ($assign(node, this->fStartContainer); node != nullptr; $assign(node, $nc(node)->getParentNode())) {
		startV->add(node);
	}
	$var($List, endV, $new($ArrayList));
	for ($assign(node, this->fEndContainer); node != nullptr; $assign(node, node->getParentNode())) {
		endV->add(node);
	}
	int32_t s = startV->size() - 1;
	int32_t e = endV->size() - 1;
	$var($Node, result, nullptr);
	while (s >= 0 && e >= 0) {
		if ($equals(startV->get(s), endV->get(e))) {
			$assign(result, $cast($Node, startV->get(s)));
		} else {
			break;
		}
		--s;
		--e;
	}
	return result;
}

void RangeImpl::setStart($Node* refNode, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		if (!isLegalContainer(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	checkIndex(refNode, offset);
	$set(this, fStartContainer, refNode);
	this->fStartOffset = offset;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(true);
	}
}

void RangeImpl::setEnd($Node* refNode, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		if (!isLegalContainer(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	checkIndex(refNode, offset);
	$set(this, fEndContainer, refNode);
	this->fEndOffset = offset;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(false);
	}
}

void RangeImpl::setStartBefore($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$0 = !hasLegalRootContainer(refNode);
		if (var$0 || !isLegalContainedNode(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$set(this, fStartContainer, $nc(refNode)->getParentNode());
	int32_t i = 0;
	{
		$var($Node, n, refNode);
		for (; n != nullptr; $assign(n, n->getPreviousSibling())) {
			++i;
		}
	}
	this->fStartOffset = i - 1;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(true);
	}
}

void RangeImpl::setStartAfter($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$0 = !hasLegalRootContainer(refNode);
		if (var$0 || !isLegalContainedNode(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$set(this, fStartContainer, $nc(refNode)->getParentNode());
	int32_t i = 0;
	{
		$var($Node, n, refNode);
		for (; n != nullptr; $assign(n, n->getPreviousSibling())) {
			++i;
		}
	}
	this->fStartOffset = i;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(true);
	}
}

void RangeImpl::setEndBefore($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$0 = !hasLegalRootContainer(refNode);
		if (var$0 || !isLegalContainedNode(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$set(this, fEndContainer, $nc(refNode)->getParentNode());
	int32_t i = 0;
	{
		$var($Node, n, refNode);
		for (; n != nullptr; $assign(n, n->getPreviousSibling())) {
			++i;
		}
	}
	this->fEndOffset = i - 1;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(false);
	}
}

void RangeImpl::setEndAfter($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$0 = !hasLegalRootContainer(refNode);
		if (var$0 || !isLegalContainedNode(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$set(this, fEndContainer, $nc(refNode)->getParentNode());
	int32_t i = 0;
	{
		$var($Node, n, refNode);
		for (; n != nullptr; $assign(n, n->getPreviousSibling())) {
			++i;
		}
	}
	this->fEndOffset = i;
	if (getCommonAncestorContainer() == nullptr || (this->fStartContainer == this->fEndContainer && this->fEndOffset < this->fStartOffset)) {
		collapse(false);
	}
}

void RangeImpl::collapse(bool toStart) {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	if (toStart) {
		$set(this, fEndContainer, this->fStartContainer);
		this->fEndOffset = this->fStartOffset;
	} else {
		$set(this, fStartContainer, this->fEndContainer);
		this->fStartOffset = this->fEndOffset;
	}
}

void RangeImpl::selectNode($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$0 = !isLegalContainer($($nc(refNode)->getParentNode()));
		if (var$0 || !isLegalContainedNode(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$var($Node, parent, $nc(refNode)->getParentNode());
	if (parent != nullptr) {
		$set(this, fStartContainer, parent);
		$set(this, fEndContainer, parent);
		int32_t i = 0;
		{
			$var($Node, n, refNode);
			for (; n != nullptr; $assign(n, n->getPreviousSibling())) {
				++i;
			}
		}
		this->fStartOffset = i - 1;
		this->fEndOffset = this->fStartOffset + 1;
	}
}

void RangeImpl::selectNodeContents($Node* refNode) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		if (!isLegalContainer(refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, $nc(refNode)->getOwnerDocument()) && !$equals(this->fDocument, refNode)) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$set(this, fStartContainer, refNode);
	$set(this, fEndContainer, refNode);
	$var($Node, first, $nc(refNode)->getFirstChild());
	this->fStartOffset = 0;
	if (first == nullptr) {
		this->fEndOffset = 0;
	} else {
		int32_t i = 0;
		{
			$var($Node, n, first);
			for (; n != nullptr; $assign(n, $nc(n)->getNextSibling())) {
				++i;
			}
		}
		this->fEndOffset = i;
	}
}

int16_t RangeImpl::compareBoundaryPoints(int16_t how, $Range* sourceRange) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		bool var$2 = !$equals(this->fDocument, $nc($($nc(sourceRange)->getStartContainer()))->getOwnerDocument());
		bool var$1 = var$2 && !$equals(this->fDocument, sourceRange->getStartContainer());
		bool var$0 = (var$1 && sourceRange->getStartContainer() != nullptr);
		if (!var$0) {
			bool var$4 = !$equals(this->fDocument, $nc($($nc(sourceRange)->getEndContainer()))->getOwnerDocument());
			bool var$3 = var$4 && !$equals(this->fDocument, sourceRange->getEndContainer());
			var$0 = (var$3 && sourceRange->getStartContainer() != nullptr);
		}
		if (var$0) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
	}
	$var($Node, endPointA, nullptr);
	$var($Node, endPointB, nullptr);
	int32_t offsetA = 0;
	int32_t offsetB = 0;
	if (how == $Range::START_TO_START) {
		$assign(endPointA, $nc(sourceRange)->getStartContainer());
		$assign(endPointB, this->fStartContainer);
		offsetA = sourceRange->getStartOffset();
		offsetB = this->fStartOffset;
	} else if (how == $Range::START_TO_END) {
		$assign(endPointA, $nc(sourceRange)->getStartContainer());
		$assign(endPointB, this->fEndContainer);
		offsetA = sourceRange->getStartOffset();
		offsetB = this->fEndOffset;
	} else if (how == $Range::END_TO_START) {
		$assign(endPointA, $nc(sourceRange)->getEndContainer());
		$assign(endPointB, this->fStartContainer);
		offsetA = sourceRange->getEndOffset();
		offsetB = this->fStartOffset;
	} else {
		$assign(endPointA, $nc(sourceRange)->getEndContainer());
		$assign(endPointB, this->fEndContainer);
		offsetA = sourceRange->getEndOffset();
		offsetB = this->fEndOffset;
	}
	if (endPointA == endPointB) {
		if (offsetA < offsetB) {
			return (int16_t)1;
		}
		if (offsetA == offsetB) {
			return (int16_t)0;
		}
		return (int16_t)-1;
	}
	{
		$var($Node, c, endPointB);
		$var($Node, p, $nc(c)->getParentNode());
		for (; p != nullptr; $assign(c, p), $assign(p, $nc(p)->getParentNode())) {
			if (p == endPointA) {
				int32_t index = indexOf(c, endPointA);
				if (offsetA <= index) {
					return (int16_t)1;
				}
				return (int16_t)-1;
			}
		}
	}
	{
		$var($Node, c, endPointA);
		$var($Node, p, c->getParentNode());
		for (; p != nullptr; $assign(c, p), $assign(p, p->getParentNode())) {
			if (p == endPointB) {
				int32_t index = indexOf(c, endPointB);
				if (index < offsetB) {
					return (int16_t)1;
				}
				return (int16_t)-1;
			}
		}
	}
	int32_t depthDiff = 0;
	{
		$var($Node, n, endPointA);
		for (; n != nullptr; $assign(n, $nc(n)->getParentNode())) {
			++depthDiff;
		}
	}
	{
		$var($Node, n, endPointB);
		for (; n != nullptr; $assign(n, n->getParentNode())) {
			--depthDiff;
		}
	}
	while (depthDiff > 0) {
		$assign(endPointA, $nc(endPointA)->getParentNode());
		--depthDiff;
	}
	while (depthDiff < 0) {
		$assign(endPointB, $nc(endPointB)->getParentNode());
		++depthDiff;
	}
	{
		$var($Node, pA, $nc(endPointA)->getParentNode());
		$var($Node, pB, $nc(endPointB)->getParentNode());
		for (; pA != pB; $assign(pA, $nc(pA)->getParentNode()), $assign(pB, $nc(pB)->getParentNode())) {
			$assign(endPointA, pA);
			$assign(endPointB, pB);
		}
	}
	{
		$var($Node, n, endPointA->getNextSibling());
		for (; n != nullptr; $assign(n, n->getNextSibling())) {
			if (n == endPointB) {
				return (int16_t)1;
			}
		}
	}
	return (int16_t)-1;
}

void RangeImpl::deleteContents() {
	traverseContents(RangeImpl::DELETE_CONTENTS);
}

$DocumentFragment* RangeImpl::extractContents() {
	return traverseContents(RangeImpl::EXTRACT_CONTENTS);
}

$DocumentFragment* RangeImpl::cloneContents() {
	return traverseContents(RangeImpl::CLONE_CONTENTS);
}

void RangeImpl::insertNode($Node* newNode) {
	$useLocalCurrentObjectStackCache();
	if (newNode == nullptr) {
		return;
	}
	int32_t type = $nc(newNode)->getNodeType();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		if (!$equals(this->fDocument, newNode->getOwnerDocument())) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr)));
		}
		if (type == $Node::ATTRIBUTE_NODE || type == $Node::ENTITY_NODE || type == $Node::NOTATION_NODE || type == $Node::DOCUMENT_NODE) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
	}
	$var($Node, cloneCurrent, nullptr);
	$var($Node, current, nullptr);
	int32_t currentChildren = 0;
	this->fInsertedFromRange = true;
	if ($nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		$var($Node, parent, $nc(this->fStartContainer)->getParentNode());
		currentChildren = $nc($($nc(parent)->getChildNodes()))->getLength();
		$assign(cloneCurrent, $nc(this->fStartContainer)->cloneNode(false));
		$nc(($cast($TextImpl, cloneCurrent)))->setNodeValueInternal($($nc(($($nc(cloneCurrent)->getNodeValue())))->substring(this->fStartOffset)));
		$nc(($cast($TextImpl, this->fStartContainer)))->setNodeValueInternal($($nc(($($nc(this->fStartContainer)->getNodeValue())))->substring(0, this->fStartOffset)));
		$var($Node, next, $nc(this->fStartContainer)->getNextSibling());
		if (next != nullptr) {
			if (parent != nullptr) {
				parent->insertBefore(newNode, next);
				parent->insertBefore(cloneCurrent, next);
			}
		} else if (parent != nullptr) {
			parent->appendChild(newNode);
			parent->appendChild(cloneCurrent);
		}
		if (this->fEndContainer == this->fStartContainer) {
			$set(this, fEndContainer, cloneCurrent);
			this->fEndOffset -= this->fStartOffset;
		} else if (this->fEndContainer == parent) {
			this->fEndOffset += ($nc($(parent->getChildNodes()))->getLength() - currentChildren);
		}
		signalSplitData(this->fStartContainer, cloneCurrent, this->fStartOffset);
	} else {
		if (this->fEndContainer == this->fStartContainer) {
			currentChildren = $nc($($nc(this->fEndContainer)->getChildNodes()))->getLength();
		}
		$assign(current, $nc(this->fStartContainer)->getFirstChild());
		int32_t i = 0;
		for (i = 0; i < this->fStartOffset && current != nullptr; ++i) {
			$assign(current, current->getNextSibling());
		}
		if (current != nullptr) {
			$nc(this->fStartContainer)->insertBefore(newNode, current);
		} else {
			$nc(this->fStartContainer)->appendChild(newNode);
		}
		if (this->fEndContainer == this->fStartContainer && this->fEndOffset != 0) {
			this->fEndOffset += ($nc($($nc(this->fEndContainer)->getChildNodes()))->getLength() - currentChildren);
		}
	}
	this->fInsertedFromRange = false;
}

void RangeImpl::surroundContents($Node* newParent) {
	$useLocalCurrentObjectStackCache();
	if (newParent == nullptr) {
		return;
	}
	int32_t type = $nc(newParent)->getNodeType();
	if ($nc(this->fDocument)->errorChecking) {
		if (this->fDetach) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
		}
		if (type == $Node::ATTRIBUTE_NODE || type == $Node::ENTITY_NODE || type == $Node::NOTATION_NODE || type == $Node::DOCUMENT_TYPE_NODE || type == $Node::DOCUMENT_NODE || type == $Node::DOCUMENT_FRAGMENT_NODE) {
			$init($DOMMessageFormatter);
			$throwNew($RangeExceptionImpl, $RangeException::INVALID_NODE_TYPE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_NODE_TYPE_ERR"_s, nullptr)));
		}
	}
	$var($Node, realStart, this->fStartContainer);
	$var($Node, realEnd, this->fEndContainer);
	if ($nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		$assign(realStart, $nc(this->fStartContainer)->getParentNode());
	}
	if ($nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE) {
		$assign(realEnd, $nc(this->fEndContainer)->getParentNode());
	}
	if (realStart != realEnd) {
		$init($DOMMessageFormatter);
		$throwNew($RangeExceptionImpl, $RangeException::BAD_BOUNDARYPOINTS_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "BAD_BOUNDARYPOINTS_ERR"_s, nullptr)));
	}
	$var($DocumentFragment, frag, extractContents());
	insertNode(newParent);
	newParent->appendChild(frag);
	selectNode(newParent);
}

$Range* RangeImpl::cloneRange() {
	$useLocalCurrentObjectStackCache();
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	$var($Range, range, $nc(this->fDocument)->createRange());
	$nc(range)->setStart(this->fStartContainer, this->fStartOffset);
	range->setEnd(this->fEndContainer, this->fEndOffset);
	return range;
}

$String* RangeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	$var($Node, node, this->fStartContainer);
	$var($Node, stopNode, this->fEndContainer);
	$var($StringBuffer, sb, $new($StringBuffer));
	bool var$0 = $nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE;
	if (var$0 || $nc(this->fStartContainer)->getNodeType() == $Node::CDATA_SECTION_NODE) {
		if (this->fStartContainer == this->fEndContainer) {
			sb->append($($nc($($nc(this->fStartContainer)->getNodeValue()))->substring(this->fStartOffset, this->fEndOffset)));
			return sb->toString();
		}
		sb->append($($nc($($nc(this->fStartContainer)->getNodeValue()))->substring(this->fStartOffset)));
		$assign(node, nextNode(node, true));
	} else {
		$assign(node, $nc(node)->getFirstChild());
		if (this->fStartOffset > 0) {
			int32_t counter = 0;
			while (counter < this->fStartOffset && node != nullptr) {
				$assign(node, node->getNextSibling());
				++counter;
			}
		}
		if (node == nullptr) {
			$assign(node, nextNode(this->fStartContainer, false));
		}
	}
	bool var$1 = $nc(this->fEndContainer)->getNodeType() != $Node::TEXT_NODE;
	if (var$1 && $nc(this->fEndContainer)->getNodeType() != $Node::CDATA_SECTION_NODE) {
		int32_t i = this->fEndOffset;
		$assign(stopNode, $nc(this->fEndContainer)->getFirstChild());
		while (i > 0 && stopNode != nullptr) {
			--i;
			$assign(stopNode, stopNode->getNextSibling());
		}
		if (stopNode == nullptr) {
			$assign(stopNode, nextNode(this->fEndContainer, false));
		}
	}
	while (node != stopNode) {
		if (node == nullptr) {
			break;
		}
		bool var$2 = $nc(node)->getNodeType() == $Node::TEXT_NODE;
		if (var$2 || $nc(node)->getNodeType() == $Node::CDATA_SECTION_NODE) {
			sb->append($(node->getNodeValue()));
		}
		$assign(node, nextNode(node, true));
	}
	bool var$3 = $nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE;
	if (var$3 || $nc(this->fEndContainer)->getNodeType() == $Node::CDATA_SECTION_NODE) {
		sb->append($($nc($($nc(this->fEndContainer)->getNodeValue()))->substring(0, this->fEndOffset)));
	}
	return sb->toString();
}

void RangeImpl::detach() {
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	this->fDetach = true;
	$nc(this->fDocument)->removeRange(this);
}

void RangeImpl::signalSplitData($Node* node, $Node* newNode, int32_t offset) {
	$set(this, fSplitNode, node);
	$nc(this->fDocument)->splitData(node, newNode, offset);
	$set(this, fSplitNode, nullptr);
}

void RangeImpl::receiveSplitData($Node* node, $Node* newNode, int32_t offset) {
	if (node == nullptr || newNode == nullptr) {
		return;
	}
	if (this->fSplitNode == node) {
		return;
	}
	if (node == this->fStartContainer && $nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (this->fStartOffset > offset) {
			this->fStartOffset = this->fStartOffset - offset;
			$set(this, fStartContainer, newNode);
		}
	}
	if (node == this->fEndContainer && $nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (this->fEndOffset > offset) {
			this->fEndOffset = this->fEndOffset - offset;
			$set(this, fEndContainer, newNode);
		}
	}
}

void RangeImpl::deleteData($CharacterData* node, int32_t offset, int32_t count) {
	$set(this, fDeleteNode, node);
	$nc(node)->deleteData(offset, count);
	$set(this, fDeleteNode, nullptr);
}

void RangeImpl::receiveDeletedText($Node* node, int32_t offset, int32_t count) {
	if (node == nullptr) {
		return;
	}
	if (this->fDeleteNode == node) {
		return;
	}
	if (node == this->fStartContainer && $nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (this->fStartOffset > offset + count) {
			this->fStartOffset = offset + (this->fStartOffset - (offset + count));
		} else if (this->fStartOffset > offset) {
			this->fStartOffset = offset;
		}
	}
	if (node == this->fEndContainer && $nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (this->fEndOffset > offset + count) {
			this->fEndOffset = offset + (this->fEndOffset - (offset + count));
		} else if (this->fEndOffset > offset) {
			this->fEndOffset = offset;
		}
	}
}

void RangeImpl::insertData($CharacterData* node, int32_t index, $String* insert) {
	$set(this, fInsertNode, node);
	$nc(node)->insertData(index, insert);
	$set(this, fInsertNode, nullptr);
}

void RangeImpl::receiveInsertedText($Node* node, int32_t index, int32_t len) {
	if (node == nullptr) {
		return;
	}
	if (this->fInsertNode == node) {
		return;
	}
	if (node == this->fStartContainer && $nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (index < this->fStartOffset) {
			this->fStartOffset = this->fStartOffset + len;
		}
	}
	if (node == this->fEndContainer && $nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE) {
		if (index < this->fEndOffset) {
			this->fEndOffset = this->fEndOffset + len;
		}
	}
}

void RangeImpl::receiveReplacedText($Node* node) {
	if (node == nullptr) {
		return;
	}
	if (node == this->fStartContainer && $nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		this->fStartOffset = 0;
	}
	if (node == this->fEndContainer && $nc(this->fEndContainer)->getNodeType() == $Node::TEXT_NODE) {
		this->fEndOffset = 0;
	}
}

void RangeImpl::insertedNodeFromDOM($Node* node) {
	if (node == nullptr) {
		return;
	}
	if (this->fInsertNode == node) {
		return;
	}
	if (this->fInsertedFromRange) {
		return;
	}
	$var($Node, parent, $nc(node)->getParentNode());
	if (parent == this->fStartContainer) {
		int32_t index = indexOf(node, this->fStartContainer);
		if (index < this->fStartOffset) {
			++this->fStartOffset;
		}
	}
	if (parent == this->fEndContainer) {
		int32_t index = indexOf(node, this->fEndContainer);
		if (index < this->fEndOffset) {
			++this->fEndOffset;
		}
	}
}

$Node* RangeImpl::removeChild($Node* parent, $Node* child) {
	$set(this, fRemoveChild, child);
	$var($Node, n, $nc(parent)->removeChild(child));
	$set(this, fRemoveChild, nullptr);
	return n;
}

void RangeImpl::removeNode($Node* node) {
	if (node == nullptr) {
		return;
	}
	if (this->fRemoveChild == node) {
		return;
	}
	$var($Node, parent, $nc(node)->getParentNode());
	if (parent == this->fStartContainer) {
		int32_t index = indexOf(node, this->fStartContainer);
		if (index < this->fStartOffset) {
			--this->fStartOffset;
		}
	}
	if (parent == this->fEndContainer) {
		int32_t index = indexOf(node, this->fEndContainer);
		if (index < this->fEndOffset) {
			--this->fEndOffset;
		}
	}
	if (parent != this->fStartContainer || parent != this->fEndContainer) {
		if (isAncestorOf(node, this->fStartContainer)) {
			$set(this, fStartContainer, parent);
			this->fStartOffset = indexOf(node, parent);
		}
		if (isAncestorOf(node, this->fEndContainer)) {
			$set(this, fEndContainer, parent);
			this->fEndOffset = indexOf(node, parent);
		}
	}
}

$DocumentFragment* RangeImpl::traverseContents(int32_t how) {
	$useLocalCurrentObjectStackCache();
	if (this->fStartContainer == nullptr || this->fEndContainer == nullptr) {
		return nullptr;
	}
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	if (this->fStartContainer == this->fEndContainer) {
		return traverseSameContainer(how);
	}
	int32_t endContainerDepth = 0;
	{
		$var($Node, c, this->fEndContainer);
		$var($Node, p, $nc(c)->getParentNode());
		for (; p != nullptr; $assign(c, p), $assign(p, $nc(p)->getParentNode())) {
			if (p == this->fStartContainer) {
				return traverseCommonStartContainer(c, how);
			}
			++endContainerDepth;
		}
	}
	int32_t startContainerDepth = 0;
	{
		$var($Node, c, this->fStartContainer);
		$var($Node, p, c->getParentNode());
		for (; p != nullptr; $assign(c, p), $assign(p, p->getParentNode())) {
			if (p == this->fEndContainer) {
				return traverseCommonEndContainer(c, how);
			}
			++startContainerDepth;
		}
	}
	int32_t depthDiff = startContainerDepth - endContainerDepth;
	$var($Node, startNode, this->fStartContainer);
	while (depthDiff > 0) {
		$assign(startNode, $nc(startNode)->getParentNode());
		--depthDiff;
	}
	$var($Node, endNode, this->fEndContainer);
	while (depthDiff < 0) {
		$assign(endNode, $nc(endNode)->getParentNode());
		++depthDiff;
	}
	{
		$var($Node, sp, $nc(startNode)->getParentNode());
		$var($Node, ep, $nc(endNode)->getParentNode());
		for (; sp != ep; $assign(sp, $nc(sp)->getParentNode()), $assign(ep, $nc(ep)->getParentNode())) {
			$assign(startNode, sp);
			$assign(endNode, ep);
		}
	}
	return traverseCommonAncestors(startNode, endNode, how);
}

$DocumentFragment* RangeImpl::traverseSameContainer(int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFragment, frag, nullptr);
	if (how != RangeImpl::DELETE_CONTENTS) {
		$assign(frag, $nc(this->fDocument)->createDocumentFragment());
	}
	if (this->fStartOffset == this->fEndOffset) {
		return frag;
	}
	if ($nc(this->fStartContainer)->getNodeType() == $Node::TEXT_NODE) {
		$var($String, s, $nc(this->fStartContainer)->getNodeValue());
		$var($String, sub, $nc(s)->substring(this->fStartOffset, this->fEndOffset));
		if (how != RangeImpl::CLONE_CONTENTS) {
			$nc(($cast($TextImpl, this->fStartContainer)))->deleteData(this->fStartOffset, this->fEndOffset - this->fStartOffset);
			collapse(true);
		}
		if (how == RangeImpl::DELETE_CONTENTS) {
			return nullptr;
		}
		$nc(frag)->appendChild($($nc(this->fDocument)->createTextNode(sub)));
		return frag;
	}
	$var($Node, n, getSelectedNode(this->fStartContainer, this->fStartOffset));
	int32_t cnt = this->fEndOffset - this->fStartOffset;
	while (cnt > 0) {
		$var($Node, sibling, $nc(n)->getNextSibling());
		$var($Node, xferNode, traverseFullySelected(n, how));
		if (frag != nullptr) {
			frag->appendChild(xferNode);
		}
		--cnt;
		$assign(n, sibling);
	}
	if (how != RangeImpl::CLONE_CONTENTS) {
		collapse(true);
	}
	return frag;
}

$DocumentFragment* RangeImpl::traverseCommonStartContainer($Node* endAncestor, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFragment, frag, nullptr);
	if (how != RangeImpl::DELETE_CONTENTS) {
		$assign(frag, $nc(this->fDocument)->createDocumentFragment());
	}
	$var($Node, n, traverseRightBoundary(endAncestor, how));
	if (frag != nullptr) {
		frag->appendChild(n);
	}
	int32_t endIdx = indexOf(endAncestor, this->fStartContainer);
	int32_t cnt = endIdx - this->fStartOffset;
	if (cnt <= 0) {
		if (how != RangeImpl::CLONE_CONTENTS) {
			setEndBefore(endAncestor);
			collapse(false);
		}
		return frag;
	}
	$assign(n, $nc(endAncestor)->getPreviousSibling());
	while (cnt > 0) {
		$var($Node, sibling, $nc(n)->getPreviousSibling());
		$var($Node, xferNode, traverseFullySelected(n, how));
		if (frag != nullptr) {
			frag->insertBefore(xferNode, $(frag->getFirstChild()));
		}
		--cnt;
		$assign(n, sibling);
	}
	if (how != RangeImpl::CLONE_CONTENTS) {
		setEndBefore(endAncestor);
		collapse(false);
	}
	return frag;
}

$DocumentFragment* RangeImpl::traverseCommonEndContainer($Node* startAncestor, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFragment, frag, nullptr);
	if (how != RangeImpl::DELETE_CONTENTS) {
		$assign(frag, $nc(this->fDocument)->createDocumentFragment());
	}
	$var($Node, n, traverseLeftBoundary(startAncestor, how));
	if (frag != nullptr) {
		frag->appendChild(n);
	}
	int32_t startIdx = indexOf(startAncestor, this->fEndContainer);
	++startIdx;
	int32_t cnt = this->fEndOffset - startIdx;
	$assign(n, $nc(startAncestor)->getNextSibling());
	while (cnt > 0) {
		$var($Node, sibling, $nc(n)->getNextSibling());
		$var($Node, xferNode, traverseFullySelected(n, how));
		if (frag != nullptr) {
			frag->appendChild(xferNode);
		}
		--cnt;
		$assign(n, sibling);
	}
	if (how != RangeImpl::CLONE_CONTENTS) {
		setStartAfter(startAncestor);
		collapse(true);
	}
	return frag;
}

$DocumentFragment* RangeImpl::traverseCommonAncestors($Node* startAncestor, $Node* endAncestor, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFragment, frag, nullptr);
	if (how != RangeImpl::DELETE_CONTENTS) {
		$assign(frag, $nc(this->fDocument)->createDocumentFragment());
	}
	$var($Node, n, traverseLeftBoundary(startAncestor, how));
	if (frag != nullptr) {
		frag->appendChild(n);
	}
	$var($Node, commonParent, $nc(startAncestor)->getParentNode());
	int32_t startOffset = indexOf(startAncestor, commonParent);
	int32_t endOffset = indexOf(endAncestor, commonParent);
	++startOffset;
	int32_t cnt = endOffset - startOffset;
	$var($Node, sibling, startAncestor->getNextSibling());
	while (cnt > 0) {
		$var($Node, nextSibling, $nc(sibling)->getNextSibling());
		$assign(n, traverseFullySelected(sibling, how));
		if (frag != nullptr) {
			frag->appendChild(n);
		}
		$assign(sibling, nextSibling);
		--cnt;
	}
	$assign(n, traverseRightBoundary(endAncestor, how));
	if (frag != nullptr) {
		frag->appendChild(n);
	}
	if (how != RangeImpl::CLONE_CONTENTS) {
		setStartAfter(startAncestor);
		collapse(true);
	}
	return frag;
}

$Node* RangeImpl::traverseRightBoundary($Node* root, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($Node, next, getSelectedNode(this->fEndContainer, this->fEndOffset - 1));
	bool isFullySelected = (next != this->fEndContainer);
	if (next == root) {
		return traverseNode(next, isFullySelected, false, how);
	}
	$var($Node, parent, $nc(next)->getParentNode());
	$var($Node, clonedParent, traverseNode(parent, false, false, how));
	while (parent != nullptr) {
		while (next != nullptr) {
			$var($Node, prevSibling, next->getPreviousSibling());
			$var($Node, clonedChild, traverseNode(next, isFullySelected, false, how));
			if (how != RangeImpl::DELETE_CONTENTS) {
				$nc(clonedParent)->insertBefore(clonedChild, $(clonedParent->getFirstChild()));
			}
			isFullySelected = true;
			$assign(next, prevSibling);
		}
		if (parent == root) {
			return clonedParent;
		}
		$assign(next, parent->getPreviousSibling());
		$assign(parent, parent->getParentNode());
		$var($Node, clonedGrandParent, traverseNode(parent, false, false, how));
		if (how != RangeImpl::DELETE_CONTENTS) {
			$nc(clonedGrandParent)->appendChild(clonedParent);
		}
		$assign(clonedParent, clonedGrandParent);
	}
	return nullptr;
}

$Node* RangeImpl::traverseLeftBoundary($Node* root, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($Node, var$0, getStartContainer());
	$var($Node, next, getSelectedNode(var$0, getStartOffset()));
	bool isFullySelected = (next != getStartContainer());
	if (next == root) {
		return traverseNode(next, isFullySelected, true, how);
	}
	$var($Node, parent, $nc(next)->getParentNode());
	$var($Node, clonedParent, traverseNode(parent, false, true, how));
	while (parent != nullptr) {
		while (next != nullptr) {
			$var($Node, nextSibling, next->getNextSibling());
			$var($Node, clonedChild, traverseNode(next, isFullySelected, true, how));
			if (how != RangeImpl::DELETE_CONTENTS) {
				$nc(clonedParent)->appendChild(clonedChild);
			}
			isFullySelected = true;
			$assign(next, nextSibling);
		}
		if (parent == root) {
			return clonedParent;
		}
		$assign(next, parent->getNextSibling());
		$assign(parent, parent->getParentNode());
		$var($Node, clonedGrandParent, traverseNode(parent, false, true, how));
		if (how != RangeImpl::DELETE_CONTENTS) {
			$nc(clonedGrandParent)->appendChild(clonedParent);
		}
		$assign(clonedParent, clonedGrandParent);
	}
	return nullptr;
}

$Node* RangeImpl::traverseNode($Node* n, bool isFullySelected, bool isLeft, int32_t how) {
	if (isFullySelected) {
		return traverseFullySelected(n, how);
	}
	if ($nc(n)->getNodeType() == $Node::TEXT_NODE) {
		return traverseTextNode(n, isLeft, how);
	}
	return traversePartiallySelected(n, how);
}

$Node* RangeImpl::traverseFullySelected($Node* n, int32_t how) {
	$useLocalCurrentObjectStackCache();
	switch (how) {
	case RangeImpl::CLONE_CONTENTS:
		{
			return $nc(n)->cloneNode(true);
		}
	case RangeImpl::EXTRACT_CONTENTS:
		{
			if ($nc(n)->getNodeType() == $Node::DOCUMENT_TYPE_NODE) {
				$init($DOMMessageFormatter);
				$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
			}
			return n;
		}
	case RangeImpl::DELETE_CONTENTS:
		{
			$nc($($nc(n)->getParentNode()))->removeChild(n);
			return nullptr;
		}
	}
	return nullptr;
}

$Node* RangeImpl::traversePartiallySelected($Node* n, int32_t how) {
	switch (how) {
	case RangeImpl::DELETE_CONTENTS:
		{
			return nullptr;
		}
	case RangeImpl::CLONE_CONTENTS:
		{}
	case RangeImpl::EXTRACT_CONTENTS:
		{
			return $nc(n)->cloneNode(false);
		}
	}
	return nullptr;
}

$Node* RangeImpl::traverseTextNode($Node* n, bool isLeft, int32_t how) {
	$useLocalCurrentObjectStackCache();
	$var($String, txtValue, $nc(n)->getNodeValue());
	$var($String, newNodeValue, nullptr);
	$var($String, oldNodeValue, nullptr);
	if (isLeft) {
		int32_t offset = getStartOffset();
		$assign(newNodeValue, $nc(txtValue)->substring(offset));
		$assign(oldNodeValue, txtValue->substring(0, offset));
	} else {
		int32_t offset = getEndOffset();
		$assign(newNodeValue, $nc(txtValue)->substring(0, offset));
		$assign(oldNodeValue, txtValue->substring(offset));
	}
	if (how != RangeImpl::CLONE_CONTENTS) {
		n->setNodeValue(oldNodeValue);
	}
	if (how == RangeImpl::DELETE_CONTENTS) {
		return nullptr;
	}
	$var($Node, newNode, n->cloneNode(false));
	$nc(newNode)->setNodeValue(newNodeValue);
	return newNode;
}

void RangeImpl::checkIndex($Node* refNode, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (offset < 0) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr)));
	}
	int32_t type = $nc(refNode)->getNodeType();
	if (type == $Node::TEXT_NODE || type == $Node::CDATA_SECTION_NODE || type == $Node::COMMENT_NODE || type == $Node::PROCESSING_INSTRUCTION_NODE) {
		if (offset > $nc($(refNode->getNodeValue()))->length()) {
			$init($DOMMessageFormatter);
			$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr)));
		}
	} else if (offset > $nc($(refNode->getChildNodes()))->getLength()) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr)));
	}
}

$Node* RangeImpl::getRootContainer($Node* node$renamed) {
	$var($Node, node, node$renamed);
	if (node == nullptr) {
		return nullptr;
	}
	while ($nc(node)->getParentNode() != nullptr) {
		$assign(node, node->getParentNode());
	}
	return node;
}

bool RangeImpl::isLegalContainer($Node* node$renamed) {
	$var($Node, node, node$renamed);
	if (node == nullptr) {
		return false;
	}
	while (node != nullptr) {
		switch (node->getNodeType()) {
		case $Node::ENTITY_NODE:
			{}
		case $Node::NOTATION_NODE:
			{}
		case $Node::DOCUMENT_TYPE_NODE:
			{
				return false;
			}
		}
		$assign(node, node->getParentNode());
	}
	return true;
}

bool RangeImpl::hasLegalRootContainer($Node* node) {
	if (node == nullptr) {
		return false;
	}
	$var($Node, rootContainer, getRootContainer(node));
	switch ($nc(rootContainer)->getNodeType()) {
	case $Node::ATTRIBUTE_NODE:
		{}
	case $Node::DOCUMENT_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			return true;
		}
	}
	return false;
}

bool RangeImpl::isLegalContainedNode($Node* node) {
	if (node == nullptr) {
		return false;
	}
	switch ($nc(node)->getNodeType()) {
	case $Node::DOCUMENT_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::ATTRIBUTE_NODE:
		{}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{
			return false;
		}
	}
	return true;
}

$Node* RangeImpl::nextNode($Node* node, bool visitChildren) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return nullptr;
	}
	$var($Node, result, nullptr);
	if (visitChildren) {
		$assign(result, $nc(node)->getFirstChild());
		if (result != nullptr) {
			return result;
		}
	}
	$assign(result, $nc(node)->getNextSibling());
	if (result != nullptr) {
		return result;
	}
	$var($Node, parent, node->getParentNode());
	while (parent != nullptr && !$equals(parent, this->fDocument)) {
		$assign(result, parent->getNextSibling());
		if (result != nullptr) {
			return result;
		} else {
			$assign(parent, parent->getParentNode());
		}
	}
	return nullptr;
}

bool RangeImpl::isAncestorOf($Node* a, $Node* b) {
	{
		$var($Node, node, b);
		for (; node != nullptr; $assign(node, $nc(node)->getParentNode())) {
			if (node == a) {
				return true;
			}
		}
	}
	return false;
}

int32_t RangeImpl::indexOf($Node* child, $Node* parent) {
	if ($nc(child)->getParentNode() != parent) {
		return -1;
	}
	int32_t i = 0;
	{
		$var($Node, node, $nc(parent)->getFirstChild());
		for (; node != child; $assign(node, $nc(node)->getNextSibling())) {
			++i;
		}
	}
	return i;
}

$Node* RangeImpl::getSelectedNode($Node* container, int32_t offset) {
	if ($nc(container)->getNodeType() == $Node::TEXT_NODE) {
		return container;
	}
	if (offset < 0) {
		return container;
	}
	$var($Node, child, $nc(container)->getFirstChild());
	while (child != nullptr && offset > 0) {
		--offset;
		$assign(child, child->getNextSibling());
	}
	if (child != nullptr) {
		return child;
	}
	return container;
}

RangeImpl::RangeImpl() {
}

$Class* RangeImpl::load$($String* name, bool initialize) {
	$loadClass(RangeImpl, name, initialize, &_RangeImpl_ClassInfo_, allocate$RangeImpl);
	return class$;
}

$Class* RangeImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com