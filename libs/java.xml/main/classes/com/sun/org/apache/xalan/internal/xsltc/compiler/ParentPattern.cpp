#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentPattern.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AncestorPattern.h>
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
#undef SWAP

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $AncestorPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AncestorPattern;
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

$FieldInfo _ParentPattern_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE | $FINAL, $field(ParentPattern, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;", nullptr, $PRIVATE | $FINAL, $field(ParentPattern, _right)},
	{}
};

$MethodInfo _ParentPattern_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;)V", nullptr, $PUBLIC, $method(ParentPattern, init$, void, $Pattern*, $RelativePathPattern*)},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC, $virtualMethod(ParentPattern, getKernelPattern, $StepPattern*)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(ParentPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(ParentPattern, reduceKernelPattern, void)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ParentPattern, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParentPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ParentPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ParentPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ParentPattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ParentPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern",
	nullptr,
	_ParentPattern_FieldInfo_,
	_ParentPattern_MethodInfo_
};

$Object* allocate$ParentPattern($Class* clazz) {
	return $of($alloc(ParentPattern));
}

void ParentPattern::init$($Pattern* left, $RelativePathPattern* right) {
	$RelativePathPattern::init$();
	$nc(($set(this, _left, left)))->setParent(this);
	$nc(($set(this, _right, right)))->setParent(this);
}

void ParentPattern::setParser($Parser* parser) {
	$RelativePathPattern::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

bool ParentPattern::isWildcard() {
	return false;
}

$StepPattern* ParentPattern::getKernelPattern() {
	return $nc(this->_right)->getKernelPattern();
}

void ParentPattern::reduceKernelPattern() {
	$nc(this->_right)->reduceKernelPattern();
}

$Type* ParentPattern::typeCheck($SymbolTable* stable) {
	$nc(this->_left)->typeCheck(stable);
	return $nc(this->_right)->typeCheck(stable);
}

void ParentPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$var($LocalVariableGen, local, methodGen->addLocalVariable2("ppt"_s, $($Util::getJCRefType($Constants::NODE_SIG)), nullptr));
	$var($Instruction, loadLocal, $new($ILOAD, $nc(local)->getIndex()));
	$var($Instruction, storeLocal, $new($ISTORE, $nc(local)->getIndex()));
	if ($nc(this->_right)->isWildcard()) {
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
	} else if ($instanceOf($StepPattern, this->_right)) {
		$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
		$nc(local)->setStart($(il->append(storeLocal)));
		$nc(this->_right)->translate(classGen, methodGen);
		il->append($(methodGen->loadDOM()));
		local->setEnd($(il->append(loadLocal)));
	} else {
		$nc(this->_right)->translate(classGen, methodGen);
		if ($instanceOf($AncestorPattern, this->_right)) {
			$nc(il)->append($(methodGen->loadDOM()));
			il->append(static_cast<$Instruction*>($Constants::SWAP));
		}
	}
	int32_t getParent = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getParent, 2)));
	$var($SyntaxTreeNode, p, this->getParent());
	if (p == nullptr || $instanceOf($1Instruction, p) || $instanceOf($TopLevelElement, p)) {
		$nc(this->_left)->translate(classGen, methodGen);
	} else {
		il->append(static_cast<$Instruction*>($Constants::DUP));
		$var($InstructionHandle, storeInst, il->append(storeLocal));
		if ($nc(local)->getStart() == nullptr) {
			local->setStart(storeInst);
		}
		$nc(this->_left)->translate(classGen, methodGen);
		il->append($(methodGen->loadDOM()));
		$nc(local)->setEnd($(il->append(loadLocal)));
	}
	methodGen->removeLocalVariable(local);
	if ($instanceOf($AncestorPattern, this->_right)) {
		$var($AncestorPattern, ancestor, $cast($AncestorPattern, this->_right));
		$nc(this->_left)->backPatchFalseList($($nc(ancestor)->getLoopHandle()));
	}
	$nc(this->_trueList)->append($($nc($nc(this->_right)->_trueList)->append($nc(this->_left)->_trueList)));
	$nc(this->_falseList)->append($($nc($nc(this->_right)->_falseList)->append($nc(this->_left)->_falseList)));
}

$String* ParentPattern::toString() {
	return $str({"Parent("_s, this->_left, ", "_s, this->_right, $$str(u')')});
}

ParentPattern::ParentPattern() {
}

$Class* ParentPattern::load$($String* name, bool initialize) {
	$loadClass(ParentPattern, name, initialize, &_ParentPattern_ClassInfo_, allocate$ParentPattern);
	return class$;
}

$Class* ParentPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com