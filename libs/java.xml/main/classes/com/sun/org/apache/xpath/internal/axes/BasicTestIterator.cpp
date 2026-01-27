#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef NULL
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_ELEMENT
#undef SHOW_NAMESPACE
#undef SHOW_PROCESSING_INSTRUCTION

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
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

$FieldInfo _BasicTestIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(BasicTestIterator, serialVersionUID)},
	{}
};

$MethodInfo _BasicTestIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(BasicTestIterator, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PROTECTED, $method(BasicTestIterator, init$, void, $PrefixResolver*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, $PROTECTED, $method(BasicTestIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;IIZ)V", nullptr, $PROTECTED, $method(BasicTestIterator, init$, void, $Compiler*, int32_t, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(BasicTestIterator, cloneWithReset, $DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"getNextNode", "()I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BasicTestIterator, getNextNode, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(BasicTestIterator, nextNode, int32_t)},
	{}
};

$ClassInfo _BasicTestIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.axes.BasicTestIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_BasicTestIterator_FieldInfo_,
	_BasicTestIterator_MethodInfo_
};

$Object* allocate$BasicTestIterator($Class* clazz) {
	return $of($alloc(BasicTestIterator));
}

void BasicTestIterator::init$() {
	$LocPathIterator::init$();
}

void BasicTestIterator::init$($PrefixResolver* nscontext) {
	$LocPathIterator::init$(nscontext);
}

void BasicTestIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$useLocalCurrentObjectStackCache();
	$LocPathIterator::init$(compiler, opPos, analysis, false);
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	int32_t whatToShow = $nc(compiler)->getWhatToShow(firstStepPos);
	if ((0 == ((int32_t)(whatToShow & (uint32_t)((($DTMFilter::SHOW_ATTRIBUTE | $DTMFilter::SHOW_NAMESPACE) | $DTMFilter::SHOW_ELEMENT) | $DTMFilter::SHOW_PROCESSING_INSTRUCTION)))) || (whatToShow == $DTMFilter::SHOW_ALL)) {
		initNodeTest(whatToShow);
	} else {
		int32_t var$0 = whatToShow;
		$var($String, var$1, compiler->getStepNS(firstStepPos));
		initNodeTest(var$0, var$1, $(compiler->getStepLocalName(firstStepPos)));
	}
	initPredicateInfo(compiler, firstStepPos);
}

void BasicTestIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers) {
	$LocPathIterator::init$(compiler, opPos, analysis, shouldLoadWalkers);
}

int32_t BasicTestIterator::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->m_foundLast) {
		this->m_lastFetched = $DTM::NULL;
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
				next = getNextNode();
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

$DTMIterator* BasicTestIterator::cloneWithReset() {
	$var($ChildTestIterator, clone, $cast($ChildTestIterator, $LocPathIterator::cloneWithReset()));
	$nc(clone)->resetProximityPositions();
	return clone;
}

BasicTestIterator::BasicTestIterator() {
}

$Class* BasicTestIterator::load$($String* name, bool initialize) {
	$loadClass(BasicTestIterator, name, initialize, &_BasicTestIterator_ClassInfo_, allocate$BasicTestIterator);
	return class$;
}

$Class* BasicTestIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com