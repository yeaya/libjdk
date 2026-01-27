#include <com/sun/org/apache/xpath/internal/axes/HasPositionalPredChecker.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncLast.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncPosition.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/operations/Div.h>
#include <com/sun/org/apache/xpath/internal/operations/Minus.h>
#include <com/sun/org/apache/xpath/internal/operations/Mod.h>
#include <com/sun/org/apache/xpath/internal/operations/Mult.h>
#include <com/sun/org/apache/xpath/internal/operations/Number.h>
#include <com/sun/org/apache/xpath/internal/operations/Plus.h>
#include <com/sun/org/apache/xpath/internal/operations/Quo.h>
#include <com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $FuncLast = ::com::sun::org::apache::xpath::internal::functions::FuncLast;
using $FuncPosition = ::com::sun::org::apache::xpath::internal::functions::FuncPosition;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $Div = ::com::sun::org::apache::xpath::internal::operations::Div;
using $Minus = ::com::sun::org::apache::xpath::internal::operations::Minus;
using $Mod = ::com::sun::org::apache::xpath::internal::operations::Mod;
using $Mult = ::com::sun::org::apache::xpath::internal::operations::Mult;
using $Number = ::com::sun::org::apache::xpath::internal::operations::Number;
using $Plus = ::com::sun::org::apache::xpath::internal::operations::Plus;
using $Quo = ::com::sun::org::apache::xpath::internal::operations::Quo;
using $Variable = ::com::sun::org::apache::xpath::internal::operations::Variable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _HasPositionalPredChecker_FieldInfo_[] = {
	{"m_hasPositionalPred", "Z", nullptr, $PRIVATE, $field(HasPositionalPredChecker, m_hasPositionalPred)},
	{"m_predDepth", "I", nullptr, $PRIVATE, $field(HasPositionalPredChecker, m_predDepth)},
	{}
};

$MethodInfo _HasPositionalPredChecker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HasPositionalPredChecker, init$, void)},
	{"check", "(Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HasPositionalPredChecker, check, bool, $LocPathIterator*)},
	{"visitFunction", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/functions/Function;)Z", nullptr, $PUBLIC, $virtualMethod(HasPositionalPredChecker, visitFunction, bool, $ExpressionOwner*, $Function*)},
	{"visitPredicate", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(HasPositionalPredChecker, visitPredicate, bool, $ExpressionOwner*, $Expression*)},
	{}
};

$ClassInfo _HasPositionalPredChecker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.HasPositionalPredChecker",
	"com.sun.org.apache.xpath.internal.XPathVisitor",
	nullptr,
	_HasPositionalPredChecker_FieldInfo_,
	_HasPositionalPredChecker_MethodInfo_
};

$Object* allocate$HasPositionalPredChecker($Class* clazz) {
	return $of($alloc(HasPositionalPredChecker));
}

void HasPositionalPredChecker::init$() {
	$XPathVisitor::init$();
	this->m_hasPositionalPred = false;
	this->m_predDepth = 0;
}

bool HasPositionalPredChecker::check($LocPathIterator* path) {
	$init(HasPositionalPredChecker);
	$var(HasPositionalPredChecker, hppc, $new(HasPositionalPredChecker));
	$nc(path)->callVisitors(nullptr, hppc);
	return hppc->m_hasPositionalPred;
}

bool HasPositionalPredChecker::visitFunction($ExpressionOwner* owner, $Function* func) {
	if (($instanceOf($FuncPosition, func)) || ($instanceOf($FuncLast, func))) {
		this->m_hasPositionalPred = true;
	}
	return true;
}

bool HasPositionalPredChecker::visitPredicate($ExpressionOwner* owner, $Expression* pred) {
	++this->m_predDepth;
	if (this->m_predDepth == 1) {
		if (($instanceOf($Variable, pred)) || ($instanceOf($XNumber, pred)) || ($instanceOf($Div, pred)) || ($instanceOf($Plus, pred)) || ($instanceOf($Minus, pred)) || ($instanceOf($Mod, pred)) || ($instanceOf($Quo, pred)) || ($instanceOf($Mult, pred)) || ($instanceOf($Number, pred)) || ($instanceOf($Function, pred))) {
			this->m_hasPositionalPred = true;
		} else {
			$nc(pred)->callVisitors(owner, this);
		}
	}
	--this->m_predDepth;
	return false;
}

HasPositionalPredChecker::HasPositionalPredChecker() {
}

$Class* HasPositionalPredChecker::load$($String* name, bool initialize) {
	$loadClass(HasPositionalPredChecker, name, initialize, &_HasPositionalPredChecker_ClassInfo_, allocate$HasPositionalPredChecker);
	return class$;
}

$Class* HasPositionalPredChecker::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com