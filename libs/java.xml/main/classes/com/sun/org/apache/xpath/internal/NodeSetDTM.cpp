#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef ER_CANNOT_CALL_SETSHOULDCACHENODE
#undef ER_NODESETDTM_CANNOT_INDEX
#undef ER_NODESETDTM_CANNOT_ITERATE
#undef ER_NODESETDTM_NOT_MUTABLE
#undef NULL
#undef SHOW_ALL
#undef SHOW_ENTITY_REFERENCE

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $NodeVector = ::com::sun::org::apache::xml::internal::utils::NodeVector;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _NodeSetDTM_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NodeSetDTM, serialVersionUID)},
	{"m_manager", "Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, 0, $field(NodeSetDTM, m_manager)},
	{"m_next", "I", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSetDTM, m_next)},
	{"m_mutable", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSetDTM, m_mutable)},
	{"m_cacheNodes", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(NodeSetDTM, m_cacheNodes)},
	{"m_root", "I", nullptr, $PROTECTED, $field(NodeSetDTM, m_root)},
	{"m_last", "I", nullptr, $PRIVATE | $TRANSIENT, $field(NodeSetDTM, m_last)},
	{}
};

$MethodInfo _NodeSetDTM_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, $DTMManager*)},
	{"<init>", "(IILcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, int32_t, int32_t, $DTMManager*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/NodeSetDTM;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, NodeSetDTM*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, $DTMIterator*)},
	{"<init>", "(Lorg/w3c/dom/traversal/NodeIterator;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, $NodeIterator*, $XPathContext*)},
	{"<init>", "(Lorg/w3c/dom/NodeList;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, $NodeList*, $XPathContext*)},
	{"<init>", "(ILcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(NodeSetDTM, init$, void, int32_t, $DTMManager*)},
	{"addElement", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addElement, void, int32_t)},
	{"addNode", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addNode, void, int32_t)},
	{"addNodeInDocOrder", "(IZLcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addNodeInDocOrder, int32_t, int32_t, bool, $XPathContext*)},
	{"addNodeInDocOrder", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addNodeInDocOrder, int32_t, int32_t, $XPathContext*)},
	{"addNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addNodes, void, $DTMIterator*)},
	{"addNodesInDocOrder", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, addNodesInDocOrder, void, $DTMIterator*, $XPathContext*)},
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, allowDetachToRelease, void, bool)},
	{"appendNodes", "(Lcom/sun/org/apache/xml/internal/utils/NodeVector;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, appendNodes, void, $NodeVector*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, cloneWithReset, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"contains", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, contains, bool, int32_t)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, detach, void)},
	{"elementAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, elementAt, int32_t, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getAxis, int32_t)},
	{"getCurrentNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getCurrentNode, int32_t)},
	{"getCurrentPos", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getCurrentPos, int32_t)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getDTM, $DTM*, int32_t)},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getDTMManager, $DTMManager*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getExpandEntityReferences, bool)},
	{"getFilter", "()Lcom/sun/org/apache/xml/internal/dtm/DTMFilter;", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getFilter, $DTMFilter*)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getLast, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getLength, int32_t)},
	{"getRoot", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getRoot, int32_t)},
	{"getShouldCacheNodes", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getShouldCacheNodes, bool)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, getWhatToShow, int32_t)},
	{"indexOf", "(II)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, indexOf, int32_t, int32_t, int32_t)},
	{"indexOf", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, indexOf, int32_t, int32_t)},
	{"insertElementAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, insertElementAt, void, int32_t, int32_t)},
	{"insertNode", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, insertNode, void, int32_t, int32_t)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, isDocOrdered, bool)},
	{"isFresh", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, isFresh, bool)},
	{"isMutable", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, isMutable, bool)},
	{"item", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, item, int32_t, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, nextNode, int32_t)},
	{"previousNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, previousNode, int32_t)},
	{"removeAllElements", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, removeAllElements, void)},
	{"removeElement", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, removeElement, bool, int32_t)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, removeElementAt, void, int32_t)},
	{"removeNode", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, removeNode, void, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, reset, void)},
	{"runTo", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, runTo, void, int32_t)},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setCurrentPos, void, int32_t)},
	{"setElementAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setElementAt, void, int32_t, int32_t)},
	{"setEnvironment", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setEnvironment, void, Object$*)},
	{"setItem", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setItem, void, int32_t, int32_t)},
	{"setLast", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setLast, void, int32_t)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setRoot, void, int32_t, Object$*)},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, setShouldCacheNodes, void, bool)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSetDTM, size, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeSetDTM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.NodeSetDTM",
	"com.sun.org.apache.xml.internal.utils.NodeVector",
	"com.sun.org.apache.xml.internal.dtm.DTMIterator",
	_NodeSetDTM_FieldInfo_,
	_NodeSetDTM_MethodInfo_
};

