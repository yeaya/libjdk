#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ProcessingInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef DUP
#undef ERROR
#undef ILLEGAL_PI_ERR
#undef INVALID_NCNAME_ERR
#undef REQUIRED_ATTR_ERR
#undef STRING_SIG
#undef STRING_VALUE_HANDLER
#undef STRING_VALUE_HANDLER_SIG
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_INTERFACE

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
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

$FieldInfo _ProcessingInstruction_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(ProcessingInstruction, _name)},
	{"_isLiteral", "Z", nullptr, $PRIVATE, $field(ProcessingInstruction, _isLiteral)},
	{}
};

$MethodInfo _ProcessingInstruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ProcessingInstruction, init$, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstruction, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ProcessingInstruction, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ProcessingInstruction, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ProcessingInstruction_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ProcessingInstruction",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_ProcessingInstruction_FieldInfo_,
	_ProcessingInstruction_MethodInfo_
};

$Object* allocate$ProcessingInstruction($Class* clazz) {
	return $of($alloc(ProcessingInstruction));
}

void ProcessingInstruction::init$() {
	$Instruction::init$();
	this->_isLiteral = false;
}

void ProcessingInstruction::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAttribute("name"_s));
	if ($nc(name)->length() > 0) {
		this->_isLiteral = $Util::isLiteral(name);
		if (this->_isLiteral) {
			if (!$XML11Char::isXML11ValidNCName(name)) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_NCNAME_ERR, $of(name), static_cast<$SyntaxTreeNode*>(this)));
				$nc(parser)->reportError($Constants::ERROR, err);
			}
		}
		$set(this, _name, $AttributeValue::create(this, name, parser));
	} else {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "name"_s);
	}
	if ($nc(name)->equals("xml"_s)) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::ILLEGAL_PI_ERR, "xml"_s);
	}
	parseChildren(parser);
}

$Type* ProcessingInstruction::typeCheck($SymbolTable* stable) {
	$nc(this->_name)->typeCheck(stable);
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void ProcessingInstruction::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (!this->_isLiteral) {
		$init($Constants);
		$var($LocalVariableGen, nameValue, methodGen->addLocalVariable2("nameValue"_s, $($Util::getJCRefType($Constants::STRING_SIG)), nullptr));
		$nc(this->_name)->translate(classGen, methodGen);
		$nc(nameValue)->setStart($($nc(il)->append(static_cast<$1Instruction*>($$new($ASTORE, nameValue->getIndex())))));
		$nc(il)->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())));
		int32_t check = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "checkNCName"_s, $$str({"("_s, $Constants::STRING_SIG, ")V"_s}));
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, check)));
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		nameValue->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, nameValue->getIndex())))));
	} else {
		$nc(il)->append($(methodGen->loadHandler()));
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		$nc(this->_name)->translate(classGen, methodGen);
	}
	$nc(il)->append($(classGen->loadTranslet()));
	$init($Constants);
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, "stringValueHandler"_s, $Constants::STRING_VALUE_HANDLER_SIG))));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append($(methodGen->storeHandler()));
	translateContents(classGen, methodGen);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::STRING_VALUE_HANDLER, "getValueOfPI"_s, $$str({"()"_s, $Constants::STRING_SIG})))));
	int32_t processingInstruction = $nc(cpg)->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "processingInstruction"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, ")V"_s}));
	il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, processingInstruction, 3)));
	il->append($(methodGen->storeHandler()));
}

ProcessingInstruction::ProcessingInstruction() {
}

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstruction, name, initialize, &_ProcessingInstruction_ClassInfo_, allocate$ProcessingInstruction);
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com