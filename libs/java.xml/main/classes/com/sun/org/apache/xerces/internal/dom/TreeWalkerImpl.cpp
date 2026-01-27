#include <com/sun/org/apache/xerces/internal/dom/TreeWalkerImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef ENTITY_REFERENCE_NODE
#undef FILTER_ACCEPT
#undef FILTER_SKIP
#undef NOT_SUPPORTED_ERR
#undef SHOW_ALL

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _TreeWalkerImpl_FieldInfo_[] = {
	{"fEntityReferenceExpansion", "Z", nullptr, $PRIVATE, $field(TreeWalkerImpl, fEntityReferenceExpansion)},
	{"fWhatToShow", "I", nullptr, 0, $field(TreeWalkerImpl, fWhatToShow)},
	{"fNodeFilter", "Lorg/w3c/dom/traversal/NodeFilter;", nullptr, 0, $field(TreeWalkerImpl, fNodeFilter)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(TreeWalkerImpl, fCurrentNode)},
	{"fRoot", "Lorg/w3c/dom/Node;", nullptr, 0, $field(TreeWalkerImpl, fRoot)},
	{}
};

$MethodInfo _TreeWalkerImpl_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)V", nullptr, $PUBLIC, $method(TreeWalkerImpl, init$, void, $Node*, int32_t, $NodeFilter*, bool)},
	{"acceptNode", "(Lorg/w3c/dom/Node;)S", nullptr, 0, $virtualMethod(TreeWalkerImpl, acceptNode, int16_t, $Node*)},
	{"firstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, firstChild, $Node*)},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, getCurrentNode, $Node*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, getFilter, $NodeFilter*)},
	{"getFirstChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getFirstChild, $Node*, $Node*)},
	{"getLastChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getLastChild, $Node*, $Node*)},
	{"getNextSibling", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getNextSibling, $Node*, $Node*)},
	{"getNextSibling", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getNextSibling, $Node*, $Node*, $Node*)},
	{"getParentNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getParentNode, $Node*, $Node*)},
	{"getPreviousSibling", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getPreviousSibling, $Node*, $Node*)},
	{"getPreviousSibling", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, 0, $virtualMethod(TreeWalkerImpl, getPreviousSibling, $Node*, $Node*, $Node*)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, getRoot, $Node*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, getWhatToShow, int32_t)},
	{"lastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, lastChild, $Node*)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, nextNode, $Node*)},
	{"nextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, nextSibling, $Node*)},
	{"parentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, parentNode, $Node*)},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, previousNode, $Node*)},
	{"previousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, previousSibling, $Node*)},
	{"setCurrentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, setCurrentNode, void, $Node*)},
	{"setWhatShow", "(I)V", nullptr, $PUBLIC, $virtualMethod(TreeWalkerImpl, setWhatShow, void, int32_t)},
	{}
};

$ClassInfo _TreeWalkerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.TreeWalkerImpl",
	"java.lang.Object",
	"org.w3c.dom.traversal.TreeWalker",
	_TreeWalkerImpl_FieldInfo_,
	_TreeWalkerImpl_MethodInfo_
};

$Object* allocate$TreeWalkerImpl($Class* clazz) {
	return $of($alloc(TreeWalkerImpl));
}

void TreeWalkerImpl::init$($Node* root, int32_t whatToShow, $NodeFilter* nodeFilter, bool entityReferenceExpansion) {
	this->fEntityReferenceExpansion = false;
	this->fWhatToShow = $NodeFilter::SHOW_ALL;
	$set(this, fCurrentNode, root);
	$set(this, fRoot, root);
	this->fWhatToShow = whatToShow;
	$set(this, fNodeFilter, nodeFilter);
	this->fEntityReferenceExpansion = entityReferenceExpansion;
}

$Node* TreeWalkerImpl::getRoot() {
	return this->fRoot;
}

int32_t TreeWalkerImpl::getWhatToShow() {
	return this->fWhatToShow;
}

void TreeWalkerImpl::setWhatShow(int32_t whatToShow) {
	this->fWhatToShow = whatToShow;
}

$NodeFilter* TreeWalkerImpl::getFilter() {
	return this->fNodeFilter;
}

bool TreeWalkerImpl::getExpandEntityReferences() {
	return this->fEntityReferenceExpansion;
}

$Node* TreeWalkerImpl::getCurrentNode() {
	return this->fCurrentNode;
}

void TreeWalkerImpl::setCurrentNode($Node* node) {
	if (node == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	$set(this, fCurrentNode, node);
}

$Node* TreeWalkerImpl::parentNode() {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, node, getParentNode(this->fCurrentNode));
	if (node != nullptr) {
		$set(this, fCurrentNode, node);
	}
	return node;
}

$Node* TreeWalkerImpl::firstChild() {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, node, getFirstChild(this->fCurrentNode));
	if (node != nullptr) {
		$set(this, fCurrentNode, node);
	}
	return node;
}

$Node* TreeWalkerImpl::lastChild() {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, node, getLastChild(this->fCurrentNode));
	if (node != nullptr) {
		$set(this, fCurrentNode, node);
	}
	return node;
}

$Node* TreeWalkerImpl::previousSibling() {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, node, getPreviousSibling(this->fCurrentNode));
	if (node != nullptr) {
		$set(this, fCurrentNode, node);
	}
	return node;
}