$Object* allocate$NodeSetDTM($Class* clazz) {
	return $of($alloc(NodeSetDTM));
}

int32_t NodeSetDTM::hashCode() {
	 return this->$NodeVector::hashCode();
}

bool NodeSetDTM::equals(Object$* arg0) {
	 return this->$NodeVector::equals(arg0);
}

$String* NodeSetDTM::toString() {
	 return this->$NodeVector::toString();
}

void NodeSetDTM::finalize() {
	this->$NodeVector::finalize();
}

void NodeSetDTM::init$($DTMManager* dtmManager) {
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, dtmManager);
}

void NodeSetDTM::init$(int32_t blocksize, int32_t dummy, $DTMManager* dtmManager) {
	$NodeVector::init$(blocksize);
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, dtmManager);
}

void NodeSetDTM::init$(NodeSetDTM* nodelist) {
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, $nc(nodelist)->getDTMManager());
	this->m_root = nodelist->getRoot();
	addNodes(static_cast<$DTMIterator*>(nodelist));
}

void NodeSetDTM::init$($DTMIterator* ni) {
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, $nc(ni)->getDTMManager());
	this->m_root = ni->getRoot();
	addNodes(ni);
}

void NodeSetDTM::init$($NodeIterator* iterator, $XPathContext* xctxt) {
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$var($Node, node, nullptr);
	$set(this, m_manager, $nc(xctxt)->getDTMManager());
	while (nullptr != ($assign(node, $nc(iterator)->nextNode()))) {
		int32_t handle = xctxt->getDTMHandleFromNode(node);
		addNodeInDocOrder(handle, xctxt);
	}
}

void NodeSetDTM::init$($NodeList* nodeList, $XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, $nc(xctxt)->getDTMManager());
	int32_t n = $nc(nodeList)->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodeList->item(i));
		int32_t handle = xctxt->getDTMHandleFromNode(node);
		addNode(handle);
	}
}

void NodeSetDTM::init$(int32_t node, $DTMManager* dtmManager) {
	$NodeVector::init$();
	this->m_next = 0;
	this->m_mutable = true;
	this->m_cacheNodes = true;
	this->m_root = $DTM::NULL;
	this->m_last = 0;
	$set(this, m_manager, dtmManager);
	addNode(node);
}

void NodeSetDTM::setEnvironment(Object$* environment) {
}

int32_t NodeSetDTM::getRoot() {
	if ($DTM::NULL == this->m_root) {
		if (size() > 0) {
			return item(0);
		} else {
			return $DTM::NULL;
		}
	} else {
		return this->m_root;
	}
}

void NodeSetDTM::setRoot(int32_t context, Object$* environment) {
}

$Object* NodeSetDTM::clone() {
	$var(NodeSetDTM, clone, $cast(NodeSetDTM, $NodeVector::clone()));
	return $of(clone);
}

$DTMIterator* NodeSetDTM::cloneWithReset() {
	$var(NodeSetDTM, clone, $cast(NodeSetDTM, this->clone()));
	$nc(clone)->reset();
	return clone;
}

void NodeSetDTM::reset() {
	this->m_next = 0;
}

int32_t NodeSetDTM::getWhatToShow() {
	return (int32_t)($DTMFilter::SHOW_ALL & (uint32_t)~$DTMFilter::SHOW_ENTITY_REFERENCE);
}

$DTMFilter* NodeSetDTM::getFilter() {
	return nullptr;
}

bool NodeSetDTM::getExpandEntityReferences() {
	return true;
}

$DTM* NodeSetDTM::getDTM(int32_t nodeHandle) {
	return $nc(this->m_manager)->getDTM(nodeHandle);
}

$DTMManager* NodeSetDTM::getDTMManager() {
	return this->m_manager;
}

int32_t NodeSetDTM::nextNode() {
	if ((this->m_next) < this->size()) {
		int32_t next = this->elementAt(this->m_next);
		++this->m_next;
		return next;
	} else {
		return $DTM::NULL;
	}
}

int32_t NodeSetDTM::previousNode() {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_CANNOT_ITERATE, nullptr)));
	}
	if ((this->m_next - 1) > 0) {
		--this->m_next;
		return this->elementAt(this->m_next);
	} else {
		return $DTM::NULL;
	}
}

void NodeSetDTM::detach() {
}

void NodeSetDTM::allowDetachToRelease(bool allowRelease) {
}

bool NodeSetDTM::isFresh() {
	return (this->m_next == 0);
}

void NodeSetDTM::runTo(int32_t index) {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_CANNOT_INDEX, nullptr)));
	}
	if ((index >= 0) && (this->m_next < this->m_firstFree)) {
		this->m_next = index;
	} else {
		this->m_next = this->m_firstFree - 1;
	}
}

int32_t NodeSetDTM::item(int32_t index) {
	runTo(index);
	return this->elementAt(index);
}

