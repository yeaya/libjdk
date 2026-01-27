#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CopyOf.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef CHARACTERSW
#undef CHARACTERSW_SIG
#undef CPY1_SIG
#undef CPY2_SIG
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef OBJECT_SIG
#undef REQUIRED_ATTR_ERR
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
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

$FieldInfo _CopyOf_FieldInfo_[] = {
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(CopyOf, _select)},
	{}
};

$MethodInfo _CopyOf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CopyOf, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(CopyOf, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(CopyOf, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(CopyOf, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(CopyOf, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _CopyOf_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.CopyOf",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_CopyOf_FieldInfo_,
	_CopyOf_MethodInfo_
};

$Object* allocate$CopyOf($Class* clazz) {
	return $of($alloc(CopyOf));
}

void CopyOf::init$() {
	$Instruction::init$();
}

void CopyOf::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$Util::println("CopyOf"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$Util::println($$str({"select "_s, $($nc(this->_select)->toString())}));
}

void CopyOf::parseContents($Parser* parser) {
	$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, nullptr));
	if ($nc(this->_select)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "select"_s);
		return;
	}
}

$Type* CopyOf::typeCheck($SymbolTable* stable) {
	$var($Type, tselect, $nc(this->_select)->typeCheck(stable));
	if ($instanceOf($NodeType, tselect) || $instanceOf($NodeSetType, tselect) || $instanceOf($ReferenceType, tselect) || $instanceOf($ResultTreeType, tselect)) {
	} else {
		$init($Type);
		$set(this, _select, $new($CastExpr, this->_select, $Type::String));
	}
	$init($Type);
	return $Type::Void;
}

void CopyOf::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($Type, tselect, $nc(this->_select)->getType());
	$init($Constants);
	$var($String, CPY1_SIG, $str({"("_s, $Constants::NODE_ITERATOR_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	int32_t cpy1 = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "copy"_s, CPY1_SIG);
	$var($String, CPY2_SIG, $str({"("_s, $Constants::NODE_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
	int32_t cpy2 = cpg->addInterfaceMethodref($Constants::DOM_INTF, "copy"_s, CPY2_SIG);
	$var($String, getDoc_SIG, $str({"()"_s, $Constants::NODE_SIG}));
	int32_t getDoc = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getDocument"_s, getDoc_SIG);
	if ($instanceOf($NodeSetType, tselect)) {
		$nc(il)->append($(methodGen->loadDOM()));
		$nc(this->_select)->translate(classGen, methodGen);
		$nc(this->_select)->startIterator(classGen, methodGen);
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, cpy1, 3)));
	} else if ($instanceOf($NodeType, tselect)) {
		$nc(il)->append($(methodGen->loadDOM()));
		$nc(this->_select)->translate(classGen, methodGen);
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, cpy2, 3)));
	} else if ($instanceOf($ResultTreeType, tselect)) {
		$nc(this->_select)->translate(classGen, methodGen);
		$nc(il)->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, getDoc, 1)));
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, cpy2, 3)));
	} else if ($instanceOf($ReferenceType, tselect)) {
		$nc(this->_select)->translate(classGen, methodGen);
		$nc(il)->append($(methodGen->loadHandler()));
		il->append($(methodGen->loadCurrentNode()));
		il->append($(methodGen->loadDOM()));
		int32_t copy = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "copy"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::TRANSLET_OUTPUT_SIG, $Constants::NODE_SIG, $Constants::DOM_INTF_SIG, ")V"_s}));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, copy)));
	} else {
		$nc(il)->append($(classGen->loadTranslet()));
		$nc(this->_select)->translate(classGen, methodGen);
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, cpg->addMethodref($Constants::TRANSLET_CLASS, $Constants::CHARACTERSW, $Constants::CHARACTERSW_SIG))));
	}
}

CopyOf::CopyOf() {
}

$Class* CopyOf::load$($String* name, bool initialize) {
	$loadClass(CopyOf, name, initialize, &_CopyOf_ClassInfo_, allocate$CopyOf);
	return class$;
}

$Class* CopyOf::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com