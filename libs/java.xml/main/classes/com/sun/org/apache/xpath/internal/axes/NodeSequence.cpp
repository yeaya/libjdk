#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NULL
#undef SHOW_ALL
#undef SHOW_ENTITY_REFERENCE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $NodeVector = ::com::sun::org::apache::xml::internal::utils::NodeVector;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $NodeSequence$IteratorCache = ::com::sun::org::apache::xpath::internal::axes::NodeSequence$IteratorCache;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _NodeSequence_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NodeSequence, serialVersionUID)},
	{"m_last", "I", nullptr, $PROTECTED, $field(NodeSequence, m_last)},
	{"m_next", "I", nullptr, $PROTECTED, $field(NodeSequence, m_next)},
	{"m_cache", "Lcom/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache;", nullptr, $PRIVATE, $field(NodeSequence, m_cache)},
	{"m_iter", "Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PROTECTED, $field(NodeSequence, m_iter)},
	{"m_dtmMgr", "Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PROTECTED, $field(NodeSequence, m_dtmMgr)},
	{}
};

$MethodInfo _NodeSequence_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;ILcom/sun/org/apache/xpath/internal/XPathContext;Z)V", nullptr, $PRIVATE, $method(NodeSequence, init$, void, $DTMIterator*, int32_t, $XPathContext*, bool)},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(NodeSequence, init$, void, Object$*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PRIVATE, $method(NodeSequence, init$, void, $DTMManager*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeSequence, init$, void)},
	{"SetVector", "(Lcom/sun/org/apache/xml/internal/utils/NodeVector;)V", nullptr, $PROTECTED, $virtualMethod(NodeSequence, SetVector, void, $NodeVector*)},
	{"addNodeInDocOrder", "(I)I", nullptr, $PROTECTED, $virtualMethod(NodeSequence, addNodeInDocOrder, int32_t, int32_t)},
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, allowDetachToRelease, void, bool)},
	{"cacheComplete", "()Z", nullptr, $PRIVATE, $method(NodeSequence, cacheComplete, bool)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NodeSequence, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(NodeSequence, cloneWithReset, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, detach, void)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(NodeSequence, fixupVariables, void, $List*, int32_t)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getAnalysisBits, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getAxis, int32_t)},
	{"getCache", "()Lcom/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache;", nullptr, $PRIVATE, $method(NodeSequence, getCache, $NodeSequence$IteratorCache*)},
	{"getContainedIter", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $FINAL, $method(NodeSequence, getContainedIter, $DTMIterator*)},
	{"getCurrentNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getCurrentNode, int32_t)},
	{"getCurrentPos", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getCurrentPos, int32_t)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getDTM, $DTM*, int32_t)},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getDTMManager, $DTMManager*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getExpandEntityReferences, bool)},
	{"getIteratorCache", "()Lcom/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache;", nullptr, $PROTECTED, $virtualMethod(NodeSequence, getIteratorCache, $NodeSequence$IteratorCache*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getLength, int32_t)},
	{"getRoot", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getRoot, int32_t)},
	{"getVector", "()Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, $PROTECTED, $virtualMethod(NodeSequence, getVector, $NodeVector*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, getWhatToShow, int32_t)},
	{"hasCache", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSequence, hasCache, bool)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSequence, isDocOrdered, bool)},
	{"isFresh", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSequence, isFresh, bool)},
	{"isMutable", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSequence, isMutable, bool)},
	{"item", "(I)I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, item, int32_t, int32_t)},
	{"markCacheComplete", "()V", nullptr, $PRIVATE, $method(NodeSequence, markCacheComplete, void)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, nextNode, int32_t)},
	{"previousNode", "()I", nullptr, $PUBLIC, $virtualMethod(NodeSequence, previousNode, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, reset, void)},
	{"runTo", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, runTo, void, int32_t)},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, setCurrentPos, void, int32_t)},
	{"setItem", "(II)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, setItem, void, int32_t, int32_t)},
	{"setIter", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSequence, setIter, void, $DTMIterator*)},
	{"setObject", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(NodeSequence, setObject, void, Object$*)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, setRoot, void, int32_t, Object$*)},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC, $virtualMethod(NodeSequence, setShouldCacheNodes, void, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NodeSequence_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.NodeSequence$IteratorCache", "com.sun.org.apache.xpath.internal.axes.NodeSequence", "IteratorCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NodeSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.NodeSequence",
	"com.sun.org.apache.xpath.internal.objects.XObject",
	"com.sun.org.apache.xml.internal.dtm.DTMIterator,com.sun.org.apache.xpath.internal.axes.PathComponent",
	_NodeSequence_FieldInfo_,
	_NodeSequence_MethodInfo_,
	nullptr,
	nullptr,
	_NodeSequence_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.NodeSequence$IteratorCache"
};

