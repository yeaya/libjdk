#include <com/sun/org/apache/xpath/internal/axes/OneStepIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef NULL
#undef SHOW_ALL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
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

$FieldInfo _OneStepIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OneStepIterator, serialVersionUID)},
	{"m_axis", "I", nullptr, $PROTECTED, $field(OneStepIterator, m_axis)},
	{"m_iterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED, $field(OneStepIterator, m_iterator)},
	{}
};

$MethodInfo _OneStepIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(OneStepIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)V", nullptr, $PUBLIC, $method(OneStepIterator, init$, void, $DTMAxisIterator*, int32_t), "javax.xml.transform.TransformerException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, cloneWithReset, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"countProximityPosition", "(I)V", nullptr, $PROTECTED, $virtualMethod(OneStepIterator, countProximityPosition, void, int32_t)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, detach, void)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, getAxis, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, getLength, int32_t)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(OneStepIterator, getNextNode, int32_t)},
	{"getProximityPosition", "(I)I", nullptr, $PROTECTED, $virtualMethod(OneStepIterator, getProximityPosition, int32_t, int32_t)},
	{"isReverseAxes", "()Z", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, isReverseAxes, bool)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, reset, void)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(OneStepIterator, setRoot, void, int32_t, Object$*)},
	{}
};

$ClassInfo _OneStepIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.OneStepIterator",
	"com.sun.org.apache.xpath.internal.axes.ChildTestIterator",
	nullptr,
	_OneStepIterator_FieldInfo_,
	_OneStepIterator_MethodInfo_
};

$Object* allocate$OneStepIterator($Class* clazz) {
	return $of($alloc(OneStepIterator));
}

void OneStepIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$ChildTestIterator::init$(compiler, opPos, analysis);
	this->m_axis = -1;
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	this->m_axis = $WalkerFactory::getAxisFromStep(compiler, firstStepPos);
}

void OneStepIterator::init$($DTMAxisIterator* iterator, int32_t axis) {
	$ChildTestIterator::init$(nullptr);
	this->m_axis = -1;
	$set(this, m_iterator, iterator);
	this->m_axis = axis;
	int32_t whatToShow = $DTMFilter::SHOW_ALL;
	initNodeTest(whatToShow);
}

void OneStepIterator::setRoot(int32_t context, Object$* environment) {
	$ChildTestIterator::setRoot(context, environment);
	if (this->m_axis > -1) {
		$set(this, m_iterator, $nc(this->m_cdtm)->getAxisIterator(this->m_axis));
	}
	$nc(this->m_iterator)->setStartNode(this->m_context);
}

void OneStepIterator::detach() {
	if (this->m_allowDetach) {
		if (this->m_axis > -1) {
			$set(this, m_iterator, nullptr);
		}
		$ChildTestIterator::detach();
	}
}

int32_t OneStepIterator::getNextNode() {
	return this->m_lastFetched = $nc(this->m_iterator)->next();
}

$Object* OneStepIterator::clone() {
	$var(OneStepIterator, clone, $cast(OneStepIterator, $ChildTestIterator::clone()));
	if (this->m_iterator != nullptr) {
		$set($nc(clone), m_iterator, $nc(this->m_iterator)->cloneIterator());
	}
	return $of(clone);
}

$DTMIterator* OneStepIterator::cloneWithReset() {
	$var(OneStepIterator, clone, $cast(OneStepIterator, $ChildTestIterator::cloneWithReset()));
	$set($nc(clone), m_iterator, this->m_iterator);
	return clone;
}

bool OneStepIterator::isReverseAxes() {
	return $nc(this->m_iterator)->isReverse();
}

int32_t OneStepIterator::getProximityPosition(int32_t predicateIndex) {
	$useLocalCurrentObjectStackCache();
	if (!isReverseAxes()) {
		return $ChildTestIterator::getProximityPosition(predicateIndex);
	}
	if (predicateIndex < 0) {
		return -1;
	}
	if ($nc(this->m_proximityPositions)->get(predicateIndex) <= 0) {
		$var($XPathContext, xctxt, getXPathContext());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var(OneStepIterator, clone, $cast(OneStepIterator, this->clone()));
					int32_t root = getRoot();
					$nc(xctxt)->pushCurrentNode(root);
					$nc(clone)->setRoot(root, xctxt);
					clone->m_predCount = predicateIndex;
					int32_t count = 1;
					int32_t next = 0;
					while ($DTM::NULL != (next = clone->nextNode())) {
						++count;
					}
					(*$nc(this->m_proximityPositions))[predicateIndex] += count;
				} catch ($CloneNotSupportedException& cnse) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(xctxt)->popCurrentNode();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return $nc(this->m_proximityPositions)->get(predicateIndex);
}

int32_t OneStepIterator::getLength() {
	$useLocalCurrentObjectStackCache();
	if (!isReverseAxes()) {
		return $ChildTestIterator::getLength();
	}
	bool isPredicateTest = ($equals(this, $nc(this->m_execContext)->getSubContextList()));
	int32_t predCount = getPredicateCount();
	if (-1 != this->m_length && isPredicateTest && this->m_predicateIndex < 1) {
		return this->m_length;
	}
	int32_t count = 0;
	$var($XPathContext, xctxt, getXPathContext());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var(OneStepIterator, clone, $cast(OneStepIterator, this->cloneWithReset()));
				int32_t root = getRoot();
				$nc(xctxt)->pushCurrentNode(root);
				$nc(clone)->setRoot(root, xctxt);
				clone->m_predCount = this->m_predicateIndex;
				int32_t next = 0;
				while ($DTM::NULL != (next = clone->nextNode())) {
					++count;
				}
			} catch ($CloneNotSupportedException& cnse) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(xctxt)->popCurrentNode();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (isPredicateTest && this->m_predicateIndex < 1) {
		this->m_length = count;
	}
	return count;
}

void OneStepIterator::countProximityPosition(int32_t i) {
	if (!isReverseAxes()) {
		$ChildTestIterator::countProximityPosition(i);
	} else if (i < $nc(this->m_proximityPositions)->length) {
		--(*$nc(this->m_proximityPositions))[i];
	}
}

void OneStepIterator::reset() {
	$ChildTestIterator::reset();
	if (nullptr != this->m_iterator) {
		$nc(this->m_iterator)->reset();
	}
}

int32_t OneStepIterator::getAxis() {
	return this->m_axis;
}

bool OneStepIterator::deepEquals($Expression* expr) {
	if (!$ChildTestIterator::deepEquals(expr)) {
		return false;
	}
	if (this->m_axis != $nc(($cast(OneStepIterator, expr)))->m_axis) {
		return false;
	}
	return true;
}

OneStepIterator::OneStepIterator() {
}

$Class* OneStepIterator::load$($String* name, bool initialize) {
	$loadClass(OneStepIterator, name, initialize, &_OneStepIterator_ClassInfo_, allocate$OneStepIterator);
	return class$;
}

$Class* OneStepIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com