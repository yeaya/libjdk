#include <com/sun/org/apache/xpath/internal/functions/Function.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _Function_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Function, serialVersionUID)},
	{}
};

$MethodInfo _Function_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Function, init$, void)},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(Function, callArgVisitors, void, $XPathVisitor*)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(Function, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(Function, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(Function, deepEquals, bool, $Expression*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Function, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"postCompileStep", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;)V", nullptr, $PUBLIC, $virtualMethod(Function, postCompileStep, void, $Compiler*)},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(Function, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, $virtualMethod(Function, setArg, void, $Expression*, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$ClassInfo _Function_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.functions.Function",
	"com.sun.org.apache.xpath.internal.Expression",
	nullptr,
	_Function_FieldInfo_,
	_Function_MethodInfo_
};

$Object* allocate$Function($Class* clazz) {
	return $of($alloc(Function));
}

void Function::init$() {
	$Expression::init$();
}

void Function::setArg($Expression* arg, int32_t argNum) {
	reportWrongNumberArgs();
}

void Function::checkNumberArgs(int32_t argNum) {
	if (argNum != 0) {
		reportWrongNumberArgs();
	}
}

void Function::reportWrongNumberArgs() {
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage("zero"_s, nullptr)));
}

$XObject* Function::execute($XPathContext* xctxt) {
	$nc($System::out)->println("Error! Function.execute should not be called!"_s);
	return nullptr;
}

void Function::callArgVisitors($XPathVisitor* visitor) {
}

void Function::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitFunction(owner, this)) {
		callArgVisitors(visitor);
	}
}

bool Function::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	return true;
}

void Function::postCompileStep($Compiler* compiler) {
}

Function::Function() {
}

$Class* Function::load$($String* name, bool initialize) {
	$loadClass(Function, name, initialize, &_Function_ClassInfo_, allocate$Function);
	return class$;
}

$Class* Function::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com