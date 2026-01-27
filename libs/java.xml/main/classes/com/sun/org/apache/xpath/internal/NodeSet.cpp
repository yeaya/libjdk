#include <com/sun/org/apache/xpath/internal/NodeSet.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/DOM2Helper.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef ER_CANNOT_CALL_SETSHOULDCACHENODE
#undef ER_NODESET_CANNOT_INDEX
#undef ER_NODESET_CANNOT_ITERATE
#undef ER_NODESET_NOT_MUTABLE
#undef SHOW_ALL
#undef SHOW_ENTITY_REFERENCE

using $NodeArray = $Array<::org::w3c::dom::Node>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DOM2Helper = ::com::sun::org::apache::xml::internal::utils::DOM2Helper;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _NodeSet_FieldInfo_[] = {
	{"m_next", "I", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSet, m_next)},
	{"m_mutable", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSet, m_mutable)},
	{"m_cacheNodes", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSet, m_cacheNodes)},
	{"m_last", "I", nullptr, $PRIVATE | $TRANSIENT, $field(NodeSet, m_last)},
	{"m_blocksize", "I", nullptr, $PRIVATE, $field(NodeSet, m_blocksize)},
	{"m_map", "[Lorg/w3c/dom/Node;", nullptr, 0, $field(NodeSet, m_map)},
	{"m_firstFree", "I", nullptr, $PROTECTED, $field(NodeSet, m_firstFree)},
	{"m_mapSize", "I", nullptr, $PRIVATE, $field(NodeSet, m_mapSize)},
	{}
};

$MethodInfo _NodeSet_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeSet, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(NodeSet, init$, void, int32_t)},
	{"<init>", "(Lorg/w3c/dom/NodeList;)V", nullptr, $PUBLIC, $method(NodeSet, init$, void, $NodeList*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/NodeSet;)V", nullptr, $PUBLIC, $method(NodeSet, init$, void, NodeSet*)},
	{"<init>", "(Lorg/w3c/dom/traversal/NodeIterator;)V", nullptr, $PUBLIC, $method(NodeSet, init$, void, $NodeIterator*)},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(NodeSet, init$, void, $Node*)},
	{"addElement", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addElement, void, $Node*)},
	{"addNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNode, void, $Node*)},
	{"addNodeInDocOrder", "(Lorg/w3c/dom/Node;ZLcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodeInDocOrder, int32_t, $Node*, bool, $XPathContext*)},
	{"addNodeInDocOrder", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodeInDocOrder, int32_t, $Node*, $XPathContext*)},
	{"addNodes", "(Lorg/w3c/dom/NodeList;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodes, void, $NodeList*)},
	{"addNodes", "(Lcom/sun/org/apache/xpath/internal/NodeSet;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodes, void, NodeSet*)},
	{"addNodes", "(Lorg/w3c/dom/traversal/NodeIterator;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodes, void, $NodeIterator*)},
	{"addNodesInDocOrder", "(Lorg/w3c/dom/NodeList;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodesInDocOrder, void, $NodeList*, $XPathContext*)},
	{"addNodesInDocOrder", "(Lorg/w3c/dom/traversal/NodeIterator;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, addNodesInDocOrder, void, $NodeIterator*, $XPathContext*)},
	{"addNodesInDocOrder", "(IIILorg/w3c/dom/NodeList;Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PRIVATE, $method(NodeSet, addNodesInDocOrder, bool, int32_t, int32_t, int32_t, $NodeList*, $XPathContext*)},
	{"appendNodes", "(Lcom/sun/org/apache/xpath/internal/NodeSet;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, appendNodes, void, NodeSet*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeSet, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneWithReset", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(NodeSet, cloneWithReset, $NodeIterator*), "java.lang.CloneNotSupportedException"},
	{"contains", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(NodeSet, contains, bool, $Node*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSet, detach, void)},
	{"elementAt", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, elementAt, $Node*, int32_t)},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, getCurrentNode, $Node*)},
	{"getCurrentPos", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSet, getCurrentPos, int32_t)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSet, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC, $virtualMethod(NodeSet, getFilter, $NodeFilter*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSet, getLast, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSet, getLength, int32_t)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, getRoot, $Node*)},
	{"getShouldCacheNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSet, getShouldCacheNodes, bool)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSet, getWhatToShow, int32_t)},
	{"indexOf", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC, $virtualMethod(NodeSet, indexOf, int32_t, $Node*, int32_t)},
	{"indexOf", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC, $virtualMethod(NodeSet, indexOf, int32_t, $Node*)},
	{"insertElementAt", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, insertElementAt, void, $Node*, int32_t)},
	{"insertNode", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, insertNode, void, $Node*, int32_t)},
	{"isFresh", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSet, isFresh, bool)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, item, $Node*, int32_t)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, nextNode, $Node*), "org.w3c.dom.DOMException"},
	{"peepOrNull", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(NodeSet, peepOrNull, $Node*)},
	{"peepTail", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(NodeSet, peepTail, $Node*)},
	{"peepTailSub1", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(NodeSet, peepTailSub1, $Node*)},
	{"pop", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(NodeSet, pop, $Node*)},
	{"popAndTop", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(NodeSet, popAndTop, $Node*)},
	{"popPair", "()V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, popPair, void)},
	{"popQuick", "()V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, popQuick, void)},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(NodeSet, previousNode, $Node*), "org.w3c.dom.DOMException"},
	{"push", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, push, void, $Node*)},
	{"pushPair", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, pushPair, void, $Node*, $Node*)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSet, removeAllElements, void)},
	{"removeElement", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, $virtualMethod(NodeSet, removeElement, bool, $Node*)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, removeElementAt, void, int32_t)},
	{"removeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, removeNode, void, $Node*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSet, reset, void)},
	{"runTo", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, runTo, void, int32_t)},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, setCurrentPos, void, int32_t)},
	{"setElementAt", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, setElementAt, void, $Node*, int32_t)},
	{"setLast", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, setLast, void, int32_t)},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeSet, setShouldCacheNodes, void, bool)},
	{"setTail", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, setTail, void, $Node*)},
	{"setTailSub1", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSet, setTailSub1, void, $Node*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSet, size, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.NodeSet",
	"java.lang.Object",
	"org.w3c.dom.NodeList,org.w3c.dom.traversal.NodeIterator,java.lang.Cloneable,com.sun.org.apache.xpath.internal.axes.ContextNodeList",
	_NodeSet_FieldInfo_,
	_NodeSet_MethodInfo_
};

