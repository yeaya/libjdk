#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/UnionPathIterator.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $UnionPathIterator = ::com::sun::org::apache::xpath::internal::axes::UnionPathIterator;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $UnaryOperation = ::com::sun::org::apache::xpath::internal::operations::UnaryOperation;
using $Variable = ::com::sun::org::apache::xpath::internal::operations::Variable;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $UnionPattern = ::com::sun::org::apache::xpath::internal::patterns::UnionPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$MethodInfo _XPathVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPathVisitor, init$, void)},
	{"visitBinaryOperation", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/operations/Operation;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitBinaryOperation, bool, $ExpressionOwner*, $Operation*)},
	{"visitFunction", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/functions/Function;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitFunction, bool, $ExpressionOwner*, $Function*)},
	{"visitLocationPath", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitLocationPath, bool, $ExpressionOwner*, $LocPathIterator*)},
	{"visitMatchPattern", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitMatchPattern, bool, $ExpressionOwner*, $StepPattern*)},
	{"visitNumberLiteral", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/objects/XNumber;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitNumberLiteral, bool, $ExpressionOwner*, $XNumber*)},
	{"visitPredicate", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitPredicate, bool, $ExpressionOwner*, $Expression*)},
	{"visitStep", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/patterns/NodeTest;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitStep, bool, $ExpressionOwner*, $NodeTest*)},
	{"visitStringLiteral", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/objects/XString;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitStringLiteral, bool, $ExpressionOwner*, $XString*)},
	{"visitUnaryOperation", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/operations/UnaryOperation;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitUnaryOperation, bool, $ExpressionOwner*, $UnaryOperation*)},
	{"visitUnionPath", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/axes/UnionPathIterator;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitUnionPath, bool, $ExpressionOwner*, $UnionPathIterator*)},
	{"visitUnionPattern", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/patterns/UnionPattern;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitUnionPattern, bool, $ExpressionOwner*, $UnionPattern*)},
	{"visitVariableRef", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/operations/Variable;)Z", nullptr, $PUBLIC, $virtualMethod(XPathVisitor, visitVariableRef, bool, $ExpressionOwner*, $Variable*)},
	{}
};

$ClassInfo _XPathVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathVisitor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XPathVisitor_MethodInfo_
};

$Object* allocate$XPathVisitor($Class* clazz) {
	return $of($alloc(XPathVisitor));
}

void XPathVisitor::init$() {
}

bool XPathVisitor::visitLocationPath($ExpressionOwner* owner, $LocPathIterator* path) {
	return true;
}

bool XPathVisitor::visitUnionPath($ExpressionOwner* owner, $UnionPathIterator* path) {
	return true;
}

bool XPathVisitor::visitStep($ExpressionOwner* owner, $NodeTest* step) {
	return true;
}

bool XPathVisitor::visitPredicate($ExpressionOwner* owner, $Expression* pred) {
	return true;
}

bool XPathVisitor::visitBinaryOperation($ExpressionOwner* owner, $Operation* op) {
	return true;
}

bool XPathVisitor::visitUnaryOperation($ExpressionOwner* owner, $UnaryOperation* op) {
	return true;
}

bool XPathVisitor::visitVariableRef($ExpressionOwner* owner, $Variable* var) {
	return true;
}

bool XPathVisitor::visitFunction($ExpressionOwner* owner, $Function* func) {
	return true;
}

bool XPathVisitor::visitMatchPattern($ExpressionOwner* owner, $StepPattern* pattern) {
	return true;
}

bool XPathVisitor::visitUnionPattern($ExpressionOwner* owner, $UnionPattern* pattern) {
	return true;
}

bool XPathVisitor::visitStringLiteral($ExpressionOwner* owner, $XString* str) {
	return true;
}

bool XPathVisitor::visitNumberLiteral($ExpressionOwner* owner, $XNumber* num) {
	return true;
}

XPathVisitor::XPathVisitor() {
}

$Class* XPathVisitor::load$($String* name, bool initialize) {
	$loadClass(XPathVisitor, name, initialize, &_XPathVisitor_ClassInfo_, allocate$XPathVisitor);
	return class$;
}

$Class* XPathVisitor::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com