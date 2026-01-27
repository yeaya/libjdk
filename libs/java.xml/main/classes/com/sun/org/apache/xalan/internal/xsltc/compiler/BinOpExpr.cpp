#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BinOpExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DIV
#undef ERROR
#undef ILLEGAL_BINARY_OP_ERR
#undef MINUS
#undef MOD
#undef PLUS
#undef TIMES

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
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

$FieldInfo _BinOpExpr_FieldInfo_[] = {
	{"PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BinOpExpr, PLUS)},
	{"MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BinOpExpr, MINUS)},
	{"TIMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BinOpExpr, TIMES)},
	{"DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BinOpExpr, DIV)},
	{"MOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BinOpExpr, MOD)},
	{"Ops", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BinOpExpr, Ops)},
	{"_op", "I", nullptr, $PRIVATE, $field(BinOpExpr, _op)},
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(BinOpExpr, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(BinOpExpr, _right)},
	{}
};

$MethodInfo _BinOpExpr_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(BinOpExpr, init$, void, int32_t, $Expression*, $Expression*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, hasPositionCall, bool)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(BinOpExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _BinOpExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.BinOpExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_BinOpExpr_FieldInfo_,
	_BinOpExpr_MethodInfo_
};

$Object* allocate$BinOpExpr($Class* clazz) {
	return $of($alloc(BinOpExpr));
}

$StringArray* BinOpExpr::Ops = nullptr;

void BinOpExpr::init$(int32_t op, $Expression* left, $Expression* right) {
	$Expression::init$();
	this->_op = op;
	$nc(($set(this, _left, left)))->setParent(this);
	$nc(($set(this, _right, right)))->setParent(this);
}

bool BinOpExpr::hasPositionCall() {
	if ($nc(this->_left)->hasPositionCall()) {
		return true;
	}
	if ($nc(this->_right)->hasPositionCall()) {
		return true;
	}
	return false;
}

bool BinOpExpr::hasLastCall() {
	bool var$0 = $nc(this->_left)->hasLastCall();
	return (var$0 || $nc(this->_right)->hasLastCall());
}

void BinOpExpr::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

$Type* BinOpExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->typeCheck(stable));
	$var($Type, tright, $nc(this->_right)->typeCheck(stable));
	$init($Type);
	$var($MethodType, ptype, lookupPrimop(stable, $nc(BinOpExpr::Ops)->get(this->_op), $$new($MethodType, $Type::Void, tleft, tright)));
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

void BinOpExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_left)->translate(classGen, methodGen);
	$nc(this->_right)->translate(classGen, methodGen);
	{
		$var($ErrorMsg, msg, nullptr)
		switch (this->_op) {
		case BinOpExpr::PLUS:
			{
				$nc(il)->append($($nc(this->_type)->ADD()));
				break;
			}
		case BinOpExpr::MINUS:
			{
				$nc(il)->append($($nc(this->_type)->SUB()));
				break;
			}
		case BinOpExpr::TIMES:
			{
				$nc(il)->append($($nc(this->_type)->MUL()));
				break;
			}
		case BinOpExpr::DIV:
			{
				$nc(il)->append($($nc(this->_type)->DIV()));
				break;
			}
		case BinOpExpr::MOD:
			{
				$nc(il)->append($($nc(this->_type)->REM()));
				break;
			}
		default:
			{
				$init($ErrorMsg);
				$assign(msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_BINARY_OP_ERR, static_cast<$SyntaxTreeNode*>(this)));
				$nc($(getParser()))->reportError($Constants::ERROR, msg);
			}
		}
	}
}

$String* BinOpExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$nc(BinOpExpr::Ops)->get(this->_op), $$str(u'('), this->_left, ", "_s, this->_right, $$str(u')')});
}

void clinit$BinOpExpr($Class* class$) {
	$assignStatic(BinOpExpr::Ops, $new($StringArray, {
		"+"_s,
		"-"_s,
		"*"_s,
		"/"_s,
		"%"_s
	}));
}

BinOpExpr::BinOpExpr() {
}

$Class* BinOpExpr::load$($String* name, bool initialize) {
	$loadClass(BinOpExpr, name, initialize, &_BinOpExpr_ClassInfo_, clinit$BinOpExpr, allocate$BinOpExpr);
	return class$;
}

$Class* BinOpExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com