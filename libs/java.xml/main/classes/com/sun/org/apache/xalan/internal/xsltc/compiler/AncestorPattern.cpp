#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AncestorPattern.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
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
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $1Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
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
		this->_left->setParser(parser);
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
		this->_left->typeCheck(stable);
	}
	return $nc(this->_right)->typeCheck(stable);
}

void AncestorPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($InstructionHandle, parent, nullptr);
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($String, var$0, "app"_s);
	$init($Constants);
	$var($1Type, var$1, $Util::getJCRefType($Constants::NODE_SIG));
	$var($LocalVariableGen, local, methodGen->addLocalVariable2(var$0, var$1, $($nc(il)->getEnd())));
	$var($Instruction, loadLocal, $new($ILOAD, $nc(local)->getIndex()));
	$var($Instruction, storeLocal, $new($ISTORE, local->getIndex()));
	if ($instanceOf($StepPattern, this->_right)) {
		il->append($Constants::DUP);
		il->append(storeLocal);
		this->_right->translate(classGen, methodGen);
		il->append($(methodGen->loadDOM()));
		il->append(loadLocal);
	} else {
		$nc(this->_right)->translate(classGen, methodGen);
		if ($instanceOf(AncestorPattern, this->_right)) {
			il->append($(methodGen->loadDOM()));
			il->append($Constants::SWAP);
		}
	}
	if (this->_left != nullptr) {
		int32_t getParent = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
		$assign(parent, il->append($$new($INVOKEINTERFACE, getParent, 2)));
		il->append($Constants::DUP);
		il->append(storeLocal);
		$nc(this->_falseList)->add($(il->append($$new($IFLT, nullptr))));
		il->append(loadLocal);
		this->_left->translate(classGen, methodGen);
		$var($SyntaxTreeNode, p, this->getParent());
		if (p == nullptr || $instanceOf($1Instruction, p) || $instanceOf($TopLevelElement, p)) {
		} else {
			il->append(loadLocal);
		}
		$var($BranchHandle, exit, il->append($$new($GOTO, nullptr)));
		$set(this, _loop, il->append($(methodGen->loadDOM())));
		il->append(loadLocal);
		local->setEnd(this->_loop);
		il->append($$new($GOTO, parent));
		$nc(exit)->setTarget($(il->append($Constants::NOP)));
		this->_left->backPatchFalseList(this->_loop);
		$nc(this->_trueList)->append(this->_left->_trueList);
	} else {
		il->append($Constants::POP2);
	}
	if ($instanceOf(AncestorPattern, this->_right)) {
		$var(AncestorPattern, ancestor, $cast(AncestorPattern, this->_right));
		$nc(this->_falseList)->backPatch($($nc(ancestor)->getLoopHandle()));
	}
	$nc(this->_trueList)->append($nc(this->_right)->_trueList);
	$nc(this->_falseList)->append(this->_right->_falseList);
}

$String* AncestorPattern::toString() {
	return $str({"AncestorPattern("_s, this->_left, ", "_s, this->_right, $$str(u')')});
}

AncestorPattern::AncestorPattern() {
}

$Class* AncestorPattern::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE | $FINAL, $field(AncestorPattern, _left)},
		{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;", nullptr, $PRIVATE | $FINAL, $field(AncestorPattern, _right)},
		{"_loop", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(AncestorPattern, _loop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.AncestorPattern",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AncestorPattern, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AncestorPattern);
	});
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