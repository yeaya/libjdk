#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BIT_FILTER
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $FilterExprIterator$filterExprOwner = ::com::sun::org::apache::xpath::internal::axes::FilterExprIterator$filterExprOwner;
using $FilterExprIteratorSimple = ::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _FilterExprIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FilterExprIterator, serialVersionUID)},
	{"m_expr", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $field(FilterExprIterator, m_expr)},
	{"m_exprObj", "Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(FilterExprIterator, m_exprObj)},
	{"m_mustHardReset", "Z", nullptr, $PRIVATE, $field(FilterExprIterator, m_mustHardReset)},
	{"m_canDetachNodeset", "Z", nullptr, $PRIVATE, $field(FilterExprIterator, m_canDetachNodeset)},
	{}
};

$MethodInfo _FilterExprIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FilterExprIterator, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $method(FilterExprIterator, init$, void, $Expression*)},
	{"callPredicateVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, callPredicateVisitors, void, $XPathVisitor*)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, detach, void)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FilterExprIterator, fixupVariables, void, $List*, int32_t)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, getAnalysisBits, int32_t)},
	{"getInnerExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, getInnerExpression, $Expression*)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(FilterExprIterator, getNextNode, int32_t)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, isDocOrdered, bool)},
	{"setInnerExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, setInnerExpression, void, $Expression*)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator, setRoot, void, int32_t, Object$*)},
	{}
};

$InnerClassInfo _FilterExprIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIterator", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIterator",
	"com.sun.org.apache.xpath.internal.axes.BasicTestIterator",
	nullptr,
	_FilterExprIterator_FieldInfo_,
	_FilterExprIterator_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner"
};

$Object* allocate$FilterExprIterator($Class* clazz) {
	return $of($alloc(FilterExprIterator));
}

void FilterExprIterator::init$() {
	$BasicTestIterator::init$(nullptr);
	this->m_mustHardReset = false;
	this->m_canDetachNodeset = true;
}

void FilterExprIterator::init$($Expression* expr) {
	$BasicTestIterator::init$(nullptr);
	this->m_mustHardReset = false;
	this->m_canDetachNodeset = true;
	$set(this, m_expr, expr);
}

void FilterExprIterator::setRoot(int32_t context, Object$* environment) {
	$useLocalCurrentObjectStackCache();
	$BasicTestIterator::setRoot(context, environment);
	int32_t var$0 = context;
	$var($XPathContext, var$1, this->m_execContext);
	$var($PrefixResolver, var$2, getPrefixResolver());
	$set(this, m_exprObj, $FilterExprIteratorSimple::executeFilterExpr(var$0, var$1, var$2, getIsTopLevel(), this->m_stackFrame, this->m_expr));
}

int32_t FilterExprIterator::getNextNode() {
	if (nullptr != this->m_exprObj) {
		this->m_lastFetched = $nc(this->m_exprObj)->nextNode();
	} else {
		this->m_lastFetched = $DTM::NULL;
	}
	return this->m_lastFetched;
}

void FilterExprIterator::detach() {
	$BasicTestIterator::detach();
	$nc(this->m_exprObj)->detach();
	$set(this, m_exprObj, nullptr);
}

void FilterExprIterator::fixupVariables($List* vars, int32_t globalsSize) {
	$BasicTestIterator::fixupVariables(vars, globalsSize);
	$nc(this->m_expr)->fixupVariables(vars, globalsSize);
}

$Expression* FilterExprIterator::getInnerExpression() {
	return this->m_expr;
}

void FilterExprIterator::setInnerExpression($Expression* expr) {
	$nc(expr)->exprSetParent(this);
	$set(this, m_expr, expr);
}

int32_t FilterExprIterator::getAnalysisBits() {
	if (nullptr != this->m_expr && $instanceOf($PathComponent, this->m_expr)) {
		return $nc(($cast($PathComponent, this->m_expr)))->getAnalysisBits();
	}
	return $WalkerFactory::BIT_FILTER;
}

bool FilterExprIterator::isDocOrdered() {
	return $nc(this->m_exprObj)->isDocOrdered();
}

void FilterExprIterator::callPredicateVisitors($XPathVisitor* visitor) {
	$nc(this->m_expr)->callVisitors($$new($FilterExprIterator$filterExprOwner, this), visitor);
	$BasicTestIterator::callPredicateVisitors(visitor);
}

bool FilterExprIterator::deepEquals($Expression* expr) {
	if (!$BasicTestIterator::deepEquals(expr)) {
		return false;
	}
	$var(FilterExprIterator, fet, $cast(FilterExprIterator, expr));
	if (!$nc(this->m_expr)->deepEquals($nc(fet)->m_expr)) {
		return false;
	}
	return true;
}

FilterExprIterator::FilterExprIterator() {
}

$Class* FilterExprIterator::load$($String* name, bool initialize) {
	$loadClass(FilterExprIterator, name, initialize, &_FilterExprIterator_ClassInfo_, allocate$FilterExprIterator);
	return class$;
}

$Class* FilterExprIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com