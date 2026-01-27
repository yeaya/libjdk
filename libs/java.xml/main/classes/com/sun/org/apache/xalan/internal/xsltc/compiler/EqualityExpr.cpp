#include <com/sun/org/apache/xalan/internal/xsltc/compiler/EqualityExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef DCMPG
#undef DOM_INTF_SIG
#undef EQ
#undef ICONST_0
#undef ICONST_1
#undef IXOR
#undef NE
#undef NOP
#undef OBJECT_SIG
#undef STRING_CLASS

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $NumberType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Operators = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Operators;
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

$FieldInfo _EqualityExpr_FieldInfo_[] = {
	{"_op", "I", nullptr, $PRIVATE | $FINAL, $field(EqualityExpr, _op)},
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(EqualityExpr, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(EqualityExpr, _right)},
	{}
};

$MethodInfo _EqualityExpr_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(EqualityExpr, init$, void, int32_t, $Expression*, $Expression*)},
	{"getLeft", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(EqualityExpr, getLeft, $Expression*)},
	{"getOp", "()Z", nullptr, $PUBLIC, $method(EqualityExpr, getOp, bool)},
	{"getRight", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(EqualityExpr, getRight, $Expression*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, hasPositionCall, bool)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, setParser, void, $Parser*)},
	{"swapArguments", "()V", nullptr, $PRIVATE, $method(EqualityExpr, swapArguments, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(EqualityExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _EqualityExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.EqualityExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_EqualityExpr_FieldInfo_,
	_EqualityExpr_MethodInfo_
};

$Object* allocate$EqualityExpr($Class* clazz) {
	return $of($alloc(EqualityExpr));
}

void EqualityExpr::init$(int32_t op, $Expression* left, $Expression* right) {
	$Expression::init$();
	this->_op = op;
	$nc(($set(this, _left, left)))->setParent(this);
	$nc(($set(this, _right, right)))->setParent(this);
}

void EqualityExpr::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

$String* EqualityExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Operators::getOpNames(this->_op)), $$str(u'('), this->_left, ", "_s, this->_right, $$str(u')')});
}

$Expression* EqualityExpr::getLeft() {
	return this->_left;
}

$Expression* EqualityExpr::getRight() {
	return this->_right;
}

bool EqualityExpr::getOp() {
	return (this->_op != $Operators::NE);
}

bool EqualityExpr::hasPositionCall() {
	if ($nc(this->_left)->hasPositionCall()) {
		return true;
	}
	if ($nc(this->_right)->hasPositionCall()) {
		return true;
	}
	return false;
}

bool EqualityExpr::hasLastCall() {
	if ($nc(this->_left)->hasLastCall()) {
		return true;
	}
	if ($nc(this->_right)->hasLastCall()) {
		return true;
	}
	return false;
}

void EqualityExpr::swapArguments() {
	$var($Expression, temp, this->_left);
	$set(this, _left, this->_right);
	$set(this, _right, temp);
}

