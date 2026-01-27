#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/Function2Args.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs$ArgMultiOwner.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ER_INCORRECT_PROGRAMMER_ASSERTION

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $Function2Args = ::com::sun::org::apache::xpath::internal::functions::Function2Args;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $FunctionMultiArgs$ArgMultiOwner = ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs$ArgMultiOwner;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FunctionMultiArgs_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FunctionMultiArgs, serialVersionUID)},
	{"m_args", "[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FunctionMultiArgs, m_args)},
	{}
};

$MethodInfo _FunctionMultiArgs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FunctionMultiArgs, init$, void)},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, callArgVisitors, void, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, canTraverseOutsideSubtree, bool)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, deepEquals, bool, $Expression*)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FunctionMultiArgs, fixupVariables, void, $List*, int32_t)},
	{"getArgs", "()[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, getArgs, $ExpressionArray*)},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(FunctionMultiArgs, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, $virtualMethod(FunctionMultiArgs, setArg, void, $Expression*, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$InnerClassInfo _FunctionMultiArgs_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner", "com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs", "ArgMultiOwner", 0},
	{}
};

$ClassInfo _FunctionMultiArgs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs",
	"com.sun.org.apache.xpath.internal.functions.Function3Args",
	nullptr,
	_FunctionMultiArgs_FieldInfo_,
	_FunctionMultiArgs_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionMultiArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner"
};

$Object* allocate$FunctionMultiArgs($Class* clazz) {
	return $of($alloc(FunctionMultiArgs));
}

void FunctionMultiArgs::init$() {
	$Function3Args::init$();
}

$ExpressionArray* FunctionMultiArgs::getArgs() {
	return this->m_args;
}

void FunctionMultiArgs::setArg($Expression* arg, int32_t argNum) {
	if (argNum < 3) {
		$Function3Args::setArg(arg, argNum);
	} else {
		if (nullptr == this->m_args) {
			$set(this, m_args, $new($ExpressionArray, 1));
			$nc(this->m_args)->set(0, arg);
		} else {
			$var($ExpressionArray, args, $new($ExpressionArray, $nc(this->m_args)->length + 1));
			$System::arraycopy(this->m_args, 0, args, 0, $nc(this->m_args)->length);
			args->set($nc(this->m_args)->length, arg);
			$set(this, m_args, args);
		}
		$nc(arg)->exprSetParent(this);
	}
}

void FunctionMultiArgs::fixupVariables($List* vars, int32_t globalsSize) {
	$Function3Args::fixupVariables(vars, globalsSize);
	if (nullptr != this->m_args) {
		for (int32_t i = 0; i < $nc(this->m_args)->length; ++i) {
			$nc($nc(this->m_args)->get(i))->fixupVariables(vars, globalsSize);
		}
	}
}

void FunctionMultiArgs::checkNumberArgs(int32_t argNum) {
}

void FunctionMultiArgs::reportWrongNumberArgs() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of("Programmer\'s assertion:  the method FunctionMultiArgs.reportWrongNumberArgs() should never be called."_s)})));
	$throwNew($RuntimeException, fMsg);
}

bool FunctionMultiArgs::canTraverseOutsideSubtree() {
	if ($Function3Args::canTraverseOutsideSubtree()) {
		return true;
	} else {
		int32_t n = $nc(this->m_args)->length;
		for (int32_t i = 0; i < n; ++i) {
			if ($nc($nc(this->m_args)->get(i))->canTraverseOutsideSubtree()) {
				return true;
			}
		}
		return false;
	}
}

void FunctionMultiArgs::callArgVisitors($XPathVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	$Function3Args::callArgVisitors(visitor);
	if (nullptr != this->m_args) {
		int32_t n = $nc(this->m_args)->length;
		for (int32_t i = 0; i < n; ++i) {
			$nc($nc(this->m_args)->get(i))->callVisitors($$new($FunctionMultiArgs$ArgMultiOwner, this, i), visitor);
		}
	}
}

bool FunctionMultiArgs::deepEquals($Expression* expr) {
	if (!$Function3Args::deepEquals(expr)) {
		return false;
	}
	$var(FunctionMultiArgs, fma, $cast(FunctionMultiArgs, expr));
	if (nullptr != this->m_args) {
		int32_t n = $nc(this->m_args)->length;
		if ((nullptr == fma) || ($nc($nc(fma)->m_args)->length != n)) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			if (!$nc($nc(this->m_args)->get(i))->deepEquals($nc($nc(fma)->m_args)->get(i))) {
				return false;
			}
		}
	} else if (nullptr != $nc(fma)->m_args) {
		return false;
	}
	return true;
}

FunctionMultiArgs::FunctionMultiArgs() {
}

$Class* FunctionMultiArgs::load$($String* name, bool initialize) {
	$loadClass(FunctionMultiArgs, name, initialize, &_FunctionMultiArgs_ClassInfo_, allocate$FunctionMultiArgs);
	return class$;
}

$Class* FunctionMultiArgs::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com