$Object* allocate$NodeSet($Class* clazz) {
	return $of($alloc(NodeSet));
}

int32_t NodeSet::hashCode() {
	 return this->$NodeList::hashCode();
}

bool NodeSet::equals(Object$* arg0) {
	 return this->$NodeList::equals(arg0);
}

$String* NodeSet::toString() {
	 return this->$NodeList::toString();
}

void NodeSet::finalize() {
	this->$NodeList::finalize();
}

void NodeSet::init$() {
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_last = 0;
	this->m_firstFree = 0;
	this->m_blocksize = 32;
	this->m_mapSize = 0;
}

void NodeSet::init$(int32_t blocksize) {
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_last = 0;
	this->m_firstFree = 0;
	this->m_blocksize = blocksize;
	this->m_mapSize = 0;
}

void NodeSet::init$($NodeList* nodelist) {
	NodeSet::init$(32);
	addNodes(nodelist);
}

void NodeSet::init$(NodeSet* nodelist) {
	NodeSet::init$(32);
	addNodes(static_cast<$NodeIterator*>(nodelist));
}

void NodeSet::init$($NodeIterator* ni) {
	NodeSet::init$(32);
	addNodes(ni);
}

void NodeSet::init$($Node* node) {
	NodeSet::init$(32);
	addNode(node);
}

$Node* NodeSet::getRoot() {
	return nullptr;
}

$NodeIterator* NodeSet::cloneWithReset() {
	$var(NodeSet, clone, $cast(NodeSet, this->clone()));
	$nc(clone)->reset();
	return clone;
}

void NodeSet::reset() {
	this->m_next = 0;
}

int32_t NodeSet::getWhatToShow() {
	return (int32_t)($NodeFilter::SHOW_ALL & (uint32_t)~$NodeFilter::SHOW_ENTITY_REFERENCE);
}

$NodeFilter* NodeSet::getFilter() {
	return nullptr;
}

bool NodeSet::getExpandEntityReferences() {
	return true;
}

$Node* NodeSet::nextNode() {
	if ((this->m_next) < this->size()) {
		$var($Node, next, this->elementAt(this->m_next));
		++this->m_next;
		return next;
	} else {
		return nullptr;
	}
}

