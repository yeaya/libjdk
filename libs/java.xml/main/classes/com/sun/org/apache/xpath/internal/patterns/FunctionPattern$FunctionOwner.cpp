#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern$FunctionOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $FunctionPattern = ::com::sun::org::apache::xpath::internal::patterns::FunctionPattern;
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/patterns/FunctionPattern;", nullptr, $FINAL | $SYNTHETIC, $field(FunctionPattern$FunctionOwner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/patterns/FunctionPattern;)V", nullptr, 0, $method(FunctionPattern$FunctionOwner, init$, void, $FunctionPattern*)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FunctionPattern$FunctionOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(FunctionPattern$FunctionOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner", "com.sun.org.apache.xpath.internal.patterns.FunctionPattern", "FunctionOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner",
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
		"com.sun.org.apache.xpath.internal.patterns.FunctionPattern"
	};
	$loadClass(FunctionPattern$FunctionOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FunctionPattern$FunctionOwner);
	});
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