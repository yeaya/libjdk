#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern$FunctionOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $FunctionPattern = ::com::sun::org::apache::xpath::internal::patterns::FunctionPattern;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
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
						namespace patterns {

$FieldInfo _FunctionPattern$FunctionOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/patterns/FunctionPattern;", nullptr, $FINAL | $SYNTHETIC, $field(FunctionPattern$FunctionOwner, this$0)},
	{}
};

$MethodInfo _FunctionPattern$FunctionOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/patterns/FunctionPattern;)V", nullptr, 0, $method(FunctionPattern$FunctionOwner, init$, void, $FunctionPattern*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FunctionPattern$FunctionOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FunctionPattern$FunctionOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _FunctionPattern$FunctionOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner", "com.sun.org.apache.xpath.internal.patterns.FunctionPattern", "FunctionOwner", 0},
	{}
};

$ClassInfo _FunctionPattern$FunctionOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FunctionPattern$FunctionOwner_FieldInfo_,
	_FunctionPattern$FunctionOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionPattern$FunctionOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.patterns.FunctionPattern"
};

$Object* allocate$FunctionPattern$FunctionOwner($Class* clazz) {
	return $of($alloc(FunctionPattern$FunctionOwner));
}

void FunctionPattern$FunctionOwner::init$($FunctionPattern* this$0) {
	$set(this, this$0, this$0);
}

$Expression* FunctionPattern$FunctionOwner::getExpression() {
	return this->this$0->m_functionExpr;
}

void FunctionPattern$FunctionOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_functionExpr, exp);
}

FunctionPattern$FunctionOwner::FunctionPattern$FunctionOwner() {
}

$Class* FunctionPattern$FunctionOwner::load$($String* name, bool initialize) {
	$loadClass(FunctionPattern$FunctionOwner, name, initialize, &_FunctionPattern$FunctionOwner_ClassInfo_, allocate$FunctionPattern$FunctionOwner);
	return class$;
}

$Class* FunctionPattern$FunctionOwner::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com