$Node* TreeWalkerImpl::nextSibling() {
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, node, getNextSibling(this->fCurrentNode));
	if (node != nullptr) {
		$set(this, fCurrentNode, node);
	}
	return node;
}

$Node* TreeWalkerImpl::previousNode() {
	$useLocalCurrentObjectStackCache();
	$var($Node, result, nullptr);
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$assign(result, getPreviousSibling(this->fCurrentNode));
	if (result == nullptr) {
		$assign(result, getParentNode(this->fCurrentNode));
		if (result != nullptr) {
			$set(this, fCurrentNode, result);
			return this->fCurrentNode;
		}
		return nullptr;
	}
	$var($Node, lastChild, getLastChild(result));
	$var($Node, prev, lastChild);
	while (lastChild != nullptr) {
		$assign(prev, lastChild);
		$assign(lastChild, getLastChild(prev));
	}
	$assign(lastChild, prev);
	if (lastChild != nullptr) {
		$set(this, fCurrentNode, lastChild);
		return this->fCurrentNode;
	}
	if (result != nullptr) {
		$set(this, fCurrentNode, result);
		return this->fCurrentNode;
	}
	return nullptr;
}

$Node* TreeWalkerImpl::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentNode == nullptr) {
		return nullptr;
	}
	$var($Node, result, getFirstChild(this->fCurrentNode));
	if (result != nullptr) {
		$set(this, fCurrentNode, result);
		return result;
	}
	$assign(result, getNextSibling(this->fCurrentNode));
	if (result != nullptr) {
		$set(this, fCurrentNode, result);
		return result;
	}
	$var($Node, parent, getParentNode(this->fCurrentNode));
	while (parent != nullptr) {
		$assign(result, getNextSibling(parent));
		if (result != nullptr) {
			$set(this, fCurrentNode, result);
			return result;
		} else {
			$assign(parent, getParentNode(parent));
		}
	}
	return nullptr;
}

$Node* TreeWalkerImpl::getParentNode($Node* node) {
	if (node == nullptr || node == this->fRoot) {
		return nullptr;
	}
	$var($Node, newNode, $nc(node)->getParentNode());
	if (newNode == nullptr) {
		return nullptr;
	}
	int32_t accept = acceptNode(newNode);
	if (accept == $NodeFilter::FILTER_ACCEPT) {
		return newNode;
	} else {
		return getParentNode(newNode);
	}
}

$Node* TreeWalkerImpl::getNextSibling($Node* node) {
	return getNextSibling(node, this->fRoot);
}

$Node* TreeWalkerImpl::getNextSibling($Node* node, $Node* root) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr || node == root) {
		return nullptr;
	}
	$var($Node, newNode, $nc(node)->getNextSibling());
	if (newNode == nullptr) {
		$assign(newNode, node->getParentNode());
		if (newNode == nullptr || newNode == root) {
			return nullptr;
		}
		int32_t parentAccept = acceptNode(newNode);
		if (parentAccept == $NodeFilter::FILTER_SKIP) {
			return getNextSibling(newNode, root);
		}
		return nullptr;
	}
	int32_t accept = acceptNode(newNode);
	if (accept == $NodeFilter::FILTER_ACCEPT) {
		return newNode;
	} else if (accept == $NodeFilter::FILTER_SKIP) {
		$var($Node, fChild, getFirstChild(newNode));
		if (fChild == nullptr) {
			return getNextSibling(newNode, root);
		}
		return fChild;
	} else {
		return getNextSibling(newNode, root);
	}
}

