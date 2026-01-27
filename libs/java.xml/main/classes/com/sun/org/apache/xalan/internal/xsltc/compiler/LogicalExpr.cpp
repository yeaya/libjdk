#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LogicalExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NotCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef AND
#undef FALSE
#undef NOP
#undef OR
#undef TRUE

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $NotCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NotCall;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Boolean = ::java::lang::Boolean;
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

$FieldInfo _LogicalExpr_FieldInfo_[] = {
	{"OR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LogicalExpr, OR)},
	{"AND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LogicalExpr, AND)},
	{"_op", "I", nullptr, $PRIVATE | $FINAL, $field(LogicalExpr, _op)},
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(LogicalExpr, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(LogicalExpr, _right)},
	{"Ops", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LogicalExpr, Ops)},
	{}
};

$MethodInfo _LogicalExpr_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(LogicalExpr, init$, void, int32_t, $Expression*, $Expression*)},
	{"evaluateAtCompileTime", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, evaluateAtCompileTime, $Object*)},
	{"getOp", "()I", nullptr, $PUBLIC, $method(LogicalExpr, getOp, int32_t)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, hasPositionCall, bool)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(LogicalExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _LogicalExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LogicalExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_LogicalExpr_FieldInfo_,
	_LogicalExpr_MethodInfo_
};

$Object* allocate$LogicalExpr($Class* clazz) {
	return $of($alloc(LogicalExpr));
}

$StringArray* LogicalExpr::Ops = nullptr;

void LogicalExpr::init$(int32_t op, $Expression* left, $Expression* right) {
	$Expression::init$();
	this->_op = op;
	$nc(($set(this, _left, left)))->setParent(this);
	$nc(($set(this, _right, right)))->setParent(this);
}

bool LogicalExpr::hasPositionCall() {
	bool var$0 = $nc(this->_left)->hasPositionCall();
	return (var$0 || $nc(this->_right)->hasPositionCall());
}

bool LogicalExpr::hasLastCall() {
	bool var$0 = $nc(this->_left)->hasLastCall();
	return (var$0 || $nc(this->_right)->hasLastCall());
}

$Object* LogicalExpr::evaluateAtCompileTime() {
	$useLocalCurrentObjectStackCache();
	$var($Object, leftb, $nc(this->_left)->evaluateAtCompileTime());
	$var($Object, rightb, $nc(this->_right)->evaluateAtCompileTime());
	if (leftb == nullptr || rightb == nullptr) {
		return $of(nullptr);
	}
	if (this->_op == LogicalExpr::AND) {
		$init($Boolean);
		return $of(($equals(leftb, $Boolean::TRUE) && $equals(rightb, $Boolean::TRUE)) ? $Boolean::TRUE : $Boolean::FALSE);
	} else {
		$init($Boolean);
		return $of(($equals(leftb, $Boolean::TRUE) || $equals(rightb, $Boolean::TRUE)) ? $Boolean::TRUE : $Boolean::FALSE);
	}
}

int32_t LogicalExpr::getOp() {
	return (this->_op);
}

void LogicalExpr::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

$String* LogicalExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$nc(LogicalExpr::Ops)->get(this->_op), $$str(u'('), this->_left, ", "_s, this->_right, $$str(u')')});
}

$Type* LogicalExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->typeCheck(stable));
	$var($Type, tright, $nc(this->_right)->typeCheck(stable));
	$init($Type);
	$var($MethodType, wantType, $new($MethodType, $Type::Void, tleft, tright));
	$var($MethodType, haveType, lookupPrimop(stable, $nc(LogicalExpr::Ops)->get(this->_op), wantType));
	if (haveType != nullptr) {
		$var($Type, arg1, $cast($Type, $nc($(haveType->argsType()))->get(0)));
		if (!$nc(arg1)->identicalTo(tleft)) {
			$set(this, _left, $new($CastExpr, this->_left, arg1));
		}
		$var($Type, arg2, $cast($Type, $nc($(haveType->argsType()))->get(1)));
		if (!$nc(arg2)->identicalTo(tright)) {
			$set(this, _right, $new($CastExpr, this->_right, arg1));
		}
		return $set(this, _type, haveType->resultType());
	}
	$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
}

void LogicalExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	translateDesynthesized(classGen, methodGen);
	synthesize(classGen, methodGen);
}

void LogicalExpr::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($SyntaxTreeNode, parent, getParent());
	if (this->_op == LogicalExpr::AND) {
		$nc(this->_left)->translateDesynthesized(classGen, methodGen);
		$init($Constants);
		$var($InstructionHandle, middle, $nc(il)->append($Constants::NOP));
		$nc(this->_right)->translateDesynthesized(classGen, methodGen);
		$var($InstructionHandle, after, il->append($Constants::NOP));
		$nc(this->_falseList)->append($($nc($nc(this->_right)->_falseList)->append($nc(this->_left)->_falseList)));
		if (($instanceOf(LogicalExpr, this->_left)) && ($nc(($cast(LogicalExpr, this->_left)))->getOp() == LogicalExpr::OR)) {
			$nc(this->_left)->backPatchTrueList(middle);
		} else if ($instanceOf($NotCall, this->_left)) {
			$nc(this->_left)->backPatchTrueList(middle);
		} else {
			$nc(this->_trueList)->append($nc(this->_left)->_trueList);
		}
		if (($instanceOf(LogicalExpr, this->_right)) && ($nc(($cast(LogicalExpr, this->_right)))->getOp() == LogicalExpr::OR)) {
			$nc(this->_right)->backPatchTrueList(after);
		} else if ($instanceOf($NotCall, this->_right)) {
			$nc(this->_right)->backPatchTrueList(after);
		} else {
			$nc(this->_trueList)->append($nc(this->_right)->_trueList);
		}
	} else {
		$nc(this->_left)->translateDesynthesized(classGen, methodGen);
		$var($InstructionHandle, ih, $nc(il)->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
		$nc(this->_right)->translateDesynthesized(classGen, methodGen);
		$nc($nc(this->_left)->_trueList)->backPatch(ih);
		$nc($nc(this->_left)->_falseList)->backPatch($($nc(ih)->getNext()));
		$nc(this->_falseList)->append($nc(this->_right)->_falseList);
		$nc($($nc(this->_trueList)->add(ih)))->append($nc(this->_right)->_trueList);
	}
}

void clinit$LogicalExpr($Class* class$) {
	$assignStatic(LogicalExpr::Ops, $new($StringArray, {
		"or"_s,
		"and"_s
	}));
}

LogicalExpr::LogicalExpr() {
}

$Class* LogicalExpr::load$($String* name, bool initialize) {
	$loadClass(LogicalExpr, name, initialize, &_LogicalExpr_ClassInfo_, clinit$LogicalExpr, allocate$LogicalExpr);
	return class$;
}

$Class* LogicalExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com