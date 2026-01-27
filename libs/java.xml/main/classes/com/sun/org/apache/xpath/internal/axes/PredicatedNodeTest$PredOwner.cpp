#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest$PredOwner.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
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

$FieldInfo _PredicatedNodeTest$PredOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;", nullptr, $FINAL | $SYNTHETIC, $field(PredicatedNodeTest$PredOwner, this$0)},
	{"m_index", "I", nullptr, 0, $field(PredicatedNodeTest$PredOwner, m_index)},
	{}
};

$MethodInfo _PredicatedNodeTest$PredOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;I)V", nullptr, 0, $method(PredicatedNodeTest$PredOwner, init$, void, $PredicatedNodeTest*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(PredicatedNodeTest$PredOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(PredicatedNodeTest$PredOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _PredicatedNodeTest$PredOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner", "com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest", "PredOwner", 0},
	{}
};

$ClassInfo _PredicatedNodeTest$PredOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest$PredOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_PredicatedNodeTest$PredOwner_FieldInfo_,
	_PredicatedNodeTest$PredOwner_MethodInfo_,
	nullptr,
	nullptr,
	_PredicatedNodeTest$PredOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest"
};

$Object* allocate$PredicatedNodeTest$PredOwner($Class* clazz) {
	return $of($alloc(PredicatedNodeTest$PredOwner));
}

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
	$loadClass(PredicatedNodeTest$PredOwner, name, initialize, &_PredicatedNodeTest$PredOwner_ClassInfo_, allocate$PredicatedNodeTest$PredOwner);
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