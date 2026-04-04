#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern$UnionPathPartOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $UnionPattern = ::com::sun::org::apache::xpath::internal::patterns::UnionPattern;
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

void UnionPattern$UnionPathPartOwner::init$($UnionPattern* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->m_index = index;
}

$Expression* UnionPattern$UnionPathPartOwner::getExpression() {
	return $nc(this->this$0->m_patterns)->get(this->m_index);
}

void UnionPattern$UnionPathPartOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$nc(this->this$0->m_patterns)->set(this->m_index, $cast($StepPattern, exp));
}

UnionPattern$UnionPathPartOwner::UnionPattern$UnionPathPartOwner() {
}

$Class* UnionPattern$UnionPathPartOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/patterns/UnionPattern;", nullptr, $FINAL | $SYNTHETIC, $field(UnionPattern$UnionPathPartOwner, this$0)},
		{"m_index", "I", nullptr, 0, $field(UnionPattern$UnionPathPartOwner, m_index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/patterns/UnionPattern;I)V", nullptr, 0, $method(UnionPattern$UnionPathPartOwner, init$, void, $UnionPattern*, int32_t)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(UnionPattern$UnionPathPartOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(UnionPattern$UnionPathPartOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner", "com.sun.org.apache.xpath.internal.patterns.UnionPattern", "UnionPathPartOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner",
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
		"com.sun.org.apache.xpath.internal.patterns.UnionPattern"
	};
	$loadClass(UnionPattern$UnionPathPartOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionPattern$UnionPathPartOwner);
	});
	return class$;
}

$Class* UnionPattern$UnionPathPartOwner::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com