#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction$ArgExtOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $FuncExtFunction = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
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
						namespace functions {

$FieldInfo _FuncExtFunction$ArgExtOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;", nullptr, $FINAL | $SYNTHETIC, $field(FuncExtFunction$ArgExtOwner, this$0)},
	{"m_exp", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FuncExtFunction$ArgExtOwner, m_exp)},
	{}
};

$MethodInfo _FuncExtFunction$ArgExtOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, 0, $method(FuncExtFunction$ArgExtOwner, init$, void, $FuncExtFunction*, $Expression*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction$ArgExtOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction$ArgExtOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _FuncExtFunction$ArgExtOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner", "com.sun.org.apache.xpath.internal.functions.FuncExtFunction", "ArgExtOwner", 0},
	{}
};

$ClassInfo _FuncExtFunction$ArgExtOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FuncExtFunction$ArgExtOwner_FieldInfo_,
	_FuncExtFunction$ArgExtOwner_MethodInfo_,
	nullptr,
	nullptr,
	_FuncExtFunction$ArgExtOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.FuncExtFunction"
};

$Object* allocate$FuncExtFunction$ArgExtOwner($Class* clazz) {
	return $of($alloc(FuncExtFunction$ArgExtOwner));
}

void FuncExtFunction$ArgExtOwner::init$($FuncExtFunction* this$0, $Expression* exp) {
	$set(this, this$0, this$0);
	$set(this, m_exp, exp);
}

$Expression* FuncExtFunction$ArgExtOwner::getExpression() {
	return this->m_exp;
}

void FuncExtFunction$ArgExtOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this, m_exp, exp);
}

FuncExtFunction$ArgExtOwner::FuncExtFunction$ArgExtOwner() {
}

$Class* FuncExtFunction$ArgExtOwner::load$($String* name, bool initialize) {
	$loadClass(FuncExtFunction$ArgExtOwner, name, initialize, &_FuncExtFunction$ArgExtOwner_ClassInfo_, allocate$FuncExtFunction$ArgExtOwner);
	return class$;
}

$Class* FuncExtFunction$ArgExtOwner::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com