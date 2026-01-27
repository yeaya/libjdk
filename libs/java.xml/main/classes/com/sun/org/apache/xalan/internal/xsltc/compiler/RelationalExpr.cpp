#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelationalExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef DOM_INTF_SIG
#undef FATAL
#undef GE
#undef GT
#undef ILLEGAL_RELAT_OP_ERR
#undef LE
#undef LT

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
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
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Operators = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Operators;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _RelationalExpr_FieldInfo_[] = {
	{"_op", "I", nullptr, $PRIVATE, $field(RelationalExpr, _op)},
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(RelationalExpr, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(RelationalExpr, _right)},
	{}
};

$MethodInfo _RelationalExpr_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(RelationalExpr, init$, void, int32_t, $Expression*, $Expression*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, hasLastCall, bool)},
	{"hasNodeArgs", "()Z", nullptr, $PUBLIC, $method(RelationalExpr, hasNodeArgs, bool)},
	{"hasNodeSetArgs", "()Z", nullptr, $PUBLIC, $method(RelationalExpr, hasNodeSetArgs, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, hasPositionCall, bool)},
	{"hasReferenceArgs", "()Z", nullptr, $PUBLIC, $method(RelationalExpr, hasReferenceArgs, bool)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(RelationalExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _RelationalExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelationalExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_RelationalExpr_FieldInfo_,
	_RelationalExpr_MethodInfo_
};

$Object* allocate$RelationalExpr($Class* clazz) {
	return $of($alloc(RelationalExpr));
}

void RelationalExpr::init$(int32_t op, $Expression* left, $Expression* right) {
	$Expression::init$();
	this->_op = op;
	$nc(($set(this, _left, left)))->setParent(this);
	$nc(($set(this, _right, right)))->setParent(this);
}

void RelationalExpr::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

bool RelationalExpr::hasPositionCall() {
	if ($nc(this->_left)->hasPositionCall()) {
		return true;
	}
	if ($nc(this->_right)->hasPositionCall()) {
		return true;
	}
	return false;
}

bool RelationalExpr::hasLastCall() {
	bool var$0 = $nc(this->_left)->hasLastCall();
	return (var$0 || $nc(this->_right)->hasLastCall());
}

bool RelationalExpr::hasReferenceArgs() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $instanceOf($ReferenceType, $($nc(this->_left)->getType()));
	return var$0 || $instanceOf($ReferenceType, $($nc(this->_right)->getType()));
}

bool RelationalExpr::hasNodeArgs() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $instanceOf($NodeType, $($nc(this->_left)->getType()));
	return var$0 || $instanceOf($NodeType, $($nc(this->_right)->getType()));
}

bool RelationalExpr::hasNodeSetArgs() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $instanceOf($NodeSetType, $($nc(this->_left)->getType()));
	return var$0 || $instanceOf($NodeSetType, $($nc(this->_right)->getType()));
}

$Type* RelationalExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->typeCheck(stable));
	$var($Type, tright, $nc(this->_right)->typeCheck(stable));
	if ($instanceOf($ResultTreeType, tleft) && $instanceOf($ResultTreeType, tright)) {
		$init($Type);
		$set(this, _right, $new($CastExpr, this->_right, $Type::Real));
		$set(this, _left, $new($CastExpr, this->_left, $Type::Real));
		return $set(this, _type, $Type::Boolean);
	}
	if (hasReferenceArgs()) {
		$var($Type, type, nullptr);
		$var($Type, typeL, nullptr);
		$var($Type, typeR, nullptr);
		if ($instanceOf($ReferenceType, tleft)) {
			if ($instanceOf($VariableRefBase, this->_left)) {
				$var($VariableRefBase, ref, $cast($VariableRefBase, this->_left));
				$var($VariableBase, var, $nc(ref)->getVariable());
				$assign(typeL, $nc(var)->getType());
			}
		}
		if ($instanceOf($ReferenceType, tright)) {
			if ($instanceOf($VariableRefBase, this->_right)) {
				$var($VariableRefBase, ref, $cast($VariableRefBase, this->_right));
				$var($VariableBase, var, $nc(ref)->getVariable());
				$assign(typeR, $nc(var)->getType());
			}
		}
		if (typeL == nullptr) {
			$assign(type, typeR);
		} else if (typeR == nullptr) {
			$assign(type, typeL);
		} else {
			$init($Type);
			$assign(type, $Type::Real);
		}
		if (type == nullptr) {
			$init($Type);
			$assign(type, $Type::Real);
		}
		$set(this, _right, $new($CastExpr, this->_right, type));
		$set(this, _left, $new($CastExpr, this->_left, type));
		$init($Type);
		return $set(this, _type, $Type::Boolean);
	}
	if (hasNodeSetArgs()) {
		if ($instanceOf($NodeSetType, tright)) {
			$var($Expression, temp, this->_right);
			$set(this, _right, this->_left);
			$set(this, _left, temp);
			this->_op = (this->_op == $Operators::GT) ? $Operators::LT : (this->_op == $Operators::LT) ? $Operators::GT : (this->_op == $Operators::GE) ? $Operators::LE : $Operators::GE;
			$assign(tright, $nc(this->_right)->getType());
		}
		if ($instanceOf($NodeType, tright)) {
			$init($Type);
			$set(this, _right, $new($CastExpr, this->_right, $Type::NodeSet));
		}
		if ($instanceOf($IntType, tright)) {
			$init($Type);
			$set(this, _right, $new($CastExpr, this->_right, $Type::Real));
		}
		if ($instanceOf($ResultTreeType, tright)) {
			$init($Type);
			$set(this, _right, $new($CastExpr, this->_right, $Type::String));
		}
		$init($Type);
		return $set(this, _type, $Type::Boolean);
	}
	if (hasNodeArgs()) {
		if ($instanceOf($BooleanType, tleft)) {
			$init($Type);
			$set(this, _right, $new($CastExpr, this->_right, $Type::Boolean));
			$assign(tright, $Type::Boolean);
		}
		if ($instanceOf($BooleanType, tright)) {
			$init($Type);
			$set(this, _left, $new($CastExpr, this->_left, $Type::Boolean));
			$assign(tleft, $Type::Boolean);
		}
	}
	$var($SymbolTable, var$0, stable);
	$var($String, var$1, $Operators::getOpNames(this->_op));
	$init($Type);
	$var($MethodType, ptype, lookupPrimop(var$0, var$1, $$new($MethodType, $Type::Void, tleft, tright)));
	if (ptype != nullptr) {
		$var($Type, arg1, $cast($Type, $nc($(ptype->argsType()))->get(0)));
		if (!$nc(arg1)->identicalTo(tleft)) {
			$set(this, _left, $new($CastExpr, this->_left, arg1));
		}
		$var($Type, arg2, $cast($Type, $nc($(ptype->argsType()))->get(1)));
		if (!$nc(arg2)->identicalTo(tright)) {
			$set(this, _right, $new($CastExpr, this->_right, arg1));
		}
		return $set(this, _type, ptype->resultType());
	}
	$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
}

void RelationalExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = hasNodeSetArgs();
	if (var$0 || hasReferenceArgs()) {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_left)->startIterator(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		$nc(this->_right)->startIterator(classGen, methodGen);
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_op)));
		il->append($(methodGen->loadDOM()));
		$init($Constants);
		$var($String, var$4, $$str({"("_s, $($nc($($nc(this->_left)->getType()))->toSignature())}));
		$var($String, var$3, $$concat(var$4, $($nc($($nc(this->_right)->getType()))->toSignature())));
		$var($String, var$2, $$concat(var$3, "I"_s));
		$var($String, var$1, $$concat(var$2, $Constants::DOM_INTF_SIG));
		int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "compare"_s, $$concat(var$1, ")Z"_s));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
	} else {
		translateDesynthesized(classGen, methodGen);
		synthesize(classGen, methodGen);
	}
}

void RelationalExpr::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = hasNodeSetArgs();
	if (var$0 || hasReferenceArgs()) {
		translate(classGen, methodGen);
		desynthesize(classGen, methodGen);
	} else {
		$var($BranchInstruction, bi, nullptr);
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$nc(this->_left)->translate(classGen, methodGen);
		$nc(this->_right)->translate(classGen, methodGen);
		bool tozero = false;
		$var($Type, tleft, $nc(this->_left)->getType());
		if ($instanceOf($RealType, tleft)) {
			$nc(il)->append($($nc(tleft)->CMP(this->_op == $Operators::LT || this->_op == $Operators::LE)));
			$assign(tleft, $Type::Int);
			tozero = true;
		}
		{
			$var($ErrorMsg, msg, nullptr)
			switch (this->_op) {
			case $Operators::LT:
				{
					$assign(bi, $nc(tleft)->GE(tozero));
					break;
				}
			case $Operators::GT:
				{
					$assign(bi, $nc(tleft)->LE(tozero));
					break;
				}
			case $Operators::LE:
				{
					$assign(bi, $nc(tleft)->GT(tozero));
					break;
				}
			case $Operators::GE:
				{
					$assign(bi, $nc(tleft)->LT(tozero));
					break;
				}
			default:
				{
					$init($ErrorMsg);
					$assign(msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_RELAT_OP_ERR, static_cast<$SyntaxTreeNode*>(this)));
					$nc($(getParser()))->reportError($Constants::FATAL, msg);
				}
			}
		}
		$nc(this->_falseList)->add($($nc(il)->append(bi)));
	}
}

$String* RelationalExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Operators::getOpNames(this->_op)), $$str(u'('), this->_left, ", "_s, this->_right, $$str(u')')});
}

RelationalExpr::RelationalExpr() {
}

$Class* RelationalExpr::load$($String* name, bool initialize) {
	$loadClass(RelationalExpr, name, initialize, &_RelationalExpr_ClassInfo_, allocate$RelationalExpr);
	return class$;
}

$Class* RelationalExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com