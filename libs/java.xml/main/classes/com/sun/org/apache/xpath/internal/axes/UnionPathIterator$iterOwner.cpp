#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator$iterOwner.h>

#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/FilterExprWalker.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $AxesWalker = ::com::sun::org::apache::xpath::internal::axes::AxesWalker;
using $FilterExprWalker = ::com::sun::org::apache::xpath::internal::axes::FilterExprWalker;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $UnionPathIterator = ::com::sun::org::apache::xpath::internal::axes::UnionPathIterator;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
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

$FieldInfo _UnionPathIterator$iterOwner_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/axes/UnionPathIterator;", nullptr, $FINAL | $SYNTHETIC, $field(UnionPathIterator$iterOwner, this$0)},
	{"m_index", "I", nullptr, 0, $field(UnionPathIterator$iterOwner, m_index)},
	{}
};

$MethodInfo _UnionPathIterator$iterOwner_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/UnionPathIterator;I)V", nullptr, 0, $method(UnionPathIterator$iterOwner, init$, void, $UnionPathIterator*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(UnionPathIterator$iterOwner, getExpression, $Expression*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(UnionPathIterator$iterOwner, setExpression, void, $Expression*)},
	{}
};

$InnerClassInfo _UnionPathIterator$iterOwner_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.UnionPathIterator$iterOwner", "com.sun.org.apache.xpath.internal.axes.UnionPathIterator", "iterOwner", 0},
	{}
};

$ClassInfo _UnionPathIterator$iterOwner_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.UnionPathIterator$iterOwner",
	"java.lang.Object",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_UnionPathIterator$iterOwner_FieldInfo_,
	_UnionPathIterator$iterOwner_MethodInfo_,
	nullptr,
	nullptr,
	_UnionPathIterator$iterOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.UnionPathIterator"
};

$Object* allocate$UnionPathIterator$iterOwner($Class* clazz) {
	return $of($alloc(UnionPathIterator$iterOwner));
}

void UnionPathIterator$iterOwner::init$($UnionPathIterator* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->m_index = index;
}

$Expression* UnionPathIterator$iterOwner::getExpression() {
	return $nc(this->this$0->m_exprs)->get(this->m_index);
}

void UnionPathIterator$iterOwner::setExpression($Expression* exp$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Expression, exp, exp$renamed);
	if (!($instanceOf($LocPathIterator, exp))) {
		$var($WalkingIterator, wi, $new($WalkingIterator, $(this->this$0->getPrefixResolver())));
		$var($FilterExprWalker, few, $new($FilterExprWalker, wi));
		wi->setFirstWalker(few);
		few->setInnerExpression(exp);
		wi->exprSetParent(this->this$0);
		few->exprSetParent(wi);
		$nc(exp)->exprSetParent(few);
		$assign(exp, wi);
	} else {
		$nc(exp)->exprSetParent(this->this$0);
	}
	$nc(this->this$0->m_exprs)->set(this->m_index, $cast($LocPathIterator, exp));
}

UnionPathIterator$iterOwner::UnionPathIterator$iterOwner() {
}

$Class* UnionPathIterator$iterOwner::load$($String* name, bool initialize) {
	$loadClass(UnionPathIterator$iterOwner, name, initialize, &_UnionPathIterator$iterOwner_ClassInfo_, allocate$UnionPathIterator$iterOwner);
	return class$;
}

$Class* UnionPathIterator$iterOwner::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com