$Node* NodeSet::previousNode() {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_CANNOT_ITERATE, nullptr)));
	}
	if ((this->m_next - 1) > 0) {
		--this->m_next;
		return this->elementAt(this->m_next);
	} else {
		return nullptr;
	}
}

void NodeSet::detach() {
}

bool NodeSet::isFresh() {
	return (this->m_next == 0);
}

void NodeSet::runTo(int32_t index) {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_CANNOT_INDEX, nullptr)));
	}
	if ((index >= 0) && (this->m_next < this->m_firstFree)) {
		this->m_next = index;
	} else {
		this->m_next = this->m_firstFree - 1;
	}
}

$Node* NodeSet::item(int32_t index) {
	runTo(index);
	return this->elementAt(index);
}

int32_t NodeSet::getLength() {
	runTo(-1);
	return this->size();
}

void NodeSet::addNode($Node* n) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	this->addElement(n);
}

void NodeSet::insertNode($Node* n, int32_t pos) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	insertElementAt(n, pos);
}

void NodeSet::removeNode($Node* n) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	this->removeElement(n);
}

void NodeSet::addNodes($NodeList* nodelist) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if (nullptr != nodelist) {
		int32_t nChildren = nodelist->getLength();
		for (int32_t i = 0; i < nChildren; ++i) {
			$var($Node, obj, nodelist->item(i));
			if (nullptr != obj) {
				addElement(obj);
			}
		}
	}
}

void NodeSet::addNodes(NodeSet* ns) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	addNodes(static_cast<$NodeIterator*>(ns));
}

void NodeSet::addNodes($NodeIterator* iterator) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if (nullptr != iterator) {
		$var($Node, obj, nullptr);
		while (nullptr != ($assign(obj, iterator->nextNode()))) {
			addElement(obj);
		}
	}
}

void NodeSet::addNodesInDocOrder($NodeList* nodelist, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	int32_t nChildren = $nc(nodelist)->getLength();
	for (int32_t i = 0; i < nChildren; ++i) {
		$var($Node, node, nodelist->item(i));
		if (nullptr != node) {
			addNodeInDocOrder(node, support);
		}
	}
}

void NodeSet::addNodesInDocOrder($NodeIterator* iterator, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	$var($Node, node, nullptr);
	while (nullptr != ($assign(node, $nc(iterator)->nextNode()))) {
		addNodeInDocOrder(node, support);
	}
}

bool NodeSet::addNodesInDocOrder(int32_t start, int32_t end, int32_t testIndex, $NodeList* nodelist, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	bool foundit = false;
	int32_t i = 0;
	$var($Node, node, $nc(nodelist)->item(testIndex));
	for (i = end; i >= start; --i) {
		$var($Node, child, elementAt(i));
		if (child == node) {
			i = -2;
			break;
		}
		if (!$DOM2Helper::isNodeAfter(node, child)) {
			insertElementAt(node, i + 1);
			--testIndex;
			if (testIndex > 0) {
				bool foundPrev = addNodesInDocOrder(0, i, testIndex, nodelist, support);
				if (!foundPrev) {
					addNodesInDocOrder(i, size() - 1, testIndex, nodelist, support);
				}
			}
			break;
		}
	}
	if (i == -1) {
		insertElementAt(node, 0);
	}
	return foundit;
}

int32_t NodeSet::addNodeInDocOrder($Node* node, bool test, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	int32_t insertIndex = -1;
	if (test) {
		int32_t size = this->size();
		int32_t i = 0;
		for (i = size - 1; i >= 0; --i) {
			$var($Node, child, elementAt(i));
			if (child == node) {
				i = -2;
				break;
			}
			if (!$DOM2Helper::isNodeAfter(node, child)) {
				break;
			}
		}
		if (i != -2) {
			insertIndex = i + 1;
			insertElementAt(node, insertIndex);
		}
	} else {
		insertIndex = this->size();
		bool foundit = false;
		for (int32_t i = 0; i < insertIndex; ++i) {
			if ($nc($of($(this->item(i))))->equals(node)) {
				foundit = true;
				break;
			}
		}
		if (!foundit) {
			addElement(node);
		}
	}
	return insertIndex;
}

int32_t NodeSet::addNodeInDocOrder($Node* node, $XPathContext* support) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	return addNodeInDocOrder(node, true, support);
}