$Object* allocate$NodeSequence($Class* clazz) {
	return $of($alloc(NodeSequence));
}

$String* NodeSequence::toString() {
	 return this->$XObject::toString();
}

int32_t NodeSequence::hashCode() {
	 return this->$XObject::hashCode();
}

bool NodeSequence::equals(Object$* arg0) {
	 return this->$XObject::equals(arg0);
}

void NodeSequence::finalize() {
	this->$XObject::finalize();
}

$NodeVector* NodeSequence::getVector() {
	$var($NodeVector, nv, (this->m_cache != nullptr) ? $nc(this->m_cache)->getVector() : ($NodeVector*)nullptr);
	return nv;
}

$NodeSequence$IteratorCache* NodeSequence::getCache() {
	return this->m_cache;
}

void NodeSequence::SetVector($NodeVector* v) {
	setObject(v);
}

bool NodeSequence::hasCache() {
	$var($NodeVector, nv, getVector());
	return (nv != nullptr);
}

bool NodeSequence::cacheComplete() {
	bool complete = false;
	if (this->m_cache != nullptr) {
		complete = $nc(this->m_cache)->isComplete();
	} else {
		complete = false;
	}
	return complete;
}

void NodeSequence::markCacheComplete() {
	$var($NodeVector, nv, getVector());
	if (nv != nullptr) {
		$nc(this->m_cache)->setCacheComplete(true);
	}
}

void NodeSequence::setIter($DTMIterator* iter) {
	$set(this, m_iter, iter);
}

$DTMIterator* NodeSequence::getContainedIter() {
	return this->m_iter;
}

void NodeSequence::init$($DTMIterator* iter, int32_t context, $XPathContext* xctxt, bool shouldCacheNodes) {
	$XObject::init$();
	this->m_last = -1;
	this->m_next = 0;
	setIter(iter);
	setRoot(context, xctxt);
	setShouldCacheNodes(shouldCacheNodes);
}

void NodeSequence::init$(Object$* nodeVector) {
	$XObject::init$(nodeVector);
	this->m_last = -1;
	this->m_next = 0;
	if ($instanceOf($NodeVector, nodeVector)) {
		SetVector($cast($NodeVector, nodeVector));
	}
	if (nullptr != nodeVector) {
		assertion($instanceOf($NodeVector, nodeVector), "Must have a NodeVector as the object for NodeSequence!"_s);
		if ($instanceOf($DTMIterator, nodeVector)) {
			setIter($cast($DTMIterator, nodeVector));
			this->m_last = $nc(($cast($DTMIterator, nodeVector)))->getLength();
		}
	}
}

void NodeSequence::init$($DTMManager* dtmMgr) {
	$XObject::init$($$new($NodeVector));
	this->m_last = -1;
	this->m_next = 0;
	this->m_last = 0;
	$set(this, m_dtmMgr, dtmMgr);
}

void NodeSequence::init$() {
	$XObject::init$();
	this->m_last = -1;
	this->m_next = 0;
	return;
}

$DTM* NodeSequence::getDTM(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	$var($DTMManager, mgr, getDTMManager());
	if (nullptr != mgr) {
		return $nc($(getDTMManager()))->getDTM(nodeHandle);
	} else {
		assertion(false, "Can not get a DTM Unless a DTMManager has been set!"_s);
		return nullptr;
	}
}

$DTMManager* NodeSequence::getDTMManager() {
	return this->m_dtmMgr;
}

int32_t NodeSequence::getRoot() {
	if (nullptr != this->m_iter) {
		return $nc(this->m_iter)->getRoot();
	} else {
		return $DTM::NULL;
	}
}

void NodeSequence::setRoot(int32_t nodeHandle, Object$* environment) {
	if (nodeHandle == $DTM::NULL) {
		$throwNew($RuntimeException, "Unable to evaluate expression using this context"_s);
	}
	if (nullptr != this->m_iter) {
		$var($XPathContext, xctxt, $cast($XPathContext, environment));
		$set(this, m_dtmMgr, $nc(xctxt)->getDTMManager());
		$nc(this->m_iter)->setRoot(nodeHandle, environment);
		if (!$nc(this->m_iter)->isDocOrdered()) {
			if (!hasCache()) {
				setShouldCacheNodes(true);
			}
			runTo(-1);
			this->m_next = 0;
		}
	} else {
		assertion(false, "Can not setRoot on a non-iterated NodeSequence!"_s);
	}
}

void NodeSequence::reset() {
	this->m_next = 0;
}

int32_t NodeSequence::getWhatToShow() {
	return hasCache() ? ((int32_t)($DTMFilter::SHOW_ALL & (uint32_t)~$DTMFilter::SHOW_ENTITY_REFERENCE)) : $nc(this->m_iter)->getWhatToShow();
}

