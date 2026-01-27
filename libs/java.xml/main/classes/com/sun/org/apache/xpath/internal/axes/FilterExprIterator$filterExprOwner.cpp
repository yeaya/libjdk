#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator$filterExprOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $FilterExprIterator = ::com::sun::org::apache::xpath::internal::axes::FilterExprIterator;
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

$FieldInfo _FilterExprIterator$filterExprOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprIterator;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprIterator$filterExprOwner, this$0)},
	{}
};

$MethodInfo _FilterExprIterator$filterExprOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprIterator;)V", nullptr, 0, $method(FilterExprIterator$filterExprOwner, init$, void, $FilterExprIterator*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator$filterExprOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator$filterExprOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _FilterExprIterator$filterExprOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIterator", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprIterator$filterExprOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FilterExprIterator$filterExprOwner_FieldInfo_,
	_FilterExprIterator$filterExprOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprIterator$filterExprOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprIterator"
};

$Object* allocate$FilterExprIterator$filterExprOwner($Class* clazz) {
	return $of($alloc(FilterExprIterator$filterExprOwner));
}

void FilterExprIterator$filterExprOwner::init$($FilterExprIterator* this$0) {
	$set(this, this$0, this$0);
}

$Expression* FilterExprIterator$filterExprOwner::getExpression() {
	return this->this$0->m_expr;
}

void FilterExprIterator$filterExprOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_expr, exp);
}

FilterExprIterator$filterExprOwner::FilterExprIterator$filterExprOwner() {
}

$Class* FilterExprIterator$filterExprOwner::load$($String* name, bool initialize) {
	$loadClass(FilterExprIterator$filterExprOwner, name, initialize, &_FilterExprIterator$filterExprOwner_ClassInfo_, allocate$FilterExprIterator$filterExprOwner);
	return class$;
}

$Class* FilterExprIterator$filterExprOwner::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com