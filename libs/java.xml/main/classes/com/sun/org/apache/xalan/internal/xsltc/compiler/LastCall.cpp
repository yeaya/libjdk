#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LastCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/CompareGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TestGenerator.h>
#include <jcpp.h>

#undef LAST_INDEX
#undef NODE_ITERATOR

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $CompareGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::CompareGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $TestGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TestGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _LastCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(LastCall, init$, void, $QName*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LastCall, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LastCall, hasPositionCall, bool)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LastCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _LastCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LastCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	nullptr,
	_LastCall_MethodInfo_
};

$Object* allocate$LastCall($Class* clazz) {
	return $of($alloc(LastCall));
}

void LastCall::init$($QName* fname) {
	$FunctionCall::init$(fname);
}

bool LastCall::hasPositionCall() {
	return true;
}

bool LastCall::hasLastCall() {
	return true;
}

void LastCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($instanceOf($CompareGenerator, methodGen)) {
		$nc(il)->append($($nc(($cast($CompareGenerator, methodGen)))->loadLastNode()));
	} else if ($instanceOf($TestGenerator, methodGen)) {
		$nc(il)->append(static_cast<$Instruction*>($$new($ILOAD, $Constants::LAST_INDEX)));
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$init($Constants);
		int32_t getLast = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, "getLast"_s, "()I"_s);
		$nc(il)->append($(methodGen->loadIterator()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getLast, 1)));
	}
}

LastCall::LastCall() {
}

$Class* LastCall::load$($String* name, bool initialize) {
	$loadClass(LastCall, name, initialize, &_LastCall_ClassInfo_, allocate$LastCall);
	return class$;
}

$Class* LastCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com