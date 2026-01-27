#include <com/sun/org/apache/xpath/internal/operations/Operation.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitable.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation$LeftExprOwner.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Operation$LeftExprOwner = ::com::sun::org::apache::xpath::internal::operations::Operation$LeftExprOwner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _Operation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Operation, serialVersionUID)},
	{"m_left", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $field(Operation, m_left)},
	{"m_right", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $field(Operation, m_right)},
	{}
};

$MethodInfo _Operation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Operation, init$, void)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(Operation, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(Operation, canTraverseOutsideSubtree, bool)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(Operation, deepEquals, bool, $Expression*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Operation, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(Operation, fixupVariables, void, $List*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Operation, getExpression, $Expression*)},
	{"getLeftOperand", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Operation, getLeftOperand, $Expression*)},
	{"getRightOperand", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Operation, getRightOperand, $Expression*)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Operation, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Operation, setExpression, void, $Expression*)},
	{"setLeftRight", "(Lcom/sun/org/apache/xpath/internal/Expression;Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(Operation, setLeftRight, void, $Expression*, $Expression*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Operation_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner", "com.sun.org.apache.xpath.internal.operations.Operation", "LeftExprOwner", 0},
	{}
};

$ClassInfo _Operation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Operation",
	"com.sun.org.apache.xpath.internal.Expression",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_Operation_FieldInfo_,
	_Operation_MethodInfo_,
	nullptr,
	nullptr,
	_Operation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.operations.Operation$LeftExprOwner"
};

$Object* allocate$Operation($Class* clazz) {
	return $of($alloc(Operation));
}

int32_t Operation::hashCode() {
	 return this->$Expression::hashCode();
}

bool Operation::equals(Object$* arg0) {
	 return this->$Expression::equals(arg0);
}

$Object* Operation::clone() {
	 return this->$Expression::clone();
}

$String* Operation::toString() {
	 return this->$Expression::toString();
}

void Operation::finalize() {
	this->$Expression::finalize();
}

void Operation::init$() {
	$Expression::init$();
}

void Operation::fixupVariables($List* vars, int32_t globalsSize) {
	$nc(this->m_left)->fixupVariables(vars, globalsSize);
	$nc(this->m_right)->fixupVariables(vars, globalsSize);
}

bool Operation::canTraverseOutsideSubtree() {
	if (nullptr != this->m_left && $nc(this->m_left)->canTraverseOutsideSubtree()) {
		return true;
	}
	if (nullptr != this->m_right && $nc(this->m_right)->canTraverseOutsideSubtree()) {
		return true;
	}
	return false;
}

void Operation::setLeftRight($Expression* l, $Expression* r) {
	$set(this, m_left, l);
	$set(this, m_right, r);
	$nc(l)->exprSetParent(this);
	$nc(r)->exprSetParent(this);
}

$XObject* Operation::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, left, $nc(this->m_left)->execute(xctxt, true));
	$var($XObject, right, $nc(this->m_right)->execute(xctxt, true));
	$var($XObject, result, operate(left, right));
	$nc(left)->detach();
	$nc(right)->detach();
	return result;
}

$XObject* Operation::operate($XObject* left, $XObject* right) {
	return nullptr;
}

$Expression* Operation::getLeftOperand() {
	return this->m_left;
}

$Expression* Operation::getRightOperand() {
	return this->m_right;
}

void Operation::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitBinaryOperation(owner, this)) {
		$nc(this->m_left)->callVisitors($$new($Operation$LeftExprOwner, this), visitor);
		$nc(this->m_right)->callVisitors(this, visitor);
	}
}

$Expression* Operation::getExpression() {
	return this->m_right;
}

void Operation::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_right, exp);
}

bool Operation::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	if (!$nc(this->m_left)->deepEquals($nc(($cast(Operation, expr)))->m_left)) {
		return false;
	}
	if (!$nc(this->m_right)->deepEquals($nc(($cast(Operation, expr)))->m_right)) {
		return false;
	}
	return true;
}

Operation::Operation() {
}

$Class* Operation::load$($String* name, bool initialize) {
	$loadClass(Operation, name, initialize, &_Operation_ClassInfo_, allocate$Operation);
	return class$;
}

$Class* Operation::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com