int32_t NodeSetDTM::getLength() {
	runTo(-1);
	return this->size();
}

void NodeSetDTM::addNode(int32_t n) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	this->addElement(n);
}

void NodeSetDTM::insertNode(int32_t n, int32_t pos) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	insertElementAt(n, pos);
}

void NodeSetDTM::removeNode(int32_t n) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	this->removeElement(n);
}

void NodeSetDTM::addNodes($DTMIterator* iterator) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	if (nullptr != iterator) {
		int32_t obj = 0;
		while ($DTM::NULL != (obj = iterator->nextNode())) {
			addElement(obj);
		}
	}
}

void NodeSetDTM::addNodesInDocOrder($DTMIterator* iterator, $XPathContext* support) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	int32_t node = 0;
	while ($DTM::NULL != (node = $nc(iterator)->nextNode())) {
		addNodeInDocOrder(node, support);
	}
}

int32_t NodeSetDTM::addNodeInDocOrder(int32_t node, bool test, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	int32_t insertIndex = -1;
	if (test) {
		int32_t size = this->size();
		int32_t i = 0;
		for (i = size - 1; i >= 0; --i) {
			int32_t child = elementAt(i);
			if (child == node) {
				i = -2;
				break;
			}
			$var($DTM, dtm, $nc(support)->getDTM(node));
			if (!$nc(dtm)->isNodeAfter(node, child)) {
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
			if (i == node) {
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

int32_t NodeSetDTM::addNodeInDocOrder(int32_t node, $XPathContext* support) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	return addNodeInDocOrder(node, true, support);
}

int32_t NodeSetDTM::size() {
	return $NodeVector::size();
}

void NodeSetDTM::addElement(int32_t value) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::addElement(value);
}

void NodeSetDTM::insertElementAt(int32_t value, int32_t at) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::insertElementAt(value, at);
}

void NodeSetDTM::appendNodes($NodeVector* nodes) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::appendNodes(nodes);
}

void NodeSetDTM::removeAllElements() {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::removeAllElements();
}

bool NodeSetDTM::removeElement(int32_t s) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	return $NodeVector::removeElement(s);
}

void NodeSetDTM::removeElementAt(int32_t i) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::removeElementAt(i);
}

void NodeSetDTM::setElementAt(int32_t node, int32_t index) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::setElementAt(node, index);
}

void NodeSetDTM::setItem(int32_t node, int32_t index) {
	if (!this->m_mutable) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, nullptr)));
	}
	$NodeVector::setElementAt(node, index);
}

int32_t NodeSetDTM::elementAt(int32_t i) {
	runTo(i);
	return $NodeVector::elementAt(i);
}

bool NodeSetDTM::contains(int32_t s) {
	runTo(-1);
	return $NodeVector::contains(s);
}

int32_t NodeSetDTM::indexOf(int32_t elem, int32_t index) {
	runTo(-1);
	return $NodeVector::indexOf(elem, index);
}

int32_t NodeSetDTM::indexOf(int32_t elem) {
	runTo(-1);
	return $NodeVector::indexOf(elem);
}

int32_t NodeSetDTM::getCurrentPos() {
	return this->m_next;
}

void NodeSetDTM::setCurrentPos(int32_t i) {
	if (!this->m_cacheNodes) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NODESETDTM_CANNOT_INDEX, nullptr)));
	}
	this->m_next = i;
}

int32_t NodeSetDTM::getCurrentNode() {
	if (!this->m_cacheNodes) {
		$throwNew($RuntimeException, "This NodeSetDTM can not do indexing or counting functions!"_s);
	}
	int32_t saved = this->m_next;
	int32_t current = (this->m_next > 0) ? this->m_next - 1 : this->m_next;
	int32_t n = (current < this->m_firstFree) ? elementAt(current) : $DTM::NULL;
	this->m_next = saved;
	return n;
}

bool NodeSetDTM::getShouldCacheNodes() {
	return this->m_cacheNodes;
}

void NodeSetDTM::setShouldCacheNodes(bool b) {
	if (!isFresh()) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_CANNOT_CALL_SETSHOULDCACHENODE, nullptr)));
	}
	this->m_cacheNodes = b;
	this->m_mutable = true;
}

bool NodeSetDTM::isMutable() {
	return this->m_mutable;
}

int32_t NodeSetDTM::getLast() {
	return this->m_last;
}

void NodeSetDTM::setLast(int32_t last) {
	this->m_last = last;
}

bool NodeSetDTM::isDocOrdered() {
	return true;
}

int32_t NodeSetDTM::getAxis() {
	return -1;
}

NodeSetDTM::NodeSetDTM() {
}

$Class* NodeSetDTM::load$($String* name, bool initialize) {
	$loadClass(NodeSetDTM, name, initialize, &_NodeSetDTM_ClassInfo_, allocate$NodeSetDTM);
	return class$;
}

$Class* NodeSetDTM::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com