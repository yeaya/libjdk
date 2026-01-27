#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker$filterExprOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $FilterExprWalker = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker;
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

$FieldInfo _FilterExprWalker$filterExprOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprWalker;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprWalker$filterExprOwner, this$0)},
	{}
};

$MethodInfo _FilterExprWalker$filterExprOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprWalker;)V", nullptr, 0, $method(FilterExprWalker$filterExprOwner, init$, void, $FilterExprWalker*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker$filterExprOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker$filterExprOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _FilterExprWalker$filterExprOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprWalker", "filterExprOwner", 0},
	{}
};

$ClassInfo _FilterExprWalker$filterExprOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FilterExprWalker$filterExprOwner_FieldInfo_,
	_FilterExprWalker$filterExprOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FilterExprWalker$filterExprOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.FilterExprWalker"
};

$Object* allocate$FilterExprWalker$filterExprOwner($Class* clazz) {
	return $of($alloc(FilterExprWalker$filterExprOwner));
}

void FilterExprWalker$filterExprOwner::init$($FilterExprWalker* this$0) {
	$set(this, this$0, this$0);
}

$Expression* FilterExprWalker$filterExprOwner::getExpression() {
	return this->this$0->m_expr;
}

void FilterExprWalker$filterExprOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_expr, exp);
}

FilterExprWalker$filterExprOwner::FilterExprWalker$filterExprOwner() {
}

$Class* FilterExprWalker$filterExprOwner::load$($String* name, bool initialize) {
	$loadClass(FilterExprWalker$filterExprOwner, name, initialize, &_FilterExprWalker$filterExprOwner_ClassInfo_, allocate$FilterExprWalker$filterExprOwner);
	return class$;
}

$Class* FilterExprWalker$filterExprOwner::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com