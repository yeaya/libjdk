#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker$filterExprOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $FilterExprWalker = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/FilterExprWalker;", nullptr, $FINAL | $SYNTHETIC, $field(FilterExprWalker$filterExprOwner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/FilterExprWalker;)V", nullptr, 0, $method(FilterExprWalker$filterExprOwner, init$, void, $FilterExprWalker*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker$filterExprOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FilterExprWalker$filterExprOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner", "com.sun.org.apache.xpath.internal.axes.FilterExprWalker", "filterExprOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.axes.FilterExprWalker$filterExprOwner",
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
		"com.sun.org.apache.xpath.internal.axes.FilterExprWalker"
	};
	$loadClass(FilterExprWalker$filterExprOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilterExprWalker$filterExprOwner);
	});
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