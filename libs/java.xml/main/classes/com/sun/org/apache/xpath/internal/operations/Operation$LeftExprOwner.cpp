#include <com/sun/org/apache/xpath/internal/operations/Operation$LeftExprOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
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
						namespace operations {

void Operation$LeftExprOwner::init$($Operation* this$0) {
	$set(this, this$0, this$0);
}

$Expression* Operation$LeftExprOwner::getExpression() {
	return this->this$0->m_left;
}

void Operation$LeftExprOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_left, exp);
}

Operation$LeftExprOwner::Operation$LeftExprOwner() {
}

$Class* Operation$LeftExprOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/operations/Operation;", nullptr, $FINAL | $SYNTHETIC, $field(Operation$LeftExprOwner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/operations/Operation;)V", nullptr, 0, $method(Operation$LeftExprOwner, init$, void, $Operation*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Operation$LeftExprOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Operation$LeftExprOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner", "com.sun.org.apache.xpath.internal.operations.Operation", "LeftExprOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner",
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
		"com.sun.org.apache.xpath.internal.operations.Operation"
	};
	$loadClass(Operation$LeftExprOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operation$LeftExprOwner);
	});
	return class$;
}

$Class* Operation$LeftExprOwner::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com