#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef BIT_FILTER
#undef FILTEREDLIST
#undef FILTER_ACCEPT
#undef FILTER_SKIP
#undef NULL
#undef OP_EXTFUNCTION
#undef OP_FUNCTION
#undef OP_GROUP
#undef OP_VARIABLE

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $FilterExprIteratorSimple = ::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple;
using $FilterExprWalker$filterExprOwner = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker$filterExprOwner;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $Variable = ::com::sun::org::apache::xpath::internal::operations::Variable;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _FilterExprWalker_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FilterExprWalker, serialVersionUID)},
	{"m_expr", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PRIVATE, $field(FilterExprWalker, m_expr)},
	{"m_exprObj", "Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(FilterExprWalker, m_exprObj)},
	{"m_mustHardReset", "Z", nullptr, $PRIVATE, $field(FilterExprWalker, m_mustHardReset)},
	{"m_canDetachNodeset", "Z", nullptr, $PRIVATE, $field(FilterExprWalker, m_canDetachNodeset)},
	{}
};

$MethodInfo _FilterExprWalker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;)V", nullptr, $PUBLIC, $method(FilterExprWalker, init$, void, $WalkingIterator*)},
	{"acceptNode", "(I)S", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, acceptNode, int16_t, int32_t)},
	{"callPredicateVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, callPredicateVisitors, void, $XPathVisitor*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, detach, void)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FilterExprWalker, fixupVariables, void, $List*, int32_t)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, getAnalysisBits, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, getAxis, int32_t)},
	{"getInnerExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, getInnerExpression, $Expression*)},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, getLastPos, int32_t, $XPathContext*)},
	{"getNextNode", "()I", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, getNextNode, int32_t)},
	{"init", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, init, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, isDocOrdered, bool)},
	{"setInnerExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, setInnerExpression, void, $Expression*)},
	{"setRoot", "(I)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker, setRoot, void, int32_t)},
	{}
};

$InnerClassInfo _FilterExprWalker_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprWalker", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprWalker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprWalker",
	"com.sun.org.apache.xpath.internal.axes.AxesWalker",
	nullptr,
	_FilterExprWalker_FieldInfo_,
	_FilterExprWalker_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprWalker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner"
};

$Object* allocate$FilterExprWalker($Class* clazz) {
	return $of($alloc(FilterExprWalker));
}

void FilterExprWalker::init$($WalkingIterator* locPathIterator) {
	$AxesWalker::init$(locPathIterator, $Axis::FILTEREDLIST);
	this->m_mustHardReset = false;
	this->m_canDetachNodeset = true;
}

void FilterExprWalker::init($Compiler* compiler, int32_t opPos, int32_t stepType) {
	$AxesWalker::init(compiler, opPos, stepType);
	switch (stepType) {
	case $OpCodes::OP_FUNCTION:
		{}
	case $OpCodes::OP_EXTFUNCTION:
		{
			this->m_mustHardReset = true;
		}
	case $OpCodes::OP_GROUP:
		{}
	case $OpCodes::OP_VARIABLE:
		{
			$set(this, m_expr, $nc(compiler)->compileExpression(opPos));
			$nc(this->m_expr)->exprSetParent(this);
			if ($instanceOf($Variable, this->m_expr)) {
				this->m_canDetachNodeset = false;
			}
			break;
		}
	default:
		{
			$set(this, m_expr, $nc(compiler)->compileExpression(opPos + 2));
			$nc(this->m_expr)->exprSetParent(this);
		}
	}
}

void FilterExprWalker::detach() {
	$AxesWalker::detach();
	if (this->m_canDetachNodeset) {
		$nc(this->m_exprObj)->detach();
	}
	$set(this, m_exprObj, nullptr);
}

void FilterExprWalker::setRoot(int32_t root) {
	$useLocalCurrentObjectStackCache();
	$AxesWalker::setRoot(root);
	int32_t var$0 = root;
	$var($XPathContext, var$1, $nc(this->m_lpi)->getXPathContext());
	$var($PrefixResolver, var$2, $nc(this->m_lpi)->getPrefixResolver());
	$set(this, m_exprObj, $FilterExprIteratorSimple::executeFilterExpr(var$0, var$1, var$2, $nc(this->m_lpi)->getIsTopLevel(), $nc(this->m_lpi)->m_stackFrame, this->m_expr));
}

$Object* FilterExprWalker::clone() {
	$var(FilterExprWalker, clone, $cast(FilterExprWalker, $AxesWalker::clone()));
	if (nullptr != this->m_exprObj) {
		$set($nc(clone), m_exprObj, $cast($XNodeSet, $nc(this->m_exprObj)->clone()));
	}
	return $of(clone);
}

int16_t FilterExprWalker::acceptNode(int32_t n) {
	$useLocalCurrentObjectStackCache();
	try {
		if (getPredicateCount() > 0) {
			countProximityPosition(0);
			if (!executePredicates(n, $($nc(this->m_lpi)->getXPathContext()))) {
				return $DTMIterator::FILTER_SKIP;
			}
		}
		return $DTMIterator::FILTER_ACCEPT;
	} catch ($TransformerException& se) {
		$throwNew($RuntimeException, $(se->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t FilterExprWalker::getNextNode() {
	if (nullptr != this->m_exprObj) {
		int32_t next = $nc(this->m_exprObj)->nextNode();
		return next;
	} else {
		return $DTM::NULL;
	}
}

int32_t FilterExprWalker::getLastPos($XPathContext* xctxt) {
	return $nc(this->m_exprObj)->getLength();
}

void FilterExprWalker::fixupVariables($List* vars, int32_t globalsSize) {
	$AxesWalker::fixupVariables(vars, globalsSize);
	$nc(this->m_expr)->fixupVariables(vars, globalsSize);
}

$Expression* FilterExprWalker::getInnerExpression() {
	return this->m_expr;
}

void FilterExprWalker::setInnerExpression($Expression* expr) {
	$nc(expr)->exprSetParent(this);
	$set(this, m_expr, expr);
}

int32_t FilterExprWalker::getAnalysisBits() {
	if (nullptr != this->m_expr && $instanceOf($PathComponent, this->m_expr)) {
		return $nc(($cast($PathComponent, this->m_expr)))->getAnalysisBits();
	}
	return $WalkerFactory::BIT_FILTER;
}

bool FilterExprWalker::isDocOrdered() {
	return $nc(this->m_exprObj)->isDocOrdered();
}

int32_t FilterExprWalker::getAxis() {
	return $nc(this->m_exprObj)->getAxis();
}

void FilterExprWalker::callPredicateVisitors($XPathVisitor* visitor) {
	$nc(this->m_expr)->callVisitors($$new($FilterExprWalker$filterExprOwner, this), visitor);
	$AxesWalker::callPredicateVisitors(visitor);
}

bool FilterExprWalker::deepEquals($Expression* expr) {
	if (!$AxesWalker::deepEquals(expr)) {
		return false;
	}
	$var(FilterExprWalker, walker, $cast(FilterExprWalker, expr));
	if (!$nc(this->m_expr)->deepEquals($nc(walker)->m_expr)) {
		return false;
	}
	return true;
}

FilterExprWalker::FilterExprWalker() {
}

$Class* FilterExprWalker::load$($String* name, bool initialize) {
	$loadClass(FilterExprWalker, name, initialize, &_FilterExprWalker_ClassInfo_, allocate$FilterExprWalker);
	return class$;
}

$Class* FilterExprWalker::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com