int32_t NodeSet::getCurrentPos() {
	return this->m_next;
}

void NodeSet::setCurrentPos(int32_t i) {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_CANNOT_INDEX, nullptr)));
	}
	this->m_next = i;
}

$Node* NodeSet::getCurrentNode() {
	$useLocalCurrentObjectStackCache();
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_CANNOT_INDEX, nullptr)));
	}
	int32_t saved = this->m_next;
	$var($Node, n, (this->m_next < this->m_firstFree) ? elementAt(this->m_next) : ($Node*)nullptr);
	this->m_next = saved;
	return n;
}

bool NodeSet::getShouldCacheNodes() {
	return this->m_cacheNodes;
}

void NodeSet::setShouldCacheNodes(bool b) {
	if (!isFresh()) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_CANNOT_CALL_SETSHOULDCACHENODE, nullptr)));
	}
	this->m_cacheNodes = b;
	this->m_mutable = true;
}

int32_t NodeSet::getLast() {
	return this->m_last;
}

void NodeSet::setLast(int32_t last) {
	this->m_last = last;
}

$Object* NodeSet::clone() {
	$var(NodeSet, clone, $cast(NodeSet, $NodeList::clone()));
	if ((nullptr != this->m_map) && (this->m_map == $nc(clone)->m_map)) {
		$set(clone, m_map, $new($NodeArray, $nc(this->m_map)->length));
		$System::arraycopy(this->m_map, 0, clone->m_map, 0, $nc(this->m_map)->length);
	}
	return $of(clone);
}

int32_t NodeSet::size() {
	return this->m_firstFree;
}

void NodeSet::addElement($Node* value) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		if (nullptr == this->m_map) {
			$set(this, m_map, $new($NodeArray, this->m_blocksize));
			this->m_mapSize = this->m_blocksize;
		} else {
			this->m_mapSize += this->m_blocksize;
			$var($NodeArray, newMap, $new($NodeArray, this->m_mapSize));
			$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
			$set(this, m_map, newMap);
		}
	}
	$nc(this->m_map)->set(this->m_firstFree, value);
	++this->m_firstFree;
}

void NodeSet::push($Node* value) {
	int32_t ff = this->m_firstFree;
	if ((ff + 1) >= this->m_mapSize) {
		if (nullptr == this->m_map) {
			$set(this, m_map, $new($NodeArray, this->m_blocksize));
			this->m_mapSize = this->m_blocksize;
		} else {
			this->m_mapSize += this->m_blocksize;
			$var($NodeArray, newMap, $new($NodeArray, this->m_mapSize));
			$System::arraycopy(this->m_map, 0, newMap, 0, ff + 1);
			$set(this, m_map, newMap);
		}
	}
	$nc(this->m_map)->set(ff, value);
	++ff;
	this->m_firstFree = ff;
}

$Node* NodeSet::pop() {
	--this->m_firstFree;
	$var($Node, n, $nc(this->m_map)->get(this->m_firstFree));
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	return n;
}

$Node* NodeSet::popAndTop() {
	--this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	return (this->m_firstFree == 0) ? ($Node*)nullptr : $nc(this->m_map)->get(this->m_firstFree - 1);
}

void NodeSet::popQuick() {
	--this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
}

$Node* NodeSet::peepOrNull() {
	return ((nullptr != this->m_map) && (this->m_firstFree > 0)) ? $nc(this->m_map)->get(this->m_firstFree - 1) : ($Node*)nullptr;
}

