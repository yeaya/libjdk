#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ConcatCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DUP
#undef EMPTYSTRING
#undef STRING_BUFFER_CLASS
#undef STRING_BUFFER_SIG
#undef STRING_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
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

$MethodInfo _ConcatCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(ConcatCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ConcatCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ConcatCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ConcatCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ConcatCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	nullptr,
	_ConcatCall_MethodInfo_
};

$Object* allocate$ConcatCall($Class* clazz) {
	return $of($alloc(ConcatCall));
}

void ConcatCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
}

$Type* ConcatCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < argumentCount(); ++i) {
		$var($Expression, exp, argument(i));
		$init($Type);
		if (!$nc($($nc(exp)->typeCheck(stable)))->identicalTo($Type::String)) {
			setArgument(i, $$new($CastExpr, exp, $Type::String));
		}
	}
	$init($Type);
	return $set(this, _type, $Type::String);
}

void ConcatCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t nArgs = argumentCount();
	{
		int32_t initBuffer = 0;
		$var($Instruction, append, nullptr)
		int32_t toString = 0;
		switch (nArgs) {
		case 0:
			{
				$init($Constants);
				$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
				break;
			}
		case 1:
			{
				$nc($(argument()))->translate(classGen, methodGen);
				break;
			}
		default:
			{
				$init($Constants);
				initBuffer = $nc(cpg)->addMethodref($Constants::STRING_BUFFER_CLASS, "<init>"_s, "()V"_s);
				$assign(append, $new($INVOKEVIRTUAL, cpg->addMethodref($Constants::STRING_BUFFER_CLASS, "append"_s, $$str({"("_s, $Constants::STRING_SIG, ")"_s, $Constants::STRING_BUFFER_SIG}))));
				toString = cpg->addMethodref($Constants::STRING_BUFFER_CLASS, "toString"_s, $$str({"()"_s, $Constants::STRING_SIG}));
				$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::STRING_BUFFER_CLASS))));
				$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
				$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initBuffer)));
				for (int32_t i = 0; i < nArgs; ++i) {
					$nc($(argument(i)))->translate(classGen, methodGen);
					$nc(il)->append(append);
				}
				$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, toString)));
			}
		}
	}
}

ConcatCall::ConcatCall() {
}

$Class* ConcatCall::load$($String* name, bool initialize) {
	$loadClass(ConcatCall, name, initialize, &_ConcatCall_ClassInfo_, allocate$ConcatCall);
	return class$;
}

$Class* ConcatCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com