#include <com/sun/org/apache/xml/internal/utils/DOM2Helper.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE

using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _DOM2Helper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DOM2Helper, init$, void)},
	{"getLocalNameOfNode", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOM2Helper, getLocalNameOfNode, $String*, $Node*)},
	{"getLocalNameOfNodeFallback", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOM2Helper, getLocalNameOfNodeFallback, $String*, $Node*)},
	{"getNamespaceOfNode", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOM2Helper, getNamespaceOfNode, $String*, $Node*)},
	{"getParentOfNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOM2Helper, getParentOfNode, $Node*, $Node*)},
	{"isNodeAfter", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DOM2Helper, isNodeAfter, bool, $Node*, $Node*)},
	{"isNodeAfterSibling", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DOM2Helper, isNodeAfterSibling, bool, $Node*, $Node*, $Node*)},
	{"isNodeTheSame", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DOM2Helper, isNodeTheSame, bool, $Node*, $Node*)},
	{}
};

$ClassInfo _DOM2Helper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.DOM2Helper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DOM2Helper_MethodInfo_
};

$Object* allocate$DOM2Helper($Class* clazz) {
	return $of($alloc(DOM2Helper));
}

void DOM2Helper::init$() {
}

$String* DOM2Helper::getLocalNameOfNode($Node* n) {
	$var($String, name, $nc(n)->getLocalName());
	return (nullptr == name) ? getLocalNameOfNodeFallback(n) : name;
}

$String* DOM2Helper::getLocalNameOfNodeFallback($Node* n) {
	$var($String, qname, $nc(n)->getNodeName());
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	return (index < 0) ? qname : qname->substring(index + 1);
}

$String* DOM2Helper::getNamespaceOfNode($Node* n) {
	return $nc(n)->getNamespaceURI();
}

bool DOM2Helper::isNodeAfter($Node* node1, $Node* node2) {
	$useLocalCurrentObjectStackCache();
	if (node1 == node2 || isNodeTheSame(node1, node2)) {
		return true;
	}
	bool isNodeAfter = true;
	$var($Node, parent1, getParentOfNode(node1));
	$var($Node, parent2, getParentOfNode(node2));
	if (parent1 == parent2 || isNodeTheSame(parent1, parent2)) {
		if (nullptr != parent1) {
			isNodeAfter = isNodeAfterSibling(parent1, node1, node2);
		}
	} else {
		int32_t nParents1 = 2;
		int32_t nParents2 = 2;
		while (parent1 != nullptr) {
			++nParents1;
			$assign(parent1, getParentOfNode(parent1));
		}
		while (parent2 != nullptr) {
			++nParents2;
			$assign(parent2, getParentOfNode(parent2));
		}
		$var($Node, startNode1, node1);
		$var($Node, startNode2, node2);
		if (nParents1 < nParents2) {
			int32_t adjust = nParents2 - nParents1;
			for (int32_t i = 0; i < adjust; ++i) {
				$assign(startNode2, getParentOfNode(startNode2));
			}
		} else if (nParents1 > nParents2) {
			int32_t adjust = nParents1 - nParents2;
			for (int32_t i = 0; i < adjust; ++i) {
				$assign(startNode1, getParentOfNode(startNode1));
			}
		}
		$var($Node, prevChild1, nullptr);
		$var($Node, prevChild2, nullptr);
		while (nullptr != startNode1) {
			if (startNode1 == startNode2 || isNodeTheSame(startNode1, startNode2)) {
				if (nullptr == prevChild1) {
					isNodeAfter = (nParents1 < nParents2) ? true : false;
					break;
				} else {
					isNodeAfter = isNodeAfterSibling(startNode1, prevChild1, prevChild2);
					break;
				}
			}
			$assign(prevChild1, startNode1);
			$assign(startNode1, getParentOfNode(startNode1));
			$assign(prevChild2, startNode2);
			$assign(startNode2, getParentOfNode(startNode2));
		}
	}
	return isNodeAfter;
}

bool DOM2Helper::isNodeTheSame($Node* node1, $Node* node2) {
	if ($instanceOf($DTMNodeProxy, node1) && $instanceOf($DTMNodeProxy, node2)) {
		return $nc(($cast($DTMNodeProxy, node1)))->equals(static_cast<$Node*>(static_cast<$Document*>($cast($DTMNodeProxy, node2))));
	} else {
		return (node1 == node2);
	}
}

$Node* DOM2Helper::getParentOfNode($Node* node) {
	$var($Node, parent, $nc(node)->getParentNode());
	if (parent == nullptr && ($Node::ATTRIBUTE_NODE == node->getNodeType())) {
		$assign(parent, $nc(($cast($Attr, node)))->getOwnerElement());
	}
	return parent;
}

bool DOM2Helper::isNodeAfterSibling($Node* parent, $Node* child1, $Node* child2) {
	$useLocalCurrentObjectStackCache();
	bool isNodeAfterSibling = false;
	int16_t child1type = $nc(child1)->getNodeType();
	int16_t child2type = $nc(child2)->getNodeType();
	if (($Node::ATTRIBUTE_NODE != child1type) && ($Node::ATTRIBUTE_NODE == child2type)) {
		isNodeAfterSibling = false;
	} else if (($Node::ATTRIBUTE_NODE == child1type) && ($Node::ATTRIBUTE_NODE != child2type)) {
		isNodeAfterSibling = true;
	} else if ($Node::ATTRIBUTE_NODE == child1type) {
		$var($NamedNodeMap, children, $nc(parent)->getAttributes());
		int32_t nNodes = $nc(children)->getLength();
		bool found1 = false;
		bool found2 = false;
		for (int32_t i = 0; i < nNodes; ++i) {
			$var($Node, child, children->item(i));
			if (child1 == child || isNodeTheSame(child1, child)) {
				if (found2) {
					isNodeAfterSibling = false;
					break;
				}
				found1 = true;
			} else if (child2 == child || isNodeTheSame(child2, child)) {
				if (found1) {
					isNodeAfterSibling = true;
					break;
				}
				found2 = true;
			}
		}
	} else {
		$var($Node, child, $nc(parent)->getFirstChild());
		bool found1 = false;
		bool found2 = false;
		while (nullptr != child) {
			if (child1 == child || isNodeTheSame(child1, child)) {
				if (found2) {
					isNodeAfterSibling = false;
					break;
				}
				found1 = true;
			} else if (child2 == child || isNodeTheSame(child2, child)) {
				if (found1) {
					isNodeAfterSibling = true;
					break;
				}
				found2 = true;
			}
			$assign(child, child->getNextSibling());
		}
	}
	return isNodeAfterSibling;
}

DOM2Helper::DOM2Helper() {
}

$Class* DOM2Helper::load$($String* name, bool initialize) {
	$loadClass(DOM2Helper, name, initialize, &_DOM2Helper_ClassInfo_, allocate$DOM2Helper);
	return class$;
}

$Class* DOM2Helper::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com