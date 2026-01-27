#include <com/sun/org/apache/xerces/internal/dom/NodeIteratorImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef ENTITY_REFERENCE_NODE
#undef FILTER_ACCEPT
#undef INVALID_STATE_ERR
#undef SHOW_ALL

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _NodeIteratorImpl_FieldInfo_[] = {
	{"fDocument", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, $PRIVATE, $field(NodeIteratorImpl, fDocument)},
	{"fRoot", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(NodeIteratorImpl, fRoot)},
	{"fWhatToShow", "I", nullptr, $PRIVATE, $field(NodeIteratorImpl, fWhatToShow)},
	{"fNodeFilter", "Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PRIVATE, $field(NodeIteratorImpl, fNodeFilter)},
	{"fDetach", "Z", nullptr, $PRIVATE, $field(NodeIteratorImpl, fDetach)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(NodeIteratorImpl, fCurrentNode)},
	{"fForward", "Z", nullptr, $PRIVATE, $field(NodeIteratorImpl, fForward)},
	{"fEntityReferenceExpansion", "Z", nullptr, $PRIVATE, $field(NodeIteratorImpl, fEntityReferenceExpansion)},
	{}
};

$MethodInfo _NodeIteratorImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)V", nullptr, $PUBLIC, $method(NodeIteratorImpl, init$, void, $DocumentImpl*, $Node*, int32_t, $NodeFilter*, bool)},
	{"acceptNode", "(Lorg/w3c/dom/Node;)Z", nullptr, 0, $virtualMethod(NodeIteratorImpl, acceptNode, bool, $Node*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, detach, void)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, getFilter, $NodeFilter*)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, getRoot, $Node*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, getWhatToShow, int32_t)},
	{"matchNodeOrParent", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(NodeIteratorImpl, matchNodeOrParent, $Node*, $Node*)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, nextNode, $Node*)},
	{"nextNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(NodeIteratorImpl, nextNode, $Node*, $Node*, bool)},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, previousNode, $Node*)},
	{"previousNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(NodeIteratorImpl, previousNode, $Node*, $Node*)},
	{"removeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(NodeIteratorImpl, removeNode, void, $Node*)},
	{}
};

$ClassInfo _NodeIteratorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.NodeIteratorImpl",
	"java.lang.Object",
	"org.w3c.dom.traversal.NodeIterator",
	_NodeIteratorImpl_FieldInfo_,
	_NodeIteratorImpl_MethodInfo_
};

$Object* allocate$NodeIteratorImpl($Class* clazz) {
	return $of($alloc(NodeIteratorImpl));
}

void NodeIteratorImpl::init$($DocumentImpl* document, $Node* root, int32_t whatToShow, $NodeFilter* nodeFilter, bool entityReferenceExpansion) {
	this->fWhatToShow = $NodeFilter::SHOW_ALL;
	this->fDetach = false;
	this->fForward = true;
	$set(this, fDocument, document);
	$set(this, fRoot, root);
	$set(this, fCurrentNode, nullptr);
	this->fWhatToShow = whatToShow;
	$set(this, fNodeFilter, nodeFilter);
	this->fEntityReferenceExpansion = entityReferenceExpansion;
}

$Node* NodeIteratorImpl::getRoot() {
	return this->fRoot;
}

int32_t NodeIteratorImpl::getWhatToShow() {
	return this->fWhatToShow;
}

$NodeFilter* NodeIteratorImpl::getFilter() {
	return this->fNodeFilter;
}

bool NodeIteratorImpl::getExpandEntityReferences() {
	return this->fEntityReferenceExpansion;
}

$Node* NodeIteratorImpl::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	if (this->fRoot == nullptr) {
		return nullptr;
	}
	$var($Node, nextNode, this->fCurrentNode);
	bool accepted = false;
	bool accepted_loop$continue = false;
	while (!accepted) {
		if (!this->fForward && nextNode != nullptr) {
			$assign(nextNode, this->fCurrentNode);
		} else if (!this->fEntityReferenceExpansion && nextNode != nullptr && nextNode->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
			$assign(nextNode, this->nextNode(nextNode, false));
		} else {
			$assign(nextNode, this->nextNode(nextNode, true));
		}
		this->fForward = true;
		if (nextNode == nullptr) {
			return nullptr;
		}
		accepted = acceptNode(nextNode);
		if (accepted) {
			$set(this, fCurrentNode, nextNode);
			return this->fCurrentNode;
		} else {
			continue;
		}
	}
	return nullptr;
}

