#include <com/sun/org/apache/xpath/internal/operations/Operation$LeftExprOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
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

$FieldInfo _Operation$LeftExprOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/operations/Operation;", nullptr, $FINAL | $SYNTHETIC, $field(Operation$LeftExprOwner, this$0)},
	{}
};

$MethodInfo _Operation$LeftExprOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/operations/Operation;)V", nullptr, 0, $method(Operation$LeftExprOwner, init$, void, $Operation*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Operation$LeftExprOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Operation$LeftExprOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _Operation$LeftExprOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner", "com.sun.org.apache.xpath.internal.operations.Operation", "LeftExprOwner", 0},
	{}
};

$ClassInfo _Operation$LeftExprOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_Operation$LeftExprOwner_FieldInfo_,
	_Operation$LeftExprOwner_MethodInfo_,
	nullptr,
	nullptr,
	_Operation$LeftExprOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.operations.Operation"
};

$Object* allocate$Operation$LeftExprOwner($Class* clazz) {
	return $of($alloc(Operation$LeftExprOwner));
}

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
	$loadClass(Operation$LeftExprOwner, name, initialize, &_Operation$LeftExprOwner_ClassInfo_, allocate$Operation$LeftExprOwner);
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