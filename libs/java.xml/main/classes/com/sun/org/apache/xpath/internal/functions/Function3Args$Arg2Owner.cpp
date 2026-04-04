#include <com/sun/org/apache/xpath/internal/functions/Function3Args$Arg2Owner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/Function3Args;", nullptr, $FINAL | $SYNTHETIC, $field(Function3Args$Arg2Owner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/Function3Args;)V", nullptr, 0, $method(Function3Args$Arg2Owner, init$, void, $Function3Args*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Function3Args$Arg2Owner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Function3Args$Arg2Owner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner", "com.sun.org.apache.xpath.internal.functions.Function3Args", "Arg2Owner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner",
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
		"com.sun.org.apache.xpath.internal.functions.Function3Args"
	};
	$loadClass(Function3Args$Arg2Owner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Function3Args$Arg2Owner);
	});
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