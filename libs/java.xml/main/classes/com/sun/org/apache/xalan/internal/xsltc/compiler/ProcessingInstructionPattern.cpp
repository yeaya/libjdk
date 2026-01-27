#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ProcessingInstructionPattern.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CHILD
#undef DOM_INTF
#undef NOP
#undef PROCESSING_INSTRUCTION_NODE
#undef STRING_CLASS
#undef SWAP

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Predicate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Predicate;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _ProcessingInstructionPattern_FieldInfo_[] = {
	{"_name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ProcessingInstructionPattern, _name)},
	{"_typeChecked", "Z", nullptr, $PRIVATE, $field(ProcessingInstructionPattern, _typeChecked)},
	{}
};

$MethodInfo _ProcessingInstructionPattern_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProcessingInstructionPattern, init$, void, $String*)},
	{"getDefaultPriority", "()D", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, getDefaultPriority, double)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, reduceKernelPattern, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstructionPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ProcessingInstructionPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ProcessingInstructionPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.StepPattern",
	nullptr,
	_ProcessingInstructionPattern_FieldInfo_,
	_ProcessingInstructionPattern_MethodInfo_
};

$Object* allocate$ProcessingInstructionPattern($Class* clazz) {
	return $of($alloc(ProcessingInstructionPattern));
}

void ProcessingInstructionPattern::init$($String* name) {
	$StepPattern::init$($Axis::CHILD, $DTM::PROCESSING_INSTRUCTION_NODE, nullptr);
	$set(this, _name, nullptr);
	this->_typeChecked = false;
	$set(this, _name, name);
}

double ProcessingInstructionPattern::getDefaultPriority() {
	return (this->_name != nullptr) ? 0.0 : -0.5;
}

$String* ProcessingInstructionPattern::toString() {
	if (this->_predicates == nullptr) {
		return $str({"processing-instruction("_s, this->_name, ")"_s});
	} else {
		return $str({"processing-instruction("_s, this->_name, ")"_s, this->_predicates});
	}
}

void ProcessingInstructionPattern::reduceKernelPattern() {
	this->_typeChecked = true;
}

bool ProcessingInstructionPattern::isWildcard() {
	return false;
}

$Type* ProcessingInstructionPattern::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (hasPredicates()) {
		int32_t n = $nc(this->_predicates)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(i)));
			$nc(pred)->typeCheck(stable);
		}
	}
	$init($Type);
	return $Type::NodeSet;
}

void ProcessingInstructionPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t gname = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getNodeName"_s, "(I)Ljava/lang/String;"_s);
	int32_t cmp = cpg->addMethodref($Constants::STRING_CLASS, "equals"_s, "(Ljava/lang/Object;)Z"_s);
	$nc(il)->append($(methodGen->loadCurrentNode()));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append($(methodGen->storeCurrentNode()));
	if (!this->_typeChecked) {
		il->append($(methodGen->loadCurrentNode()));
		int32_t getType = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadCurrentNode()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getType, 2)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, (int32_t)$DTM::PROCESSING_INSTRUCTION_NODE)));
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPEQ, nullptr)))));
	}
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_name)));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadCurrentNode()));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, gname, 2)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, cmp)));
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
	if (hasPredicates()) {
		int32_t n = $nc(this->_predicates)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(i)));
			$var($Expression, exp, $nc(pred)->getExpr());
			$nc(exp)->translateDesynthesized(classGen, methodGen);
			$nc(this->_trueList)->append(exp->_trueList);
			$nc(this->_falseList)->append(exp->_falseList);
		}
	}
	$var($InstructionHandle, restore, nullptr);
	$assign(restore, il->append($(methodGen->storeCurrentNode())));
	backPatchTrueList(restore);
	$var($BranchHandle, skipFalse, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$assign(restore, il->append($(methodGen->storeCurrentNode())));
	backPatchFalseList(restore);
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr)))));
	$nc(skipFalse)->setTarget($(il->append($Constants::NOP)));
}

ProcessingInstructionPattern::ProcessingInstructionPattern() {
}

$Class* ProcessingInstructionPattern::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstructionPattern, name, initialize, &_ProcessingInstructionPattern_ClassInfo_, allocate$ProcessingInstructionPattern);
	return class$;
}

$Class* ProcessingInstructionPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com