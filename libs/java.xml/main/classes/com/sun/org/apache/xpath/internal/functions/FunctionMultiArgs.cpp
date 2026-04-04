#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>
#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/functions/Function3Args.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs$ArgMultiOwner.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ER_INCORRECT_PROGRAMMER_ASSERTION

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Function3Args = ::com::sun::org::apache::xpath::internal::functions::Function3Args;
using $FunctionMultiArgs$ArgMultiOwner = ::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs$ArgMultiOwner;
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
			this->m_args->set(0, arg);
		} else {
			$var($ExpressionArray, args, $new($ExpressionArray, this->m_args->length + 1));
			$System::arraycopy(this->m_args, 0, args, 0, this->m_args->length);
			args->set(this->m_args->length, arg);
			$set(this, m_args, args);
		}
		$nc(arg)->exprSetParent(this);
	}
}

void FunctionMultiArgs::fixupVariables($List* vars, int32_t globalsSize) {
	$Function3Args::fixupVariables(vars, globalsSize);
	if (nullptr != this->m_args) {
		for (int32_t i = 0; i < $nc(this->m_args)->length; ++i) {
			$nc(this->m_args->get(i))->fixupVariables(vars, globalsSize);
		}
	}
}

void FunctionMultiArgs::checkNumberArgs(int32_t argNum) {
}

void FunctionMultiArgs::reportWrongNumberArgs() {
	$useLocalObjectStack();
	$init($XPATHErrorResources);
	$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {"Programmer\'s assertion:  the method FunctionMultiArgs.reportWrongNumberArgs() should never be called."_s})));
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
	$useLocalObjectStack();
	$Function3Args::callArgVisitors(visitor);
	if (nullptr != this->m_args) {
		int32_t n = this->m_args->length;
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
		int32_t n = this->m_args->length;
		if ((nullptr == fma) || ($nc(fma->m_args)->length != n)) {
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FunctionMultiArgs, serialVersionUID)},
		{"m_args", "[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FunctionMultiArgs, m_args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner", "com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs", "ArgMultiOwner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs",
		"com.sun.org.apache.xpath.internal.functions.Function3Args",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xpath.internal.functions.FunctionMultiArgs$ArgMultiOwner"
	};
	$loadClass(FunctionMultiArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FunctionMultiArgs));
	});
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