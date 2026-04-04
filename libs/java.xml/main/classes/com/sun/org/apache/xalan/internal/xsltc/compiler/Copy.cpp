#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Copy.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef DOM_INTF
#undef DUP
#undef ERROR
#undef INVALID_QNAME_ERR
#undef NODE_SIG
#undef NOP
#undef STRING_CLASS
#undef STRING_SIG
#undef TRANSLET_OUTPUT_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFNULL = ::com::sun::org::apache::bcel::internal::generic::IFNULL;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $UseAttributeSets = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UseAttributeSets;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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

void Copy::init$() {
	$Instruction::init$();
}

void Copy::parseContents($Parser* parser) {
	$useLocalObjectStack();
	$var($String, useSets, getAttribute("use-attribute-sets"_s));
	if ($nc(useSets)->length() > 0) {
		if (!$Util::isValidQNames(useSets)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, useSets, this));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		$set(this, _useSets, $new($UseAttributeSets, useSets, parser));
	}
	parseChildren(parser);
}

void Copy::display(int32_t indent) {
	this->indent(indent);
	$Util::println("Copy"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$Type* Copy::typeCheck($SymbolTable* stable) {
	if (this->_useSets != nullptr) {
		this->_useSets->typeCheck(stable);
	}
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void Copy::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$var($LocalVariableGen, name, methodGen->addLocalVariable2("name"_s, $($Util::getJCRefType($Constants::STRING_SIG)), nullptr));
	$var($LocalVariableGen, length, methodGen->addLocalVariable2("length"_s, $($Util::getJCRefType("I"_s)), nullptr));
	$nc(il)->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->loadHandler()));
	int32_t cpy = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "shallowCopy"_s, $$str({"("_s, $Constants::NODE_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")"_s, $Constants::STRING_SIG}));
	il->append($$new($INVOKEINTERFACE, cpy, 3));
	il->append($Constants::DUP);
	$nc(name)->setStart($(il->append($$new($ASTORE, $nc(name)->getIndex()))));
	$var($BranchHandle, ifBlock1, il->append($$new($IFNULL, nullptr)));
	il->append($$new($ALOAD, name->getIndex()));
	int32_t lengthMethod = cpg->addMethodref($Constants::STRING_CLASS, "length"_s, "()I"_s);
	il->append($$new($INVOKEVIRTUAL, lengthMethod));
	il->append($Constants::DUP);
	$nc(length)->setStart($(il->append($$new($ISTORE, $nc(length)->getIndex()))));
	$var($BranchHandle, ifBlock4, il->append($$new($IFEQ, nullptr)));
	if (this->_useSets != nullptr) {
		$var($SyntaxTreeNode, parent, getParent());
		if (($instanceOf($LiteralElement, parent)) || ($instanceOf($LiteralElement, parent))) {
			$nc(this->_useSets)->translate(classGen, methodGen);
		} else {
			il->append($$new($ILOAD, length->getIndex()));
			$var($BranchHandle, ifBlock2, il->append($$new($IFEQ, nullptr)));
			$nc(this->_useSets)->translate(classGen, methodGen);
			$nc(ifBlock2)->setTarget($(il->append($Constants::NOP)));
		}
	}
	$nc(ifBlock4)->setTarget($(il->append($Constants::NOP)));
	translateContents(classGen, methodGen);
	length->setEnd($(il->append($$new($ILOAD, length->getIndex()))));
	$var($BranchHandle, ifBlock3, il->append($$new($IFEQ, nullptr)));
	il->append($(methodGen->loadHandler()));
	name->setEnd($(il->append($$new($ALOAD, name->getIndex()))));
	il->append($(methodGen->endElement()));
	$var($InstructionHandle, end, il->append($Constants::NOP));
	$nc(ifBlock1)->setTarget(end);
	$nc(ifBlock3)->setTarget(end);
	methodGen->removeLocalVariable(name);
	methodGen->removeLocalVariable(length);
}

Copy::Copy() {
}

$Class* Copy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_useSets", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/UseAttributeSets;", nullptr, $PRIVATE, $field(Copy, _useSets)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Copy, init$, void)},
		{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Copy, display, void, int32_t)},
		{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Copy, parseContents, void, $Parser*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Copy, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Copy, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Copy",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Copy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Copy);
	});
	return class$;
}

$Class* Copy::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com