$Type* EqualityExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->typeCheck(stable));
	$var($Type, tright, $nc(this->_right)->typeCheck(stable));
	bool var$0 = $nc(tleft)->isSimple();
	if (var$0 && $nc(tright)->isSimple()) {
		if (tleft != tright) {
			if ($instanceOf($BooleanType, tleft)) {
				$set(this, _right, $new($CastExpr, this->_right, $Type::Boolean));
			} else if ($instanceOf($BooleanType, tright)) {
				$set(this, _left, $new($CastExpr, this->_left, $Type::Boolean));
			} else if ($instanceOf($NumberType, tleft) || $instanceOf($NumberType, tright)) {
				$set(this, _left, $new($CastExpr, this->_left, $Type::Real));
				$set(this, _right, $new($CastExpr, this->_right, $Type::Real));
			} else {
				$set(this, _left, $new($CastExpr, this->_left, $Type::String));
				$set(this, _right, $new($CastExpr, this->_right, $Type::String));
			}
		}
	} else if ($instanceOf($ReferenceType, tleft)) {
		$set(this, _right, $new($CastExpr, this->_right, $Type::Reference));
	} else if ($instanceOf($ReferenceType, tright)) {
		$set(this, _left, $new($CastExpr, this->_left, $Type::Reference));
	} else {
		if ($instanceOf($NodeType, tleft) && tright == $Type::String) {
			$set(this, _left, $new($CastExpr, this->_left, $Type::String));
		} else {
			if (tleft == $Type::String && $instanceOf($NodeType, tright)) {
				$set(this, _right, $new($CastExpr, this->_right, $Type::String));
			} else if ($instanceOf($NodeType, tleft) && $instanceOf($NodeType, tright)) {
				$set(this, _left, $new($CastExpr, this->_left, $Type::String));
				$set(this, _right, $new($CastExpr, this->_right, $Type::String));
			} else if ($instanceOf($NodeType, tleft) && $instanceOf($NodeSetType, tright)) {
			} else if ($instanceOf($NodeSetType, tleft) && $instanceOf($NodeType, tright)) {
				swapArguments();
			} else {
				if ($instanceOf($NodeType, tleft)) {
					$set(this, _left, $new($CastExpr, this->_left, $Type::NodeSet));
				}
				if ($instanceOf($NodeType, tright)) {
					$set(this, _right, $new($CastExpr, this->_right, $Type::NodeSet));
				}
				if (tleft->isSimple() || $instanceOf($ResultTreeType, tleft) && $instanceOf($NodeSetType, tright)) {
					swapArguments();
				}
				if ($instanceOf($IntType, $($nc(this->_right)->getType()))) {
					$set(this, _right, $new($CastExpr, this->_right, $Type::Real));
				}
			}
		}
	}
	return $set(this, _type, $Type::Boolean);
}

