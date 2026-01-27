#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NumberCall.h>

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _NumberCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(NumberCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NumberCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(NumberCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _NumberCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NumberCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	nullptr,
	_NumberCall_MethodInfo_
};

$Object* allocate$NumberCall($Class* clazz) {
	return $of($alloc(NumberCall));
}

void NumberCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
}

$Type* NumberCall::typeCheck($SymbolTable* stable) {
	if (argumentCount() > 0) {
		$nc($(argument()))->typeCheck(stable);
	}
	$init($Type);
	return $set(this, _type, $Type::Real);
}

void NumberCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($Type, targ, nullptr);
	if (argumentCount() == 0) {
		$nc(il)->append($(methodGen->loadContextNode()));
		$init($Type);
		$assign(targ, $Type::Node);
	} else {
		$var($Expression, arg, argument());
		$nc(arg)->translate(classGen, methodGen);
		arg->startIterator(classGen, methodGen);
		$assign(targ, arg->getType());
	}
	$init($Type);
	if (!$nc(targ)->identicalTo($Type::Real)) {
		targ->translateTo(classGen, methodGen, $Type::Real);
	}
}

NumberCall::NumberCall() {
}

$Class* NumberCall::load$($String* name, bool initialize) {
	$loadClass(NumberCall, name, initialize, &_NumberCall_ClassInfo_, allocate$NumberCall);
	return class$;
}

$Class* NumberCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com