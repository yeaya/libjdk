#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern$UnionPathPartOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
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

$FieldInfo _UnionPattern$UnionPathPartOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/patterns/UnionPattern;", nullptr, $FINAL | $SYNTHETIC, $field(UnionPattern$UnionPathPartOwner, this$0)},
	{"m_index", "I", nullptr, 0, $field(UnionPattern$UnionPathPartOwner, m_index)},
	{}
};

$MethodInfo _UnionPattern$UnionPathPartOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/patterns/UnionPattern;I)V", nullptr, 0, $method(UnionPattern$UnionPathPartOwner, init$, void, $UnionPattern*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(UnionPattern$UnionPathPartOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(UnionPattern$UnionPathPartOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _UnionPattern$UnionPathPartOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner", "com.sun.org.apache.xpath.internal.patterns.UnionPattern", "UnionPathPartOwner", 0},
	{}
};

$ClassInfo _UnionPattern$UnionPathPartOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_UnionPattern$UnionPathPartOwner_FieldInfo_,
	_UnionPattern$UnionPathPartOwner_MethodInfo_,
	nullptr,
	nullptr,
	_UnionPattern$UnionPathPartOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.patterns.UnionPattern"
};

$Object* allocate$UnionPattern$UnionPathPartOwner($Class* clazz) {
	return $of($alloc(UnionPattern$UnionPathPartOwner));
}

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
	$loadClass(UnionPattern$UnionPathPartOwner, name, initialize, &_UnionPattern$UnionPathPartOwner_ClassInfo_, allocate$UnionPattern$UnionPathPartOwner);
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