void EqualityExpr::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->getType());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($instanceOf($BooleanType, tleft)) {
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		$nc(this->_falseList)->add($($nc(il)->append(this->_op == $Operators::EQ ? static_cast<$BranchInstruction*>($$new($IF_ICMPNE, nullptr)) : static_cast<$BranchInstruction*>($$new($IF_ICMPEQ, nullptr)))));
	} else if ($instanceOf($NumberType, tleft)) {
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		if ($instanceOf($RealType, tleft)) {
			$init($Constants);
			$nc(il)->append($Constants::DCMPG);
			$nc(this->_falseList)->add($(il->append(this->_op == $Operators::EQ ? static_cast<$BranchInstruction*>($$new($IFNE, nullptr)) : static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
		} else {
			$nc(this->_falseList)->add($($nc(il)->append(this->_op == $Operators::EQ ? static_cast<$BranchInstruction*>($$new($IF_ICMPNE, nullptr)) : static_cast<$BranchInstruction*>($$new($IF_ICMPEQ, nullptr)))));
		}
	} else {
		translate(classGen, methodGen);
		desynthesize(classGen, methodGen);
	}
}

void EqualityExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($Type, tleft, $nc(this->_left)->getType());
	$var($Type, tright, $nc(this->_right)->getType());
	if ($instanceOf($BooleanType, tleft) || $instanceOf($NumberType, tleft)) {
		translateDesynthesized(classGen, methodGen);
		synthesize(classGen, methodGen);
		return;
	}
	if ($instanceOf($StringType, tleft)) {
		$init($Constants);
		int32_t equals = $nc(cpg)->addMethodref($Constants::STRING_CLASS, "equals"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")Z"_s}));
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, equals)));
		if (this->_op == $Operators::NE) {
			il->append($Constants::ICONST_1);
			il->append(static_cast<$Instruction*>($Constants::IXOR));
		}
		return;
	}
	$var($BranchHandle, truec, nullptr);
	$var($BranchHandle, falsec, nullptr);
	if ($instanceOf($ResultTreeType, tleft)) {
		if ($instanceOf($BooleanType, tright)) {
			$nc(this->_right)->translate(classGen, methodGen);
			if (this->_op == $Operators::NE) {
				$init($Constants);
				$nc(il)->append($Constants::ICONST_1);
				il->append(static_cast<$Instruction*>($Constants::IXOR));
			}
			return;
		}
		if ($instanceOf($RealType, tright)) {
			$nc(this->_left)->translate(classGen, methodGen);
			$init($Type);
			$nc(tleft)->translateTo(classGen, methodGen, $Type::Real);
			$nc(this->_right)->translate(classGen, methodGen);
			$init($Constants);
			$nc(il)->append($Constants::DCMPG);
			$assign(falsec, il->append(this->_op == $Operators::EQ ? static_cast<$BranchInstruction*>($$new($IFNE, nullptr)) : static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))));
			il->append($Constants::ICONST_1);
			$assign(truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
			$nc(falsec)->setTarget($(il->append($Constants::ICONST_0)));
			$nc(truec)->setTarget($(il->append($Constants::NOP)));
			return;
		}
		$nc(this->_left)->translate(classGen, methodGen);
		$init($Type);
		$nc(tleft)->translateTo(classGen, methodGen, $Type::String);
		$nc(this->_right)->translate(classGen, methodGen);
		if ($instanceOf($ResultTreeType, tright)) {
			$nc(tright)->translateTo(classGen, methodGen, $Type::String);
		}
		$init($Constants);
		int32_t equals = $nc(cpg)->addMethodref($Constants::STRING_CLASS, "equals"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")Z"_s}));
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, equals)));
		if (this->_op == $Operators::NE) {
			il->append($Constants::ICONST_1);
			il->append(static_cast<$Instruction*>($Constants::IXOR));
		}
		return;
	}
	if ($instanceOf($NodeSetType, tleft) && $instanceOf($BooleanType, tright)) {
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_left)->startIterator(classGen, methodGen);
		$init($Type);
		$nc($Type::NodeSet)->translateTo(classGen, methodGen, $Type::Boolean);
		$nc(this->_right)->translate(classGen, methodGen);
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::IXOR));
		if (this->_op == $Operators::EQ) {
			il->append($Constants::ICONST_1);
			il->append(static_cast<$Instruction*>($Constants::IXOR));
		}
		return;
	}
	if ($instanceOf($NodeSetType, tleft) && $instanceOf($StringType, tright)) {
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_left)->startIterator(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_op)));
		il->append($(methodGen->loadDOM()));
		$init($Constants);
		$var($String, var$3, $$str({"("_s, $($nc(tleft)->toSignature())}));
		$var($String, var$2, $$concat(var$3, $($nc(tright)->toSignature())));
		$var($String, var$1, $$concat(var$2, "I"_s));
		$var($String, var$0, $$concat(var$1, $Constants::DOM_INTF_SIG));
		int32_t cmp = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "compare"_s, $$concat(var$0, ")Z"_s));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, cmp)));
		return;
	}
	$nc(this->_left)->translate(classGen, methodGen);
	$nc(this->_left)->startIterator(classGen, methodGen);
	$nc(this->_right)->translate(classGen, methodGen);
	$nc(this->_right)->startIterator(classGen, methodGen);
	if ($instanceOf($ResultTreeType, tright)) {
		$init($Type);
		$nc(tright)->translateTo(classGen, methodGen, $Type::String);
		$assign(tright, $Type::String);
	}
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_op)));
	il->append($(methodGen->loadDOM()));
	$init($Constants);
	$var($String, var$7, $$str({"("_s, $($nc(tleft)->toSignature())}));
	$var($String, var$6, $$concat(var$7, $($nc(tright)->toSignature())));
	$var($String, var$5, $$concat(var$6, "I"_s));
	$var($String, var$4, $$concat(var$5, $Constants::DOM_INTF_SIG));
	int32_t compare = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "compare"_s, $$concat(var$4, ")Z"_s));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, compare)));
}

EqualityExpr::EqualityExpr() {
}

$Class* EqualityExpr::load$($String* name, bool initialize) {
	$loadClass(EqualityExpr, name, initialize, &_EqualityExpr_ClassInfo_, allocate$EqualityExpr);
	return class$;
}

$Class* EqualityExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com