$Node* NodeIteratorImpl::previousNode() {
	$useLocalCurrentObjectStackCache();
	if (this->fDetach) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::INVALID_STATE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_STATE_ERR"_s, nullptr)));
	}
	if (this->fRoot == nullptr || this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, previousNode, this->fCurrentNode);
	bool accepted = false;
	bool accepted_loop$continue = false;
	while (!accepted) {
		if (this->fForward && previousNode != nullptr) {
			$assign(previousNode, this->fCurrentNode);
		} else {
			$assign(previousNode, this->previousNode(previousNode));
		}
		this->fForward = false;
		if (previousNode == nullptr) {
			return nullptr;
		}
		accepted = acceptNode(previousNode);
		if (accepted) {
			$set(this, fCurrentNode, previousNode);
			return this->fCurrentNode;
		} else {
			continue;
		}
	}
	return nullptr;
}

bool NodeIteratorImpl::acceptNode($Node* node) {
	if (this->fNodeFilter == nullptr) {
		return ((int32_t)(this->fWhatToShow & (uint32_t)($sl(1, $nc(node)->getNodeType() - 1)))) != 0;
	} else {
		bool var$0 = (((int32_t)(this->fWhatToShow & (uint32_t)($sl(1, $nc(node)->getNodeType() - 1)))) != 0);
		return var$0 && $nc(this->fNodeFilter)->acceptNode(node) == $NodeFilter::FILTER_ACCEPT;
	}
}

$Node* NodeIteratorImpl::matchNodeOrParent($Node* node) {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	{
		$var($Node, n, this->fCurrentNode);
		for (; n != this->fRoot; $assign(n, $nc(n)->getParentNode())) {
			if (node == n) {
				return n;
			}
		}
	}
	return nullptr;
}

$Node* NodeIteratorImpl::nextNode($Node* node, bool visitChildren) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return this->fRoot;
	}
	$var($Node, result, nullptr);
	if (visitChildren) {
		if ($nc(node)->hasChildNodes()) {
			$assign(result, node->getFirstChild());
			return result;
		}
	}
	if (node == this->fRoot) {
		return nullptr;
	}
	$assign(result, $nc(node)->getNextSibling());
	if (result != nullptr) {
		return result;
	}
	$var($Node, parent, node->getParentNode());
	while (parent != nullptr && parent != this->fRoot) {
		$assign(result, parent->getNextSibling());
		if (result != nullptr) {
			return result;
		} else {
			$assign(parent, parent->getParentNode());
		}
	}
	return nullptr;
}

$Node* NodeIteratorImpl::previousNode($Node* node) {
	$var($Node, result, nullptr);
	if (node == this->fRoot) {
		return nullptr;
	}
	$assign(result, $nc(node)->getPreviousSibling());
	if (result == nullptr) {
		$assign(result, node->getParentNode());
		return result;
	}
	bool var$0 = $nc(result)->hasChildNodes();
	if (var$0 && !(!this->fEntityReferenceExpansion && result != nullptr && result->getNodeType() == $Node::ENTITY_REFERENCE_NODE)) {
		while ($nc(result)->hasChildNodes()) {
			$assign(result, result->getLastChild());
		}
	}
	return result;
}

void NodeIteratorImpl::removeNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return;
	}
	$var($Node, deleted, matchNodeOrParent(node));
	if (deleted == nullptr) {
		return;
	}
	if (this->fForward) {
		$set(this, fCurrentNode, previousNode(deleted));
	} else {
		$var($Node, next, nextNode(deleted, false));
		if (next != nullptr) {
			$set(this, fCurrentNode, next);
		} else {
			$set(this, fCurrentNode, previousNode(deleted));
			this->fForward = true;
		}
	}
}

void NodeIteratorImpl::detach() {
	this->fDetach = true;
	$nc(this->fDocument)->removeNodeIterator(this);
}

NodeIteratorImpl::NodeIteratorImpl() {
}

$Class* NodeIteratorImpl::load$($String* name, bool initialize) {
	$loadClass(NodeIteratorImpl, name, initialize, &_NodeIteratorImpl_ClassInfo_, allocate$NodeIteratorImpl);
	return class$;
}

$Class* NodeIteratorImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com