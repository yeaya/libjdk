#include <com/sun/org/apache/xpath/internal/axes/ReverseAxesWalker.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _ReverseAxesWalker_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ReverseAxesWalker, serialVersionUID)},
	{"m_iterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED, $field(ReverseAxesWalker, m_iterator)},
	{}
};

$MethodInfo _ReverseAxesWalker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;I)V", nullptr, 0, $method(ReverseAxesWalker, init$, void, $LocPathIterator*, int32_t)},
	{"countProximityPosition", "(I)V", nullptr, $PROTECTED, $virtualMethod(ReverseAxesWalker, countProximityPosition, void, int32_t)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(ReverseAxesWalker, detach, void)},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(ReverseAxesWalker, getLastPos, int32_t, $XPathContext*)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(ReverseAxesWalker, getNextNode, int32_t)},
	{"getProximityPosition", "(I)I", nullptr, $PROTECTED, $virtualMethod(ReverseAxesWalker, getProximityPosition, int32_t, int32_t)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(ReverseAxesWalker, isDocOrdered, bool)},
	{"isReverseAxes", "()Z", nullptr, $PUBLIC, $virtualMethod(ReverseAxesWalker, isReverseAxes, bool)},
	{"setRoot", "(I)V", nullptr, $PUBLIC, $virtualMethod(ReverseAxesWalker, setRoot, void, int32_t)},
	{}
};

$ClassInfo _ReverseAxesWalker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.ReverseAxesWalker",
	"com.sun.org.apache.xpath.internal.axes.AxesWalker",
	nullptr,
	_ReverseAxesWalker_FieldInfo_,
	_ReverseAxesWalker_MethodInfo_
};

$Object* allocate$ReverseAxesWalker($Class* clazz) {
	return $of($alloc(ReverseAxesWalker));
}

void ReverseAxesWalker::init$($LocPathIterator* locPathIterator, int32_t axis) {
	$AxesWalker::init$(locPathIterator, axis);
}

void ReverseAxesWalker::setRoot(int32_t root) {
	$AxesWalker::setRoot(root);
	$set(this, m_iterator, $nc($(getDTM(root)))->getAxisIterator(this->m_axis));
	$nc(this->m_iterator)->setStartNode(root);
}

void ReverseAxesWalker::detach() {
	$set(this, m_iterator, nullptr);
	$AxesWalker::detach();
}

int32_t ReverseAxesWalker::getNextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t next = $nc(this->m_iterator)->next();
	if (this->m_isFresh) {
		this->m_isFresh = false;
	}
	if ($DTM::NULL == next) {
		this->m_foundLast = true;
	}
	return next;
}

bool ReverseAxesWalker::isReverseAxes() {
	return true;
}

int32_t ReverseAxesWalker::getProximityPosition(int32_t predicateIndex) {
	$useLocalCurrentObjectStackCache();
	if (predicateIndex < 0) {
		return -1;
	}
	int32_t count = $nc(this->m_proximityPositions)->get(predicateIndex);
	if (count <= 0) {
		$var($AxesWalker, savedWalker, $nc($(wi()))->getLastUsedWalker());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var(ReverseAxesWalker, clone, $cast(ReverseAxesWalker, this->clone()));
					$nc(clone)->setRoot(this->getRoot());
					clone->setPredicateCount(predicateIndex);
					clone->setPrevWalker(nullptr);
					clone->setNextWalker(nullptr);
					$nc($(wi()))->setLastUsedWalker(clone);
					++count;
					int32_t next = 0;
					while ($DTM::NULL != (next = clone->nextNode())) {
						++count;
					}
					$nc(this->m_proximityPositions)->set(predicateIndex, count);
				} catch ($CloneNotSupportedException& cnse) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($(wi()))->setLastUsedWalker(savedWalker);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return count;
}

void ReverseAxesWalker::countProximityPosition(int32_t i) {
	if (i < $nc(this->m_proximityPositions)->length) {
		--(*$nc(this->m_proximityPositions))[i];
	}
}

int32_t ReverseAxesWalker::getLastPos($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	$var($AxesWalker, savedWalker, $nc($(wi()))->getLastUsedWalker());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var(ReverseAxesWalker, clone, $cast(ReverseAxesWalker, this->clone()));
				$nc(clone)->setRoot(this->getRoot());
				clone->setPredicateCount(this->getPredicateCount() - 1);
				clone->setPrevWalker(nullptr);
				clone->setNextWalker(nullptr);
				$nc($(wi()))->setLastUsedWalker(clone);
				int32_t next = 0;
				while ($DTM::NULL != (next = clone->nextNode())) {
					++count;
				}
			} catch ($CloneNotSupportedException& cnse) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($(wi()))->setLastUsedWalker(savedWalker);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return count;
}

bool ReverseAxesWalker::isDocOrdered() {
	return false;
}

ReverseAxesWalker::ReverseAxesWalker() {
}

$Class* ReverseAxesWalker::load$($String* name, bool initialize) {
	$loadClass(ReverseAxesWalker, name, initialize, &_ReverseAxesWalker_ClassInfo_, allocate$ReverseAxesWalker);
	return class$;
}

$Class* ReverseAxesWalker::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com