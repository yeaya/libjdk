#include <com/sun/org/apache/xpath/internal/patterns/StepPattern$PredOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
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

void StepPattern$PredOwner::init$($StepPattern* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->m_index = index;
}

$Expression* StepPattern$PredOwner::getExpression() {
	return $nc(this->this$0->m_predicates)->get(this->m_index);
}

void StepPattern$PredOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$nc(this->this$0->m_predicates)->set(this->m_index, exp);
}

StepPattern$PredOwner::StepPattern$PredOwner() {
}

$Class* StepPattern$PredOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $FINAL | $SYNTHETIC, $field(StepPattern$PredOwner, this$0)},
		{"m_index", "I", nullptr, 0, $field(StepPattern$PredOwner, m_index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;I)V", nullptr, 0, $method(StepPattern$PredOwner, init$, void, $StepPattern*, int32_t)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(StepPattern$PredOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern$PredOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.patterns.StepPattern$PredOwner", "com.sun.org.apache.xpath.internal.patterns.StepPattern", "PredOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.patterns.StepPattern$PredOwner",
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
		"com.sun.org.apache.xpath.internal.patterns.StepPattern"
	};
	$loadClass(StepPattern$PredOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StepPattern$PredOwner);
	});
	return class$;
}

$Class* StepPattern$PredOwner::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com