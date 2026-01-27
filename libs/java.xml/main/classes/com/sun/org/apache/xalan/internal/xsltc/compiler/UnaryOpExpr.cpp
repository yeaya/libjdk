#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnaryOpExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
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

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
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

$FieldInfo _UnaryOpExpr_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(UnaryOpExpr, _left)},
	{}
};

$MethodInfo _UnaryOpExpr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(UnaryOpExpr, init$, void, $Expression*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, hasPositionCall, bool)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(UnaryOpExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _UnaryOpExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.UnaryOpExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_UnaryOpExpr_FieldInfo_,
	_UnaryOpExpr_MethodInfo_
};

$Object* allocate$UnaryOpExpr($Class* clazz) {
	return $of($alloc(UnaryOpExpr));
}

void UnaryOpExpr::init$($Expression* left) {
	$Expression::init$();
	$nc(($set(this, _left, left)))->setParent(this);
}

bool UnaryOpExpr::hasPositionCall() {
	return ($nc(this->_left)->hasPositionCall());
}

bool UnaryOpExpr::hasLastCall() {
	return ($nc(this->_left)->hasLastCall());
}

void UnaryOpExpr::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_left)->setParser(parser);
}

$Type* UnaryOpExpr::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, tleft, $nc(this->_left)->typeCheck(stable));
	$init($Type);
	$var($MethodType, ptype, lookupPrimop(stable, "u-"_s, $$new($MethodType, $Type::Void, tleft)));
	if (ptype != nullptr) {
		$var($Type, arg1, $cast($Type, $nc($(ptype->argsType()))->get(0)));
		if (!$nc(arg1)->identicalTo(tleft)) {
			$set(this, _left, $new($CastExpr, this->_left, arg1));
		}
		return $set(this, _type, ptype->resultType());
	}
	$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
}

$String* UnaryOpExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"u-"_s, $$str(u'('), this->_left, $$str(u')')});
}

void UnaryOpExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_left)->translate(classGen, methodGen);
	$nc(il)->append($($nc(this->_type)->NEG()));
}

UnaryOpExpr::UnaryOpExpr() {
}

$Class* UnaryOpExpr::load$($String* name, bool initialize) {
	$loadClass(UnaryOpExpr, name, initialize, &_UnaryOpExpr_ClassInfo_, allocate$UnaryOpExpr);
	return class$;
}

$Class* UnaryOpExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com