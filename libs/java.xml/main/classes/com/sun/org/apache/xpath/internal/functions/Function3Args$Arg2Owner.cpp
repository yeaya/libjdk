#include <com/sun/org/apache/xpath/internal/functions/Function3Args$Arg2Owner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
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

$FieldInfo _Function3Args$Arg2Owner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/Function3Args;", nullptr, $FINAL | $SYNTHETIC, $field(Function3Args$Arg2Owner, this$0)},
	{}
};

$MethodInfo _Function3Args$Arg2Owner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/Function3Args;)V", nullptr, 0, $method(Function3Args$Arg2Owner, init$, void, $Function3Args*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Function3Args$Arg2Owner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Function3Args$Arg2Owner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _Function3Args$Arg2Owner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner", "com.sun.org.apache.xpath.internal.functions.Function3Args", "Arg2Owner", 0},
	{}
};

$ClassInfo _Function3Args$Arg2Owner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_Function3Args$Arg2Owner_FieldInfo_,
	_Function3Args$Arg2Owner_MethodInfo_,
	nullptr,
	nullptr,
	_Function3Args$Arg2Owner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.Function3Args"
};

$Object* allocate$Function3Args$Arg2Owner($Class* clazz) {
	return $of($alloc(Function3Args$Arg2Owner));
}

void Function3Args$Arg2Owner::init$($Function3Args* this$0) {
	$set(this, this$0, this$0);
}

$Expression* Function3Args$Arg2Owner::getExpression() {
	return this->this$0->m_arg2;
}

void Function3Args$Arg2Owner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_arg2, exp);
}

Function3Args$Arg2Owner::Function3Args$Arg2Owner() {
}

$Class* Function3Args$Arg2Owner::load$($String* name, bool initialize) {
	$loadClass(Function3Args$Arg2Owner, name, initialize, &_Function3Args$Arg2Owner_ClassInfo_, allocate$Function3Args$Arg2Owner);
	return class$;
}

$Class* Function3Args$Arg2Owner::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com