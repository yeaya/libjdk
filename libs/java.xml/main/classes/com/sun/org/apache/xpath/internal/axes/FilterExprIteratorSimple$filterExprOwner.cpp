#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple$filterExprOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $FilterExprIteratorSimple = ::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _FilterExprIteratorSimple$filterExprOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprIteratorSimple$filterExprOwner, this$0)},
	{}
};

$MethodInfo _FilterExprIteratorSimple$filterExprOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple;)V", nullptr, 0, $method(FilterExprIteratorSimple$filterExprOwner, init$, void, $FilterExprIteratorSimple*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple$filterExprOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple$filterExprOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _FilterExprIteratorSimple$filterExprOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprIteratorSimple$filterExprOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FilterExprIteratorSimple$filterExprOwner_FieldInfo_,
	_FilterExprIteratorSimple$filterExprOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprIteratorSimple$filterExprOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple"
};

$Object* allocate$FilterExprIteratorSimple$filterExprOwner($Class* clazz) {
	return $of($alloc(FilterExprIteratorSimple$filterExprOwner));
}

void FilterExprIteratorSimple$filterExprOwner::init$($FilterExprIteratorSimple* this$0) {
	$set(this, this$0, this$0);
}

$Expression* FilterExprIteratorSimple$filterExprOwner::getExpression() {
	return this->this$0->m_expr;
}

void FilterExprIteratorSimple$filterExprOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_expr, exp);
}

FilterExprIteratorSimple$filterExprOwner::FilterExprIteratorSimple$filterExprOwner() {
}

$Class* FilterExprIteratorSimple$filterExprOwner::load$($String* name, bool initialize) {
	$loadClass(FilterExprIteratorSimple$filterExprOwner, name, initialize, &_FilterExprIteratorSimple$filterExprOwner_ClassInfo_, allocate$FilterExprIteratorSimple$filterExprOwner);
	return class$;
}

$Class* FilterExprIteratorSimple$filterExprOwner::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com