void NodeSet::pushPair($Node* v1, $Node* v2) {
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($NodeArray, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	} else if ((this->m_firstFree + 2) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($NodeArray, newMap, $new($NodeArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, v1);
	$nc(this->m_map)->set(this->m_firstFree + 1, v2);
	this->m_firstFree += 2;
}

void NodeSet::popPair() {
	this->m_firstFree -= 2;
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	$nc(this->m_map)->set(this->m_firstFree + 1, nullptr);
}

void NodeSet::setTail($Node* n) {
	$nc(this->m_map)->set(this->m_firstFree - 1, n);
}

void NodeSet::setTailSub1($Node* n) {
	$nc(this->m_map)->set(this->m_firstFree - 2, n);
}

$Node* NodeSet::peepTail() {
	return $nc(this->m_map)->get(this->m_firstFree - 1);
}

$Node* NodeSet::peepTailSub1() {
	return $nc(this->m_map)->get(this->m_firstFree - 2);
}

void NodeSet::insertElementAt($Node* value, int32_t at) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($NodeArray, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	} else if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($NodeArray, newMap, $new($NodeArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	if (at <= (this->m_firstFree - 1)) {
		$System::arraycopy(this->m_map, at, this->m_map, at + 1, this->m_firstFree - at);
	}
	$nc(this->m_map)->set(at, value);
	++this->m_firstFree;
}

void NodeSet::appendNodes(NodeSet* nodes) {
	int32_t nNodes = $nc(nodes)->size();
	if (nullptr == this->m_map) {
		this->m_mapSize = nNodes + this->m_blocksize;
		$set(this, m_map, $new($NodeArray, this->m_mapSize));
	} else if ((this->m_firstFree + nNodes) >= this->m_mapSize) {
		this->m_mapSize += (nNodes + this->m_blocksize);
		$var($NodeArray, newMap, $new($NodeArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + nNodes);
		$set(this, m_map, newMap);
	}
	$System::arraycopy(nodes->m_map, 0, this->m_map, this->m_firstFree, nNodes);
	this->m_firstFree += nNodes;
}

void NodeSet::removeAllElements() {
	if (nullptr == this->m_map) {
		return;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$nc(this->m_map)->set(i, nullptr);
	}
	this->m_firstFree = 0;
}

bool NodeSet::removeElement($Node* s) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if (nullptr == this->m_map) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$var($Node, node, $nc(this->m_map)->get(i));
		if ((nullptr != node) && $of(node)->equals(s)) {
			if (i < this->m_firstFree - 1) {
				$System::arraycopy(this->m_map, i + 1, this->m_map, i, this->m_firstFree - i - 1);
			}
			--this->m_firstFree;
			$nc(this->m_map)->set(this->m_firstFree, nullptr);
			return true;
		}
	}
	return false;
}

void NodeSet::removeElementAt(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->m_map) {
		return;
	}
	if (i >= this->m_firstFree) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({$$str(i), " >= "_s, $$str(this->m_firstFree)}));
	} else if (i < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, i);
	}
	if (i < this->m_firstFree - 1) {
		$System::arraycopy(this->m_map, i + 1, this->m_map, i, this->m_firstFree - i - 1);
	}
	--this->m_firstFree;
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
}

void NodeSet::setElementAt($Node* node, int32_t index) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESET_NOT_MUTABLE, nullptr)));
	}
	if (nullptr == this->m_map) {
		$set(this, m_map, $new($NodeArray, this->m_blocksize));
		this->m_mapSize = this->m_blocksize;
	}
	$nc(this->m_map)->set(index, node);
}

$Node* NodeSet::elementAt(int32_t i) {
	if (nullptr == this->m_map) {
		return nullptr;
	}
	return $nc(this->m_map)->get(i);
}

bool NodeSet::contains($Node* s) {
	$useLocalCurrentObjectStackCache();
	runTo(-1);
	if (nullptr == this->m_map) {
		return false;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$var($Node, node, $nc(this->m_map)->get(i));
		if ((nullptr != node) && $of(node)->equals(s)) {
			return true;
		}
	}
	return false;
}

int32_t NodeSet::indexOf($Node* elem, int32_t index) {
	$useLocalCurrentObjectStackCache();
	runTo(-1);
	if (nullptr == this->m_map) {
		return -1;
	}
	for (int32_t i = index; i < this->m_firstFree; ++i) {
		$var($Node, node, $nc(this->m_map)->get(i));
		if ((nullptr != node) && $of(node)->equals(elem)) {
			return i;
		}
	}
	return -1;
}

int32_t NodeSet::indexOf($Node* elem) {
	$useLocalCurrentObjectStackCache();
	runTo(-1);
	if (nullptr == this->m_map) {
		return -1;
	}
	for (int32_t i = 0; i < this->m_firstFree; ++i) {
		$var($Node, node, $nc(this->m_map)->get(i));
		if ((nullptr != node) && $of(node)->equals(elem)) {
			return i;
		}
	}
	return -1;
}

NodeSet::NodeSet() {
}

$Class* NodeSet::load$($String* name, bool initialize) {
	$loadClass(NodeSet, name, initialize, &_NodeSet_ClassInfo_, allocate$NodeSet);
	return class$;
}

$Class* NodeSet::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com