bool NodeSequence::getExpandEntityReferences() {
	if (nullptr != this->m_iter) {
		return $nc(this->m_iter)->getExpandEntityReferences();
	} else {
		return true;
	}
}

int32_t NodeSequence::nextNode() {
	$useLocalCurrentObjectStackCache();
	$var($NodeVector, vec, getVector());
	if (nullptr != vec) {
		if (this->m_next < vec->size()) {
			int32_t next = vec->elementAt(this->m_next);
			++this->m_next;
			return next;
		} else if (cacheComplete() || (-1 != this->m_last) || (nullptr == this->m_iter)) {
			++this->m_next;
			return $DTM::NULL;
		}
	}
	if (nullptr == this->m_iter) {
		return $DTM::NULL;
	}
	int32_t next = $nc(this->m_iter)->nextNode();
	if ($DTM::NULL != next) {
		if (hasCache()) {
			if ($nc(this->m_iter)->isDocOrdered()) {
				$nc($(getVector()))->addElement(next);
				++this->m_next;
			} else {
				int32_t insertIndex = addNodeInDocOrder(next);
				if (insertIndex >= 0) {
					++this->m_next;
				}
			}
		} else {
			++this->m_next;
		}
	} else {
		markCacheComplete();
		this->m_last = this->m_next;
		++this->m_next;
	}
	return next;
}

int32_t NodeSequence::previousNode() {
	if (hasCache()) {
		if (this->m_next <= 0) {
			return $DTM::NULL;
		} else {
			--this->m_next;
			return item(this->m_next);
		}
	} else {
		int32_t n = $nc(this->m_iter)->previousNode();
		this->m_next = $nc(this->m_iter)->getCurrentPos();
		return this->m_next;
	}
}

void NodeSequence::detach() {
	if (nullptr != this->m_iter) {
		$nc(this->m_iter)->detach();
	}
	$XObject::detach();
}

void NodeSequence::allowDetachToRelease(bool allowRelease) {
	if ((false == allowRelease) && !hasCache()) {
		setShouldCacheNodes(true);
	}
	if (nullptr != this->m_iter) {
		$nc(this->m_iter)->allowDetachToRelease(allowRelease);
	}
	$XObject::allowDetachToRelease(allowRelease);
}

int32_t NodeSequence::getCurrentNode() {
	if (hasCache()) {
		int32_t currentIndex = this->m_next - 1;
		$var($NodeVector, vec, getVector());
		if ((currentIndex >= 0) && (currentIndex < $nc(vec)->size())) {
			return vec->elementAt(currentIndex);
		} else {
			return $DTM::NULL;
		}
	}
	if (nullptr != this->m_iter) {
		return $nc(this->m_iter)->getCurrentNode();
	} else {
		return $DTM::NULL;
	}
}

bool NodeSequence::isFresh() {
	return (0 == this->m_next);
}

void NodeSequence::setShouldCacheNodes(bool b) {
	if (b) {
		if (!hasCache()) {
			SetVector($$new($NodeVector));
		}
	} else {
		SetVector(nullptr);
	}
}

bool NodeSequence::isMutable() {
	return hasCache();
}

int32_t NodeSequence::getCurrentPos() {
	return this->m_next;
}

void NodeSequence::runTo(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	if (-1 == index) {
		int32_t pos = this->m_next;
		while ($DTM::NULL != (n = nextNode())) {
		}
		this->m_next = pos;
	} else if (this->m_next == index) {
		return;
	} else {
		bool var$1 = hasCache();
		if (var$1 && index < $nc($(getVector()))->size()) {
			this->m_next = index;
		} else if ((nullptr == getVector()) && (index < this->m_next)) {
			while ((this->m_next >= index) && $DTM::NULL != (n = previousNode())) {
			}
		} else {
			while ((this->m_next < index) && $DTM::NULL != (n = nextNode())) {
			}
		}
	}
}

void NodeSequence::setCurrentPos(int32_t i) {
	runTo(i);
}

int32_t NodeSequence::item(int32_t index) {
	setCurrentPos(index);
	int32_t n = nextNode();
	this->m_next = index;
	return n;
}

void NodeSequence::setItem(int32_t node, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($NodeVector, vec, getVector());
	if (nullptr != vec) {
		int32_t oldNode = vec->elementAt(index);
		if (oldNode != node && $nc(this->m_cache)->useCount() > 1) {
			$var($NodeSequence$IteratorCache, newCache, $new($NodeSequence$IteratorCache));
			$var($NodeVector, nv, nullptr);
			try {
				$assign(nv, $cast($NodeVector, vec->clone()));
			} catch ($CloneNotSupportedException& e) {
				e->printStackTrace();
				$var($RuntimeException, rte, $new($RuntimeException, $(e->getMessage())));
				$throw(rte);
			}
			newCache->setVector(nv);
			newCache->setCacheComplete(true);
			$set(this, m_cache, newCache);
			$assign(vec, nv);
			$XObject::setObject(nv);
		}
		vec->setElementAt(node, index);
		this->m_last = vec->size();
	} else {
		$nc(this->m_iter)->setItem(node, index);
	}
}

