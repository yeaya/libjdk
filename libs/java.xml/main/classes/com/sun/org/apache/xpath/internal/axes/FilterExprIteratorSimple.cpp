#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef BIT_FILTER
#undef FILTEREDLIST
#undef NULL

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $FilterExprIteratorSimple$filterExprOwner = ::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple$filterExprOwner;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _FilterExprIteratorSimple_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FilterExprIteratorSimple, serialVersionUID)},
	{"m_expr", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $field(FilterExprIteratorSimple, m_expr)},
	{"m_exprObj", "Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(FilterExprIteratorSimple, m_exprObj)},
	{"m_mustHardReset", "Z", nullptr, $PRIVATE, $field(FilterExprIteratorSimple, m_mustHardReset)},
	{"m_canDetachNodeset", "Z", nullptr, $PRIVATE, $field(FilterExprIteratorSimple, m_canDetachNodeset)},
	{}
};

$MethodInfo _FilterExprIteratorSimple_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FilterExprIteratorSimple, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $method(FilterExprIteratorSimple, init$, void, $Expression*)},
	{"callPredicateVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, callPredicateVisitors, void, $XPathVisitor*)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, detach, void)},
	{"executeFilterExpr", "(ILcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;ZILcom/sun/org/apache/xpath/internal/Expression;)Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;", nullptr, $PUBLIC | $STATIC, $staticMethod(FilterExprIteratorSimple, executeFilterExpr, $XNodeSet*, int32_t, $XPathContext*, $PrefixResolver*, bool, int32_t, $Expression*), "com.sun.org.apache.xml.internal.utils.WrappedRuntimeException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FilterExprIteratorSimple, fixupVariables, void, $List*, int32_t)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, getAnalysisBits, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, getAxis, int32_t)},
	{"getInnerExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, getInnerExpression, $Expression*)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, isDocOrdered, bool)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, nextNode, int32_t)},
	{"setInnerExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, setInnerExpression, void, $Expression*)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple, setRoot, void, int32_t, Object$*)},
	{}
};

$InnerClassInfo _FilterExprIteratorSimple_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprIteratorSimple_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_FilterExprIteratorSimple_FieldInfo_,
	_FilterExprIteratorSimple_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprIteratorSimple_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner"
};

$Object* allocate$FilterExprIteratorSimple($Class* clazz) {
	return $of($alloc(FilterExprIteratorSimple));
}

void FilterExprIteratorSimple::init$() {
	$LocPathIterator::init$(nullptr);
	this->m_mustHardReset = false;
	this->m_canDetachNodeset = true;
}

void FilterExprIteratorSimple::init$($Expression* expr) {
	$LocPathIterator::init$(nullptr);
	this->m_mustHardReset = false;
	this->m_canDetachNodeset = true;
	$set(this, m_expr, expr);
}

void FilterExprIteratorSimple::setRoot(int32_t context, Object$* environment) {
	$useLocalCurrentObjectStackCache();
	$LocPathIterator::setRoot(context, environment);
	int32_t var$0 = context;
	$var($XPathContext, var$1, this->m_execContext);
	$var($PrefixResolver, var$2, getPrefixResolver());
	$set(this, m_exprObj, executeFilterExpr(var$0, var$1, var$2, getIsTopLevel(), this->m_stackFrame, this->m_expr));
}

$XNodeSet* FilterExprIteratorSimple::executeFilterExpr(int32_t context, $XPathContext* xctxt, $PrefixResolver* prefixResolver, bool isTopLevel, int32_t stackFrame, $Expression* expr) {
	$init(FilterExprIteratorSimple);
	$useLocalCurrentObjectStackCache();
	$var($PrefixResolver, savedResolver, $nc(xctxt)->getNamespaceContext());
	$var($XNodeSet, result, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				xctxt->pushCurrentNode(context);
				xctxt->setNamespaceContext(prefixResolver);
				if (isTopLevel) {
					$var($VariableStack, vars, xctxt->getVarStack());
					int32_t savedStart = $nc(vars)->getStackFrame();
					vars->setStackFrame(stackFrame);
					$assign(result, $cast($XNodeSet, $nc(expr)->execute(xctxt)));
					$nc(result)->setShouldCacheNodes(true);
					vars->setStackFrame(savedStart);
				} else {
					$assign(result, $cast($XNodeSet, $nc(expr)->execute(xctxt)));
				}
			} catch ($TransformerException& se) {
				$throwNew($WrappedRuntimeException, se);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			xctxt->popCurrentNode();
			xctxt->setNamespaceContext(savedResolver);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return result;
}

int32_t FilterExprIteratorSimple::nextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t next = 0;
	if (nullptr != this->m_exprObj) {
		this->m_lastFetched = (next = $nc(this->m_exprObj)->nextNode());
	} else {
		this->m_lastFetched = (next = $DTM::NULL);
	}
	if ($DTM::NULL != next) {
		++this->m_pos;
		return next;
	} else {
		this->m_foundLast = true;
		return $DTM::NULL;
	}
}

void FilterExprIteratorSimple::detach() {
	if (this->m_allowDetach) {
		$LocPathIterator::detach();
		$nc(this->m_exprObj)->detach();
		$set(this, m_exprObj, nullptr);
	}
}

void FilterExprIteratorSimple::fixupVariables($List* vars, int32_t globalsSize) {
	$LocPathIterator::fixupVariables(vars, globalsSize);
	$nc(this->m_expr)->fixupVariables(vars, globalsSize);
}

$Expression* FilterExprIteratorSimple::getInnerExpression() {
	return this->m_expr;
}

void FilterExprIteratorSimple::setInnerExpression($Expression* expr) {
	$nc(expr)->exprSetParent(this);
	$set(this, m_expr, expr);
}

int32_t FilterExprIteratorSimple::getAnalysisBits() {
	if (nullptr != this->m_expr && $instanceOf($PathComponent, this->m_expr)) {
		return $nc(($cast($PathComponent, this->m_expr)))->getAnalysisBits();
	}
	return $WalkerFactory::BIT_FILTER;
}

bool FilterExprIteratorSimple::isDocOrdered() {
	return $nc(this->m_exprObj)->isDocOrdered();
}

void FilterExprIteratorSimple::callPredicateVisitors($XPathVisitor* visitor) {
	$nc(this->m_expr)->callVisitors($$new($FilterExprIteratorSimple$filterExprOwner, this), visitor);
	$LocPathIterator::callPredicateVisitors(visitor);
}

bool FilterExprIteratorSimple::deepEquals($Expression* expr) {
	if (!$LocPathIterator::deepEquals(expr)) {
		return false;
	}
	$var(FilterExprIteratorSimple, fet, $cast(FilterExprIteratorSimple, expr));
	if (!$nc(this->m_expr)->deepEquals($nc(fet)->m_expr)) {
		return false;
	}
	return true;
}

int32_t FilterExprIteratorSimple::getAxis() {
	if (nullptr != this->m_exprObj) {
		return $nc(this->m_exprObj)->getAxis();
	} else {
		return $Axis::FILTEREDLIST;
	}
}

FilterExprIteratorSimple::FilterExprIteratorSimple() {
}

$Class* FilterExprIteratorSimple::load$($String* name, bool initialize) {
	$loadClass(FilterExprIteratorSimple, name, initialize, &_FilterExprIteratorSimple_ClassInfo_, allocate$FilterExprIteratorSimple);
	return class$;
}

$Class* FilterExprIteratorSimple::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com