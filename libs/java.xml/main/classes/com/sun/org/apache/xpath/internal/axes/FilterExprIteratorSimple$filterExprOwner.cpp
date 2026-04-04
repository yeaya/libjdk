#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $FilterExprIteratorSimple = ::com::sun::org::apache::xpath::internal::axes::FilterExprIteratorSimple;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprIteratorSimple$filterExprOwner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprIteratorSimple;)V", nullptr, 0, $method(FilterExprIteratorSimple$filterExprOwner, init$, void, $FilterExprIteratorSimple*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple$filterExprOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprIteratorSimple$filterExprOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple", "filterExprOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple$filterExprOwner",
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
		"com.sun.org.apache.xpath.internal.axes.FilterExprIteratorSimple"
	};
	$loadClass(FilterExprIteratorSimple$filterExprOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilterExprIteratorSimple$filterExprOwner);
	});
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