#include <com/sun/org/apache/xpath/internal/axes/DescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

#undef BIT_CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef DESCENDANTSORSELFFROMROOT
#undef ENDOP
#undef FILTER_ACCEPT
#undef FROM_DESCENDANTS_OR_SELF
#undef FROM_ROOT
#undef FROM_SELF
#undef NULL
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_ELEMENT
#undef SHOW_PROCESSING_INSTRUCTION
#undef WILD

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _DescendantIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DescendantIterator, serialVersionUID)},
	{"m_traverser", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PROTECTED | $TRANSIENT, $field(DescendantIterator, m_traverser)},
	{"m_axis", "I", nullptr, $PROTECTED, $field(DescendantIterator, m_axis)},
	{"m_extendedTypeID", "I", nullptr, $PROTECTED, $field(DescendantIterator, m_extendedTypeID)},
	{}
};

$MethodInfo _DescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(DescendantIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DescendantIterator, init$, void)},
	{"asNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, asNode, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, cloneWithReset, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, detach, void)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, getAxis, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, nextNode, int32_t)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DescendantIterator, setRoot, void, int32_t, Object$*)},
	{}
};

$ClassInfo _DescendantIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.DescendantIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_DescendantIterator_FieldInfo_,
	_DescendantIterator_MethodInfo_
};

$Object* allocate$DescendantIterator($Class* clazz) {
	return $of($alloc(DescendantIterator));
}

void DescendantIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$useLocalCurrentObjectStackCache();
	$LocPathIterator::init$(compiler, opPos, analysis, false);
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	int32_t stepType = $nc(compiler)->getOp(firstStepPos);
	bool orSelf = ($OpCodes::FROM_DESCENDANTS_OR_SELF == stepType);
	bool fromRoot = false;
	if ($OpCodes::FROM_SELF == stepType) {
		orSelf = true;
	} else if ($OpCodes::FROM_ROOT == stepType) {
		fromRoot = true;
		int32_t nextStepPos = compiler->getNextStepPos(firstStepPos);
		if (compiler->getOp(nextStepPos) == $OpCodes::FROM_DESCENDANTS_OR_SELF) {
			orSelf = true;
		}
	}
	int32_t nextStepPos = firstStepPos;
	while (true) {
		nextStepPos = compiler->getNextStepPos(nextStepPos);
		if (nextStepPos > 0) {
			int32_t stepOp = compiler->getOp(nextStepPos);
			if ($OpCodes::ENDOP != stepOp) {
				firstStepPos = nextStepPos;
			} else {
				break;
			}
		} else {
			break;
		}
	}
	if (((int32_t)(analysis & (uint32_t)$WalkerFactory::BIT_CHILD)) != 0) {
		orSelf = false;
	}
	if (fromRoot) {
		if (orSelf) {
			this->m_axis = $Axis::DESCENDANTSORSELFFROMROOT;
		} else {
			this->m_axis = $Axis::DESCENDANTSFROMROOT;
		}
	} else if (orSelf) {
		this->m_axis = $Axis::DESCENDANTORSELF;
	} else {
		this->m_axis = $Axis::DESCENDANT;
	}
	int32_t whatToShow = compiler->getWhatToShow(firstStepPos);
	if ((0 == ((int32_t)(whatToShow & (uint32_t)(($DTMFilter::SHOW_ATTRIBUTE | $DTMFilter::SHOW_ELEMENT) | $DTMFilter::SHOW_PROCESSING_INSTRUCTION)))) || (whatToShow == $DTMFilter::SHOW_ALL)) {
		initNodeTest(whatToShow);
	} else {
		int32_t var$0 = whatToShow;
		$var($String, var$1, compiler->getStepNS(firstStepPos));
		initNodeTest(var$0, var$1, $(compiler->getStepLocalName(firstStepPos)));
	}
	initPredicateInfo(compiler, firstStepPos);
}

