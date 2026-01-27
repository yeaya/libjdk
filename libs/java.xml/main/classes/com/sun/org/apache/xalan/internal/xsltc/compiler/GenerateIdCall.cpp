#include <com/sun/org/apache/xalan/internal/xsltc/compiler/GenerateIdCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef GET_NODE_NAME_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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

$MethodInfo _GenerateIdCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(GenerateIdCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(GenerateIdCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _GenerateIdCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.GenerateIdCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	nullptr,
	_GenerateIdCall_MethodInfo_
};

$Object* allocate$GenerateIdCall($Class* clazz) {
	return $of($alloc(GenerateIdCall));
}

void GenerateIdCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
}

void GenerateIdCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (argumentCount() == 0) {
		$nc(il)->append($(methodGen->loadContextNode()));
	} else {
		$nc($(argument()))->translate(classGen, methodGen);
	}
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "generate_idF"_s, $Constants::GET_NODE_NAME_SIG))));
}

GenerateIdCall::GenerateIdCall() {
}

$Class* GenerateIdCall::load$($String* name, bool initialize) {
	$loadClass(GenerateIdCall, name, initialize, &_GenerateIdCall_ClassInfo_, allocate$GenerateIdCall);
	return class$;
}

$Class* GenerateIdCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com