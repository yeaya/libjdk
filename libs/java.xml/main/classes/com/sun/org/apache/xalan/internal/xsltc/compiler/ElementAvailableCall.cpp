#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ElementAvailableCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/lang/ClassCastException.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FALSE
#undef NEED_LITERAL_ERR
#undef TRUE

using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _ElementAvailableCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(ElementAvailableCall, init$, void, $QName*, $List*)},
	{"evaluateAtCompileTime", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ElementAvailableCall, evaluateAtCompileTime, $Object*)},
	{"getResult", "()Z", nullptr, $PUBLIC, $method(ElementAvailableCall, getResult, bool)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ElementAvailableCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ElementAvailableCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ElementAvailableCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ElementAvailableCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	nullptr,
	_ElementAvailableCall_MethodInfo_
};

$Object* allocate$ElementAvailableCall($Class* clazz) {
	return $of($alloc(ElementAvailableCall));
}

void ElementAvailableCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
}

$Type* ElementAvailableCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($LiteralExpr, $(argument()))) {
		$init($Type);
		return $set(this, _type, $Type::Boolean);
	}
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NEED_LITERAL_ERR, $of("element-available"_s), static_cast<$SyntaxTreeNode*>(this)));
	$throwNew($TypeCheckError, err);
}

$Object* ElementAvailableCall::evaluateAtCompileTime() {
	$init($Boolean);
	return $of(getResult() ? $Boolean::TRUE : $Boolean::FALSE);
}

bool ElementAvailableCall::getResult() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($LiteralExpr, arg, $cast($LiteralExpr, argument()));
		$var($String, qname, $nc(arg)->getValue());
		int32_t index = $nc(qname)->indexOf((int32_t)u':');
		$var($String, localName, (index > 0) ? qname->substring(index + 1) : qname);
		return $nc($(getParser()))->elementSupported($(arg->getNamespace()), localName);
	} catch ($ClassCastException& e) {
		return false;
	}
	$shouldNotReachHere();
}

void ElementAvailableCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	bool result = getResult();
	$nc($($nc(methodGen)->getInstructionList()))->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, result)));
}

ElementAvailableCall::ElementAvailableCall() {
}

$Class* ElementAvailableCall::load$($String* name, bool initialize) {
	$loadClass(ElementAvailableCall, name, initialize, &_ElementAvailableCall_ClassInfo_, allocate$ElementAvailableCall);
	return class$;
}

$Class* ElementAvailableCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com