void DescendantIterator::init$() {
	$LocPathIterator::init$(nullptr);
	this->m_axis = $Axis::DESCENDANTSORSELFFROMROOT;
	int32_t whatToShow = $DTMFilter::SHOW_ALL;
	initNodeTest(whatToShow);
}

$DTMIterator* DescendantIterator::cloneWithReset() {
	$var(DescendantIterator, clone, $cast(DescendantIterator, $LocPathIterator::cloneWithReset()));
	$set($nc(clone), m_traverser, this->m_traverser);
	clone->resetProximityPositions();
	return clone;
}

int32_t DescendantIterator::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	if ($DTM::NULL == this->m_lastFetched) {
		resetProximityPositions();
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
				if (0 == this->m_extendedTypeID) {
					next = (this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_traverser)->first(this->m_context) : $nc(this->m_traverser)->next(this->m_context, this->m_lastFetched));
				} else {
					next = (this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_traverser)->first(this->m_context, this->m_extendedTypeID) : $nc(this->m_traverser)->next(this->m_context, this->m_lastFetched, this->m_extendedTypeID));
				}
				if ($DTM::NULL != next) {
					if ($DTMIterator::FILTER_ACCEPT == acceptNode(next)) {
						break;
					} else {
						continue;
					}
				} else {
					break;
				}
			} while (next != $DTM::NULL);
			if ($DTM::NULL != next) {
				++this->m_pos;
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

void DescendantIterator::setRoot(int32_t context, Object$* environment) {
	$useLocalCurrentObjectStackCache();
	$LocPathIterator::setRoot(context, environment);
	$set(this, m_traverser, $nc(this->m_cdtm)->getAxisTraverser(this->m_axis));
	$var($String, localName, getLocalName());
	$var($String, namespace$, getNamespace());
	int32_t what = this->m_whatToShow;
	$init($NodeTest);
	bool var$0 = $DTMFilter::SHOW_ALL == what || $nc($NodeTest::WILD)->equals(localName);
	if (var$0 || $nc($NodeTest::WILD)->equals(namespace$)) {
		this->m_extendedTypeID = 0;
	} else {
		int32_t type = getNodeTypeTest(what);
		this->m_extendedTypeID = $nc(this->m_cdtm)->getExpandedTypeID(namespace$, localName, type);
	}
}

int32_t DescendantIterator::asNode($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	if (getPredicateCount() > 0) {
		return $LocPathIterator::asNode(xctxt);
	}
	int32_t current = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(current));
	$var($DTMAxisTraverser, traverser, $nc(dtm)->getAxisTraverser(this->m_axis));
	$var($String, localName, getLocalName());
	$var($String, namespace$, getNamespace());
	int32_t what = this->m_whatToShow;
	$init($NodeTest);
	if ($DTMFilter::SHOW_ALL == what || localName == $NodeTest::WILD || namespace$ == $NodeTest::WILD) {
		return $nc(traverser)->first(current);
	} else {
		int32_t type = getNodeTypeTest(what);
		int32_t extendedType = dtm->getExpandedTypeID(namespace$, localName, type);
		return $nc(traverser)->first(current, extendedType);
	}
}

void DescendantIterator::detach() {
	if (this->m_allowDetach) {
		$set(this, m_traverser, nullptr);
		this->m_extendedTypeID = 0;
		$LocPathIterator::detach();
	}
}

int32_t DescendantIterator::getAxis() {
	return this->m_axis;
}

bool DescendantIterator::deepEquals($Expression* expr) {
	if (!$LocPathIterator::deepEquals(expr)) {
		return false;
	}
	if (this->m_axis != $nc(($cast(DescendantIterator, expr)))->m_axis) {
		return false;
	}
	return true;
}

DescendantIterator::DescendantIterator() {
}

$Class* DescendantIterator::load$($String* name, bool initialize) {
	$loadClass(DescendantIterator, name, initialize, &_DescendantIterator_ClassInfo_, allocate$DescendantIterator);
	return class$;
}

$Class* DescendantIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com