int32_t NodeSequence::getLength() {
	$useLocalCurrentObjectStackCache();
	$var($NodeSequence$IteratorCache, cache, getCache());
	if (cache != nullptr) {
		if (cache->isComplete()) {
			$var($NodeVector, nv, cache->getVector());
			return $nc(nv)->size();
		}
		if ($instanceOf($NodeSetDTM, this->m_iter)) {
			return $nc(this->m_iter)->getLength();
		}
		if (-1 == this->m_last) {
			int32_t pos = this->m_next;
			runTo(-1);
			this->m_next = pos;
		}
		return this->m_last;
	} else {
		return (-1 == this->m_last) ? (this->m_last = $nc(this->m_iter)->getLength()) : this->m_last;
	}
}

$DTMIterator* NodeSequence::cloneWithReset() {
	$var(NodeSequence, seq, $cast(NodeSequence, $XObject::clone()));
	$nc(seq)->m_next = 0;
	if (this->m_cache != nullptr) {
		$nc(this->m_cache)->increaseUseCount();
	}
	return seq;
}

$Object* NodeSequence::clone() {
	$var(NodeSequence, clone, $cast(NodeSequence, $XObject::clone()));
	if (nullptr != this->m_iter) {
		$set($nc(clone), m_iter, $cast($DTMIterator, $nc(this->m_iter)->clone()));
	}
	if (this->m_cache != nullptr) {
		$nc(this->m_cache)->increaseUseCount();
	}
	return $of(clone);
}

bool NodeSequence::isDocOrdered() {
	if (nullptr != this->m_iter) {
		return $nc(this->m_iter)->isDocOrdered();
	} else {
		return true;
	}
}

int32_t NodeSequence::getAxis() {
	if (nullptr != this->m_iter) {
		return $nc(this->m_iter)->getAxis();
	} else {
		assertion(false, "Can not getAxis from a non-iterated node sequence!"_s);
		return 0;
	}
}

int32_t NodeSequence::getAnalysisBits() {
	if ((nullptr != this->m_iter) && ($instanceOf($PathComponent, this->m_iter))) {
		return $nc(($cast($PathComponent, this->m_iter)))->getAnalysisBits();
	} else {
		return 0;
	}
}

void NodeSequence::fixupVariables($List* vars, int32_t globalsSize) {
	$XObject::fixupVariables(vars, globalsSize);
}

int32_t NodeSequence::addNodeInDocOrder(int32_t node) {
	$useLocalCurrentObjectStackCache();
	assertion(hasCache(), "addNodeInDocOrder must be done on a mutable sequence!"_s);
	int32_t insertIndex = -1;
	$var($NodeVector, vec, getVector());
	int32_t size = $nc(vec)->size();
	int32_t i = 0;
	for (i = size - 1; i >= 0; --i) {
		int32_t child = vec->elementAt(i);
		if (child == node) {
			i = -2;
			break;
		}
		$var($DTM, dtm, $nc(this->m_dtmMgr)->getDTM(node));
		if (!$nc(dtm)->isNodeAfter(node, child)) {
			break;
		}
	}
	if (i != -2) {
		insertIndex = i + 1;
		vec->insertElementAt(node, insertIndex);
	}
	return insertIndex;
}

void NodeSequence::setObject(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($NodeVector, obj)) {
		$XObject::setObject(obj);
		$var($NodeVector, v, $cast($NodeVector, obj));
		if (this->m_cache != nullptr) {
			$nc(this->m_cache)->setVector(v);
		} else if (v != nullptr) {
			$set(this, m_cache, $new($NodeSequence$IteratorCache));
			$nc(this->m_cache)->setVector(v);
		}
	} else if ($instanceOf($NodeSequence$IteratorCache, obj)) {
		$var($NodeSequence$IteratorCache, cache, $cast($NodeSequence$IteratorCache, obj));
		$set(this, m_cache, cache);
		$nc(this->m_cache)->increaseUseCount();
		$XObject::setObject($($nc(cache)->getVector()));
	} else {
		$XObject::setObject(obj);
	}
}

$NodeSequence$IteratorCache* NodeSequence::getIteratorCache() {
	return this->m_cache;
}

NodeSequence::NodeSequence() {
}

$Class* NodeSequence::load$($String* name, bool initialize) {
	$loadClass(NodeSequence, name, initialize, &_NodeSequence_ClassInfo_, allocate$NodeSequence);
	return class$;
}

$Class* NodeSequence::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com