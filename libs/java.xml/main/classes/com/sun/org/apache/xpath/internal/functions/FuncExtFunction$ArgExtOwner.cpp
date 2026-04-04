#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction$ArgExtOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunction.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $FuncExtFunction = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunction;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;", nullptr, $FINAL | $SYNTHETIC, $field(FuncExtFunction$ArgExtOwner, this$0)},
		{"m_exp", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FuncExtFunction$ArgExtOwner, m_exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/functions/FuncExtFunction;Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, 0, $method(FuncExtFunction$ArgExtOwner, init$, void, $FuncExtFunction*, $Expression*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction$ArgExtOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FuncExtFunction$ArgExtOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner", "com.sun.org.apache.xpath.internal.functions.FuncExtFunction", "ArgExtOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FuncExtFunction$ArgExtOwner",
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
		"com.sun.org.apache.xpath.internal.functions.FuncExtFunction"
	};
	$loadClass(FuncExtFunction$ArgExtOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FuncExtFunction$ArgExtOwner);
	});
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