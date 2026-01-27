#include <com/sun/org/apache/xpath/internal/functions/Function2Args$Arg1Owner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
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

$FieldInfo _Function2Args$Arg1Owner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/Function2Args;", nullptr, $FINAL | $SYNTHETIC, $field(Function2Args$Arg1Owner, this$0)},
	{}
};

$MethodInfo _Function2Args$Arg1Owner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/Function2Args;)V", nullptr, 0, $method(Function2Args$Arg1Owner, init$, void, $Function2Args*)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Function2Args$Arg1Owner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Function2Args$Arg1Owner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _Function2Args$Arg1Owner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.Function2Args$Arg1Owner", "com.sun.org.apache.xpath.internal.functions.Function2Args", "Arg1Owner", 0},
	{}
};

$ClassInfo _Function2Args$Arg1Owner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.Function2Args$Arg1Owner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_Function2Args$Arg1Owner_FieldInfo_,
	_Function2Args$Arg1Owner_MethodInfo_,
	nullptr,
	nullptr,
	_Function2Args$Arg1Owner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.Function2Args"
};

$Object* allocate$Function2Args$Arg1Owner($Class* clazz) {
	return $of($alloc(Function2Args$Arg1Owner));
}

void Function2Args$Arg1Owner::init$($Function2Args* this$0) {
	$set(this, this$0, this$0);
}

$Expression* Function2Args$Arg1Owner::getExpression() {
	return this->this$0->m_arg1;
}

void Function2Args$Arg1Owner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$set(this->this$0, m_arg1, exp);
}

Function2Args$Arg1Owner::Function2Args$Arg1Owner() {
}

$Class* Function2Args$Arg1Owner::load$($String* name, bool initialize) {
	$loadClass(Function2Args$Arg1Owner, name, initialize, &_Function2Args$Arg1Owner_ClassInfo_, allocate$Function2Args$Arg1Owner);
	return class$;
}

$Class* Function2Args$Arg1Owner::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com