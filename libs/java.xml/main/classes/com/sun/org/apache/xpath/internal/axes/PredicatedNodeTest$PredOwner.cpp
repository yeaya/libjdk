#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest$PredOwner.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
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
						namespace axes {

void PredicatedNodeTest$PredOwner::init$($PredicatedNodeTest* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->m_index = index;
}

$Expression* PredicatedNodeTest$PredOwner::getExpression() {
	return $nc(this->this$0->m_predicates)->get(this->m_index);
}

void PredicatedNodeTest$PredOwner::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this->this$0);
	$nc(this->this$0->m_predicates)->set(this->m_index, exp);
}

PredicatedNodeTest$PredOwner::PredicatedNodeTest$PredOwner() {
}

$Class* PredicatedNodeTest$PredOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;", nullptr, $FINAL | $SYNTHETIC, $field(PredicatedNodeTest$PredOwner, this$0)},
		{"m_index", "I", nullptr, 0, $field(PredicatedNodeTest$PredOwner, m_index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;I)V", nullptr, 0, $method(PredicatedNodeTest$PredOwner, init$, void, $PredicatedNodeTest*, int32_t)},
		{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(PredicatedNodeTest$PredOwner, getExpression, $Expression*)},
		{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(PredicatedNodeTest$PredOwner, setExpression, void, $Expression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner", "com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest", "PredOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner",
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
		"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest"
	};
	$loadClass(PredicatedNodeTest$PredOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PredicatedNodeTest$PredOwner);
	});
	return class$;
}

$Class* PredicatedNodeTest$PredOwner::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com