#include <com/sun/org/apache/xpath/internal/axes/MatchPatternIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef ALL
#undef ALLFROMNODE
#undef BIT_ANCESTOR
#undef BIT_ANCESTOR_OR_SELF
#undef BIT_ANY_DESCENDANT_FROM_ROOT
#undef BIT_ATTRIBUTE
#undef BIT_CHILD
#undef BIT_DESCENDANT
#undef BIT_DESCENDANT_OR_SELF
#undef BIT_FILTER
#undef BIT_FOLLOWING
#undef BIT_FOLLOWING_SIBLING
#undef BIT_NAMESPACE
#undef BIT_PARENT
#undef BIT_PRECEDING
#undef BIT_PRECEDING_SIBLING
#undef BIT_ROOT
#undef DEBUG
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef FILTER_ACCEPT
#undef FILTER_SKIP
#undef NULL
#undef SCORE_NONE

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _MatchPatternIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MatchPatternIterator, serialVersionUID)},
	{"m_pattern", "Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PROTECTED, $field(MatchPatternIterator, m_pattern)},
	{"m_superAxis", "I", nullptr, $PROTECTED, $field(MatchPatternIterator, m_superAxis)},
	{"m_traverser", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PROTECTED, $field(MatchPatternIterator, m_traverser)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MatchPatternIterator, DEBUG)},
	{}
};

$MethodInfo _MatchPatternIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(MatchPatternIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"acceptNode", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)S", nullptr, $PUBLIC, $virtualMethod(MatchPatternIterator, acceptNode, int16_t, int32_t, $XPathContext*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(MatchPatternIterator, detach, void)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(MatchPatternIterator, getNextNode, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(MatchPatternIterator, nextNode, int32_t)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MatchPatternIterator, setRoot, void, int32_t, Object$*)},
	{}
};

$ClassInfo _MatchPatternIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.MatchPatternIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_MatchPatternIterator_FieldInfo_,
	_MatchPatternIterator_MethodInfo_
};

$Object* allocate$MatchPatternIterator($Class* clazz) {
	return $of($alloc(MatchPatternIterator));
}

void MatchPatternIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$LocPathIterator::init$(compiler, opPos, analysis, false);
	this->m_superAxis = -1;
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	$set(this, m_pattern, $WalkerFactory::loadSteps(this, compiler, firstStepPos, 0));
	bool fromRoot = false;
	bool walkBack = false;
	bool walkDescendants = false;
	bool walkAttributes = false;
	if (0 != ((int32_t)(analysis & (uint32_t)($WalkerFactory::BIT_ROOT | $WalkerFactory::BIT_ANY_DESCENDANT_FROM_ROOT)))) {
		fromRoot = true;
	}
	if (0 != ((int32_t)(analysis & (uint32_t)((((((($WalkerFactory::BIT_ANCESTOR | $WalkerFactory::BIT_ANCESTOR_OR_SELF) | $WalkerFactory::BIT_PRECEDING) | $WalkerFactory::BIT_PRECEDING_SIBLING) | $WalkerFactory::BIT_FOLLOWING) | $WalkerFactory::BIT_FOLLOWING_SIBLING) | $WalkerFactory::BIT_PARENT) | $WalkerFactory::BIT_FILTER)))) {
		walkBack = true;
	}
	if (0 != ((int32_t)(analysis & (uint32_t)(($WalkerFactory::BIT_DESCENDANT_OR_SELF | $WalkerFactory::BIT_DESCENDANT) | $WalkerFactory::BIT_CHILD)))) {
		walkDescendants = true;
	}
	if (0 != ((int32_t)(analysis & (uint32_t)($WalkerFactory::BIT_ATTRIBUTE | $WalkerFactory::BIT_NAMESPACE)))) {
		walkAttributes = true;
	}
	if (fromRoot || walkBack) {
		if (walkAttributes) {
			this->m_superAxis = $Axis::ALL;
		} else {
			this->m_superAxis = $Axis::DESCENDANTSFROMROOT;
		}
	} else if (walkDescendants) {
		if (walkAttributes) {
			this->m_superAxis = $Axis::ALLFROMNODE;
		} else {
			this->m_superAxis = $Axis::DESCENDANTORSELF;
		}
	} else {
		this->m_superAxis = $Axis::ALL;
	}
}

void MatchPatternIterator::setRoot(int32_t context, Object$* environment) {
	$LocPathIterator::setRoot(context, environment);
	$set(this, m_traverser, $nc(this->m_cdtm)->getAxisTraverser(this->m_superAxis));
}

void MatchPatternIterator::detach() {
	if (this->m_allowDetach) {
		$set(this, m_traverser, nullptr);
		$LocPathIterator::detach();
	}
}

int32_t MatchPatternIterator::getNextNode() {
	this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_traverser)->first(this->m_context) : $nc(this->m_traverser)->next(this->m_context, this->m_lastFetched);
	return this->m_lastFetched;
}

int32_t MatchPatternIterator::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t next = 0;
	$var($VariableStack, vars, nullptr);
	int32_t savedStart = 0;
	if (-1 != this->m_stackFrame) {
		$assign(vars, $nc(this->m_execContext)->getVarStack());
		savedStart = $nc(vars)->getStackFrame();
		vars->setStackFrame(this->m_stackFrame);
	} else {
		$assign(vars, nullptr);
		savedStart = 0;
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			do {
				next = getNextNode();
				if ($DTM::NULL != next) {
					if ($DTMIterator::FILTER_ACCEPT == acceptNode(next, this->m_execContext)) {
						break;
					} else {
						continue;
					}
				} else {
					break;
				}
			} while (next != $DTM::NULL);
			if ($DTM::NULL != next) {
				incrementCurrentPos();
				var$2 = next;
				return$1 = true;
				goto $finally;
			} else {
				this->m_foundLast = true;
				var$2 = $DTM::NULL;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (-1 != this->m_stackFrame) {
				$nc(vars)->setStackFrame(savedStart);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t MatchPatternIterator::acceptNode(int32_t n, $XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				$nc(xctxt)->pushCurrentNode(n);
				xctxt->pushIteratorRoot(this->m_context);
				$var($XObject, score, $nc(this->m_pattern)->execute(xctxt));
				$init($NodeTest);
				var$2 = ($equals(score, $NodeTest::SCORE_NONE)) ? $DTMIterator::FILTER_SKIP : $DTMIterator::FILTER_ACCEPT;
				return$1 = true;
				goto $finally;
			} catch ($TransformerException& se) {
				$throwNew($RuntimeException, $(se->getMessage()));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(xctxt)->popCurrentNode();
			xctxt->popIteratorRoot();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

MatchPatternIterator::MatchPatternIterator() {
}

$Class* MatchPatternIterator::load$($String* name, bool initialize) {
	$loadClass(MatchPatternIterator, name, initialize, &_MatchPatternIterator_ClassInfo_, allocate$MatchPatternIterator);
	return class$;
}

$Class* MatchPatternIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com