#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsolutePathPattern.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
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
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AncestorPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef DOM_INTF
#undef DUP
#undef GET_PARENT
#undef GET_PARENT_SIG
#undef NODE_SIG
#undef NOP
#undef SWAP

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
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
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $AncestorPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AncestorPattern;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
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

$FieldInfo _AbsolutePathPattern_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;", nullptr, $PRIVATE | $FINAL, $field(AbsolutePathPattern, _left)},
	{}
};

$MethodInfo _AbsolutePathPattern_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;)V", nullptr, $PUBLIC, $method(AbsolutePathPattern, init$, void, $RelativePathPattern*)},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, getKernelPattern, $StepPattern*)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, reduceKernelPattern, void)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AbsolutePathPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AbsolutePathPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AbsolutePathPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern",
	nullptr,
	_AbsolutePathPattern_FieldInfo_,
	_AbsolutePathPattern_MethodInfo_
};

$Object* allocate$AbsolutePathPattern($Class* clazz) {
	return $of($alloc(AbsolutePathPattern));
}

void AbsolutePathPattern::init$($RelativePathPattern* left) {
	$LocationPathPattern::init$();
	$set(this, _left, left);
	if (left != nullptr) {
		left->setParent(this);
	}
}

void AbsolutePathPattern::setParser($Parser* parser) {
	$LocationPathPattern::setParser(parser);
	if (this->_left != nullptr) {
		$nc(this->_left)->setParser(parser);
	}
}

$Type* AbsolutePathPattern::typeCheck($SymbolTable* stable) {
	$init($Type);
	return this->_left == nullptr ? $Type::Root : $nc(this->_left)->typeCheck(stable);
}

bool AbsolutePathPattern::isWildcard() {
	return false;
}

$StepPattern* AbsolutePathPattern::getKernelPattern() {
	return this->_left != nullptr ? $nc(this->_left)->getKernelPattern() : ($StepPattern*)nullptr;
}

void AbsolutePathPattern::reduceKernelPattern() {
	$nc(this->_left)->reduceKernelPattern();
}

void AbsolutePathPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_left != nullptr) {
		if ($instanceOf($StepPattern, this->_left)) {
			$init($Constants);
			$var($LocalVariableGen, local, methodGen->addLocalVariable2("apptmp"_s, $($Util::getJCRefType($Constants::NODE_SIG)), nullptr));
			$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
			$nc(local)->setStart($(il->append(static_cast<$Instruction*>($$new($ISTORE, local->getIndex())))));
			$nc(this->_left)->translate(classGen, methodGen);
			il->append($(methodGen->loadDOM()));
			local->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, local->getIndex())))));
			methodGen->removeLocalVariable(local);
		} else {
			$nc(this->_left)->translate(classGen, methodGen);
		}
	}
	$init($Constants);
	int32_t getParent = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
	int32_t getType = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
	$var($InstructionHandle, begin, $nc(il)->append($(methodGen->loadDOM())));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getParent, 2)));
	if ($instanceOf($AncestorPattern, this->_left)) {
		il->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
	}
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getType, 2)));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, (int32_t)$DTM::DOCUMENT_NODE)));
	$var($BranchHandle, skip, il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPEQ, nullptr))));
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr)))));
	$nc(skip)->setTarget($(il->append($Constants::NOP)));
	if (this->_left != nullptr) {
		$nc(this->_left)->backPatchTrueList(begin);
		if ($instanceOf($AncestorPattern, this->_left)) {
			$var($AncestorPattern, ancestor, $cast($AncestorPattern, this->_left));
			$nc(this->_falseList)->backPatch($($nc(ancestor)->getLoopHandle()));
		}
		$nc(this->_falseList)->append($nc(this->_left)->_falseList);
	}
}

$String* AbsolutePathPattern::toString() {
	return $str({"absolutePathPattern("_s, (this->_left != nullptr ? $($nc(this->_left)->toString()) : ")"_s)});
}

AbsolutePathPattern::AbsolutePathPattern() {
}

$Class* AbsolutePathPattern::load$($String* name, bool initialize) {
	$loadClass(AbsolutePathPattern, name, initialize, &_AbsolutePathPattern_ClassInfo_, allocate$AbsolutePathPattern);
	return class$;
}

$Class* AbsolutePathPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com