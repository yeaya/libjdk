#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIterator.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $FilterExprIterator = ::com::sun::org::apache::xpath::internal::axes::FilterExprIterator;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprIterator;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprIterator$filterExprOwner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprIterator;)V", nullptr, 0, $method(FilterExprIterator$filterExprOwner, init$, void, $FilterExprIterator*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator$filterExprOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIterator$filterExprOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIterator", "filterExprOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.axes.FilterExprIterator$filterExprOwner",
		"java.lang.Object",
		"com.sun.org.apache.xpath.internal.ExpressionOwner",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xpath.internal.axes.FilterExprIterator"
	};
	$loadClass(FilterExprIterator$filterExprOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilterExprIterator$filterExprOwner);
	});
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