#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args$Arg1Owner.h>
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
using $Function2Args$Arg1Owner = ::com::sun::org::apache::xpath::internal::functions::Function2Args$Arg1Owner;
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

$FieldInfo _Function2Args_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Function2Args, serialVersionUID)},
	{"m_arg1", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(Function2Args, m_arg1)},
	{}
};

$MethodInfo _Function2Args_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Function2Args, init$, void)},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(Function2Args, callArgVisitors, void, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(Function2Args, canTraverseOutsideSubtree, bool)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(Function2Args, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(Function2Args, deepEquals, bool, $Expression*)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(Function2Args, fixupVariables, void, $List*, int32_t)},
	{"getArg1", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(Function2Args, getArg1, $Expression*)},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(Function2Args, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, $virtualMethod(Function2Args, setArg, void, $Expression*, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$InnerClassInfo _Function2Args_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.Function2Args$Arg1Owner", "com.sun.org.apache.xpath.internal.functions.Function2Args", "Arg1Owner", 0},
	{}
};

$ClassInfo _Function2Args_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.Function2Args",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_Function2Args_FieldInfo_,
	_Function2Args_MethodInfo_,
	nullptr,
	nullptr,
	_Function2Args_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.Function2Args$Arg1Owner"
};

$Object* allocate$Function2Args($Class* clazz) {
	return $of($alloc(Function2Args));
}

void Function2Args::init$() {
	$FunctionOneArg::init$();
}

$Expression* Function2Args::getArg1() {
	return this->m_arg1;
}

void Function2Args::fixupVariables($List* vars, int32_t globalsSize) {
	$FunctionOneArg::fixupVariables(vars, globalsSize);
	if (nullptr != this->m_arg1) {
		$nc(this->m_arg1)->fixupVariables(vars, globalsSize);
	}
}

void Function2Args::setArg($Expression* arg, int32_t argNum) {
	if (argNum == 0) {
		$FunctionOneArg::setArg(arg, argNum);
	} else if (1 == argNum) {
		$set(this, m_arg1, arg);
		$nc(arg)->exprSetParent(this);
	} else {
		reportWrongNumberArgs();
	}
}

void Function2Args::checkNumberArgs(int32_t argNum) {
	if (argNum != 2) {
		reportWrongNumberArgs();
	}
}

void Function2Args::reportWrongNumberArgs() {
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage("two"_s, nullptr)));
}

bool Function2Args::canTraverseOutsideSubtree() {
	return $FunctionOneArg::canTraverseOutsideSubtree() ? true : $nc(this->m_arg1)->canTraverseOutsideSubtree();
}

void Function2Args::callArgVisitors($XPathVisitor* visitor) {
	$FunctionOneArg::callArgVisitors(visitor);
	if (nullptr != this->m_arg1) {
		$nc(this->m_arg1)->callVisitors($$new($Function2Args$Arg1Owner, this), visitor);
	}
}

bool Function2Args::deepEquals($Expression* expr) {
	if (!$FunctionOneArg::deepEquals(expr)) {
		return false;
	}
	if (nullptr != this->m_arg1) {
		if (nullptr == $nc(($cast(Function2Args, expr)))->m_arg1) {
			return false;
		}
		if (!$nc(this->m_arg1)->deepEquals($nc(($cast(Function2Args, expr)))->m_arg1)) {
			return false;
		}
	} else if (nullptr != $nc(($cast(Function2Args, expr)))->m_arg1) {
		return false;
	}
	return true;
}

Function2Args::Function2Args() {
}

$Class* Function2Args::load$($String* name, bool initialize) {
	$loadClass(Function2Args, name, initialize, &_Function2Args_ClassInfo_, allocate$Function2Args);
	return class$;
}

$Class* Function2Args::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com