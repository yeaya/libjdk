#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FATAL
#undef ICONST_0
#undef ICONST_1
#undef MAX_VALUE
#undef NOP
#undef NOT_IMPLEMENTED_ERR

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
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

$FieldInfo _Expression_FieldInfo_[] = {
	{"_type", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PROTECTED, $field(Expression, _type)},
	{"_trueList", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PROTECTED, $field(Expression, _trueList)},
	{"_falseList", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PROTECTED, $field(Expression, _falseList)},
	{}
};

$MethodInfo _Expression_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Expression, init$, void)},
	{"backPatchFalseList", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(Expression, backPatchFalseList, void, $InstructionHandle*)},
	{"backPatchTrueList", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(Expression, backPatchTrueList, void, $InstructionHandle*)},
	{"compile", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC | $FINAL, $method(Expression, compile, $InstructionList*, $ClassGenerator*, $MethodGenerator*)},
	{"desynthesize", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Expression, desynthesize, void, $ClassGenerator*, $MethodGenerator*)},
	{"evaluateAtCompileTime", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Expression, evaluateAtCompileTime, $Object*)},
	{"getFalseList", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(Expression, getFalseList, $FlowList*)},
	{"getTrueList", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(Expression, getTrueList, $FlowList*)},
	{"getType", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Expression, getType, $Type*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(Expression, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(Expression, hasPositionCall, bool)},
	{"lookupPrimop", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;", nullptr, $PUBLIC, $virtualMethod(Expression, lookupPrimop, $MethodType*, $SymbolTable*, $String*, $MethodType*)},
	{"startIterator", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Expression, startIterator, void, $ClassGenerator*, $MethodGenerator*)},
	{"synthesize", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Expression, synthesize, void, $ClassGenerator*, $MethodGenerator*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Expression, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Expression, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Expression, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Expression_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode",
	nullptr,
	_Expression_FieldInfo_,
	_Expression_MethodInfo_
};

$Object* allocate$Expression($Class* clazz) {
	return $of($alloc(Expression));
}

$String* Expression::toString() {
	 return this->$SyntaxTreeNode::toString();
}

void Expression::init$() {
	$SyntaxTreeNode::init$();
	$set(this, _trueList, $new($FlowList));
	$set(this, _falseList, $new($FlowList));
}

$Type* Expression::getType() {
	return this->_type;
}

bool Expression::hasPositionCall() {
	return false;
}

bool Expression::hasLastCall() {
	return false;
}

$Object* Expression::evaluateAtCompileTime() {
	return $of(nullptr);
}

$Type* Expression::typeCheck($SymbolTable* stable) {
	return typeCheckContents(stable);
}

void Expression::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::NOT_IMPLEMENTED_ERR, $of($of(this)->getClass()), static_cast<$SyntaxTreeNode*>(this)));
	$nc($(getParser()))->reportError($Constants::FATAL, msg);
}

$InstructionList* Expression::compile($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, result, nullptr);
	$var($InstructionList, save, $nc(methodGen)->getInstructionList());
	methodGen->setInstructionList($assign(result, $new($InstructionList)));
	translate(classGen, methodGen);
	methodGen->setInstructionList(save);
	return result;
}

void Expression::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	translate(classGen, methodGen);
	if ($instanceOf($BooleanType, this->_type)) {
		desynthesize(classGen, methodGen);
	}
}

void Expression::startIterator($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($NodeSetType, this->_type) == false) {
		return;
	}
	$var(Expression, expr, this);
	if ($instanceOf($CastExpr, expr)) {
		$assign(expr, $nc(($cast($CastExpr, expr)))->getExpr());
	}
	if ($instanceOf($VariableRefBase, expr) == false) {
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$nc(il)->append($(methodGen->loadContextNode()));
		il->append($(methodGen->setStartNode()));
	}
}

void Expression::synthesize($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(this->_trueList)->backPatch($($nc(il)->append($Constants::ICONST_1)));
	$var($BranchHandle, truec, $nc(il)->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr))));
	$nc(this->_falseList)->backPatch($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void Expression::desynthesize($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_falseList)->add($($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
}

$FlowList* Expression::getFalseList() {
	return this->_falseList;
}

$FlowList* Expression::getTrueList() {
	return this->_trueList;
}

void Expression::backPatchFalseList($InstructionHandle* ih) {
	$nc(this->_falseList)->backPatch(ih);
}

void Expression::backPatchTrueList($InstructionHandle* ih) {
	$nc(this->_trueList)->backPatch(ih);
}

$MethodType* Expression::lookupPrimop($SymbolTable* stable, $String* op, $MethodType* ctype) {
	$useLocalCurrentObjectStackCache();
	$var($MethodType, result, nullptr);
	$var($List, primop, $nc(stable)->lookupPrimop(op));
	if (primop != nullptr) {
		int32_t n = primop->size();
		int32_t minDistance = $Integer::MAX_VALUE;
		for (int32_t i = 0; i < n; ++i) {
			$var($MethodType, ptype, $cast($MethodType, primop->get(i)));
			int32_t var$0 = $nc(ptype)->argsCount();
			if (var$0 != $nc(ctype)->argsCount()) {
				continue;
			}
			if (result == nullptr) {
				$assign(result, ptype);
			}
			int32_t distance = $nc(ctype)->distanceTo(ptype);
			if (distance < minDistance) {
				minDistance = distance;
				$assign(result, ptype);
			}
		}
	}
	return result;
}

Expression::Expression() {
}

$Class* Expression::load$($String* name, bool initialize) {
	$loadClass(Expression, name, initialize, &_Expression_ClassInfo_, allocate$Expression);
	return class$;
}

$Class* Expression::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com