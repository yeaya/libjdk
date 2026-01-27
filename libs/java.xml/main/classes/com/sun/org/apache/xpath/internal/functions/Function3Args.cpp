#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args$Arg2Owner.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <java/util/List.h>
#include <jcpp.h>

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
using $Function3Args$Arg2Owner = ::com::sun::org::apache::xpath::internal::functions::Function3Args$Arg2Owner;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
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
						namespace functions {

$FieldInfo _Function3Args_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Function3Args, serialVersionUID)},
	{"m_arg2", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(Function3Args, m_arg2)},
	{}
};

$MethodInfo _Function3Args_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Function3Args, init$, void)},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(Function3Args, callArgVisitors, void, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(Function3Args, canTraverseOutsideSubtree, bool)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(Function3Args, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(Function3Args, deepEquals, bool, $Expression*)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(Function3Args, fixupVariables, void, $List*, int32_t)},
	{"getArg2", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Function3Args, getArg2, $Expression*)},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(Function3Args, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, $virtualMethod(Function3Args, setArg, void, $Expression*, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$InnerClassInfo _Function3Args_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner", "com.sun.org.apache.xpath.internal.functions.Function3Args", "Arg2Owner", 0},
	{}
};

$ClassInfo _Function3Args_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.Function3Args",
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	nullptr,
	_Function3Args_FieldInfo_,
	_Function3Args_MethodInfo_,
	nullptr,
	nullptr,
	_Function3Args_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.Function3Args$Arg2Owner"
};

$Object* allocate$Function3Args($Class* clazz) {
	return $of($alloc(Function3Args));
}

void Function3Args::init$() {
	$Function2Args::init$();
}

$Expression* Function3Args::getArg2() {
	return this->m_arg2;
}

void Function3Args::fixupVariables($List* vars, int32_t globalsSize) {
	$Function2Args::fixupVariables(vars, globalsSize);
	if (nullptr != this->m_arg2) {
		$nc(this->m_arg2)->fixupVariables(vars, globalsSize);
	}
}

void Function3Args::setArg($Expression* arg, int32_t argNum) {
	if (argNum < 2) {
		$Function2Args::setArg(arg, argNum);
	} else if (2 == argNum) {
		$set(this, m_arg2, arg);
		$nc(arg)->exprSetParent(this);
	} else {
		reportWrongNumberArgs();
	}
}

void Function3Args::checkNumberArgs(int32_t argNum) {
	if (argNum != 3) {
		reportWrongNumberArgs();
	}
}

void Function3Args::reportWrongNumberArgs() {
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage("three"_s, nullptr)));
}

bool Function3Args::canTraverseOutsideSubtree() {
	return $Function2Args::canTraverseOutsideSubtree() ? true : $nc(this->m_arg2)->canTraverseOutsideSubtree();
}

void Function3Args::callArgVisitors($XPathVisitor* visitor) {
	$Function2Args::callArgVisitors(visitor);
	if (nullptr != this->m_arg2) {
		$nc(this->m_arg2)->callVisitors($$new($Function3Args$Arg2Owner, this), visitor);
	}
}

bool Function3Args::deepEquals($Expression* expr) {
	if (!$Function2Args::deepEquals(expr)) {
		return false;
	}
	if (nullptr != this->m_arg2) {
		if (nullptr == $nc(($cast(Function3Args, expr)))->m_arg2) {
			return false;
		}
		if (!$nc(this->m_arg2)->deepEquals($nc(($cast(Function3Args, expr)))->m_arg2)) {
			return false;
		}
	} else if (nullptr != $nc(($cast(Function3Args, expr)))->m_arg2) {
		return false;
	}
	return true;
}

Function3Args::Function3Args() {
}

$Class* Function3Args::load$($String* name, bool initialize) {
	$loadClass(Function3Args, name, initialize, &_Function3Args_ClassInfo_, allocate$Function3Args);
	return class$;
}

$Class* Function3Args::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com