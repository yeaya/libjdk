#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastCall.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DATA_CONVERSION_ERR
#undef ILLEGAL_ARG_ERR
#undef NEED_LITERAL_ERR

using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
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

void CastCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
}

$Type* CastCall::typeCheck($SymbolTable* stable) {
	$useLocalObjectStack();
	if (argumentCount() != 2) {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $$new($ErrorMsg, $ErrorMsg::ILLEGAL_ARG_ERR, $(getName()), this));
	}
	$var($Expression, exp, argument(0));
	if ($instanceOf($LiteralExpr, exp)) {
		$set(this, _className, $cast($LiteralExpr, exp)->getValue());
		$set(this, _type, $Type::newObjectType(this->_className));
	} else {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $$new($ErrorMsg, $ErrorMsg::NEED_LITERAL_ERR, $(getName()), this));
	}
	$set(this, _right, argument(1));
	$var($Type, tright, $nc(this->_right)->typeCheck(stable));
	$init($Type);
	if (tright != $Type::Reference && $instanceOf($ObjectType, tright) == false) {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $$new($ErrorMsg, $ErrorMsg::DATA_CONVERSION_ERR, tright, this->_type, this));
	}
	return this->_type;
}

void CastCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_right)->translate(classGen, methodGen);
	$nc(il)->append($$new($CHECKCAST, $nc(cpg)->addClass(this->_className)));
}

CastCall::CastCall() {
}

$Class* CastCall::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CastCall, _className)},
		{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(CastCall, _right)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(CastCall, init$, void, $QName*, $List*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(CastCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(CastCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.CastCall",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CastCall, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CastCall);
	});
	return class$;
}

$Class* CastCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com