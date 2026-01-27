#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _WalkingIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WalkingIterator, serialVersionUID)},
	{"m_lastUsedWalker", "Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PROTECTED, $field(WalkingIterator, m_lastUsedWalker)},
	{"m_firstWalker", "Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PROTECTED, $field(WalkingIterator, m_firstWalker)},
	{}
};

$MethodInfo _WalkingIterator_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;IIZ)V", nullptr, 0, $method(WalkingIterator, init$, void, $Compiler*, int32_t, int32_t, bool), "javax.xml.transform.TransformerException"},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $method(WalkingIterator, init$, void, $PrefixResolver*)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, detach, void)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(WalkingIterator, fixupVariables, void, $List*, int32_t)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, getAnalysisBits, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, getExpression, $Expression*)},
	{"getFirstWalker", "()Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PUBLIC | $FINAL, $method(WalkingIterator, getFirstWalker, $AxesWalker*)},
	{"getLastUsedWalker", "()Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PUBLIC | $FINAL, $method(WalkingIterator, getLastUsedWalker, $AxesWalker*)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, nextNode, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, reset, void)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, setExpression, void, $Expression*)},
	{"setFirstWalker", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;)V", nullptr, $PUBLIC | $FINAL, $method(WalkingIterator, setFirstWalker, void, $AxesWalker*)},
	{"setLastUsedWalker", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;)V", nullptr, $PUBLIC | $FINAL, $method(WalkingIterator, setLastUsedWalker, void, $AxesWalker*)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WalkingIterator, setRoot, void, int32_t, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WalkingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.WalkingIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_WalkingIterator_FieldInfo_,
	_WalkingIterator_MethodInfo_
};

$Object* allocate$WalkingIterator($Class* clazz) {
	return $of($alloc(WalkingIterator));
}

int32_t WalkingIterator::hashCode() {
	 return this->$LocPathIterator::hashCode();
}

bool WalkingIterator::equals(Object$* arg0) {
	 return this->$LocPathIterator::equals(arg0);
}

$String* WalkingIterator::toString() {
	 return this->$LocPathIterator::toString();
}

void WalkingIterator::finalize() {
	this->$LocPathIterator::finalize();
}

void WalkingIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers) {
	$LocPathIterator::init$(compiler, opPos, analysis, shouldLoadWalkers);
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	if (shouldLoadWalkers) {
		$set(this, m_firstWalker, $WalkerFactory::loadWalkers(this, compiler, firstStepPos, 0));
		$set(this, m_lastUsedWalker, this->m_firstWalker);
	}
}

void WalkingIterator::init$($PrefixResolver* nscontext) {
	$LocPathIterator::init$(nscontext);
}

int32_t WalkingIterator::getAnalysisBits() {
	int32_t bits = 0;
	if (nullptr != this->m_firstWalker) {
		$var($AxesWalker, walker, this->m_firstWalker);
		while (nullptr != walker) {
			int32_t bit = walker->getAnalysisBits();
			bits |= bit;
			$assign(walker, walker->getNextWalker());
		}
	}
	return bits;
}

$Object* WalkingIterator::clone() {
	$var(WalkingIterator, clone, $cast(WalkingIterator, $LocPathIterator::clone()));
	if (nullptr != this->m_firstWalker) {
		$set($nc(clone), m_firstWalker, $nc(this->m_firstWalker)->cloneDeep(clone, nullptr));
	}
	return $of(clone);
}

void WalkingIterator::reset() {
	$LocPathIterator::reset();
	if (nullptr != this->m_firstWalker) {
		$set(this, m_lastUsedWalker, this->m_firstWalker);
		$nc(this->m_firstWalker)->setRoot(this->m_context);
	}
}

void WalkingIterator::setRoot(int32_t context, Object$* environment) {
	$LocPathIterator::setRoot(context, environment);
	if (nullptr != this->m_firstWalker) {
		$nc(this->m_firstWalker)->setRoot(context);
		$set(this, m_lastUsedWalker, this->m_firstWalker);
	}
}

int32_t WalkingIterator::nextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	if (-1 == this->m_stackFrame) {
		return returnNextNode($nc(this->m_firstWalker)->nextNode());
	} else {
		$var($VariableStack, vars, $nc(this->m_execContext)->getVarStack());
		int32_t savedStart = $nc(vars)->getStackFrame();
		vars->setStackFrame(this->m_stackFrame);
		int32_t n = returnNextNode($nc(this->m_firstWalker)->nextNode());
		vars->setStackFrame(savedStart);
		return n;
	}
}

$AxesWalker* WalkingIterator::getFirstWalker() {
	return this->m_firstWalker;
}

void WalkingIterator::setFirstWalker($AxesWalker* walker) {
	$set(this, m_firstWalker, walker);
}

void WalkingIterator::setLastUsedWalker($AxesWalker* walker) {
	$set(this, m_lastUsedWalker, walker);
}

$AxesWalker* WalkingIterator::getLastUsedWalker() {
	return this->m_lastUsedWalker;
}

void WalkingIterator::detach() {
	if (this->m_allowDetach) {
		$var($AxesWalker, walker, this->m_firstWalker);
		while (nullptr != walker) {
			walker->detach();
			$assign(walker, walker->getNextWalker());
		}
		$set(this, m_lastUsedWalker, nullptr);
		$LocPathIterator::detach();
	}
}

void WalkingIterator::fixupVariables($List* vars, int32_t globalsSize) {
	this->m_predicateIndex = -1;
	$var($AxesWalker, walker, this->m_firstWalker);
	while (nullptr != walker) {
		walker->fixupVariables(vars, globalsSize);
		$assign(walker, walker->getNextWalker());
	}
}

void WalkingIterator::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitLocationPath(owner, this)) {
		if (nullptr != this->m_firstWalker) {
			$nc(this->m_firstWalker)->callVisitors(this, visitor);
		}
	}
}

$Expression* WalkingIterator::getExpression() {
	return this->m_firstWalker;
}

void WalkingIterator::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_firstWalker, $cast($AxesWalker, exp));
}

bool WalkingIterator::deepEquals($Expression* expr) {
	$useLocalCurrentObjectStackCache();
	if (!$LocPathIterator::deepEquals(expr)) {
		return false;
	}
	$var($AxesWalker, walker1, this->m_firstWalker);
	$var($AxesWalker, walker2, $nc(($cast(WalkingIterator, expr)))->m_firstWalker);
	while ((nullptr != walker1) && (nullptr != walker2)) {
		if (!walker1->deepEquals(walker2)) {
			return false;
		}
		$assign(walker1, walker1->getNextWalker());
		$assign(walker2, walker2->getNextWalker());
	}
	if ((nullptr != walker1) || (nullptr != walker2)) {
		return false;
	}
	return true;
}

WalkingIterator::WalkingIterator() {
}

$Class* WalkingIterator::load$($String* name, bool initialize) {
	$loadClass(WalkingIterator, name, initialize, &_WalkingIterator_ClassInfo_, allocate$WalkingIterator);
	return class$;
}

$Class* WalkingIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com