#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AncestorPattern.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef DOM_INTF
#undef DUP
#undef GET_PARENT
#undef GET_PARENT_SIG
#undef NODE_SIG
#undef NOP
#undef POP2
#undef SWAP

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $1Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _AncestorPattern_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE | $FINAL, $field(AncestorPattern, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;", nullptr, $PRIVATE | $FINAL, $field(AncestorPattern, _right)},
	{"_loop", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(AncestorPattern, _loop)},
	{}
};

$MethodInfo _AncestorPattern_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;)V", nullptr, $PUBLIC, $method(AncestorPattern, init$, void, $RelativePathPattern*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;)V", nullptr, $PUBLIC, $method(AncestorPattern, init$, void, $Pattern*, $RelativePathPattern*)},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, getKernelPattern, $StepPattern*)},
	{"getLoopHandle", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(AncestorPattern, getLoopHandle, $InstructionHandle*)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, reduceKernelPattern, void)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AncestorPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AncestorPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AncestorPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern",
	nullptr,
	_AncestorPattern_FieldInfo_,
	_AncestorPattern_MethodInfo_
};

$Object* allocate$AncestorPattern($Class* clazz) {
	return $of($alloc(AncestorPattern));
}

void AncestorPattern::init$($RelativePathPattern* right) {
	AncestorPattern::init$(nullptr, right);
}

void AncestorPattern::init$($Pattern* left, $RelativePathPattern* right) {
	$RelativePathPattern::init$();
	$set(this, _left, left);
	$nc(($set(this, _right, right)))->setParent(this);
	if (left != nullptr) {
		left->setParent(this);
	}
}

$InstructionHandle* AncestorPattern::getLoopHandle() {
	return this->_loop;
}

void AncestorPattern::setParser($Parser* parser) {
	$RelativePathPattern::setParser(parser);
	if (this->_left != nullptr) {
		$nc(this->_left)->setParser(parser);
	}
	$nc(this->_right)->setParser(parser);
}

bool AncestorPattern::isWildcard() {
	return false;
}

$StepPattern* AncestorPattern::getKernelPattern() {
	return $nc(this->_right)->getKernelPattern();
}

void AncestorPattern::reduceKernelPattern() {
	$nc(this->_right)->reduceKernelPattern();
}

$Type* AncestorPattern::typeCheck($SymbolTable* stable) {
	if (this->_left != nullptr) {
		$nc(this->_left)->typeCheck(stable);
	}
	return $nc(this->_right)->typeCheck(stable);
}

void AncestorPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionHandle, parent, nullptr);
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($String, var$0, "app"_s);
	$init($Constants);
	$var($1Type, var$1, $Util::getJCRefType($Constants::NODE_SIG));
	$var($LocalVariableGen, local, methodGen->addLocalVariable2(var$0, var$1, $($nc(il)->getEnd())));
	$var($Instruction, loadLocal, $new($ILOAD, $nc(local)->getIndex()));
	$var($Instruction, storeLocal, $new($ISTORE, $nc(local)->getIndex()));
	if ($instanceOf($StepPattern, this->_right)) {
		$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(storeLocal);
		$nc(this->_right)->translate(classGen, methodGen);
		il->append($(methodGen->loadDOM()));
		il->append(loadLocal);
	} else {
		$nc(this->_right)->translate(classGen, methodGen);
		if ($instanceOf(AncestorPattern, this->_right)) {
			$nc(il)->append($(methodGen->loadDOM()));
			il->append(static_cast<$Instruction*>($Constants::SWAP));
		}
	}
	if (this->_left != nullptr) {
		int32_t getParent = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
		$assign(parent, $nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getParent, 2))));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(storeLocal);
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IFLT, nullptr)))));
		il->append(loadLocal);
		$nc(this->_left)->translate(classGen, methodGen);
		$var($SyntaxTreeNode, p, this->getParent());
		if (p == nullptr || $instanceOf($1Instruction, p) || $instanceOf($TopLevelElement, p)) {
		} else {
			il->append(loadLocal);
		}
		$var($BranchHandle, exit, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
		$set(this, _loop, il->append($(methodGen->loadDOM())));
		il->append(loadLocal);
		$nc(local)->setEnd(this->_loop);
		il->append(static_cast<$BranchInstruction*>($$new($GOTO, parent)));
		$nc(exit)->setTarget($(il->append($Constants::NOP)));
		$nc(this->_left)->backPatchFalseList(this->_loop);
		$nc(this->_trueList)->append($nc(this->_left)->_trueList);
	} else {
		$nc(il)->append(static_cast<$Instruction*>($Constants::POP2));
	}
	if ($instanceOf(AncestorPattern, this->_right)) {
		$var(AncestorPattern, ancestor, $cast(AncestorPattern, this->_right));
		$nc(this->_falseList)->backPatch($($nc(ancestor)->getLoopHandle()));
	}
	$nc(this->_trueList)->append($nc(this->_right)->_trueList);
	$nc(this->_falseList)->append($nc(this->_right)->_falseList);
}

$String* AncestorPattern::toString() {
	return $str({"AncestorPattern("_s, this->_left, ", "_s, this->_right, $$str(u')')});
}

AncestorPattern::AncestorPattern() {
}

$Class* AncestorPattern::load$($String* name, bool initialize) {
	$loadClass(AncestorPattern, name, initialize, &_AncestorPattern_ClassInfo_, allocate$AncestorPattern);
	return class$;
}

$Class* AncestorPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com