$Node* TreeWalkerImpl::getPreviousSibling($Node* node) {
	return getPreviousSibling(node, this->fRoot);
}

$Node* TreeWalkerImpl::getPreviousSibling($Node* node, $Node* root) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr || node == root) {
		return nullptr;
	}
	$var($Node, newNode, $nc(node)->getPreviousSibling());
	if (newNode == nullptr) {
		$assign(newNode, node->getParentNode());
		if (newNode == nullptr || newNode == root) {
			return nullptr;
		}
		int32_t parentAccept = acceptNode(newNode);
		if (parentAccept == $NodeFilter::FILTER_SKIP) {
			return getPreviousSibling(newNode, root);
		}
		return nullptr;
	}
	int32_t accept = acceptNode(newNode);
	if (accept == $NodeFilter::FILTER_ACCEPT) {
		return newNode;
	} else if (accept == $NodeFilter::FILTER_SKIP) {
		$var($Node, fChild, getLastChild(newNode));
		if (fChild == nullptr) {
			return getPreviousSibling(newNode, root);
		}
		return fChild;
	} else {
		return getPreviousSibling(newNode, root);
	}
}

$Node* TreeWalkerImpl::getFirstChild($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return nullptr;
	}
	if (!this->fEntityReferenceExpansion && $nc(node)->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
		return nullptr;
	}
	$var($Node, newNode, $nc(node)->getFirstChild());
	if (newNode == nullptr) {
		return nullptr;
	}
	int32_t accept = acceptNode(newNode);
	if (accept == $NodeFilter::FILTER_ACCEPT) {
		return newNode;
	} else if (accept == $NodeFilter::FILTER_SKIP && $nc(newNode)->hasChildNodes()) {
		$var($Node, fChild, getFirstChild(newNode));
		if (fChild == nullptr) {
			return getNextSibling(newNode, node);
		}
		return fChild;
	} else {
		return getNextSibling(newNode, node);
	}
}

$Node* TreeWalkerImpl::getLastChild($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return nullptr;
	}
	if (!this->fEntityReferenceExpansion && $nc(node)->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
		return nullptr;
	}
	$var($Node, newNode, $nc(node)->getLastChild());
	if (newNode == nullptr) {
		return nullptr;
	}
	int32_t accept = acceptNode(newNode);
	if (accept == $NodeFilter::FILTER_ACCEPT) {
		return newNode;
	} else if (accept == $NodeFilter::FILTER_SKIP && $nc(newNode)->hasChildNodes()) {
		$var($Node, lChild, getLastChild(newNode));
		if (lChild == nullptr) {
			return getPreviousSibling(newNode, node);
		}
		return lChild;
	} else {
		return getPreviousSibling(newNode, node);
	}
}

int16_t TreeWalkerImpl::acceptNode($Node* node) {
	if (this->fNodeFilter == nullptr) {
		if (((int32_t)(this->fWhatToShow & (uint32_t)($sl(1, $nc(node)->getNodeType() - 1)))) != 0) {
			return $NodeFilter::FILTER_ACCEPT;
		} else {
			return $NodeFilter::FILTER_SKIP;
		}
	} else if (((int32_t)(this->fWhatToShow & (uint32_t)($sl(1, $nc(node)->getNodeType() - 1)))) != 0) {
		return $nc(this->fNodeFilter)->acceptNode(node);
	} else {
		return $NodeFilter::FILTER_SKIP;
	}
}

TreeWalkerImpl::TreeWalkerImpl() {
}

$Class* TreeWalkerImpl::load$($String* name, bool initialize) {
	$loadClass(TreeWalkerImpl, name, initialize, &_TreeWalkerImpl_ClassInfo_, allocate$TreeWalkerImpl);
	return class$;
}

$Class* TreeWalkerImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com