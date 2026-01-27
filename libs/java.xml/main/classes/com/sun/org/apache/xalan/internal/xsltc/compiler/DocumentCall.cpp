#include <com/sun/org/apache/xalan/internal/xsltc/compiler/DocumentCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOCUMENT_ARG_ERR
#undef DOM_FIELD
#undef DOM_INTF_SIG
#undef DUP
#undef ILLEGAL_ARG_ERR
#undef LOAD_DOCUMENT_CLASS
#undef NODE_ITERATOR_SIG
#undef OBJECT_SIG
#undef STRING_SIG
#undef TRANSLET_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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

$FieldInfo _DocumentCall_FieldInfo_[] = {
	{"_arg1", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(DocumentCall, _arg1)},
	{"_arg2", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(DocumentCall, _arg2)},
	{"_arg1Type", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(DocumentCall, _arg1Type)},
	{}
};

$MethodInfo _DocumentCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(DocumentCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(DocumentCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(DocumentCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _DocumentCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.DocumentCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_DocumentCall_FieldInfo_,
	_DocumentCall_MethodInfo_
};

$Object* allocate$DocumentCall($Class* clazz) {
	return $of($alloc(DocumentCall));
}

void DocumentCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _arg1, nullptr);
	$set(this, _arg2, nullptr);
}

$Type* DocumentCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	int32_t ac = argumentCount();
	if ((ac < 1) || (ac > 2)) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_ARG_ERR, static_cast<$SyntaxTreeNode*>(this)));
		$throwNew($TypeCheckError, msg);
	}
	if (getStylesheet() == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ILLEGAL_ARG_ERR, static_cast<$SyntaxTreeNode*>(this)));
		$throwNew($TypeCheckError, msg);
	}
	$set(this, _arg1, argument(0));
	if (this->_arg1 == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::DOCUMENT_ARG_ERR, static_cast<$SyntaxTreeNode*>(this)));
		$throwNew($TypeCheckError, msg);
	}
	$set(this, _arg1Type, $nc(this->_arg1)->typeCheck(stable));
	$init($Type);
	if ((this->_arg1Type != $Type::NodeSet) && (this->_arg1Type != $Type::String)) {
		$set(this, _arg1, $new($CastExpr, this->_arg1, $Type::String));
	}
	if (ac == 2) {
		$set(this, _arg2, argument(1));
		if (this->_arg2 == nullptr) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::DOCUMENT_ARG_ERR, static_cast<$SyntaxTreeNode*>(this)));
			$throwNew($TypeCheckError, msg);
		}
		$var($Type, arg2Type, $nc(this->_arg2)->typeCheck(stable));
		if ($nc(arg2Type)->identicalTo($Type::Node)) {
			$set(this, _arg2, $new($CastExpr, this->_arg2, $Type::NodeSet));
		} else {
			if (arg2Type->identicalTo($Type::NodeSet)) {
			} else {
				$init($ErrorMsg);
				$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::DOCUMENT_ARG_ERR, static_cast<$SyntaxTreeNode*>(this)));
				$throwNew($TypeCheckError, msg);
			}
		}
	}
	return $set(this, _type, $Type::NodeSet);
}

void DocumentCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t ac = argumentCount();
	$init($Constants);
	int32_t domField = $nc(cpg)->addFieldref($(classGen->getClassName()), $Constants::DOM_FIELD, $Constants::DOM_INTF_SIG);
	$var($String, docParamList, nullptr);
	if (ac == 1) {
		$assign(docParamList, $str({"("_s, $Constants::OBJECT_SIG, $Constants::STRING_SIG, $Constants::TRANSLET_SIG, $Constants::DOM_INTF_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG}));
	} else {
		$assign(docParamList, $str({"("_s, $Constants::OBJECT_SIG, $Constants::NODE_ITERATOR_SIG, $Constants::STRING_SIG, $Constants::TRANSLET_SIG, $Constants::DOM_INTF_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG}));
	}
	int32_t docIdx = cpg->addMethodref($Constants::LOAD_DOCUMENT_CLASS, "documentF"_s, docParamList);
	$nc(this->_arg1)->translate(classGen, methodGen);
	$init($Type);
	if (this->_arg1Type == $Type::NodeSet) {
		$nc(this->_arg1)->startIterator(classGen, methodGen);
	}
	if (ac == 2) {
		$nc(this->_arg2)->translate(classGen, methodGen);
		$nc(this->_arg2)->startIterator(classGen, methodGen);
	}
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc($(getStylesheet()))->getSystemId()))));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, domField)));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, docIdx)));
}

DocumentCall::DocumentCall() {
}

$Class* DocumentCall::load$($String* name, bool initialize) {
	$loadClass(DocumentCall, name, initialize, &_DocumentCall_ClassInfo_, allocate$DocumentCall);
	return class$;
}

$Class* DocumentCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com